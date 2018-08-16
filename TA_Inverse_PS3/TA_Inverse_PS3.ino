//include library
#include <PS3BT.h>
#include <usbhub.h>
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

//PS3BT init lib
#ifdef dobogusinclude
#include <spi4teensy3.h>
#endif
#include <SPI.h>

//definisi I2C LCD Backpack
#define I2C_ADDR       0x27
#define BACKLIGHT_PIN  3
#define BACKLIGHT_POL  POSITIVE
#define EN_PIN         2
#define RW_PIN         1
#define RS_PIN         0
#define D4_PIN         4
#define D5_PIN         5
#define D6_PIN         6
#define D7_PIN         7

//init for IK (Inverse Kinematics)
#define tibiaLength   87
#define femurLength   50
#define coxaLength    25

#define x             80
#define y             35
#define z             50

#define PI            3.1415926535897932384626433832795

//PS3BT instansiasi
USB Usb;
BTD Btd(&Usb);
PS3BT PS3(&Btd);

//LCD I2C instansiasi
LiquidCrystal_I2C lcd(I2C_ADDR, EN_PIN, RW_PIN, RS_PIN, D4_PIN, D5_PIN, D6_PIN, D7_PIN, BACKLIGHT_PIN, BACKLIGHT_POL);

struct Leg {
  //inisialisasi posisi servo kaki
  int pos[6][3] = {
    {1480,   1480,   1500}, //RR
    {1440,   1510,   1675}, //RM
    {1460,    785,   1670}, //RF
    {2120,   1460,   1290}, //LR
    {1520,   1520,   1500}, //LM
    {1650,   1520,   1170}  //LF
  };

  //inisialisasi pin kaki
  byte  pin[6][3] = {
    {1,   2,    3}, //RR
    {8,   9,   10}, //RM
    {13,  14,  15}, //RF
    {17,  18,  19}, //LR
    {24,  25,  26}, //LM
    {29,  30,  31}, //LF
  };
};

//inisialisasi struct sudut kaki
int Tangle = 0;
int Fangle = 0;
int Cangle = 0;

//inisialisasi variabel kaki
enum legEnum {
  rr, rm, rf, lr, lm, lf
};

Leg leg;

//SSC32 time
int t = 200;

//Gait Selection Variable
byte gaitSelect = 1;       //1 = tripod (default), 2 = wave, 3 = riple

void setup() {
  Wire.begin();
  Serial.begin(115200);

  lcd.begin(16, 2);
  lcd.home();
  lcd.print("Tugas Akhir");
  lcd.setCursor(0, 1);
  lcd.print("140810140036");

  delay(1000);

  pinMode(2 , OUTPUT);    // led on
  digitalWrite(2, HIGH);

  //PSBT init
  if (Usb.Init() == -1) {
    lcd.setCursor(0, 1);
    lcd.print("OSC did not start");
    while (1); //halt
  }
  sit();
}

void loop() {
  legIK(x, y, z);
  Usb.Task();
  if (PS3.PS3Connected || PS3.PS3NavigationConnected) {
    lcd.clear();
    lcd.home();

    awal();

    switch (gaitSelect) {
      case 1 :                                                    
//                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        lcd.print("Tripod Gait : on");tripodControl();                // Tripod Gait Mode : on
//      lcd.print("Wave Gait : on");waveControl();                  // Wave Gait Mode : on
      lcd.print("Ripple Gait : on");ripleControl();                 // Ripple Gait Mode : on
      break;
    }
  }
}

//delay
void del() {
  delay(t);
}

void tripodControl(){
  while(1){
    lcd.setCursor(0, 1);
    lcd.print("Servo Time : ");lcd.print(t);
    

    Usb.Task();
    if (PS3.getButtonClick(PS))
      standby();
    if (PS3.getButtonClick(R3))
      t += 20;
    if (PS3.getButtonClick(L3))
      t -= 20;
    if (PS3.getButtonClick(CROSS))
      t_maju();
    if (PS3.getButtonClick(TRIANGLE))
      t_mundur();
    if (PS3.getButtonClick(LEFT))
      t_kiri();
    if (PS3.getButtonClick(RIGHT))
      t_kanan();
    if (t < 60)
      t = 60;
  }
}

void waveControl(){
  while(1){
    lcd.setCursor(0, 1);
    lcd.print("Servo Time : ");lcd.print(t);

    Usb.Task();
    if (PS3.getButtonClick(PS))
      standby();
    if (PS3.getButtonClick(R3))
      t += 20;
    if (PS3.getButtonClick(L3))
      t -= 20;
    if (PS3.getButtonClick(CROSS))
      w_maju();
    if (PS3.getButtonClick(TRIANGLE))
      w_mundur();
    if (PS3.getButtonClick(LEFT))
      w_kiri();
    if (PS3.getButtonClick(RIGHT))
      w_kanan();
    if (t < 60)
      t = 60;
  }
}

void ripleControl(){
  while(1){
    lcd.setCursor(0, 1);
    lcd.print("Servo Time : ");lcd.print(t);

    Usb.Task();
    if (PS3.getButtonClick(PS))
      standby();
    if (PS3.getButtonClick(R3))
      t += 20;
    if (PS3.getButtonClick(L3))
      t -= 20;
    if (PS3.getButtonClick(CROSS))
      r_maju();
    if (PS3.getButtonClick(TRIANGLE))
      r_mundur();
    if (PS3.getButtonClick(LEFT))
      r_kiri();
    if (PS3.getButtonClick(RIGHT))
      r_kanan();
    if (t < 60)
      t = 60;
  }
}


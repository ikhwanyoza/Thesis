//void to command ssc32move the servo
void gerak(int servo, int position, int time) {
   Serial.print("#");
   Serial.print(servo);
   Serial.print(" P");
   Serial.print(position);
   Serial.print(" T");
   Serial.println(time);
}

//void to move undefined leg
void legMove(int pin, int pos, int dur){
  gerak(pin, pos, dur);
}

//void to move Right Rear leg
void RR_move(int TA, int FA, int CA){
  gerak(leg.pin[0][0], leg.pos[0][0] + TA, t);
  gerak(leg.pin[0][1], leg.pos[0][1] + FA, t);
  gerak(leg.pin[0][2], leg.pos[0][2] - CA, t);
  legPos_update(0, TA,FA,-CA);
}

//void to move Right Middle leg
void RM_move(int TA, int FA, int CA){
  gerak(leg.pin[1][0], leg.pos[1][0] + TA, t);
  gerak(leg.pin[1][1], leg.pos[1][1] + FA, t);
  gerak(leg.pin[1][2], leg.pos[1][2] - CA, t);
  legPos_update(1, TA,FA,-CA);
}

//void to move Right Forward leg
void RF_move(int TA, int FA, int CA){
  gerak(leg.pin[2][0], leg.pos[2][0] + TA, t);
  gerak(leg.pin[2][1], leg.pos[2][1] + FA, t);
  gerak(leg.pin[2][2], leg.pos[2][2] - CA, t);
  legPos_update(2, TA,FA,-CA);
}

//void to move Left Rear leg
void LR_move(int TA, int FA, int CA){
  gerak(leg.pin[3][0], leg.pos[3][0] - TA, t);
  gerak(leg.pin[3][1], leg.pos[3][1] - FA, t);
  gerak(leg.pin[3][2], leg.pos[3][2] + CA, t);
  legPos_update(3, -TA,-FA,CA);
}

//void to move Left Middle leg
void LM_move(int TA, int FA, int CA){
  gerak(leg.pin[4][0], leg.pos[4][0] - TA, t);
  gerak(leg.pin[4][1], leg.pos[4][1] - FA, t);
  gerak(leg.pin[4][2], leg.pos[4][2] + CA, t);
  legPos_update(4, -TA,-FA,CA);
}

//void to move Left Forward leg
void LF_move(int TA, int FA, int CA){
  gerak(leg.pin[5][0], leg.pos[5][0] - TA, t);
  gerak(leg.pin[5][1], leg.pos[5][1] - FA, t);
  gerak(leg.pin[5][2], leg.pos[5][2] + CA, t);
  legPos_update(5, -TA,-FA,CA);
}

//void to update ssc32 servo position
void legPos_update(int index, int TA, int FA, int CA){
    leg.pos[index][0] += TA;
    leg.pos[index][1] += FA;
    leg.pos[index][2] += CA;
}

//void to move all servo to start position
void awal(){
  int t = -600; int f = -600; int c = 0;   
  
  LR_move(t,f,c);
  LM_move(t,f,c);
  LF_move(t,f,c);
  RR_move(t,f,c);
  RM_move(t,f,c);
  RF_move(t,f,c);   
  del();
}

void sit(){
  int t = 600; int f = 600; int c = 0;   
  
  LR_move(t,f,c);
  LM_move(t,f,c);
  LF_move(t,f,c);
  RR_move(t,f,c);
  RM_move(t,f,c);
  RF_move(t,f,c);   
  del();
}

void standby(){
  sit();
  lcd.home(); 
  lcd.print("Tugas Akhir");
  lcd.setCursor(0, 1);
  lcd.print("140810140036");
  PS3.disconnect();
}


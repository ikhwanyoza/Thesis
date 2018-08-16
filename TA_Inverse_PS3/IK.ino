//void to get tibia coxa and femur degree (Inverse Kinematics)
void legIK(int PosX, int PosY, int PosZ) {
  //Length between the coxa and feet
  float LL = sqrt(sq(PosZ) + sq(PosX));

  //Length between shoulder and wrist
  float HF = sqrt(sq(LL - coxaLength) + sq(PosY));

  //Angle of the line SW with respect to the ground in radians
  float IKA1 = atan2(LL - coxaLength, PosY);

  //Angle of the line SW with respect to the femur in radians
  float IKA2 = acos((pow(femurLength, 2) + pow(HF, 2) - pow(tibiaLength, 2)) / (2 * femurLength * HF));
  
  Tangle = int(90 - (acos((pow(tibiaLength, 2) + pow(femurLength, 2) - pow(HF, 2)) / (2 * femurLength * tibiaLength))/ PI * 180)) *10;
  Fangle = int(((IKA1 + IKA2) / PI * 180) - 90) * 10;
  Cangle = int(atan2(PosZ, PosX) / PI * 180) * 10;
}

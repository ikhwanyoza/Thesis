                  //---------------------//
                  // 12 Step Riple Gaits  //
                  //---------------------//
                  
void r_jalanditempat(){
  int t = Tangle; int f = Fangle; int c = 0;   
  
  LR_move(t,f,c);
  del();
  
  LR_move(-t,-f,c); RM_move(t,f,c);
  del();
  
  RM_move(-t,-f,c); LF_move(t,f,c);
  del();
  
  LF_move(-t,-f,c); RR_move(t,f,c);
  del();
  
  RR_move(-t,-f,c); LM_move(t,f,c);
  del();
  
  LM_move(-t,-f,c); RF_move(t,f,c);
  del();
  
  RF_move(-t,-f,c);
}

void r_maju(){
  int t = Tangle; int f = Fangle; int c = Cangle; int p = c/5;
  
  LR_move(t,f,c);         
  del();                  //1 Step
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  RR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //2

  LR_move(-t,-f,0); RM_move(t,f,c);         
  del();                  //3
  
  LR_move(0,0,-p);  LM_move(0,0,-p); LF_move(0,0,-p);  RR_move(0,0,-p);   RF_move(0,0,-p);
  del();                  //4

  RM_move(-t,-f,0); LF_move(t,f,c);         
  del();                  //5
  
  LR_move(0,0,-p);  LM_move(0,0,-p);  RR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //6

  LF_move(-t,-f,0); RR_move(t,f,c);         
  del();                  //7
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  LR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //8

  RR_move(-t,-f,0); LM_move(t,f,c);         
  del();                  //9
  
  LF_move(0,0,-p);  LR_move(0,0,-p);  RR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //10

  LM_move(-t,-f,0); RF_move(t,f,c);         
  del();                  //11
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  LR_move(0,0,-p);  RR_move(0,0,-p);  RM_move(0,0,-p);
  del();                  //12 Step Riple Gait

  RF_move(-t,-f,0);
}

void r_mundur(){
  int t = Tangle; int f = Fangle; int c = Cangle; int p = c/5;
  
  LR_move(t,f,-c);         
  del();                  //1 Step
  
  LM_move(0,0,p);  LF_move(0,0,p);  RR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //2

  LR_move(-t,-f,0); RM_move(t,f,-c);         
  del();                  //3
  
  LR_move(0,0,p);  LM_move(0,0,p);  LF_move(0,0,p);  RR_move(0,0,p);  RF_move(0,0,p);
  del();                  //4

  RM_move(-t,-f,0); LF_move(t,f,-c);         
  del();                  //5
  
  LR_move(0,0,p);  LM_move(0,0,p);  RR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //6

  LF_move(-t,-f,0); RR_move(t,f,-c);         
  del();                  //7
  
  LM_move(0,0,p);  LF_move(0,0,p);  LR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //8

  RR_move(-t,-f,0); LM_move(t,f,-c);         
  del();                  //9
  
  LF_move(0,0,p);  LR_move(0,0,p);  RR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //10

  LM_move(-t,-f,0); RF_move(t,f,-c);         
  del();                  //11
  
  LM_move(0,0,p);  LF_move(0,0,p);  LR_move(0,0,p);  RR_move(0,0,p);  RM_move(0,0,p);
  del();                  //12 Step Riple Gait

  RF_move(-t,-f,0);
}

void r_kanan(){
  int t = Tangle; int f = Fangle; int c = Cangle; int p = c/5;
  
  LR_move(t,f,c);         
  del();                  //1 Step
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  RR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //2

  LR_move(-t,-f,0); RM_move(t,f,-c);         
  del();                  //3
  
  LR_move(0,0,-p);  LM_move(0,0,-p);  LF_move(0,0,-p);  RR_move(0,0,p);  RF_move(0,0,p);
  del();                  //4

  RM_move(-t,-f,0); LF_move(t,f,c);         
  del();                  //5
  
  LR_move(0,0,-p);  LM_move(0,0,-p);  RR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //6

  LF_move(-t,-f,0); RR_move(t,f,-c);         
  del();                  //7
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  LR_move(0,0,-p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //8

  RR_move(-t,-f,0); LM_move(t,f,c);         
  del();                  //9
  
  LF_move(0,0,-p);  LR_move(0,0,-p);  RR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //10

  LM_move(-t,-f,0); RF_move(t,f,-c);         
  del();                  //11
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  LR_move(0,0,-p);  RR_move(0,0,p);  RM_move(0,0,p);
  del();                  //12 Step Riple Gait

  RF_move(-t,-f,0);
}

void r_kiri(){
  int t = Tangle; int f = Fangle; int c = Cangle; int p = c/5;
  
  LR_move(t,f,-c);         
  del();                  //1 Step
  
  LM_move(0,0,p);  LF_move(0,0,p);  RR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //2

  LR_move(-t,-f,0); RM_move(t,f,c);         
  del();                  //3
  
  LR_move(0,0,p);  LM_move(0,0,p);  LF_move(0,0,p);  RR_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //4

  RM_move(-t,-f,0); LF_move(t,f,-c);         
  del();                  //5
  
  LR_move(0,0,p);  LM_move(0,0,p);  RR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //6

  LF_move(-t,-f,0); RR_move(t,f,c);         
  del();                  //7
  
  LM_move(0,0,p);  LF_move(0,0,p);  LR_move(0,0,p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //8

  RR_move(-t,-f,0); LM_move(t,f,-c);         
  del();                  //9
  
  LF_move(0,0,p);  LR_move(0,0,p);  RR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //10

  LM_move(-t,-f,0); RF_move(t,f,c);         
  del();                  //11
  
  LM_move(0,0,p);  LF_move(0,0,p);  LR_move(0,0,p);  RR_move(0,0,-p);  RM_move(0,0,-p);
  del();                  //12 Step Riple Gait

  RF_move(-t,-f,0);
}

                  //---------------------//
                  // 6 Step Tripod Gaits //
                  //---------------------//

void t_jalanditempat(){
  int t = Tangle; int f = Fangle; int c = 0;   
  
  RR_move(t,f,c);     LM_move(t,f,c);     RF_move(t,f,c);       //1 Step
  del();

  RR_move(-t,-f,c);   LM_move(-t,-f,c);   RF_move(-t,-f,c);     //2
  del();

  LR_move(t,f,c);     RM_move(t,f,c);     LF_move(t,f,c);       //3
  del();

  LR_move(-t,-f,c);   RM_move(-t,-f,c);   LF_move(-t,-f,c);     //4
  del();  
}

void t_maju(){
  int t = Tangle; int f = Fangle; int c = Cangle;   
  
  RR_move(t,f,c);     LM_move(t,f,c);     RF_move(t,f,c);       //1 Step
  del();

  LR_move(0,0,-c);    RM_move(0,0,-c);    LF_move(0,0,-c);      //2
  del();

  RR_move(-t,-f,0);   LM_move(-t,-f,0);   RF_move(-t,-f,0);     //3
  del();

  LR_move(t,f,c);     RM_move(t,f,c);     LF_move(t,f,c);       //4
  del();

  RR_move(0,0,-c);    LM_move(0,0,-c);    RF_move(0,0,-c);      //5
  del();

  LR_move(-t,-f,0);   RM_move(-t,-f,0);   LF_move(-t,-f,0);     //6 Step Tripod Gaits
  del();  
}

void t_mundur(){
  int t = Tangle; int f = Fangle; int c = Cangle;   
  
  RR_move(t,f,-c);    LM_move(t,f,-c);    RF_move(t,f,-c);
  del();

  LR_move(0,0,c);     RM_move(0,0,c);     LF_move(0,0,c);
  del();

  RR_move(-t,-f,0);   LM_move(-t,-f,0);   RF_move(-t,-f,0);
  del();

  LR_move(t,f,-c);    RM_move(t,f,-c);    LF_move(t,f,-c);
  del();

  RR_move(0,0,c);     LM_move(0,0,c);     RF_move(0,0,c);
  del();

  LR_move(-t,-f,0);   RM_move(-t,-f,0);   LF_move(-t,-f,0);
  del();  
}

void t_kanan(){
  int t = Tangle; int f = Fangle; int c = Cangle;   
  
  RR_move(t,f,-c);    LM_move(t,f,c);     RF_move(t,f,-c);      //1 Step
  del();

  LR_move(0,0,-c);    RM_move(0,0,c);     LF_move(0,0,-c);      //2
  del();

  RR_move(-t,-f,0);   LM_move(-t,-f,0);   RF_move(-t,-f,0);     //3
  del();

  LR_move(t,f,c);     RM_move(t,f,-c);    LF_move(t,f,c);       //4
  del();

  RR_move(0,0,c);     LM_move(0,0,-c);    RF_move(0,0,c);       //5
  del();

  LR_move(-t,-f,0);   RM_move(-t,-f,0);   LF_move(-t,-f,0);     //6 Step Tripod Gaits
  del();  
}

void t_kiri(){
  int t = Tangle; int f = Fangle; int c = Cangle;   
  
  RR_move(t,f,c);     LM_move(t,f,-c);    RF_move(t,f,c);       //1 Step
  del();

  LR_move(0,0,c);     RM_move(0,0,-c);    LF_move(0,0,c);       //2
  del();

  RR_move(-t,-f,0);   LM_move(-t,-f,0);   RF_move(-t,-f,0);     //3
  del();

  LR_move(t,f,-c);    RM_move(t,f,c);     LF_move(t,f,-c);      //4
  del();

  RR_move(0,0,-c);    LM_move(0,0,c);     RF_move(0,0,-c);      //5
  del();

  LR_move(-t,-f,0);   RM_move(-t,-f,0);   LF_move(-t,-f,0);     //6 Step Tripod Gaits
  del();  
}

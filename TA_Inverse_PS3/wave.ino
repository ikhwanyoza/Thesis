                  //---------------------//
                  // 18 Step Wave Gaits  //
                  //---------------------//
                  
void w_jalanditempat(){
  int t = Tangle; int f = Fangle; int c = 0;   
  
  LR_move(t,f,c);   del();
  LR_move(-t,-f,c); del();
  
  LM_move(t,f,c);   del();
  LM_move(-t,-f,c); del();

  LF_move(t,f,c);   del();
  LF_move(-t,-f,c); del();

  RR_move(t,f,c);   del();
  RR_move(-t,-f,c); del();

  RM_move(t,f,c);   del();
  RM_move(-t,-f,c); del();

  RF_move(t,f,c);   del();
  RF_move(-t,-f,c); del();
}

void w_maju(){
  int t = Tangle; int f = Fangle; int c = Cangle; int p = c/5;
  
  LR_move(t,f,c);         
  del();                  //1 Step
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  RR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //2

  LR_move(-t,-f,0);       
  del();                  //3
  
  LM_move(t,f,c);         
  del();                  //4
  
  LR_move(0,0,-p);  LF_move(0,0,-p);  RR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //5

  LM_move(-t,-f,0);       
  del();                  //6

  LF_move(t,f,c);         
  del();                  //7
  
  LR_move(0,0,-p);  LM_move(0,0,-p);  RR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //8

  LF_move(-t,-f,0);       
  del();                  //9

  RR_move(t,f,c);         
  del();                  //10
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  LR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //11

  RR_move(-t,-f,0);       
  del();                  //12

  RM_move(t,f,c);         
  del();                  //13
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  LR_move(0,0,-p);  RR_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //14

  RM_move(-t,-f,0);       
  del();                  //15

  RF_move(t,f,c);         
  del();                  //16
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  LR_move(0,0,-p);  RR_move(0,0,-p);  RM_move(0,0,-p);
  del();                  //17

  RF_move(-t,-f,0);       
  del();                  //18 Step Wave Gait
}

void w_mundur(){
  int t = Tangle; int f = Fangle; int c = Cangle; int p = c/5;
  
  LR_move(t,f,-c);         
  del();                  //1
  
  LM_move(0,0,p);  LF_move(0,0,p);  RR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //2

  LR_move(-t,-f,0);       
  del();                  //3
  
  LM_move(t,f,-c);         
  del();                  //4
  
  LR_move(0,0,p);  LF_move(0,0,p);  RR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //5

  LM_move(-t,-f,0);       
  del();                  //6

  LF_move(t,f,-c);         
  del();                  //7
  
  LR_move(0,0,p);  LM_move(0,0,p);  RR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //8

  LF_move(-t,-f,0);       
  del();                  //9

  RR_move(t,f,-c);         
  del();                  //10
  
  LM_move(0,0,p);  LF_move(0,0,p);  LR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //11

  RR_move(-t,-f,0);       
  del();                  //12

  RM_move(t,f,-c);         
  del();                  //13
  
  LM_move(0,0,p);  LF_move(0,0,p);  LR_move(0,0,p);  RR_move(0,0,p);  RF_move(0,0,p);
  del();                  //14

  RM_move(-t,-f,0);       
  del();                  //15

  RF_move(t,f,-c);         
  del();                  //16
  
  LM_move(0,0,p);  LF_move(0,0,p);  LR_move(0,0,p);  RR_move(0,0,p);  RM_move(0,0,p);
  del();                  //17

  RF_move(-t,-f,0);       
  del();                  //18
}

void w_kanan(){
  int t = Tangle; int f = Fangle; int c = Cangle; int p = c/5;
  
  LR_move(t,f,c);         
  del();                  //1
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  RR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //2

  LR_move(-t,-f,0);       
  del();                  //3
  
  LM_move(t,f,c);         
  del();                  //4
  
  LR_move(0,0,-p);  LF_move(0,0,-p);  RR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //5

  LM_move(-t,-f,0);       
  del();                  //6

  LF_move(t,f,c);         
  del();                  //7
  
  LR_move(0,0,-p);  LM_move(0,0,-p);  RR_move(0,0,p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //8

  LF_move(-t,-f,0);       
  del();                  //9

  RR_move(t,f,-c);         
  del();                  //10
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  LR_move(0,0,-p);  RM_move(0,0,p);  RF_move(0,0,p);
  del();                  //11

  RR_move(-t,-f,0);       
  del();                  //12

  RM_move(t,f,-c);         
  del();                  //13
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  LR_move(0,0,-p);  RR_move(0,0,p);  RF_move(0,0,p);
  del();                  //14

  RM_move(-t,-f,0);       
  del();                  //15

  RF_move(t,f,-c);         
  del();                  //16
  
  LM_move(0,0,-p);  LF_move(0,0,-p);  LR_move(0,0,-p);  RR_move(0,0,p);  RM_move(0,0,p);
  del();                  //17

  RF_move(-t,-f,0);       
  del();                  //18
}

void w_kiri(){
  int t = Tangle; int f = Fangle; int c = Cangle; int p = c/5;
  
  LR_move(t,f,-c);         
  del();                  //1
  
  LM_move(0,0,p);  LF_move(0,0,p);  RR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //2

  LR_move(-t,-f,0);       
  del();                  //3
  
  LM_move(t,f,-c);         
  del();                  //4
  
  LR_move(0,0,p);  LF_move(0,0,p);  RR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //5

  LM_move(-t,-f,0);       
  del();                  //6

  LF_move(t,f,-c);         
  del();                  //7
  
  LR_move(0,0,p);  LM_move(0,0,p);  RR_move(0,0,-p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //8

  LF_move(-t,-f,0);       
  del();                  //9

  RR_move(t,f,c);         
  del();                  //10
  
  LM_move(0,0,p);  LF_move(0,0,p);  LR_move(0,0,p);  RM_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //11

  RR_move(-t,-f,0);       
  del();                  //12

  RM_move(t,f,c);         
  del();                  //13
  
  LM_move(0,0,p);  LF_move(0,0,p);  LR_move(0,0,p);  RR_move(0,0,-p);  RF_move(0,0,-p);
  del();                  //14

  RM_move(-t,-f,0);       
  del();                  //15

  RF_move(t,f,c);         
  del();                  //16
  
  LM_move(0,0,p);  LF_move(0,0,p);  LR_move(0,0,p);  RR_move(0,0,-p);  RM_move(0,0,-p);
  del();                  //17

  RF_move(-t,-f,0);       
  del();                  //18
}

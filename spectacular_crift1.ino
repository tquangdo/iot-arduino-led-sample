// C++ code
// Tran Quang Do
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
  //~~~~ 1) khi khởi động sáng all
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
  delay(3000);
}

void loop()
{
  //~~~~ 2) tắt từ 1 đến 7
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,LOW);
    delay(500);//dừng 0.5 giây rồi tắt đèn tiếp theo
  }
  delay(3000);
  //~~~~ 3) Sáng từ 7 đến 1
  for(int i=8;i>1;i--)
  {
    digitalWrite(i,HIGH);
    delay(500);
  }
  delay(3000);
  //~~~~ 4) Chẵn sáng lẻ tắt: lặp lại 5 lần
  int lanlap=1;
  while(lanlap<6){
    for(int i=2;i<9;i++){
      if((i-1)%2!=0){digitalWrite(i,LOW);}
      if((i-1)%2==0){digitalWrite(i,HIGH);}
      
    }
    delay(500);
    lanlap++;
    for(int i=2;i<9;i++){
      if((i-1)%2!=0){digitalWrite(i,HIGH);}
      if((i-1)%2==0){digitalWrite(i,LOW);}
      
    }
    delay(500);
  }
  delay(3000);
  //~~~~ 5) sáng all
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
  delay(500);
}

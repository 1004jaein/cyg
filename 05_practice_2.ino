void setup() {
   pinMode(7, OUTPUT);
   //1sec On
   digitalWrite(7, HIGH);
   delay(1000);
}

void loop() {
  for(int i = 1; i <=5; i++){
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    delay(100);
  
  }

  while(1){
    //led off
    digitalWrite(7, LOW);
  }
}

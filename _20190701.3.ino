//LED차례대로 켜고 꺼보기

const unsigned int led[8]={2,3,4,5,6,7,8,9};
void setup() {
  for(int x=0;x<=7;x++){
   pinMdoe(led[x], OUTPUT);
  } 
}

void loop() {
  for(int x=0; x<=7; x++){
    //led 모두 끄기
    for(int x=0; x<=7;x++){
      digitalWrite(led[x], LOW);
    }
    
    digitalWrite(led[x],HIGH);
    delay(500); //1/4=0.25Hz
  }
}

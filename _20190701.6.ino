//LED를 차례대로 밝아지게 하여 전체가 켜지면, 차례대로 LED가 꺼진다
//이중 for문을 사용

const unsigned int led[6]={3,5,6,9,10,11};
void setup() {
 
}

void loop() {
  for(int n=0; n<=5; n++){
  for(int t_high=0; t_high<=255; t_high++){
    analogWrite(led[n], t_high);
    delay(4); 
  }
  }
  
  for(int n=0; n<=5; n++){
  for(int t_high=255; t_high>=0; t_high--){
    analogWrite(led[n], t_high);
    delay(4); 
  }
  }
  
  delay(500);
}

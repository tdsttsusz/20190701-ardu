//6개의 LED가 징검다리를 건너듯이 차례대로 밝아지며 빛을 이동시킨다.
//이중 fo문을 사용

const unsigned int led[6]={3,5,6,9,10,11};
void setup() {
 
}

void loop() {
  for(int n=0; n<=5; n++){
  for(int t_high=0; t_high<=255; t_high++){
    analogWrite(led[n], t_high);
    delay(4); 
  }
  analogWrite(led[n],0);
  }
}

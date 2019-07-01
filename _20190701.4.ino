//LED밝기를 256단계로 조절해 보기

const int LED=10;
void setup() {
 
}

void loop() {
  for(int t_high=0; t_high<=255; t_high++){
    analogWrite(LED, t_high);
    delay(4); 
  }
}

 //0.01초 간격으로 LED밝기를 11단계로 조절해보기

const int LED=13;
void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {
 for(int t_high=0;t_high<=10;t_high++){
 digitalWrite(LED,HIGH);
 delay(t_high);
 digitalWrite(LED, LOW);
 delay(10-t_high);
 }
}

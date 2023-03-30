int Motor = 3; 
void setup() {
  // put your setup code here, to run once:
//pinMode(Motor, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 0; i <= 255; i = i+1){
analogWrite(Motor, i);
delay(50);
}

for (int i = 255; i > 0; i = i-1){
analogWrite(Motor, i);
delay(50);
}
}

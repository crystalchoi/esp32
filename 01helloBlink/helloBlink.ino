const byte led_gpio = 32; 
//const byte led_gpio = 23;   // 2 onboard led

void setup() {
  // put your setup code here, to run once:
  pinMode(led_gpio, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_gpio, HIGH); 
  delay(1000); 
  digitalWrite(led_gpio, LOW); 
  delay(1000); 
}

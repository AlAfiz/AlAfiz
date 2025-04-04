  int ledPin = 9;
  int ButtonPin = 7;
  void setup() {
    // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode (7,INPUT);
  }
  
  void loop() {
    // put your main code here, to run repeatedly:
  int ButtonState = digitalRead(ButtonPin);
  while (ButtonState == HIGH){
  digitalWrite (9,HIGH);
  delay (1000);
  ButtonState = digitalRead(ButtonPin);
  }
  digitalWrite (9,LOW);
  }

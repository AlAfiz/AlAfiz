  int april = 1;
  
  void setup() {
    // put your setup code here, to run once:
  Serial.begin(9600);
  }
  
  void loop() {
    // put your main code here, to run repeatedly:
  String progress = ( april == 1 ) ? " DAY ONE " : " DAY ELEVEN ";
  Serial.println ( progress );
  }

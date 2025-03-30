  int score; 
  void setup() {
    // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println (" Enter the score: ");
  }
  
  void loop() {
    // put your main code here, to run repeatedly:
  if (Serial.available()){
  score = Serial.parseInt();
  Serial.println ("Grade Scores : ");
  
  if (score >= 70 && score <= 100){
   Serial.println ("Grade Score is A ");  
  }
  else if (score >= 60 && score <= 69 ) {
   Serial.println ("Grade Score is B ");
  }
  else if (score >= 50 && score <= 59 ) {
   Serial.println ("Grade Score is C ");
  }
  else if (score >= 45 && score <= 49 ) {
   Serial.println ("Grade Score is D ");
  }
  else if (score >= 40 && score <= 44 ) {
   Serial.println ("Grade Score is E ");
  }
  else if (score >= 0 && score <= 39 ) {
   Serial.println ("Grade Score is F ");
  }
  }
  else {
  Serial.println ("Invalid student ");
  }
  delay (5000);
  }

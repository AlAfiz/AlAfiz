    int LED_PIN = 9;
    int POT_PIN = A0;
    
    void setup() {
        pinMode(LED_PIN, OUTPUT);
    }
    
    void loop() {
    int potValue = analogRead(POT_PIN);
    
    while ( potValue <= 800 ) { // Condition for adjusting brightness
        potValue = analogRead(POT_PIN);
        int brightness = map(potValue, 0, 1023, 0, 255);
        analogWrite(LED_PIN, brightness);
        delay(100);
    }

    digitalWrite(LED_PIN, LOW); // Turn off LED when condition is met
    }

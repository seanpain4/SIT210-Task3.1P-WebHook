int photoresistor = A0;
int analogValue;

void setup() {

}

void loop() {
    
    analogValue = analogRead(photoresistor);
    
    Particle.publish("photoresistor", String(analogValue), PRIVATE);

    delay(30000);

}

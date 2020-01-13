/* THE ECG PROJECT */
unsigned long t;

void setup() {
  Serial.begin(115200);
  analogReference(INTERNAL); 
}

void loop() {
  while (true) {
    t = micros();
    Serial.print(analogRead(A0));
    Serial.print(",");
    Serial.println(micros());
    
    while(micros() < t + 1993){
        //wait here to make a cycle 1993 microseconds
    }
  }
}

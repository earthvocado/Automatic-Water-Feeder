int analogPin = A0;
int val = 0;


void setup() { 
  pinMode(2, OUTPUT);
  Serial.begin(9600); 
}   

void loop() { 
  val = analogRead(analogPin);
  Serial.println(val); 
  if (val >= 600){
    digitalWrite(2, LOW);
  }
  else if (val < 100) {
    digitalWrite(2, HIGH);
  }
  delay(100);
}

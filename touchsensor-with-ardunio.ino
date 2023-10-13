
const int out = 5;  // the number of the out
const int ledPin = 13;    // the number of the LED pin

int touchstate =0 ;  

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  pinMode(out, INPUT);
  
  
}

void loop() {

 touchstate = digitalRead(out);
  if (touchstate == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial.println("touch press");
    Serial.println("led on");
    delay(1000);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
   
  }
}
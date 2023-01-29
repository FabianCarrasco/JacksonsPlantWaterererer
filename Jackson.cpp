#define power_pin 11
#define larb 3
#define signal_pin A5
int value = 0;


void setup() {
  Serial.begin(9600);
  pinMode(power_pin, OUTPUT);
  digitalWrite(power_pin, LOW);
  pinMode(larb, OUTPUT);
  digitalWrite(larb, LOW);

}

void loop() {
  digitalWrite(power_pin, HIGH);
  delay(10);
  value = analogRead(signal_pin);
  digitalWrite(power_pin, LOW);

    Serial.print("sensor value");
    Serial.println(value);
    delay(1000);
   
    if(value>=110){
      digitalWrite(larb, HIGH);
      
    }
  else{
    digitalWrite(larb, LOW);
  }
}
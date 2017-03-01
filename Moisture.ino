int sensorPin = A0;
int sensorValue = 0;

void setup() {

  //Serial.begin(9600); //  (Saving for datalogging)
}
void loop() {
              
  //Serial.print("sensor = " );  //  (Saving for datalogging)
  sensorValue = analogRead(sensorPin); 
  //Serial.println(sensorValue); // (Saving for datalogging)

  if(sensorValue >600){
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(100);                      
    digitalWrite(LED_BUILTIN, LOW);  
    delay(100);
  }
  if(sensorValue <600){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(sensorValue);
    digitalWrite(LED_BUILTIN, LOW);
    delay(sensorValue);
  }
}


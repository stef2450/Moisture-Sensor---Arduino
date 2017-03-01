int sensorPin = A0;
int sensorValue = 0;
int maxthreshold = 730;
int minthreshold = 600;

void setup() {

  Serial.begin(9600); //  (Saving for datalogging)
}
void loop() {
              
  Serial.print("sensor = " );  //  (Saving for datalogging)
  sensorValue = analogRead(sensorPin); 
  Serial.println(sensorValue); // (Saving for datalogging)

  if(sensorValue >maxthreshold){
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(25);                      
    digitalWrite(LED_BUILTIN, LOW);  
    delay(25);
  } else if(sensorValue <minthreshold){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  } else {
    digitalWrite(LED_BUILTIN, LOW);    
  }
}

// BT Data Logger
// BlueTooth Configuration
/* Include the software serial port library */
#include <SoftwareSerial.h>
/* to communicate with the Bluetooth module's TXD pin */
#define BT_SERIAL_TX 10
/* to communicate with the Bluetooth module's RXD pin */
#define BT_SERIAL_RX 11
/* Initialise the software serial port */
SoftwareSerial BluetoothSerial(BT_SERIAL_TX, BT_SERIAL_RX);

int sensorPin = A0;
int sensorValue = 0;

void setup() {
/* Set the baud rate for the software serial port */
BluetoothSerial.begin(9600); // Initialise BlueTooth
delay(1000);

  Serial.begin(9600); 
BluetoothSerial.print("Starting ...");
}

void loop() {
// Take readings
Serial.print("sensor = " );  //  (Saving for datalogging)
  sensorValue = analogRead(sensorPin); 
  Serial.println(sensorValue); // (Saving for datalogging)

BluetoothSerial.print("Moisture: ");
BluetoothSerial.print(sensorValue);
BluetoothSerial.print("\n");
delay(1000);
}


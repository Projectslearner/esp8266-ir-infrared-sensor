/*
    Project name : ESP8266 IR Infrared Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-ir-infrared-sensor
*/

const int irSensorPin = D2; // GPIO pin where the IR sensor OUT pin is connected

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(irSensorPin, INPUT); // Set IR sensor pin as INPUT
}

void loop() {
  // Read the state of the IR sensor
  int irState = digitalRead(irSensorPin);

  // Check if object is detected
  if (irState == LOW) {
    Serial.println("Object detected!");
  } else {
    Serial.println("No object detected.");
  }

  delay(1000); // Add a small delay before the next reading
}

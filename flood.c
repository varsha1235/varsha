// Include necessary libraries
#include <WiFi.h>

// WiFi credentials
const char* ssid = "YourWiFiSSID";
const char* password = "YourWiFiPassword";

// Pin connected to the water level sensor
const int waterLevelPin = 2; // Change this to the appropriate GPIO pin

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);

  // Connect to WiFi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected");

  // Set water level pin as input
  pinMode(waterLevelPin, INPUT);
}

void loop() {
  // Read water level
  int waterLevel = digitalRead(waterLevelPin);

  // If water level is high, send alert
  if (waterLevel == HIGH) {
    Serial.println("Alert: High water level detected!");
    // Add code here to send alert (e.g., via email, SMS, or IoT platform)
  }

  // Delay before next reading
  delay(1000); // Adjust delay as needed
}

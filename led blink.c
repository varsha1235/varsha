#define LED_PIN 2  // Define the GPIO pin where the LED is connected

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_PIN, HIGH);
  delay(1000); // Wait for 1000 milliseconds (1 second)

  // Turn the LED off
  digitalWrite(LED_PIN, LOW);
  delay(1000); // Wait for 1000 milliseconds (1 second)
}
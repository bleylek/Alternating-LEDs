#define red_led 8
#define green_led 9

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT); // Set pin 8 and 9 as a digital output.
  pinMode(green_led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_led, HIGH);
  digitalWrite(green_led, LOW);
  delay(500);
  digitalWrite(red_led, LOW);
  digitalWrite(green_led, HIGH);
  delay(500);
}

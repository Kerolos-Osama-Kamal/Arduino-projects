int red_led = 3;
int yellow_led = 2;
int green_led = 1;

void setup()
{
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop()
{
  digitalWrite(red_led, HIGH);
  delay(5000);
  digitalWrite(red_led, LOW);
  digitalWrite(yellow_led, HIGH);
  delay(1500);
  digitalWrite(yellow_led, LOW);
  digitalWrite(green_led, HIGH);
  delay(5000);
  digitalWrite(green_led, LOW);
}
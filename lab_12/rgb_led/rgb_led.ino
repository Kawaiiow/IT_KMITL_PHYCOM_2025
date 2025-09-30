
const int RED_PIN = 9;    // ขา Red
const int GREEN_PIN = 10;  // ขา Green
const int BLUE_PIN = 11;   // ขา Blue

void rgb_bool(int r, int g, int b)
{
	digitalWrite(RED_PIN, !r);
	digitalWrite(GREEN_PIN, !g);
	digitalWrite(BLUE_PIN, !b);
	delay(1000);
}

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
	rgb_bool(0, 0, 1);
	rgb_bool(0, 1, 0);
	rgb_bool(1, 0, 0);
	rgb_bool(0, 1, 1);
	rgb_bool(1, 0, 1);
	rgb_bool(1, 1, 0);
	rgb_bool(1, 1, 1);
}

constexpr int RED_PIN = 8;    // ขา Red
constexpr int GREEN_PIN = 9;  // ขา Green
constexpr int BLUE_PIN = 10;   // ขา Blue

constexpr int RED_INPUT = 4;    // ขา Red
constexpr int GREEN_INPUT = 5;  // ขา Green
constexpr int BLUE_INPUT = 6;   // ขา Blue

void rgb_bool(int r, int g, int b)
{
	digitalWrite(RED_PIN, r);
	digitalWrite(GREEN_PIN, g);
	digitalWrite(BLUE_PIN, b);
	// delay(1000);
}

void setup() {
	pinMode(RED_INPUT, INPUT_PULLUP);
	pinMode(GREEN_INPUT, INPUT_PULLUP);
	pinMode(BLUE_INPUT, INPUT_PULLUP);
	pinMode(RED_PIN, OUTPUT);
	pinMode(GREEN_PIN, OUTPUT);
	pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
	bool	r = digitalRead(RED_INPUT);
	bool	g = digitalRead(GREEN_INPUT);
	bool	b = digitalRead(BLUE_INPUT);

	rgb_bool(r, g, b);
}
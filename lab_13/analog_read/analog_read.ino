
void setup()
{
	Serial.begin(9600);
	pinMode(A0, INPUT);
	pinMode(3, OUTPUT);
}

void loop()
{
	int	val = analogRead(A0) * 256 / 1024.0;
	analogWrite(3, val);
	Serial.println(val);
}

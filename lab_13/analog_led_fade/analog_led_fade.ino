
#define L1 5
#define L2 6

int b1 = 0;
int b2 = 0;

void setup(){
	pinMode(L1, OUTPUT);
	pinMode(L2, OUTPUT);
}

void loop()
{
	analogWrite(L1, b1++);
	analogWrite(L2, b2+=2);

	if (b1 > 255)
		b1 = 0;
	if (b2 > 255)
		b2 = 0;
	delay(10);
}

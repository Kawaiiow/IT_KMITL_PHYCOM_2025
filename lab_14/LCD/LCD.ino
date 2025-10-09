#include <LiquidCrystal_I2C.h>
#include <stdlib.h>
#include <stdio.h>

byte heart[8] = {
	0b00000,
	0b01010,
	0b11111,
	0b11111,
	0b01110,
	0b00100,
	0b00000,
	0b00000
  };

byte dot[8] = {
	0b00010,
	0b00101,
	0b00010,
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00000
  };

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	lcd.init();
	lcd.backlight();
	lcd.setCursor(7, 0);
	lcd.clear();

	lcd.createChar(0, heart);
	lcd.createChar(1, dot);
	pinMode(A0, INPUT);
}

void loop()
{
	float temp = 100 * ((analogRead(A0) * 5 / 1023.0) - 1) + 49;

	lcd.setCursor(6, 0);
	lcd.print("I");
	lcd.write(0);
	lcd.print("IT");
	lcd.setCursor(0, 1);
	lcd.print("67070114 ");
	lcd.print(temp);
	lcd.write(1);
	delay(100);
	lcd.clear();
}

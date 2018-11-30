#include <SPI.h>

byte 		address = 0x00;
int 		CS = 10;
int 		ledPin = 13;

void
digitalPotWrite(int value)
{
	digitalWrite(CS, LOW);
	SPI.transfer(address);
	SPI.transfer(value);
	digitalWrite(CS, HIGH);
}

void
setup(void)
{
	pinMode(ledPin, OUTPUT);
	pinMode(CS, OUTPUT);
	SPI.begin();
}

void
loop(void)
{

	digitalWrite(ledPin, HIGH);
	delay(1000);
	digitalWrite(ledPin, LOW);
	delay(1000);
}

void
loop2()
{
	for (int i = 0; i <= 128; i++) {
		digitalPotWrite(i);
		delay(10);
	}
	delay(500);
	for (int i = 128; i >= 0; i--) {
		digitalPotWrite(i);
		delay(10);
	}
}

int 		ledPin = 13;

void 
setup(void)
{
	pinMode(ledPin, OUTPUT);
}

void 
loop(void)
{

	digitalWrite(ledPin, HIGH);
	delay(1000);
	digitalWrite(ledPin, LOW);
	delay(1000);
}

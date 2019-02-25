#define SERIAL  SerialUSB

//#define SERIAL  Serial
//#define SERIAL  Serial

void setup()
{
	SERIAL.begin(115200);
}

void loop()
{
	SERIAL.println("test");
	delay(1000);
}

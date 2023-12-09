/*

*/

//-------------------------------------------------------- include required libraries

#include <ESP8266WiFi.h>
#include <PubSubClient.h>

//-------------------------------------------------------- Define IO prints

#define pinPower 4
#define pinLED


//-------------------------------------------------------- Define Wifi info

#define WIFISSID "Serial"
#define WIFIPASS "stamps.com"

//-------------------------------------------------------- MQTT Info

#define MQTTUSER "control"
#define MQTTPASS "wellnow"

void setup()
{
//---------------------------------- Serial Port Setup

	Serial.begin(115200);
	Serial.println("\n\nInitializing");
	for(int x=0; x<20; x++)
	{
		Serial.print(".");
		delay(200);
	}
	Serial.println("");

//---------------------------------- Setup Pin Modes

	pinMode(pinPower, INPUT);	// Power pin to high-impedance so it doesn't change any states
}

int ctr = 0;

void loop()
{

}

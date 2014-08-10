/**************************************************************************/
/*!
    @file     Simple_Counter_Update.ino
    @author   SOSAndroid (E. Ha.)
    @license  BSD (see license.txt)

    Example sketch that reads periodically values from ACS7xx sensor and compute consumption data

    @section  HISTORY

    v1.0 - First release
	
*/
/**************************************************************************/

#include <math.h>

#include <ACS7xx_Allegro.h>

//do not disable debug mode to enjoy this example

void setup() {

	Serial.begin(9600);
	while (!Serial) ; //wait until Serial ready
	
    Serial.println("Starting...");
	
	//Creating object for sensor chip
    ACS7XX_ALLEGRO mysensor;
	//check serial output
	
}

void loop() {
	mysensor.updateCounters();
	delay(10000);
}
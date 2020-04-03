#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hi there,");
  Serial.println("");
  Serial.println("Please only work in the lib/challenge/challenge.h file.");
  Serial.println("You will find there the description for the challenge.");
  Serial.println("");
  Serial.println("Please use the PlatformIO: Test feature to test your code.");
  Serial.println("If you test it, it will tell you if you succeded or not, and");
  Serial.println("it will give you the challengeCode for the next challenge.");
  Serial.println("");
  Serial.println("You can do the testing in two ways:");
  Serial.println("  * Do it locally (you have to configure your platformio.ini file for that)");
  Serial.println("  * Do it remotely (you should click on PlatformIO: upload to remote device");
  Serial.println("      and select PlatformIO: Remote Test)");
  Serial.println("");
  Serial.println("INFO: If you want to use our boards remotely, please send your pio");
  Serial.println("email to ingaelearn@gmail.com, and we will give you access. (It");
  Serial.println("may take a couple of hours)");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
}
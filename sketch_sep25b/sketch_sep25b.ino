#include <ArduinoRobot.h>
#include <Arduino_LCD.h>
#include <Compass.h>
#include <EasyTransfer2.h>
#include <EEPROM_I2C.h>
#include <Fat16.h>
#include <Fat16Config.h>
#include <Fat16mainpage.h>
#include <Fat16util.h>
#include <FatStructs.h>
#include <Multiplexer.h>
#include <SdCard.h>
#include <SdInfo.h>
#include <Squawk.h>
#include <SquawkSD.h>
void setup(){
  Robot.begin();
  Serial.begin(9600);
}

void loop(){
  Robot.updateIR(); // update the IR array
  for(int i=0;i<=4;i++){
    Serial.print(Robot.IRarray[i]); // print the values to the serial port
    Serial.print(",");
  }
  Serial.println("");
  delay(100);
}

#include <SoftwareSerial.h>
#include "RoboClaw.h"

#define address1 0x80
#define address2 0x81

SoftwareSerial serial(10,11);
RoboClaw roboclaw(&serial,10000);

void setup() {
  roboclaw.begin(38400);
}

void loop() {
  roboclaw.ForwardM1(address1, 64);
  delay(2000);
  roboclaw.ForwardM1(address1, 128);
  delay(2000);
  roboclaw.ForwardM1(address2, 64);
  delay(2000);
  roboclaw.ForwardM1(address2, 128);
  delay(2000);

}

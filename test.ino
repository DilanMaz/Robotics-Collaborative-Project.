#include "Blocks.h"

/* Notes to self
   MoveToPosition(posX, 100) controls speed (20-200)
   M1=base degrees. Allowed values from 0 to 180 degrees
   M2=shoulder degrees. Allowed values from 15 to 165 degrees
   M3=elbow degrees. Allowed values from 0 to 180 degrees
   M4=wrist degrees. Allowed values from 0 to 180 degrees
   M5=wrist rotation degrees. Allowed values from 0 to 180 degrees
   M6=gripper degrees. Allowed values from 10 to 73 degrees. 10: fingers open, 73: fingers closed.
*/
//Put down height = roughly 10cm
// defines pins numbers
const int trigPin = 7;
const int echoPin = 8;
const int ledPin = 13;

// pre-defined motor pins
// base = 11;
// shoulder = 10;
// elbow = 9;
// wrist_rot = 5;
// wrist_ver = 6;
// gripper = 3;

// defines variables
long DUR;
int DIS;

//includes libraries needed
#include <BraccioRobot.h>
#include <Servo.h>
//
Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper;

bool block1_flag = false;
bool block2_flag = false;
bool block3_flag = false;
bool block4_flag = false;
bool block5_flag = false;
bool block6_flag = false;
bool block7_flag = false;
bool block8_flag = false;
bool block9_flag = false;
bool block10_flag = false;
bool block11_flag = false;
bool block12_flag = false;



//setup code to runs once, initialises the robot
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(ledPin, OUTPUT); //sets led pin as an output
  Serial.begin(9600); // Starts the serial communication
  BraccioRobot.init();
}

void loop()
{
  // Clears the trigPin, 2 micro seconds
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state, 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin
  DUR = pulseIn(echoPin, HIGH);

  // Calculating the distance in cm
  DIS = DUR * 0.034 / 2;

  Serial.print("distance: "); //Print distance
  Serial.print(DIS); //print value for distance
  Serial.println(" cm"); //print cm

  //The comments below repeat for each function, with slight difference between first and the rest
  while (DIS <= 8) {            //Create a While loop; check sensor if less than 8
    digitalWrite(ledPin, HIGH); //if less than 8 turn LED on, do the following:
    if (block1_flag == false) { //check if flag is false
      MoveBlock1();             //if so, get block 1
      block1_flag = true;       //set flag 1 to true
      break;                    //leave while loop; return to safety pos
    }
    if (block2_flag == false) { //same Idea; but check if flag 1 is now true
      MoveBlock2();             //if true, get block 2
      block2_flag = true;       //set flag 2 as true
      break;
    }
    if (block3_flag == false) {
      MoveBlock3();
      block3_flag = true;
      break;
    }
    if (block4_flag == false) {
      MoveBlock4();
      block4_flag = true;
      break;
    }
    if (block5_flag == false) {
      MoveBlock5();
      block5_flag = true;
      break;
    }
    if (block6_flag == false) {
      MoveBlock6();
      block6_flag = true;
      break;
    }
    if (block7_flag == false) {
      MoveBlock7();
      block7_flag = true;
      break;
    }
    if (block8_flag == false) {
      MoveBlock8();
      block8_flag = true;
      break;
    }
    if (block9_flag == false) {
      MoveBlock9();
      block9_flag = true;
      break;
    }
    if (block10_flag == false) {
      MoveBlock10();
      block10_flag = true;
      break;
    }
    if (block11_flag == false) {
      MoveBlock11();
      block11_flag = true;
      break;
    }
    if (block12_flag == false) {
      MoveBlock12();
      block12_flag = true;
      break;
    }
  }
  if (DIS >= 8); {
    digitalWrite(ledPin, LOW);
    SafetyPos();
  }
}

/*
   Next blocks of code are for moving blocks
   The Positions for Blocks 1-12 are found in their
   respective fucntions
   Safety Pos may be found below blocks 1-12
   Programmed to be at a 90 degree,
   straight up Position
*/


void SafetyPos() {
  Position safetyPos;
  safetyPos.set(90, 90, 90, 90, 90, 20);
  BraccioRobot.moveToPosition(safetyPos, 25);


}

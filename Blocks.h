#ifndef BLOCKS_H
#define BLOCKS_H

#include <BraccioRobot.h>
#include <Servo.h>

class Blocks {
  public:
    Blocks();
    void MoveBlock1();
    void MoveBlock2();
    void MoveBlock3();
    void MoveBlock4();
    void MoveBlock5();
    void MoveBlock6();
    void MoveBlock7();
    void MoveBlock8();
    void MoveBlock9();
    void MoveBlock10();
    void MoveBlock11();
    void MoveBlock12();
  private:
    Position Block1;
    Position Block2;
    Position Block3;
    Position Block4;
    Position Block5;
    Position Block6;
    Position Block7;
    Position Block8;
    Position Block9;
    Position Block10;
    Position Block11;
    Position Block12;
};

#endif

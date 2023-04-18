#include "Blocks.h"
#include <Arduino.h>

void MoveBlock1() {
    Position Block1;
    //       (M1, M2, M3, M4, M5, M6)
  Block1.set(190, 120, 20, 10, 90, 20);
  //Block1
  BraccioRobot.moveToPosition(Block1, 50);
  BraccioRobot.moveToPosition(Block1.set(180, 84, 15, 3, 90, 20), 25);
  BraccioRobot.moveToPosition(Block1.set(180, 84, 15, 3, 90, 70), 25);
  BraccioRobot.moveToPosition(Block1.set(180, 90, 45, 45, 90, 70), 50);
  BraccioRobot.moveToPosition(Block1.set(90, 90, 65, 65, 90, 70), 100);
  BraccioRobot.moveToPosition(Block1.set(90, 70, 35, 65, 90, 70), 25);
  BraccioRobot.moveToPosition(Block1.set(90, 70, 35, 65, 90, 20), 50);
  BraccioRobot.moveToPosition(Block1.set(90, 90, 45, 45, 90, 20), 100);
}

void MoveBlock2() {
    Position Block2;
  //         (M1, M2, M3, M4, M5, M6)
  Block2.set(190, 120, 20, 10, 5, 20);

  //Block2
  BraccioRobot.moveToPosition(Block2, 50);
  BraccioRobot.moveToPosition(Block2.set(180, 80, 10, 10, 5, 20), 25);
  BraccioRobot.moveToPosition(Block2.set(180, 80, 10, 10, 5, 70), 25);
  BraccioRobot.moveToPosition(Block2.set(180, 90, 45, 45, 5, 70), 175);
  BraccioRobot.moveToPosition(Block2.set(90, 90, 65, 65, 90, 70), 100);
  BraccioRobot.moveToPosition(Block2.set(90, 70, 35, 65, 90, 70), 25);
  BraccioRobot.moveToPosition(Block2.set(90, 70, 35, 65, 90, 20), 50);
  BraccioRobot.moveToPosition(Block2.set(90, 90, 45, 45, 90, 20), 100);
}

void MoveBlock3() {
  Position Block3;
  //         (M1, M2, M3, M4, M5, M6)
  Block3.set(170, 80, 45, 45, 90, 20);

  //Block3
  BraccioRobot.moveToPosition(Block3, 75);
  BraccioRobot.moveToPosition(Block3.set(170, 120, 13, 3, 90, 20), 25);
  BraccioRobot.moveToPosition(Block3.set(170, 84, 13, 3, 90, 20), 25);
  BraccioRobot.moveToPosition(Block3.set(170, 84, 13, 3, 90, 70), 50);
  BraccioRobot.moveToPosition(Block3.set(170, 90, 45, 45, 178, 70), 75);
  BraccioRobot.moveToPosition(Block3.set(90, 90, 65, 65, 90, 70), 100);
  BraccioRobot.moveToPosition(Block3.set(90, 70, 35, 65, 90, 70), 25);
  BraccioRobot.moveToPosition(Block3.set(90, 70, 35, 65, 90, 20), 50);
  BraccioRobot.moveToPosition(Block3.set(90, 90, 45, 45, 90, 20), 100);
}

void MoveBlock4() {
  Position Block4;
  //         (M1, M2, M3, M4, M5, M6)
  Block4.set(170, 80, 45, 45, 178, 20);

  //Block3
  BraccioRobot.moveToPosition(Block4, 100);
  BraccioRobot.moveToPosition(Block4.set(170, 120, 10, 10, 178, 20), 25);
  BraccioRobot.moveToPosition(Block4.set(170, 80, 10, 10, 178, 20), 25);
  BraccioRobot.moveToPosition(Block4.set(170, 80, 10, 10, 178, 70), 50);
  BraccioRobot.moveToPosition(Block4.set(170, 90, 45, 45, 178, 70), 75);
  BraccioRobot.moveToPosition(Block4.set(90, 90, 65, 65, 90, 70), 100);
  BraccioRobot.moveToPosition(Block4.set(90, 70, 35, 65, 90, 70), 25);
  BraccioRobot.moveToPosition(Block4.set(90, 70, 35, 65, 90, 20), 50);
  BraccioRobot.moveToPosition(Block4.set(90, 90, 45, 45, 90, 20), 100);
}

void MoveBlock5() {
  Position Block5;
  //         (M1, M2, M3, M4, M5, M6)
  Block5.set(164, 80, 45, 45, 178, 20);

  //Block7
  BraccioRobot.moveToPosition(Block5, 100);
  BraccioRobot.moveToPosition(Block5.set(164, 120, 10, 10, 178, 20), 25);
  BraccioRobot.moveToPosition(Block5.set(164, 81, 10, 10, 178, 20), 25);
  BraccioRobot.moveToPosition(Block5.set(164, 81, 10, 10, 178, 70), 75);
  BraccioRobot.moveToPosition(Block5.set(164, 90, 45, 45, 178, 70), 75);
  BraccioRobot.moveToPosition(Block5.set(90, 90, 65, 65, 90, 70), 100);
  BraccioRobot.moveToPosition(Block5.set(90, 70, 35, 65, 90, 70), 25);
  BraccioRobot.moveToPosition(Block5.set(90, 70, 35, 65, 90, 20), 50);
  BraccioRobot.moveToPosition(Block5.set(90, 90, 45, 45, 90, 20), 100);
}

void MoveBlock6() {
  Position Block6;
  //         (M1, M2, M3, M4, M5, M6)
  Block6.set(155, 80, 45, 45, 178, 20);

  //Block7
  BraccioRobot.moveToPosition(Block6, 100);
  BraccioRobot.moveToPosition(Block6.set(155, 120, 10, 15, 178, 20), 25);
  BraccioRobot.moveToPosition(Block6.set(155, 81, 10, 15, 178, 40), 25);
  BraccioRobot.moveToPosition(Block6.set(155, 81, 10, 15, 178, 40), 25);
  BraccioRobot.moveToPosition(Block6.set(155, 81, 10, 15, 178, 72), 50);
  BraccioRobot.moveToPosition(Block6.set(155, 90, 45, 45, 178, 72), 75);
  BraccioRobot.moveToPosition(Block6.set(90, 90, 65, 65, 90, 70), 100);
  BraccioRobot.moveToPosition(Block6.set(90, 70, 35, 65, 90, 70), 25);
  BraccioRobot.moveToPosition(Block6.set(90, 70, 35, 65, 90, 20), 75);
  BraccioRobot.moveToPosition(Block6.set(90, 90, 45, 45, 90, 20), 100);
}

void MoveBlock7() {
  Position Block7;
  //         (M1, M2, M3, M4, M5, M6)
  Block7.set(153, 80, 45, 45, 60, 20);

  //Block7
  BraccioRobot.moveToPosition(Block7, 100);
  BraccioRobot.moveToPosition(Block7.set(153, 150, 10, 15, 60, 45), 100);
  BraccioRobot.moveToPosition(Block7.set(153, 82, 10, 10, 60, 35), 35);
  BraccioRobot.moveToPosition(Block7.set(154, 82, 10, 14, 60, 35), 35);
  BraccioRobot.moveToPosition(Block7.set(154, 82, 10, 12, 60, 72), 75);
  BraccioRobot.moveToPosition(Block7.set(154, 90, 30, 10, 178, 72), 100);
  BraccioRobot.moveToPosition(Block7.set(154, 90, 45, 45, 178, 72), 75);
  BraccioRobot.moveToPosition(Block7.set(90, 90, 65, 65, 90, 70), 100);
  BraccioRobot.moveToPosition(Block7.set(90, 70, 35, 65, 90, 70), 25);
  BraccioRobot.moveToPosition(Block7.set(90, 70, 35, 65, 90, 20), 75);
  BraccioRobot.moveToPosition(Block7.set(90, 90, 45, 45, 90, 20), 100);
}

void MoveBlock8() {
  Position Block8;
  //         (M1, M2, M3, M4, M5, M6)
  Block8.set(152, 80, 45, 45, 5, 20);

  //Block7
  BraccioRobot.moveToPosition(Block8, 100);
  BraccioRobot.moveToPosition(Block8.set(152, 70, 40, 15, 5, 45), 25);
  BraccioRobot.moveToPosition(Block8.set(152, 90, 20, 15, 5, 35), 25);
  BraccioRobot.moveToPosition(Block8.set(152, 70, 20, 15, 5, 35), 25);
  BraccioRobot.moveToPosition(Block8.set(152, 70, 20, 15, 5, 72), 75);
  BraccioRobot.moveToPosition(Block8.set(152, 90, 30, 10, 5, 72), 75);
  BraccioRobot.moveToPosition(Block8.set(152, 90, 45, 45, 5, 72), 100);
  BraccioRobot.moveToPosition(Block8.set(90, 90, 65, 65, 90, 70), 100);
  BraccioRobot.moveToPosition(Block8.set(90, 70, 35, 65, 90, 70), 25);
  BraccioRobot.moveToPosition(Block8.set(90, 70, 35, 65, 90, 20), 75);
  BraccioRobot.moveToPosition(Block8.set(90, 90, 45, 45, 90, 20), 100);
}

void MoveBlock9() {
  Position Block9;
  //         (M1, M2, M3, M4, M5, M6)
  Block9.set(140, 80, 45, 45, 60, 20);

  //Block9
  BraccioRobot.moveToPosition(Block9, 100);
  BraccioRobot.moveToPosition(Block9.set(140, 120, 17, 20, 60, 35), 25);
  BraccioRobot.moveToPosition(Block9.set(140, 76, 17, 20, 50, 35), 25);
  BraccioRobot.moveToPosition(Block9.set(140, 76, 17, 20, 50, 35), 25);
  BraccioRobot.moveToPosition(Block9.set(140, 76, 17, 20, 50, 72), 50);
  BraccioRobot.moveToPosition(Block9.set(140, 90, 30, 10, 5, 72), 75);
  BraccioRobot.moveToPosition(Block9.set(140, 90, 45, 45, 5, 72), 75);
  BraccioRobot.moveToPosition(Block9.set(90, 90, 65, 65, 90, 70), 100);
  BraccioRobot.moveToPosition(Block9.set(90, 70, 35, 65, 90, 70), 25);
  BraccioRobot.moveToPosition(Block9.set(90, 70, 35, 65, 90, 20), 75);
  BraccioRobot.moveToPosition(Block9.set(90, 90, 45, 45, 90, 20), 100);
}

void MoveBlock10() {
  Position Block10;
  //         (M1, M2, M3, M4, M5, M6)
  Block10.set(148, 80, 45, 45, 5, 20);

  BraccioRobot.moveToPosition(Block10, 150);
  BraccioRobot.moveToPosition(Block10.set(148, 70, 40, 15, 5, 45), 25);
  BraccioRobot.moveToPosition(Block10.set(148, 70, 25, 15, 5, 35), 25);
  BraccioRobot.moveToPosition(Block10.set(148, 70, 25, 15, 5, 35), 25);
  BraccioRobot.moveToPosition(Block10.set(148, 70, 20, 15, 5, 72), 75);
  BraccioRobot.moveToPosition(Block10.set(148, 90, 30, 10, 5, 72), 50);
  BraccioRobot.moveToPosition(Block10.set(148, 90, 45, 45, 5, 72), 75);
  BraccioRobot.moveToPosition(Block10.set(90, 90, 65, 65, 90, 70), 100);
  BraccioRobot.moveToPosition(Block10.set(90, 70, 35, 65, 90, 70), 25);
  BraccioRobot.moveToPosition(Block10.set(90, 70, 35, 65, 90, 20), 75);
  BraccioRobot.moveToPosition(Block10.set(90, 90, 45, 45, 90, 20), 100);
}

void MoveBlock11() {
  Position Block11;
  //         (M1, M2, M3, M4, M5, M6)
  Block11.set(143, 80, 45, 45, 5, 20);

  //Block10
  BraccioRobot.moveToPosition(Block11, 50);
  BraccioRobot.moveToPosition(Block11.set(143, 90, 40, 15, 5, 45), 25);
  BraccioRobot.moveToPosition(Block11.set(143, 63, 30, 18, 5, 35), 25);
  BraccioRobot.moveToPosition(Block11.set(143, 63, 30, 18, 5, 35), 25);
  BraccioRobot.moveToPosition(Block11.set(143, 63, 30, 18, 5, 72), 35);
  BraccioRobot.moveToPosition(Block11.set(143, 90, 30, 10, 5, 72), 35);
  BraccioRobot.moveToPosition(Block11.set(143, 90, 45, 45, 5, 72), 50);
  BraccioRobot.moveToPosition(Block11.set(90, 90, 65, 65, 90, 70), 100);
  BraccioRobot.moveToPosition(Block11.set(90, 70, 35, 65, 90, 70), 25);
  BraccioRobot.moveToPosition(Block11.set(90, 70, 35, 65, 90, 20), 75);
  BraccioRobot.moveToPosition(Block11.set(90, 90, 45, 45, 90, 20), 100);
}

void MoveBlock12() {
  Position Block12;
  //         (M1, M2, M3, M4, M5, M6)
  Block12.set(135, 80, 45, 45, 60, 20);

  //Block11
  BraccioRobot.moveToPosition(Block12, 100);
  BraccioRobot.moveToPosition(Block12.set(135, 120, 35, 35, 60, 35), 75);
  BraccioRobot.moveToPosition(Block12.set(135, 58, 35, 15, 35, 35), 25);
  BraccioRobot.moveToPosition(Block12.set(135, 58, 35, 15, 35, 35), 25);
  BraccioRobot.moveToPosition(Block12.set(135, 58, 35, 15, 35, 72), 50);
  BraccioRobot.moveToPosition(Block12.set(135, 90, 30, 10, 5, 72), 100);
  BraccioRobot.moveToPosition(Block12.set(135, 90, 45, 45, 5, 72), 100);
  BraccioRobot.moveToPosition(Block12.set(90, 90, 65, 65, 90, 70), 100);
  BraccioRobot.moveToPosition(Block12.set(90, 70, 35, 65, 90, 70), 25);
  BraccioRobot.moveToPosition(Block12.set(90, 70, 35, 65, 90, 20), 50);
  BraccioRobot.moveToPosition(Block12.set(90, 90, 45, 45, 90, 20), 100);
}

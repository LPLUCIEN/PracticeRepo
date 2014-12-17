#include "BallTrapClose.h"

LucienCommand :: LucienCommand(): CommandBase("LucienCommand") {
    Requires (practice);
}

void LucienCommand :: Initialize() {
    practice->moveMotor(1.0);
}

void LucienCommand :: Execute() {
    practice->moveMotor(1.0);
}

bool LucienCommand :: IsFinished() {
  return false;  
}

void LucienCommand :: End() {
    
}

void LucienCommand :: Interrupted() {
    practice->moveMotor(0.0);
}

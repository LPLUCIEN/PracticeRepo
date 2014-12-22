#include "PracticeCommand.h"

LucienCommand :: LucienCommand(): CommandBase("LucienCommand") {
    Requires (practice);
    motorA = new Victor(1);
}

LucienCommand :: ~LucienCommand(){
    delete motorA
}
void LucienCommand :: Initialize() {
    motorA->Set(1.0);
}

void LucienCommand :: Execute() {
    motorA->Set(1.0);
}

bool LucienCommand :: IsFinished() {
  return false;  
}

void LucienCommand :: End() {
    
}

void LucienCommand :: Interrupted() {
    motorA->Set(0.0);
}

#ifndef LucienCommand_h
#define LucienCommand_h

#include "../CommandBase.h"

class LucienCommand: public CommandBase{
    public:
        LucienComand();
        virtual void Initialize();
        virtual void Execute();
        virtual bool IsFinished();
        virtual void End();
        virtual void Interrupted();
    private:
        Victor* motorA;
};

#endif

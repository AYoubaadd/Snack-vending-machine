#ifndef class_SmallSlot

#define class_SmallSlot

#include<string>

#include "class_Slot.h"

#include "class_Motor.h"

class SmallSlot: public Slot{
    private:
        Motor motor1;

    public:
	    SmallSlot(int slotId,string productName,int price,int motor1ID);

	    virtual void drop() override;
};
#endif

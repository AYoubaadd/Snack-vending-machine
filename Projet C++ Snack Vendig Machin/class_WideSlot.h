#ifndef class_WideSlot

#define class_WideSlot

#include<string>

#include "class_Slot.h"

#include "class_Motor.h"

class WideSlot: public Slot{
    private:
        Motor motor1;
		Motor motor2;
    public:
	    WideSlot(int slotId,string productName,int price,int motor1ID,int motor2ID);

	    virtual void drop() override;
};
#endif

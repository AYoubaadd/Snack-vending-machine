
#ifndef class_Automate

#define class_Automate

#include<string>

#include "class_SmallSlot.h"

#include "class_WideSlot.h"

#include "class_Slot.h"

#include "class_Keypad.h"

#include "class_CoinSlot.h"

#include "class_DropCeck.h"

#include<vector>

#include <algorithm>

#include "class_SmallSlot.h"

#include "class_WideSlot.h"
#include <memory>
class Automate{
	private:
		vector<Slot*> slots;
		
		int numSlot;
		
		int numProductsPerSlot;
		
		
		
		CoinSlot coinslot;
		
		Keypad keypad;
		
		DropCeck dropceck;
		
	public:
	    Automate(int nslot, int nProductsPerSlot);
	    
	    ~Automate();
	    
	    Slot* searchSlot(int slotId);
	    
	    bool addSlot(int slotId,string productName,int price,int motorId1,int motorId2);
	    
	    bool addSlot(int slotId,string productName,int price,int motorId);
	    
	    bool addSlot(Slot* slot);
	    
	    void changeSlot(int slotId,string name, int price);
	    
	    int getPrice(int slotId);
	    
	    int getNumPieces(int slotId);
	    
	    bool isAvaiable(int slotId);
	    
	    bool dropSlot(int slotId);
	    
	    void fillAll();
	    
	    void fill(int slotId, int numProducts);
	    
};
#endif


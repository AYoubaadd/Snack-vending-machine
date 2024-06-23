#include<iostream>

#include "class_automate.h"

#include "class_Slot.h"

#include "class_Keypad.h"

#include "class_CoinSlot.h"

#include<string>

#include <algorithm>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
Automate::Automate(int nslot, int nProductsPerSlot) {
     
    numSlot = nslot;
    numProductsPerSlot = nProductsPerSlot;

    slots.reserve(numSlot);

    for (int i = 0; i < numSlot; ++i) {
        if (i < numSlot/2) {
            Slot* newSlot = new WideSlot(i + 1, "Wide Product", 0, i + 1, i + 2);
            slots.push_back(newSlot);
        } else {
            Slot* newSlot = new SmallSlot(i + 1, "Small Product", 0, (numSlot/2)+i +1);
            slots.push_back(newSlot);
        }
    }
}


////////////////////////////////////////////////////////////////////////////////
Slot* Automate::searchSlot(int slotId) {
    for (size_t i = 0; i < slots.size(); ++i) {
        if (slots[i]->getId() == slotId) {
            return slots[i];
        }
    }
    // Retourner un pointeur nul si aucun slot correspondant n'est trouvé
    return nullptr;
}



//////////////////////////////////////////////////////////////////////////////////
bool Automate::addSlot(int slotId,string productName,int price,int motorId1,int motorId2){
    if(searchSlot(slotId)->getId()==(-1)){
    	Slot* newslot = new WideSlot(slotId, productName, price, motorId1, motorId2);

    	slots.push_back(newslot);
        return 1;
                                        }
	else return 0;
}
///////////////////////////////////////////////////////////////////////////////
bool Automate::addSlot(int slotId,string productName,int price,int motorId){
    if(searchSlot(slotId)->getId()==(-1)){
    	Slot* newslot= new SmallSlot(slotId,productName,price,motorId);

    	slots.push_back(newslot);
        return 1;
                                        }
	else return 0;
}

////////////////////////////////////////////////////////////////////////////////
bool Automate::addSlot(Slot* slot) {
    if (searchSlot(slot->getId()) == nullptr) {
        slots.push_back(slot);
        return true;
    } else {
        return false;
    }
}



/////////////////////////////////////////////////////////////////////////////////
void Automate::changeSlot(int slotId,string name, int price){
	   for (int i = 0; i < slots.size(); ++i)  {
        if (slots[i]->getId() == slotId) {
            slots[i]->setProductName(name);
            slots[i]->setPrice(price);
                                        }
                                               }

	}
//////////////////////////////////////////////////////////////////////////////////
int Automate::getPrice(int slotId){
	for (size_t i = 0; i < slots.size(); ++i)
        if (slots[i]->getId() == slotId)
            return slots[i]->getPrice();

}
//////////////////////////////////////////////////////////////////////////////////
int Automate::getNumPieces(int slotId){
	for (int i = 0; i < slots.size(); ++i)
        if (slots[i]->getId() == slotId)
            return slots[i]->getNumProducts();
}
///////////////////////////////////////////////////////////////////////////////////
bool Automate::isAvaiable(int slotId){

	if(getNumPieces(slotId)>0)return 1;
	else return 0;
}
///////////////////////////////////////////////////////////////////////////////////
bool Automate::dropSlot(int slotId){
	for (size_t i = 0; i < slots.size(); ++i)
        if (slots[i]->getId() == slotId){
         slots.erase(slots.begin() + i);
         return 1;
         }
        else return 0;
}
///////////////////////////////////////////////////////////////////////////////////
void Automate::fillAll(){
	for (size_t i = 0; i < slots.size(); ++i)
		slots[i]->setNumProducts(numProductsPerSlot);

}
///////////////////////////////////////////////////////////////////////////////////
void Automate::fill(int slotId, int numProducts){
	for (size_t i = 0; i < slots.size(); ++i)
	    if (slots[i]->getId() == slotId)
		    slots[i]->setNumProducts(numProducts);
}
//////////////////////////////////////////////////////////////////////////////////
Automate::~Automate(){
}


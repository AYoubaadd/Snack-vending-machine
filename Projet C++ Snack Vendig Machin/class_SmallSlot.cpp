#include "class_SmallSlot.h"

#include<iostream>

#include "class_Slot.h"

#include<string>

using namespace std;

SmallSlot::SmallSlot(int slotId,string productName,int price,int motor1ID):motor1(motor1ID),Slot(productName,slotId,price){}

void SmallSlot::drop(){
	
			motor1.trigger();
	        cout<<getNumProducts()<<" livre apartir du logement "<< getId()<<endl<<endl;
	        int n=getNumProducts();
	        n--;
	        setNumProducts(n);
	
}

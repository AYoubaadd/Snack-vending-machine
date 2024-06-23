#include "class_WideSlot.h"

#include<iostream>



#include "class_Slot.h"

#include<string>

using namespace std;

WideSlot::WideSlot(int slotId,string productName,int price,int motor1ID,int motor2ID):motor1(motor1ID),motor2(motor2ID),Slot(productName,slotId,price){}

void WideSlot::drop() {
	
			motor1.trigger();
			motor2.trigger();
	        cout<< getProductName() <<" livre apartir du logement "<< getId() <<endl<<endl;
	        int n=getNumProducts();
	        
	        n--;
	        setNumProducts(n);
            
	
}



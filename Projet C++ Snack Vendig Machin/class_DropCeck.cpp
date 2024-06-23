#include "class_DropCeck.h"

#include<iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

bool DropCeck::productRealesed(){
	int randomNumber = rand() % 100;
        
        
        if (randomNumber < 10) 
            return 0;
        else 
            
            return 1;
        
}


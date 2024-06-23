#include<iostream>
#include "class_Motor.h"

using namespace std;

Motor::Motor(int idM):id(idM){};

Motor::Motor():id(0){}

void Motor:: trigger(){
	cout<<"Motor "<< id <<" est active"<<endl;
	
};

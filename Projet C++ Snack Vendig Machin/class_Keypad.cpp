#include "class_Keypad.h"

#include<iostream>

using namespace std;

int Keypad::getSelection(){
	int N;
	cout<<"Saisir le numero de l emplacement de produit: ";
	cin>>N;
	if(N==-1)exit(0);
	return N;
	
}

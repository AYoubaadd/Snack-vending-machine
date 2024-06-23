#include "class_CoinSlot.h"

#include<iostream>

#include<string>
using namespace std;
///////////////////////////////////////////////////////////////////

CoinSlot::CoinSlot():insertedAmount(0){
   coinValues[0]=200;
   coinValues[1]=100;
   coinValues[2]=50;
   coinValues[3]=20;
   coinValues[4]=10;
   coinValues[5]=5;
   coinValues[6]=1;
}
///////////////////////////////////////////////////////////////////
int CoinSlot::updateCoinAmount(){
	int n;
	cout<<"Inserer l argent/entrer -1 pour annuler l achat : ";
	cin>> n;
	if(n!=-1){
		for(int i=0 ;i< 6;i++)
		if(coinValues[i]==n){
		insertedAmount=insertedAmount+n;
		return n;
		}
	}
	else return -1;	  
}
////////////////////////////////////////////////////////////////////
int CoinSlot::getCoinAmount(){
	return insertedAmount;
}
////////////////////////////////////////////////////////////////////
void CoinSlot::clear(){
	insertedAmount=0;
}
////////////////////////////////////////////////////////////////////
void CoinSlot::returnCoins(int price){
    float change = insertedAmount - price;
    if (change > 0) {
        cout << "La machine rend " << change / 100 << " Euro, en pieces de monnaie :" << endl;
        for (int i = 0; i < 7; i++) {
            int numCoins = change / coinValues[i];
            if (numCoins > 0) {
            	
                cout <<  coinValues[i] << "x" <<  numCoins << " Cents" << endl;
                change -= numCoins * coinValues[i];
            }
        }
    } else {
        cout << "Aucun changement a rendre." << endl;
    }
}















#include<iostream>

#include "class_Slot.h"

#include "class_automate.h"

#include "class_Motor.h"

#include<string>
using namespace std;

int main(){
Automate point_vent(15, 10);

point_vent.changeSlot(1,"Doritos", 150);
point_vent.changeSlot(2,"Lays", 200);
point_vent.changeSlot(3,"Chips", 100);
point_vent.changeSlot(4,"Water", 10);
point_vent.changeSlot(5,"Doritos", 150);
point_vent.changeSlot(6,"Doritos", 150);
point_vent.changeSlot(7,"Doritos", 150);
point_vent.changeSlot(8,"Doritos", 150);
point_vent.changeSlot(9,"Oreo",24);
point_vent.changeSlot(10,"Tonik", 20);
point_vent.changeSlot(11,"Skittle", 90);
point_vent.changeSlot(12,"Milka",135);
point_vent.changeSlot(13,"Twix", 120);
point_vent.changeSlot(14,"Sneckers", 160);
point_vent.changeSlot(15,"m&m",50);


cout << "-----------------------------------------------------------------------------------------------------" << endl;
cout << "--------------------------------------SNACK VENDING MACHINE------------------------------------------" << endl;
for (int j=0;j<15;j+=3){
    cout<<"-----------------------------------------------------------------------------------------------------" << endl;
    for (int i=j;i<j+3;++i){
        if (i <15){
            cout<< "||  " << point_vent.searchSlot(i+1)->getProductName()<< "\t\t\t||" ;
        }
    }
    cout<<endl;
    for (int l=j;l<j+3;++l){
        if (l<15){
            cout<<"||  id : " << point_vent.searchSlot(l+1)->getId()<< "\t\t\t||";
        }
    }
    cout<<endl;
    for (int k=j;k<j+3;++k){
        if (k<15){
            cout<< "||  Prix: " << point_vent.searchSlot(k+1)->getPrice()<< "\t\t\t||";
        }
    }
    cout<<endl<<endl;
}
cout << "-------------------------------------SNACK VENDING MACHINE-------------------------------------------" << endl;
cout << "-----------------------------------------------------------------------------------------------------" << endl;





Keypad keypad;
CoinSlot coinslot;
DropCeck dropcheck;


    DD: cout<<"\t\t\t**Votre solde :"<<coinslot.getCoinAmount()<<" Cents **"<<endl<<endl;
        int selection = keypad.getSelection();
        if(selection==-1)exit(0);
        if(point_vent.isAvaiable(selection)){
		
        cout << "\t\t\t** Vous avez selectioner le produit de l'emplacement : " << selection<<" **"<<endl<<endl;
    
            cout<<"\t\t\t** Le prix de produit  "<<point_vent.searchSlot(selection)->getProductName()<<" est "<<point_vent.getPrice(selection)<<" Cents **"<<endl<<endl;
            int res=coinslot.updateCoinAmount();
            while(coinslot.getCoinAmount()<point_vent.getPrice(selection) && res!=-1) {
    	   
              	
                cout<<"\t\t\t** Vous inserez :"<<res<<" Cents **"<<endl<<endl;
                cout<<"\t\t\t** Votre solde :"<<coinslot.getCoinAmount()<<" Cents **"<<endl<<endl;
    
                res=coinslot.updateCoinAmount();
                                                                  }
                                                                  
                                                                  
                                                                  
                                                                                                                    
                if(res==-1) {                	
                	coinslot.returnCoins(0);
                	coinslot.clear();
                	goto DD;
				            }                                       
        
                
                cout<<"\t\t\t** Vous inserez :"<<res<<" Cents **"<<endl<<endl;
                cout<<"\t\t\t** Votre solde :"<<coinslot.getCoinAmount()<<" Cents **"<<endl<<endl;
    
       
       D: point_vent.searchSlot(selection)->drop();
       if(!dropcheck.productRealesed()){
       	    
         	goto D;
	   }
	   
	   
       coinslot.returnCoins(point_vent.getPrice(selection));
       coinslot.clear();
       cout<<"\t\t\t\t\t*** AU REVOIR ***"<<endl<<"\t\t\t\t\t***  MERCI POUR VOTRE VISITE  ***"<<endl<<endl<<endl;
       goto DD;
       }
       
       
       else{
       	cout<<"\t\t\t *** "<<point_vent.searchSlot(selection)->getProductName()<<" n est pas en cour disponible ***"<<endl<<"\t\t\t *** choisir un autre produit ***"<<endl<<endl;
       	goto DD;
	   }
   
    
	
		
	}
	

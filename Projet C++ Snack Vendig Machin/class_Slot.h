#ifndef class_Slot
#define class_Slot
#include<string>

using namespace std;

class Slot{
	protected:
		string productName;

		int id;

		int numProducts;

		int price;


	public:
	    Slot(const string &productNa,int slotId,int pri);
	    Slot();

		~Slot();

		virtual void drop() = 0;

		int getPrice();

		void setPrice(int pri);

		int getNumProducts();

		void setNumProducts(int numProd);

		int getId();

		string getProductName();

		void setProductName(string ProductNa);
};
#endif

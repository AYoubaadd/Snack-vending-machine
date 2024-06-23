
#ifndef class_CoinSlot

#define class_CoinSlot



class CoinSlot{
    private:
    	
        int insertedAmount;
        
        int coinValues[7];
				
    public:
    	CoinSlot();
	    int updateCoinAmount();
		
		int getCoinAmount();
		
		void clear();
		
		void returnCoins(int price);
	     
};
#endif

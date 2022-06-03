#pragma once
#include <iostream>
#include "Clothes.h"
using namespace std;


class ClothesBought : public Clothes {
private:
	string buyerID;
	int purchaseSatisfaction;
public:
	ClothesBought();
	ClothesBought(Clothes* clothes);
	ClothesBought(ClothesBought* clothesBought);
	void setpurchaseSatisfaction(int purchaseSatisfaction);
	int	 getpurchaseSatisfaction();
	void setbuyerID(string buyerID);
	string getbuyerID();
	bool operator <(ClothesBought& clothesBought);
};
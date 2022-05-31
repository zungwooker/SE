#include "Clothes.h"
#include "ClothesBought.h"
using namespace std;


ClothesBought::ClothesBought() {}

ClothesBought::ClothesBought(Clothes* clothes) {
	this->setsellerID(clothes->getsellerID());
	this->setname(clothes->getname());
	this->setcompany(clothes->getcompany());
	this->setprice(clothes->getprice());
	this->setquantity(clothes->getquantity());
	this->setstock(clothes->getstock());
}

void ClothesBought::setpurchaseSatisfaction(float purchaseSatisfaction) {
	this->purchaseSatisfaction = purchaseSatisfaction;
}

int ClothesBought::getpurchaseSatisfaction() {
	return this->purchaseSatisfaction;
}

void ClothesBought::setbuyerID(string buyerID) {
	this->buyerID = buyerID;
}

string ClothesBought::getbuyerID() {
	return this->buyerID;
}

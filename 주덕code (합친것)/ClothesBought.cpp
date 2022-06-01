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

ClothesBought::ClothesBought(ClothesBought* clothesBought) {
	this->setsellerID(clothesBought->getsellerID());
	this->setname(clothesBought->getname());
	this->setcompany(clothesBought->getcompany());
	this->setprice(clothesBought->getprice());
	this->setquantity(clothesBought->getquantity());
	this->setstock(clothesBought->getstock());
	this->setpurchaseSatisfaction(clothesBought->getpurchaseSatisfaction());
	this->setbuyerID(clothesBought->getbuyerID());
}

void ClothesBought::setpurchaseSatisfaction(int purchaseSatisfaction) {
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

bool ClothesBought::operator <(ClothesBought& clothesBought) {
	return this->getname() < clothesBought.getname();
}
#include "Clothes.h"
#include "ClothesSale.h"
#include "ShoppingSystem.h"

using namespace std;


ClothesSale::ClothesSale() {}

ClothesSale::ClothesSale(string sellerID, string name, string company, int price, int quantity) {
	this->setsellerID(sellerID);
	this->setname(name);
	this->setcompany(company);
	this->setprice(price);
	this->setquantity(quantity);
	this->setstock(quantity);
}

void ClothesSale::addClothes(string sellerID, string name, string company, int price, int quantity)
{
	ClothesSale* curClotheSale = new ClothesSale(sellerID, name, company, price, quantity);
}
#include "Clothes.h"
#include "ClothesSale.h"
#include "ShoppingSystem.h"

using namespace std;


ClothesSale::ClothesSale() {}

ClothesSale::ClothesSale(string name, string company, int price, int quantity, ShoppingSystem* shoppingSystem) {
	this->setsellerID(shoppingSystem->curID);
	this->setname(name);
	this->setcompany(company);
	this->setprice(price);
	this->setquantity(quantity);
	this->setstock(quantity);
}

void ClothesSale::addClothes(string name, string company, int price, int quantity, ShoppingSystem *shoppingSystem)
{
	ClothesSale* curClotheSale = new ClothesSale(name, company, price, quantity, shoppingSystem);
}
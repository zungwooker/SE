#include <iostream>
#include <fstream>
#include "CtrlAddNewClothes.h"
#include "UIAddNewClothes.h"
#include "ProductList.h"
#include "Clothes.h"
#include "ShoppingSystem.h"


UIAddNewClothes::UIAddNewClothes(){}

void UIAddNewClothes::startInterface() {}

void UIAddNewClothes::creasteNewClothes(string name, string company, int price, int quantity, ShoppingSystem* shoppingsystem)
{
	ofstream ofs;

	ofs.open(shoppingsystem->outputurl, ios::out | ios::app);
	ofs << "3.1. �Ǹ� �Ƿ� ���" << endl;
	if (shoppingsystem->ctrlAddNewClothes->addNewClothes(name, company, price, quantity, shoppingsystem)) {
		ofs << "> " << name << " " << company << " " << price << " " << quantity << endl << endl;
		ofs.close();
	}
	else
	{
		ofs << "> " << "��ǰ���� �ߺ��˴ϴ�." << endl << endl;
		ofs.close();
	}
}

#include <iostream>
#include <fstream>
#include "Clothes.h"
#include "UIGetClothesOnSale.h"
#include "ShoppingSystem.h"

using namespace std;

void UIGetClothesOnSale::startInterface(Clothes* clothes, ShoppingSystem* shoppingSystem) {
	ofstream ofs;
	ofs.open(shoppingSystem->outputurl, ios::out | ios::app);
	ofs << "3.2. ��� ��ǰ ��ȸ" << endl;
	//���Ͽ� �ֱ�

	for (int i = 0; i < 100; i++) {
		if (clothes[i].getsellerID().size() != 0) {
			ofs << "> " << clothes[i].getname() << " " << clothes[i].getcompany() << " "
				<< clothes[i].getprice() << " " << clothes[i].getquantity() << endl;
		}
		else
			break;
	}
	ofs << endl;
	ofs.close();
}

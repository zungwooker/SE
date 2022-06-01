#include <iostream>
#include <fstream>
#include "Clothes.h"
#include "UIGetSoldOutClothes.h"
#include "ShoppingSystem.h"

using namespace std;

void UIGetSoldOutClothes::startInterface(Clothes* clothes, ShoppingSystem* shoppingSystem)
{
	ofstream ofs;
	ofs.open("C:\\Users\\hanse\\OneDrive\\Desktop\\HW3\\output.txt", ios::out | ios::app);
	ofs << "3.3. 판매 완료 상품 조회" << endl;

	for (int i = 0; i < 100; i++) {
		if (clothes[i].getsellerID().size() != 0) {
			ofs << "> " << clothes[i].getname() << " " << clothes[i].getcompany() << " " << clothes[i].getprice() << " "
				<< clothes[i].getquantity() - clothes[i].getstock() << " " << clothes[i].getaveragePurchaseSatisfaction() << endl;
		}
		else
			break;
	}
	ofs << endl;
	ofs.close();

}

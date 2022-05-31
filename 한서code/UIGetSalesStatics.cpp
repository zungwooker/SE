#include <iostream>
#include <fstream>
#include "Clothes.h"
#include "UIGetSalesStatics.h"
#include "ShoppingSystem.h"

using namespace std;

void UIGetSalesStatics::startInterface(Clothes* clothes, ShoppingSystem* shoppingSystem)
{
	ofstream ofs;
	ofs.open("C:\\Users\\hanse\\OneDrive\\Desktop\\HW3\\output.txt", ios::out | ios::app);
	ofs << "5.1. 판매 상품 통계" << endl;

	//파일에 넣기
	for (int i = 0; i < 100; i++) {
		if (clothes[i].getsellerID() == shoppingSystem->curID) {
			ofs << "> " << clothes[i].getname() << " "
				<< clothes[i].getprice() * (clothes[i].getquantity() - clothes[i].getstock())
				<< " " << clothes[i].getaveragePurchaseSatisfaction() << endl << endl;
		}
		else
			break;

	}
	ofs.close();
}

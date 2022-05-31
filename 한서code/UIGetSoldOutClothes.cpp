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
	ofs << "3.3. �Ǹ� �Ϸ� ��ǰ ��ȸ" << endl;

	for (int i = 0; i < 100; i++) {
		// �Ǹ��� id ��
		// ��� 0 Ȯ��
		if (clothes[i].getsellerID() == shoppingSystem->curID) {
			if(clothes[i].getstock() == 0){
			ofs << "> " << clothes[i].getname() << " " << clothes[i].getcompany() << " " << clothes[i].getprice() << " "
				<< clothes[i].getquantity() - clothes[i].getstock() << " " << clothes[i].getaveragePurchaseSatisfaction() << endl << endl;
			}
		}
		else
			break;

	}
	ofs.close();
}

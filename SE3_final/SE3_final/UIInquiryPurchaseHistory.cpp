
#include <iostream>
#include <fstream>
#include "ClothesBought.h"
#include "UIInquiryPurchaseHistory.h"
#include "ShoppingSystem.h"
#include "MemberInfoDatabase.h"
#include <algorithm>

using namespace std;



void UIInquiryPurchaseHistory::startInterface(ClothesBought* clothesBought, ShoppingSystem* shoppingSystem) {
	ofstream ofs;
	ofs.open(shoppingSystem->outputurl, ios::out | ios::app);
	ofs << "4.3. 상품 구매 내역 조회" << endl;
	string curID = shoppingSystem->memberInfoDatabase->getCurID();
	//구매자 아이디 비교 사항 넣어야 함
	for (int i = 0; i < 100; i++) {
		if (clothesBought[i].getsellerID().size() != 0) {
			if (clothesBought[i].getbuyerID() == curID) {
				ofs << "> " << clothesBought[i].getsellerID() << " " << clothesBought[i].getname() << " " << clothesBought[i].getcompany() << " "
					<< clothesBought[i].getprice() << " " << clothesBought[i].getstock() << " " << clothesBought[i].getaveragePurchaseSatisfaction() << endl;
			}
		}
	}
	ofs << endl;
	ofs.close();
}
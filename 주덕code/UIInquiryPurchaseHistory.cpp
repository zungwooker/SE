#include <iostream>
#include <fstream>
#include "ClothesBought.h"
#include "UIInquiryPurchaseHistory.h"
using namespace std;



void UIInquiryPurchaseHistory::startInterface(ClothesBought* clothesBought) {
	ofstream ofs;
	ofs.open("C:\\Users\\한주덕\\Desktop\\SE_3_file\\fout.txt", ios::out | ios::app);
	ofs << "4.3. 상품 구매 내역 조회" << endl;
	//파일에 넣기
	//구매자 아이디 비교 사항 넣어야 함
	for (int i = 0; i < 100; i++) {
		if (clothesBought[i].getsellerID().size() != 0) {
			ofs << "> " << clothesBought[i].getsellerID() << " " << clothesBought[i].getname() << " " << clothesBought[i].getcompany() << " "
				<< clothesBought[i].getprice() << " " << clothesBought[i].getstock() << " " << clothesBought[i].getaveragePurchaseSatisfaction() << endl << endl;
		}
		else
			break;

	}
	ofs.close();
}
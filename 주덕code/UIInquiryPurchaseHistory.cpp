#include <iostream>
#include <fstream>
#include "ClothesBought.h"
#include "UIInquiryPurchaseHistory.h"
using namespace std;



void UIInquiryPurchaseHistory::startInterface(ClothesBought* clothesBought) {
	ofstream ofs;
	ofs.open("C:\\Users\\���ִ�\\Desktop\\SE_3_file\\fout.txt", ios::out | ios::app);
	ofs << "4.3. ��ǰ ���� ���� ��ȸ" << endl;
	//���Ͽ� �ֱ�
	//������ ���̵� �� ���� �־�� ��
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
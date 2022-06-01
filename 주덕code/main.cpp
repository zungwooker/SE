#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <list>
#include "CtrlSearchClothes.h"
#include "ProductList.h"
#include "Clothes.h"
#include "UISearchClothes.h"
#include "CtrlBuy.h"
#include "UIBuy.h"
#include "PurchaseHistoryList.h"
#include "CtrlInquiryPurchaseHistory.h"
#include "CtrlEvaluateSatisfaction.h"
#include "UIEvaluateSatisfaction.h"
#include "ShoppingSystem.h"
#include "UIinit.h"
#include "UIProfile.h"

using namespace std;

/*    ���� ���� ���

        ���� ������ uiclass�� �Ʒ��� ���� �ۼ�

       #include <fstream>
       ofstream ofs;
       ofs.open("C:\\Users\\���ִ�\\Desktop\\SE_3_file\\fout.txt", ios::out | ios::app); ��δ� �˾Ƽ� �ٲٱ�
       open�� �׻� path ��ġ�ؾ���
       ofs<< "~~~~~"<< endl; ��ó�� �ۼ��ϸ� ��
*/


void doTask();
int menuSwitch(string line, ShoppingSystem* shoppingSystem);

int main(void) {
    doTask();
}

void doTask(void) {
    
    ShoppingSystem* shoppingSystem = new ShoppingSystem;
    string line;
    ifstream file;
    file.open("C:\\Users\\���ִ�\\Desktop\\SE_3_file\\fin.txt"); // �д� ���� open

    int is_program_exit = 1;

    while (is_program_exit) {//���پ� �д� ����
        getline(file, line);
        is_program_exit = menuSwitch(line, shoppingSystem); // menuSwitch�� return ���� �׻� 1�̾�� �ݺ�
        // �޴� ��ȣ�� 6�϶��� return ���� 0
    }
}

int menuSwitch(string line, ShoppingSystem* shoppingSystem) //switch �� �ش��ϴ� �Լ� ���
{
    //�����Ҷ� �����ͺ��̽� �ʿ��Ѱ� ����� ����

    //shoppingSystem service; // ��� ��ü�� ���� �� �ϳ��� ����
    //shoppingSystem* curService = &service; // ���� ������
    int menu_level_1 = 0, menu_level_2 = 0;
    istringstream ss(line);
    string stringBuffer;

    //���� ���忡�� slice �ؼ� �Է°� ���
    vector<string> x;
    x.clear();
    while (getline(ss, stringBuffer, ' ')) {
        x.push_back(stringBuffer);
    }


    stringstream ssInt1(x[0]);
    stringstream ssInt2(x[1]);
    ssInt1 >> menu_level_1;
    ssInt2 >> menu_level_2;

    /*  ������� ���
     x[0] �� �޴� 1, x[1] �� �޴� 2
     �Է°��� ���� �Ѵٸ� �߰������� x[2], x[3]
     x[~] ���� string�̾ int�� �ٲٷ���
     ����: x[3] string ���� int������ �����ϴ� ��
     int point;
     stringstream prmeter2(x[3]);
     prmeter2 >> point;

    */

    switch (menu_level_1)
    {
    case 1:
        switch (menu_level_2)
        {
        case 1: // ȸ������
            shoppingSystem->uiInit->signUp(shoppingSystem, x[2], x[3], x[4], x[5]);
            return 1;

        case 2: // ȸ��Ż��
            shoppingSystem->uiProfile->withdrawal(shoppingSystem);
            return 1;

        default:
            return 1;
        }
        return 1;
    case 2:
        switch (menu_level_2)
        {
        case 1: // �α���
            shoppingSystem->uiInit->logIn(shoppingSystem, x[2], x[3]);
            return 1;

        case 2: //�α׾ƿ�
            shoppingSystem->uiProfile->logOut(shoppingSystem);
            return 1;

        default:
            return 1;
        }
        return 1;
    case 3:
        switch (menu_level_2)
        {
        case 1:
            /* code */
            return 1;

        case 2:
            /* code */
            return 1;

        case 3:
            /* code */
            return 1;

        default:
            return 1;
        }
    case 4:
        switch (menu_level_2)
        {
        case 1:
            /* codeCtrlSearchClothes* ctrlSearchClothes = new CtrlSearchClothes();
            database->curClothes =
            ctrlSearchClothes->uiSearchClothes->
            searchGoods(x[2], ctrlSearchClothes, database->productList);
             */
        {
            shoppingSystem->uiSearchClothes->searchGoods(x[2],shoppingSystem);
            return 1; 
        }

        case 2:
            /* code */
        {
            shoppingSystem->uiBuy->buyIt(shoppingSystem);
            return 1;
        }
            

        case 3:
            /* code */
        {
            shoppingSystem->ctrlInquiryPurchaseHistory = new CtrlInquiryPurchaseHistory(shoppingSystem);

            return 1;
        }
            

        case 4:
            /* code */
        {
            string prmeter1 = x[2];
            int point;
            stringstream prmeter2(x[3]);
            prmeter2 >> point;
            shoppingSystem->uiEvaluateSatisfaction->evaluetePurchaseStf(prmeter1, point, shoppingSystem);
            return 1;
        }
            
        default:
            return 1;
        }

    case 5:
        switch (menu_level_2)
        {
        case 1:
            /* code */
            return 1;

        default:
            return 1;
        }

    case 6:
        switch (menu_level_2)
        {
        case 1:
            /* code */
            return 0;

        default:
            break;
        }

    default:
        return 1;
    }
}
    

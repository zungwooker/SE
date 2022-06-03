#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <list>
#include "ShoppingSystem.h"
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
#include "UIAddNewClothes.h"
#include "CtrlGetClothesOnSale.h"
#include "CtrlGetSoldOutClothes.h"
#include "CtrlGetSaleStatics.h"
#include "UIinit.h"
#include "UIProfile.h"

using namespace std;


void doTask();
int menuSwitch(string line, ShoppingSystem* shoppingSystem);

int main(void) {
    doTask();
}

void doTask(void) {
    
    ShoppingSystem* shoppingSystem = new ShoppingSystem;
    string line;
    ifstream file;
    
    file.open("input.txt", ios::in);
    
    int is_program_exit = 1;
    
    while (is_program_exit) {
        getline(file, line);
        is_program_exit = menuSwitch(line, shoppingSystem);

    }
    
}

int menuSwitch(string line, ShoppingSystem* shoppingSystem)
{
    
    int menu_level_1 = 0, menu_level_2 = 0;
    istringstream ss(line);
    string stringBuffer;
    ofstream ofs;

    vector<string> x;
    x.clear();
    while (getline(ss, stringBuffer, ' ')) {
        x.push_back(stringBuffer);
    }

    stringstream ssInt1(x[0]);
    stringstream ssInt2(x[1]);
    ssInt1 >> menu_level_1;
    ssInt2 >> menu_level_2;


    switch (menu_level_1)
    {
    case 1:
        switch (menu_level_2)
        {
        case 1:
           shoppingSystem->uiInit->signUp(shoppingSystem, x[2], x[3], x[4], x[5]);
            return 1;

        case 2:
            shoppingSystem->uiProfile->withdrawal(shoppingSystem);
            return 1;

        default:
            return 1;
        }
        return 1;
    case 2:
        switch (menu_level_2)
        {
        case 1:
            shoppingSystem->uiInit->logIn(shoppingSystem, x[2], x[3]);
            return 1;

        case 2:
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
        {
            int price;
            int quantity;
            stringstream prmeter1(x[4]);
            stringstream prmeter2(x[5]);
            prmeter1 >> price;
            prmeter2 >> quantity;
            shoppingSystem->uiAddNewClothes->creasteNewClothes(x[2], x[3], price, quantity, shoppingSystem);
            return 1;
        }
        case 2:
            /* code */
        {
            shoppingSystem->ctrlGetClothesOnSale = new CtrlGetClothesOnSale(shoppingSystem);
            return 1;
        }
        case 3:
            /* code */
        {
            shoppingSystem->ctrlGetSoldOutClothes = new CtrlGetSoldOutClothes(shoppingSystem);
            return 1;
        }

        default:
            return 1;
        }
    case 4:
        switch (menu_level_2)
        {
        case 1:
        {
            shoppingSystem->uiSearchClothes->searchGoods(x[2], shoppingSystem);
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
        {
            shoppingSystem->ctrlGetSaleStatics = new CtrlGetSaleStatics(shoppingSystem);
            return 1;
        }

        default:
            return 1;
        }


    case 6:
        switch (menu_level_2)
        {
        case 1:
            /* code */
            ofs.open(shoppingSystem->outputurl, ios::out | ios::app);
            ofs << "6.1 Á¾·á" << endl;
            ofs.close();
            return 0;

        default:
            break;
        }

    default:
        return 1;
    }
}


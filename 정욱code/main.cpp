#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <list>
#include "ShoppingSystem.h"
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
    
    file.open("C:\\Users\\blair\\Desktop\\input.txt", ios::in);
    
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
            // shoppingSystem->uiSearchClothes->searchGoods(x[2],shoppingSystem);
            return 1;
        }

        case 2:
            /* code */
        {
            // shoppingSystem->uiBuy->buyIt(shoppingSystem);
            return 1;
        }


        case 3:
            /* code */
        {
            //shoppingSystem->ctrlInquiryPurchaseHistory = new CtrlInquiryPurchaseHistory(shoppingSystem);

            return 1;
        }


        case 4:
            /* code */
        {
            /*
            string prmeter1 = x[2];
            int point;
            stringstream prmeter2(x[3]);
            prmeter2 >> point;
            shoppingSystem->uiEvaluateSatisfaction->evaluetePurchaseStf(prmeter1, point, shoppingSystem);
            */
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


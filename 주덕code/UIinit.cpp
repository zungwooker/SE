#include <fstream>
#include <iostream>
#include "UIinit.h"
#include "ShoppingSystem.h"
#include "member.h"
using namespace std;

void UIinit::signUp(ShoppingSystem* curService, string name, string personalCode, string id, string password){
    ofstream ofs;

    printf("UIinit::signUp called.\n");

    ofs.open("C:\\Users\\Seo Jungwook\\Desktop\\output.txt", ios::out | ios::app);
    ofs << "1.1. 회원가입" << endl;
    ofs << name << " " << personalCode << " " << id << " " << password << "\n" << endl;

    member newbie;
    newbie.name = name;
    newbie.personalCode = personalCode;
    newbie.id = id;
    newbie.password = password;

    curService->memberManagement->addNewMember(curService, newbie);
};

void logIn(string& id, string& password){

};
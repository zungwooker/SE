#include <fstream>
#include <iostream>
#include "MemberInfoDatabase.h"
#include "ShoppingSystem.h"
#include "CtrlMemberManagement.h"

int MemberInfoDatabase::doesExistMember(ShoppingSystem* curService, member newbie){
    printf("MemberInfoDatabase::doesExistMember called.\n");

    ofstream ofs;
    int exist = 0;

    ofs.open("C:\\Users\\Seo Jungwook\\Desktop\\output.txt", ios::out | ios::app);
    
    for(int i=0; i<memberList.size(); i++){
        if(memberList[i].id == newbie.id || memberList[i].personalCode == newbie.personalCode){
            ofs << "이미 등록된 회원입니다." << curID << endl;
            exist = 1;
        }
    }

    return exist;
};

void MemberInfoDatabase::addMember(ShoppingSystem* curService, member newbie){
    printf("MemberInfoDatabase::addMember called.\n");
    
    memberList.push_back(newbie);
};

void MemberInfoDatabase::logInInfoCheck(ShoppingSystem* curService, member logInInfo){
    printf("MemberInfoDatabase::logInInfoCheck called.\n");

    int logInSuccess = 0;

    for(int i=0; i<memberList.size(); i++){
        if(memberList[i].id == logInInfo.id && memberList[i].personalCode == logInInfo.password){
            curID = memberList[i].id;
            logInSuccess = 1;
            break;
        }
    }

    if(!logInSuccess){

    }
};

void MemberInfoDatabase::logOutCheck(ShoppingSystem* curService){
    printf("MemberInfoDatabase::logOutCheck called.\n");

    ofstream ofs;

    if(curID != "none"){
        ofs.open("C:\\Users\\Seo Jungwook\\Desktop\\output.txt", ios::out | ios::app);
        ofs << ">" << curID << endl;
        curID = "none";
    }
    else{
        ofs.open("C:\\Users\\Seo Jungwook\\Desktop\\output.txt", ios::out | ios::app);
        ofs << "로그인 상태가 아닙니다.\n" << curID << endl;
    }
}

void MemberInfoDatabase::withdrawalCheck(ShoppingSystem* curService){
    printf("MemberInfoDatabase::withdrawalCheck called.\n");

    ofstream ofs;
    ofs.open("C:\\Users\\Seo Jungwook\\Desktop\\output.txt", ios::out | ios::app);

    if(curID == "none"){
        ofs << "로그인 상태가 아닙니다.\n" << curID << endl;
        return;
    }

    ofs << ">" << curID << endl;

    for(int i=0; i<memberList.size(); i++){
        if(curID == memberList[i].id){
            memberList.erase(memberList.begin() + i);
            curID = "none";
            break;
        }
    }
}

string MemberInfoDatabase::getCurID(){
    printf("MemberInfoDatabase::getCurID called.\n");

    return curID;
}
#include <iostream>
#include <string>
#include "datatype.h"

using namespace std;

class UIinit
{
private:
    
public:
    UIinit(/* args */);
    ~UIinit();

    member signUp(string& name, string& personalCode, string& id, string& password, FILE* out_fp, shoppingSystem* curService){
        member newbie;
        newbie.name = name;
        newbie.personalCode = personalCode;
        newbie.id = id;
        newbie.password = password;

        fprintf(out_fp, "1.1. 회원가입\n");
        fprintf(out_fp, "> %s %s %s %s\n\n", name, personalCode, id, password);

        curService.CtrlMemberManagement.add();

        return newbie;
    };

    void logIn(string& id, string& password){
        
    };
};

UIinit::UIinit(/* args */)
{
}

UIinit::~UIinit()
{
}

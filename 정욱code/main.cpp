#include <iostream>
#include <string>
#include "UIinit.cpp"
#include "datatype.h"
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

int main(void){
    doTask();
}

void doTask(void){
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    int menu_level_1 = 0, mene_level_2 = 0;
    int is_program_exit = 0;

    member tmpMemberInfo;
    
    shoppingSystem service; // 모든 객체가 포함 된 하나의 서비스
    shoppingSystem* curService = &service;

    while(!is_program_exit)
    {
        fscanf(in_fp, "%d %d", &menu_level_1, &mene_level_2);

        switch (menu_level_1)
        {
            case 1:
                switch (mene_level_2)
                {
                    case 1: // 회원가입
                        fscanf(in_fp, "%s %s %s %s", &tmpMemberInfo.name, &tmpMemberInfo.personalCode, &tmpMemberInfo.id, &tmpMemberInfo.id);
                        service.init.signUp(tmpMemberInfo.name, ... ,curService);
                        break;

                    case 2: // 회원탈퇴
                        /* code */
                        break;

                    default:
                        break;
                }
                break;
            case 2:
                switch (mene_level_2)
                {
                    case 1: // 로그인
                        /* code */
                        break;

                    case 2: //로그아웃
                        /* code */
                        break;

                    default:
                        break;
                }
                break;
            case 3:
                switch (mene_level_2)
                {
                    case 1:
                        /* code */
                        break;

                    case 2:
                        /* code */
                        break;

                    case 3:
                        /* code */
                        break;

                    default:
                        break;
                }
            case 4:
                switch (mene_level_2)
                {
                    case 1:
                        /* code */
                        break;

                    case 2:
                        /* code */
                        break;

                    case 3:
                        /* code */
                        break;

                    case 4:
                        /* code */
                        break;

                    default:
                        break;
                }

            case 5:
                switch (mene_level_2)
                {
                    case 1:
                        /* code */
                        break;

                    default:
                        break;
                }
            
            case 6:
                switch (mene_level_2)
                {
                    case 1:
                        /* code */
                        break;

                    default:
                        break;
                }

            default:

        }
    }
}
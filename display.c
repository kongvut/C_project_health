#include <stdio.h>
#include "admin.c"

display(){

    printf("      ********************************************************************\n");
    printf("      *                                                                  *\n");
    printf("      *      **  **                                          **  **      *\n");
    printf("      *     ********              W E L C O M E             ********     *\n");
    printf("      *      ******                     To                   ******      *\n");
    printf("      *       ****             HEALTH CARE PROGRAM            ****       *\n");
    printf("      *        **                                              **        *\n");
    printf("      *                    >> SIGN UP <<    PRESS 1                      *\n");
    printf("      *                    >> LOG IN  <<    PRESS 2                      *\n");
    printf("      *                                                                  *\n");
    printf("      *                                                                  *\n");
    printf("      *                                                                  *\n");
    printf("      ********************************************************************\n");
    printf("      *%20s>> ADMIN MODE   PRESS 0 <<%20s*", "" , "");
}

choose_menu(){
    char menu;
    login :
    while(1){
        display();
        menu = getch();
        if(menu == '1'){
            signup();
            break;
        }else if(menu == '2'){
            login();
            break;
        }else if(menu == '0'){
            system("cls");
            admin();
            fflush(stdin);
            system("cls");
            goto login;
        }else{
            printf("\nError Login\n");
        }
    }

}

#include <stdio.h>

display(){

    printf("*******************************************************************\n");
    printf("*                                                                 *\n");
    printf("*      **  **                                          **  **     *\n");
    printf("*     ********              W E L C O M E             ********    *\n");
    printf("*      ******                     To                   ******     *\n");
    printf("*       ****             HEALTH CARE PROGRAM            ****      *\n");
    printf("*        **                                              **       *\n");
    printf("*                    >> SIGN UP <<    PRESS 1                     *\n");
    printf("*                    >> LOG IN  <<    PRESS 2                     *\n");
    printf("*                                                                 *\n");
    printf("*                                                                 *\n");
    printf("*                                                                 *\n");
    printf("*******************************************************************\n");

}

choose_menu(){
    char menu;

    while(1){
        display();
        menu = getch();
        if(menu == '1'){
            signup();
            break;
        }else if(menu == '2'){
            login();
            break;
        }else{
            printf("\nError Login\n");
        }
    }

}

#include <stdio.h>


app(){
    char choose;

    printf("*** C H O O S E   P R O G R A M ***\n");
    printf(">> Health checking                    PRESS 1\n");
    printf(">> Exercise Intensity Calculator      PRESS 2\n");
    printf(">> Calories Calculator                PRESS 3\n");
    printf(">> Food Calories Checking             PRESS 4\n");
    printf(">> Your Statistic                     PRESS 5\n\n");
    printf(">> BACK TO MENU                       PRESS 0");
    choose = getch();
    if(choose == '0'){
        system("cls");
        choose_menu();
    }
    /*else if(choose == '1'){
        choose_menu();
    }*/
}

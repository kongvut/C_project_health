#include <stdio.h>
#include "app1.c"
#include "app2.c"
#include "app3.c"

app(float user_age){
    char choose;

    printf("\n     *** C H O O S E   P R O G R A M ***\n\n");
    printf(">> Health checking                    PRESS 1\n");
    printf(">> Exercise Intensity Calculator      PRESS 2\n");
    printf(">> Calories Calculator                PRESS 3\n");
    printf(">> Your Statistic                     PRESS 4\n\n");
    printf(">> BACK TO MENU                       PRESS 0");
    choose = getch();
    if(choose == '0'){
        system("cls");
        choose_menu();
    }
    else if(choose == '1'){
        system("cls");
        app1(user_age);
    }
    else if(choose == '2'){
        system("cls");
        app2(user_age);
    }
    else if(choose == '3'){
        system("cls");
        app3(user_age);
    }
}

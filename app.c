#include <stdio.h>
#include "app1.c"
#include "app2.c"
#include "app3.c"
#include "app4.c"
#include "time.c"

extern char g_fname[200], g_user[100], g_sex;

app(){
    char choose;

    choose_app :
    printf("\n\n*********************************************\n\n");
    printf("Current Time : ");
    puts(time_now());
    printf("Username : %s | Name : %s | Sex : %s",g_user, g_fname, (g_sex == '1' ? "Male" : "Female"));
    printf("\n\n*********************************************\n\n");
    printf("\n     *** C H O O S E   P R O G R A M ***\n\n");
    printf(">> Health checking                    PRESS 1\n");
    printf(">> Exercise Intensity Calculator      PRESS 2\n");
    printf(">> Calories Calculator                PRESS 3\n");
    printf(">> Your Statistic                     PRESS 4\n\n");
    printf(">> Logout                             PRESS 0");

    choose = getch();
    if(choose == '0'){
        system("cls");
        choose_menu();
    }
    else if(choose == '1'){
        system("cls");
        app1 :
        app1();
        printf("\n\n\n\t\t***************************************");
        printf("\n\t\t\tPress 1 Re-Calculate");
        printf("\n\t\t\tPress 0 Go to main menu\n");
        choose = getch();
        if(choose=='1'){
            system("cls");
            goto app1;
        }
        else{
            system("cls");
            fflush(stdin);
            goto choose_app;
        }
    }
    else if(choose == '2'){
        system("cls");
        app2 :
        choose = app2();

        if(choose=='x'){
            system("cls");
            fflush(stdin);
            goto choose_app;
        }else{
            printf("\n\n\n\t\t***************************************");
            printf("\n\t\t\tPress 1 Re-Calculate");
            printf("\n\t\t\tPress 0 Go to main menu\n");

           choose = getch();
           if(choose=='1'){
                system("cls");
                goto app2;
            }
            else{
                system("cls");
                fflush(stdin);
                goto choose_app;
            }
        }
    }
    else if(choose == '3'){
        system("cls");
        app3 :
        app3();
        printf("\n\n\n\t\t***************************************");
        printf("\n\t\t\tPress 1 Re-Calculate");
        printf("\n\t\t\tPress 0 Go to main menu\n");
        choose = getch();
       if(choose=='1'){
            system("cls");
            goto app3;
        }
        else{
            system("cls");
            fflush(stdin);
            goto choose_app;
        }
    }
    else if(choose == '4'){
        system("cls");
        app4 :
        app4();
        printf("\n\n\n\t\t***************************************");
        printf("\n\t\t\tPress 1 New choose");
        printf("\n\t\t\tPress 0 Go to main menu\n");
        choose = getch();
       if(choose=='1'){
            system("cls");
            goto app4;
        }
        else{
            system("cls");
            fflush(stdin);
            goto choose_app;
        }
    }


    while(choose != 1 && choose != 2 && choose != 3 && choose != 4 && choose != 0){
        system("cls");
        goto choose_app;
    }

}

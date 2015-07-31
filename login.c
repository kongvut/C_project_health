#include <stdio.h>
#include "app.c"

login(){
    char menu;
    char user[100], pass[100];
    printf("\n\t\t\t\tLOG IN \n");
    printf("\n\t\t***************************************\n\n");
    printf("\t\tUsername : ");
    scanf("%s", user);
    printf("\t\tPassword : ");
    scanf("%s", pass);
    float user_age = 18;
    welcome();
    menu = getch();
    if(menu){
        system("cls");
        app(user_age);
    }
}
welcome(){
    printf("\n\t    * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\t    *                                             *\n");
    printf("\t    *             !! W E L C O M E !!             *\n");
    printf("\t    *                                             *\n");
    printf("\t    *                                             *\n");
    printf("\t    *         PRESS ANY KEY TO CONTINUE. . .      *\n");
    printf("\t    * * * * * * * * * * * * * * * * * * * * * * * *\n");
}

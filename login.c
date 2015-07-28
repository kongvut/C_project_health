#include <stdio.h>
#include "app.c"
login(){
    char menu;
    char user[100], pass[100];
    printf("\nLOG IN \n");
    printf("Username : ");
    scanf("%s", user);
    printf("Password : ");
    scanf("%s", pass);

    welcome();
    menu = getch();
    if(menu){
        system("cls");
        app();
    }
}
welcome(){
    printf("\n* * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("*                                             *\n");
    printf("*       !! W E L C O M E   B A C K !!         *\n");
    printf("*                                             *\n");
    printf("*                                             *\n");
    printf("*         PRESS ANY KEY TO CONTINUE. . .      *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * *\n");
}

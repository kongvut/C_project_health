#include <stdio.h>
#include "app.c"

login(){

    FILE *fp ;
    int n;
    char ch, path[50], password[100];
    char menu;
    char user[100], pass[100], userfile[100];

    login :
    n=0;
    strcpy(path,"db/pass/");

    printf("\n\t\t\t\tLOG IN \n");
    printf("\n\t\t***************************************\n\n");
    printf("\t\tUsername : ");
    gets(user);
    strcpy(userfile, user);
    printf("\t\tPassword : ");
    gets(pass);
    strcat(user,pass);

    strcat(userfile, ".db");
    strcat(path, userfile);
    //printf("%s", path);

    fp = fopen(path,"r");
    if(fp == NULL){
		//printf("Open file Error\a");
		//return(101);

		printf("\n\t\t\tCan't login try again \n");
        printf("\n\t\t***************************************\n\n");
        goto login;
    }
    ch = getc(fp);
    while(ch!=EOF){
        if(ch!='\n'){
        password[n]=ch;
        n++;}
    ch = getc(fp);
    }
    password[n]='\0';
    fclose(fp);

    //printf("%s", user);

    if(strcmp(user, password)==0){
        float user_age = 18;
        welcome();
        menu = getch();
        if(menu){
            system("cls");
            app(user_age);
        }
    }else
        printf("\n\t\t\tCan't login try again \n");
        printf("\n\t\t***************************************\n\n");
        goto login;
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

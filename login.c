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

    printf("\n\t\t\t\t    LOG IN \n");
    printf("\n\t\t    ***************************************\n\n");
    printf("\t\t    Username : ");
    gets(user);
    //user = aa
    strcpy(userfile, user);
    //keep global value
    strcpy(g_user, user);

    printf("\t\t    Password : ");
    gets(pass);
    //pass = 123
    strcat(user,pass);
    //user = aa123

    strcat(userfile, ".db");
    //userfile = aa.db
    strcat(path, userfile);
    //path = db/pass/aa.db
    //printf("%s", path);

    fp = fopen(path,"r");
    if(fp == NULL){
		//printf("Open file Error\a");
		//return(101);

		printf("\n\t\t\t    Can't login try again \n");
        printf("\n\t\t    ***************************************\n\n");
        goto login;
    }

    ch = getc(fp);
    while(ch!=EOF){
        if(ch!='\n'){
            password[n]=ch;
            n++;
        }
    ch = getc(fp);
    }
    password[n]='\0';
    fclose(fp);

    //printf("%s", password);
    if(strcmp(user, password)==0){
        //keep global value
        strcpy(path,"db/info/");
        strcat(path, userfile);
        fp = fopen(path,"r");
        n=0; int chk_val = 0;
        ch = getc(fp);
        while(ch!=EOF){
            if(ch=='\n'){
                g_fname[n]='\0';
                chk_val=1;
            }
            if(chk_val==0){
                g_fname[n]=ch;
            }else{
                g_sex = ch;
            }
        n++;
        ch = getc(fp);
        }
        fclose(fp);
        //End Keep
        system("cls");
        welcome();
        menu = getch();
        if(menu){
            system("cls");
            app();
        }
    }else{
        printf("\n\t\t\t    Can't login try again \n");
        printf("\n\t\t    ***************************************\n\n");
        goto login;
    }
}
welcome(){
    printf("\n\t\t * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t *                                             *\n");
    printf("\t\t *             !! W E L C O M E !!             *\n");
    printf("\t\t *                                             *\n");
    printf("\t\t *                                             *\n");
    printf("\t\t *         PRESS ANY KEY TO CONTINUE. . .      *\n");
    printf("\t\t * * * * * * * * * * * * * * * * * * * * * * * *\n");
}

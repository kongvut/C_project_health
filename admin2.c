#include<stdio.h>
#include <dirent.h>

admin(){
    FILE *fp;
    char ch,list[500000],path[100];
    char path2[100],user;
    int ret;
    int n;
    n = 0;
    strcpy(path,"db/user.db");

    printf("      ********************************************************************\n");
    printf("      *                                                                  *\n");
    printf("      *                                                                  *\n");
    printf("      *                           W E L C O M E                          *\n");
    printf("      *                     A D M I N I S T R A T O R                    *\n");
    printf("      *                                                                  *\n");
    printf("      ********************************************************************\n");


    printf("        ************************* MEMBER LIST ****************************\n");
    fp = fopen(path,"r");
        ch = getc(fp);
        while(ch!=EOF){
            if(ch!='\n'){
            list[n]=ch;
            n++;
            }
            else{
            list[n]=' ,';
            n++;
            }
        ch = getc(fp);
        }
        list[n]='\0';
    fclose(fp);
    printf("\t\t%s",list);

    FILE *us;
    us = fopen(path2,"r");
    printf("\n\t\t       Typing Username require to remove : ");
    scanf("%s" ,user);
    strcpy(path2,"db/pass/");
    strcat(path2, user);
    strcat(path2, ".db");
    ret = remove(path2);
    if(ret == 0) {
      printf("\t\tDeleted User&Pass successfully\n");
    }
    else {
      printf("\t\tError: unable to delete the file\n");
    }
    fclose(us);

    /*printf("\n                         Enter username : ");
    gets(user);

    strcpy(path2,"db/pass/");

    strcat(path2,user);

    strcat(path2,".db");

    ret = remove(path2);
    if(ret == 0) {
      printf("\t\tDeleted successfully\n");
    }
    else {
      printf("\t\tNo data...\n");
    }

    /*if(remove(us)!=0)
        printf("Error deleting user");
    else
        printf("File successfully deleted");
        return 0;*/
}


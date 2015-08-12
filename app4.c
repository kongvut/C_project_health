#include <stdio.h>

extern char g_user[100];

app4(){
    char choose, path[100], app_name[20],ch;
    FILE *fp;
    printf("\n\n\t* * * * * * * * * * * * * * * * * * *\n");
    printf("\t*                                   *\n");
    printf("\t*         HEALTH STATISTIC          *\n");
    printf("\t*                                   *\n");
    printf("\t* * * * * * * * * * * * * * * * * * *\n\n");
    printf(">> Health checking                    PRESS 1\n");
    printf(">> Exercise Intensity Calculator      PRESS 2\n");
    printf(">> Calories Calculator                PRESS 3\n");
    printf("\t\tChoose statistic : ");
    scanf("%c", &choose);

    if(choose == '1'){
        strcpy(app_name, "_app1");
    }
    else if(choose == '2'){
        strcpy(app_name, "_app2");
    }
    else if(choose == '3'){
        strcpy(app_name, "_app3");
    }

    strcpy(path,"db/app/");
    strcat(path, g_user);
    strcat(path, app_name);
    strcat(path, ".db");
    fp = fopen(path,"r");
    //printf("%s", path);
    printf("\n\n\n\t\t***************************************\n\n");
    if(fp == NULL){
        printf("\t\tNo Your history data!\n\n\a");
    }else{
        ch = getc(fp);
        while(ch!=EOF){
            printf("%c",ch);
            ch = getc(fp);
        }
    }
    fclose(fp);
}

#include <stdio.h>

signup(){
    FILE *fp;
    char user[100], pass1[100], pass2[100], fname[200], path[50], userfile[100], confirm;
    int sex;
    //float height, weight;

    signup :
    strcpy(path,"db/pass/");

    printf("\n\t\t\t\t    SIGN UP\n");
    printf("\n\t\t    ***************************************\n");
    printf("\n\t\t    Username : ");
    gets(user);
    //user=aa
    strcpy(userfile, user);

    //check username duplicate
    strcat(userfile, ".db");
    //userfile = aa.db
    strcat(path, userfile);

    fp = fopen(path,"r");
    if(fp != NULL){
        system("cls");
        printf("\n\t\t    Username is already registered. Try again \n");
        printf("\n\t\t    ***************************************\n\n");
        goto signup;
    }
    fclose(fp);

    do{
        printf("\t\t    Password : ");
        gets(pass1);
        printf("\t\t    Re-Password : ");
        gets(pass2);
    }while(strcmp(pass1, pass2)!=0);

    printf("\t\t    Name : ");
    gets(fname);
    do{
        printf("\t\t    Gender (male = 1, female = 2) : ");
        scanf("%d", &sex);
    }while(sex != 1 && sex != 2);

    printf("\n\t\t    ***************************************");
    printf("\n\t\t\t    Press 1 To Confirm");
    printf("\n\t\t\t    Press 0 To Clear\n");
    while(1){
        confirm = getch();
        if(confirm == '1'){
            //add member
            fp = fopen(path,"w+");
                fprintf(fp,"%s\n",user);
                fprintf(fp,"%s",pass1);
            fclose(fp);

            strcpy(path,"db/info/");
            strcat(path, userfile);
            fp = fopen(path,"w+");
                fprintf(fp,"%s\n",fname);
                fprintf(fp,"%d",sex);
            fclose(fp);

            system("cls");
            fflush(stdin);
            login();
            break;
        }
        else if(confirm == '0'){
            system("cls");
            fflush(stdin);
            goto signup;
            break;
        }
        else{
            printf("\n\t\t    ***************************************");
            printf("\n\t\t\t    Press 1 To Confirm");
            printf("\n\t\t\t    Press 0 To Clear\n");
        }
    }


}

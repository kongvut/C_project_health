#include <stdio.h>

signup(){
    FILE *fp;
    char user[100], pass1[100], pass2[100], fname[200], path[50], userfile[100], confirm;
    int sex;
    //float height, weight;

    signup :
    strcpy(path,"db/pass/");

    printf("\n\t\t\t\tSIGN UP\n");
    printf("\n\t\t***************************************\n");
    printf("\n\t\tUsername : ");
    gets(user);
    strcpy(userfile, user);

    //check username duplicate
    strcat(userfile, ".db");
    //userfile = aa.db
    strcat(path, userfile);
    //printf("%s", path);

    fp = fopen(path,"r");
    if(fp != NULL){
        system("cls");
        printf("\n\t\tUsername is already registered. Try again \n");
        printf("\n\t\t***************************************\n\n");
        goto signup;
    }
    fclose(fp);

    do{
        printf("\t\tPassword : ");
        gets(pass1);
        printf("\t\tRe-Password : ");
        gets(pass2);
    }while(strcmp(pass1, pass2)!=0);

    printf("\t\tName : ");
    gets(fname);
    do{
        printf("\t\tGender (male = 1, female = 2) : ");
        scanf("%d", &sex);
    }while(sex != 1 && sex != 2);

    /*
    printf("\t\tAge : ");
    scanf("%d", &age);
    printf("\t\tHeight (cm) : ");
    scanf("%f", &height);
    printf("\t\tWeight (Kg) : ");
    scanf("%f", &weight);
    */

    printf("\n\t\t***************************************");
    printf("\n\t\t\tPress 1 To confirm");
    printf("\n\t\t\tPress 0 To clear\n");
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
        }
        else if(confirm == '0'){
            system("cls");
            goto signup;
        }

}

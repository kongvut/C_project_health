#include <stdio.h>

signup(){
    char user[100], pass1[100], pass2[100], name[200], confirm;
    int sex, age;
    float height, weight;
    printf("\n\t\t\t\tSIGN UP\n");
    printf("\n\t\t***************************************\n");
    printf("\n\t\tUsername : ");
    scanf("%s", user);
    printf("\t\tPassword : ");
    scanf("%s", pass1);
    printf("\t\tRe-Password : ");
    scanf("%s", pass2);
    printf("\t\tName : ");
    scanf("%s", name);
    printf("\t\tGender (male = 1, female = 2) : ");
    scanf("%d", &sex);
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
            system("cls");
            login();
        }
        else if(confirm == '0'){
            system("cls");
            signup();
        }

}

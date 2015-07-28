#include <stdio.h>

signup(){
    char user[100], pass1[100], pass2[100], name[200];
    int sex, age;
    float height, weight;
    printf("\nSIGN UP");
    printf("\nUsername : ");
    scanf("%s", user);
    printf("Password : ");
    scanf("%s", pass1);
    printf("Re-Password : ");
    scanf("%s", pass2);
    printf("Name : ");
    scanf("%s", name);
    printf("Gender : male = 1, female = 2 : ");
    scanf("%d", &sex);
    printf("Age : ");
    scanf("%d", &age);
    printf("Height (cm) : ");
    scanf("%f", &height);
    printf("Weight (Kg) : ");
    scanf("%f", &weight);

    printf("%s", user);
}

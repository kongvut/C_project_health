#include <stdio.h>

extern char g_user[100], *time_now();

app1(){
    char more, path[100];
    int age, weight, hr, bp;
    float height, bmi;
    FILE *fp;

    printf("\n\n\t\t* * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t*                                   *\n");
    printf("\t\t*         HEALTH CHECKING           *\n");
    printf("\t\t*                                   *\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * *\n\n");
    printf("\t\tInput Your Age : ");
    scanf("%d", &age);
    printf("\t\tInput Your Weight(Kg) : ");
    scanf("%d", &weight);
    printf("\t\tInput Your Height(m) : ");
    scanf("%f", &height);
    printf("\t\tInput Your Normal Heart Rate : ");
    scanf("%d", &hr);
    printf("\t\tInput Your Blood Pressure : ");
    scanf("%d", &bp);

    bmi = weight/(height*height);

    //save calculate
    strcpy(path,"db/app/");
    strcat(path, g_user);
    strcat(path, "_app1.db");
    fp = fopen(path,"a");

    printf("\n\t\tYour BMI is : %.2f", bmi);
    //save calculate
    fprintf(fp,"\n\t\tYour BMI is : %.2f", bmi);

    if (bmi<18.5){
        printf("\n\t\tYou're Underweight");
        //save calculate
        fprintf(fp,"\n\t\tYou're Underweight");
    }
    //save calculate
    fprintf(fp,"\n\t\tCalculate on : %s", time_now());
    fprintf(fp,"\n\t\t* * * * * * * * * * * * * * * * * * *");
    fclose(fp);

}

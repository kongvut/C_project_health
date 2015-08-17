#include <stdio.h>

extern char g_user[100],g_sex, *time_now();

app1(){
    char more, path[100],gender;
    int age, weight, hr;
    float height, bmi;
    FILE *fp;

    printf("\n\n\t\t* * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t*                                   *\n");
    printf("\t\t*         HEALTH CHECKING           *\n");
    printf("\t\t*                                   *\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * *\n\n");
    printf("\t\tInput Your Age : ");
    scanf("%d", &age);
    printf("\t\tInput Your Weight(kg) : ");
    scanf("%d", &weight);
    printf("\t\tInput Your Height(cm) : ");
    scanf("%f", &height);
    printf("\t\tInput Your Resting Heart Rate : ");
    scanf("%d", &hr);


    bmi = weight/((height*0.01)*(height*0.01));

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
    else if(bmi<23.0){
        printf("\n\t\tYou're Normal");

        fprintf(fp,"\n\t\tYou're Normal");
    }
    else if(bmi<25.0){
        printf("\n\t\tYou're Overweight");

        fprintf(fp,"\n\t\tYou're Overweight");
    }
    else{
        printf("\n\t\tYou're Obesity");

        fprintf(fp,"\n\t\tYou're Obesity");
    }
    //save calculate
    gender = g_sex;
    if(gender == '1'){

        if(hr<55){
            printf("\n\t\tYour health is good");
            fprintf(fp,"\n\t\tYour health is good");
        }
        else if(hr<70){
            printf("\n\t\tYour health is normal");
            fprintf(fp,"\n\t\tYour health is normal");
        }
        else{
            printf("\n\t\tYour health is not good");
            fprintf(fp,"\n\t\tYour health is not good");
        }
    }
    if(gender == '2'){
        if(hr<60){
            printf("\n\t\tYour health is good");
            fprintf(fp,"\n\t\tYour health is good");
        }
        else if(hr<73){
            printf("\n\t\tYour health is normal");
            fprintf(fp,"\n\t\tYour health is normal");
        }
        else{
        printf("\n\t\tYour health is not good");
        fprintf(fp,"\n\t\tYour health is not good");
        }
    }
    fprintf(fp,"\n\t\tCalculate on : %s", time_now());
    fprintf(fp,"\n\t\t* * * * * * * * * * * * * * * * * * *");
    fclose(fp);

}




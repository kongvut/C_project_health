#include <stdio.h>

extern char g_sex, g_user[100], *time_now();

app3(){
    char ex, gender, path[100];
    int age, weight, height;
    float BMR, bx;
    FILE *fp;
        printf("\n\n\t\t* * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t*                                   *\n");
    printf("\t\t*       CALORIES CALCULATOR         *\n");
    printf("\t\t*                                   *\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * *\n");

    printf("\n\t\tYour Gender %s", (g_sex == '1' ? "Male" : "Female"));
    //scanf("%d", &gender);
    gender = g_sex;

    printf("\n\t\tInput Your Age :  ");
    scanf("%d", &age);
    printf("\t\tInput Your Weight(Kg) :  ");
    scanf("%d", &weight);
    printf("\t\tInput Your Height(cm) :  ");
    scanf("%d", &height);

    //save calculate
    strcpy(path,"db/app/");
    strcat(path, g_user);
    strcat(path, "_app3.db");
    fp = fopen(path,"a");

    if(gender=='1'){
        BMR = 66+(13.7*weight)+(5*height)-(6.8*age);
        printf("\n\t\tYour BMR is %.2f kilocalories\n", BMR);
    }
    else if(gender=='2'){
        BMR = (66)+(9.6*weight)+(1.8*height)-(4.7*age);
        printf("\n\t\tYour BMR is %.2f kilocalories\n", BMR);
    }
    //save calculate
    fprintf(fp,"\n\t\tYour BMR is %.2f kilocalories\n", BMR);
    printf("\n\n\t\t>>Your Total Daily Energy Expenditure<<");
    printf("\n\n\t\t  **Choose Your Activities Level**\n");
    printf("\t\tNo exercise                             PRESS 1\n");
    printf("\t\tLow exercise    [1-3 times a week]      PRESS 2\n");
    printf("\t\tNormal exercise [3-5 times a week]      PRESS 3\n");
    printf("\t\tHard exercise   [6-7 times a week]      PRESS 4\n");
    printf("\t\tHard exercise   [Day and Night]         PRESS 5\n\n");
    ex = getch();

    if(ex == '1'){
        bx = BMR*1.2;
        printf("\n\t\tYour TDEE is %.2f kilocalories", bx);
    }
    else if(ex == '2'){
        bx = BMR*1.375;
        printf("\n\t\tYour TDEE is %.2f kilocalories", bx);
    }
    else if(ex == '3'){
        bx = BMR*1.55;
        printf("\n\t\tYour TDEE is %.2f kilocalories", bx);
    }
    else if(ex == '4'){
        bx = BMR*1.725;
        printf("\n\t\tYour TDEE is %.2f kilocalories", bx);
    }
    else if(ex == '5'){
        bx = BMR*1.9;
        printf("\n\t\tYour TDEE is %.2f kilocalories", bx);
    }

    //save calculate
    fprintf(fp,"\n\t\tYour TDEE is %.2f kilocalories", bx);
    //save calculate
    fprintf(fp,"\n\t\tCalculate on : %s", time_now());
    fprintf(fp,"\n\t\t* * * * * * * * * * * * * * * * * * *");
    fclose(fp);
}

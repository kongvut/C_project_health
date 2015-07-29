#include <stdio.h>

app2(float user_age){
    char zone, choose;
    float rate;
    printf("\n\n* * * * * * * * * * * * * * * * * * *\n");
    printf("*                                   *\n");
    printf("*   EXERCISE INTENSITY CALCULATOR   *\n");
    printf("*                                   *\n");
    printf("* * * * * * * * * * * * * * * * * * *\n");
    printf(">>Choose Your Target Heart Rate Zone<<\n\n");
    printf("ZONE 1 Very Light   PRESS 1\n");
    printf("ZONE 2 Light        PRESS 2\n");
    printf("ZONE 3 Moderate     PRESS 3\n");
    printf("ZONE 4 Hard         PRESS 4\n");
    printf("ZONE 5 Very Hard    PRESS 5\n\n");
    printf("BACK TO MENU  >>PRESS 0<<\n");
    choose = getch();
    if(choose == '0'){
        system("cls");
    }

    zone = getch();
    if(zone == '1'){
        printf("\nYou chose Very Light ZONE 50-60% \n");
        printf("Example Duration : 20-40 min,104-114 bpm");
    }
    else if(zone == '2'){
        printf("\nYou chose Light ZONE 60-70% \n");
        printf("Example Duration : 40-80 min,114-133 bpm");
    }
    else if(zone == '3'){
        printf("\nYou chose Moderate ZONE 70-80% \n");
        printf("Example Duration : 10-40 min,133-152 bpm");
    }
    else if(zone == '4'){
        printf("\nYou chose Hard ZONE 80-90% \n");
        printf("Example Duration : 2-10 min,152-171 bpm");
    }
    else if(zone == '5'){
        printf("\nYou chose Very Hard ZONE 90-100% \n");
        printf("Example Duration : 5 min,171-190 bpm");
    }

    printf("\n>>Intensity Calculator<<\n");
    printf("Your Exercise Heart Rate : ");
    scanf("%f", &rate);
    rate = (rate*100)/(220.0-user_age);
    printf("Your Intensity : %.2f%c", rate, '%');
        /*if (rate >= 20 && rate <= 40){

    }*/
}

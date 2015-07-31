#include <stdio.h>

app2(float user_age){
    char zone, choose;
    float rate;
    printf("\n\n\t\t* * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t*                                   *\n");
    printf("\t\t*   EXERCISE INTENSITY CALCULATOR   *\n");
    printf("\t\t*                                   *\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * *\n\n");
    printf("\t     > > Choose Your Target Heart Rate Zone < <\n\n");
    printf("\t\t    ZONE 1 Very Light   PRESS 1\n");
    printf("\t\t    ZONE 2 Light        PRESS 2\n");
    printf("\t\t    ZONE 3 Moderate     PRESS 3\n");
    printf("\t\t    ZONE 4 Hard         PRESS 4\n");
    printf("\t\t    ZONE 5 Very Hard    PRESS 5\n\n");
    printf("\t\t    BACK TO MENU  >>PRESS 0<<\n");
    choose = getch();
    if(choose == '0'){
        system("cls");
    }

    zone = getch();
    if(zone == '1'){
        printf("\n\t\t    Very Light Zone (50-60%c) \n", '%');
        printf("\t\t    Example Duration : 20-40 min,104-114 bpm\n");
    }
    else if(zone == '2'){
        printf("\n\t\t    Light Zone (60-70%) \n");
        printf("\t\t    Example Duration : 40-80 min,114-133 bpm\n");
    }
    else if(zone == '3'){
        printf("\n\t\t    Moderate Zone (70-80%) \n");
        printf("\t\t    Example Duration : 10-40 min,133-152 bpm\n");
    }
    else if(zone == '4'){
        printf("\n\t\t    Hard Zone (80-90%) \n");
        printf("\t\t    Example Duration : 2-10 min,152-171 bpm\n");
    }
    else if(zone == '5'){
        printf("\n\t\t    Very Hard Zone (90-100%) \n");
        printf("\t\t    Example Duration : 5 min,171-190 bpm\n");
    }

    printf("\n\t\t    > > Intensity Calculator < <\n\n");
    printf("\t\t    Your Exercise Heart Rate : ");
    scanf("%f", &rate);
    rate = (rate*100)/(220.0-user_age);
    printf("\t\t    Your Intensity : %.2f%c\n", rate, '%');
        /*if (rate >= 20 && rate <= 40){

    }*/
}

#include <stdio.h>

extern char g_user[100], *time_now();

char app2(){
    char zone, choose, path[100];
    float rate, user_age;
    FILE *fp;
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

    //save calculate
    strcpy(path,"db/app/");
    strcat(path, g_user);
    strcat(path, "_app2.db");
    fp = fopen(path,"a");

    zone = getch();
    if(zone == '1'){
        printf("\n\t\t    Very Light Zone (50-60%c) \n", '%');
        printf("\t\t    Example Duration : 20-40 min,104-114 bpm\n");

        //save calculate
        fprintf(fp,"\n\t\t    Very Light Zone (50-60%c) \n", '%');
        fprintf(fp,"\t\t    Example Duration : 20-40 min,104-114 bpm\n");
    }
    else if(zone == '2'){
        printf("\n\t\t    Light Zone (61-70%) \n", '%');
        printf("\t\t    Example Duration : 40-80 min,114-133 bpm\n");

        //save calculate
        fprintf(fp,"\n\t\t    Light Zone (61-70%) \n", '%');
        fprintf(fp,"\t\t    Example Duration : 40-80 min,114-133 bpm\n");
    }
    else if(zone == '3'){
        printf("\n\t\t    Moderate Zone (71-80%) \n", '%');
        printf("\t\t    Example Duration : 10-40 min,133-152 bpm\n");

        //save calculate
        fprintf(fp,"\n\t\t    Moderate Zone (71-80%) \n", '%');
        fprintf(fp,"\t\t    Example Duration : 10-40 min,133-152 bpm\n");
    }
    else if(zone == '4'){
        printf("\n\t\t    Hard Zone (81-90%) \n", '%');
        printf("\t\t    Example Duration : 2-10 min,152-171 bpm\n");

        //save calculate
        fprintf(fp,"\n\t\t    Hard Zone (81-90%) \n", '%');
        fprintf(fp,"\t\t    Example Duration : 2-10 min,152-171 bpm\n");
    }
    else if(zone == '5'){
        printf("\n\t\t    Very Hard Zone (91-100%) \n", '%');
        printf("\t\t    Example Duration : 5 min,171-190 bpm\n");

        //save calculate
        fprintf(fp,"\n\t\t    Very Hard Zone (91-100%) \n", '%');
        fprintf(fp,"\t\t    Example Duration : 5 min,171-190 bpm\n");
    }else if(zone == '0'){
        return 'x';
    }

    printf("\n\t\t    > > Intensity Calculator < <\n\n");
    printf("\t\t    Your Exercise Heart Rate : ");
    scanf("%f", &rate);
    rate = (rate*100)/(220.0-user_age);
    printf("\t\t    Your Intensity : %.2f%c\n", rate, '%');

    //save calculate
    fprintf(fp,"\t\t    Your Intensity : %.2f%c\n", rate, '%');

    //save calculate
    fprintf(fp,"\n\t\tCalculate on : %s", time_now());
    fprintf(fp,"\n\t\t* * * * * * * * * * * * * * * * * * *");
    fclose(fp);
}

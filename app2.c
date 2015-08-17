#include <stdio.h>

extern char g_user[100], *time_now();

char app2(){
    char select, zone, choose, path[100];
    float rate, user_age;
    FILE *fp;

    printf("\n\n\t\t* * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t*                                   *\n");
    printf("\t\t*   TARGET HEART RATE  CALCULATOR   *\n");
    printf("\t\t*                                   *\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * *\n\n");
    printf("\t\t >>Choose  Calculator<<\n");
    printf("\t\t Target Heart Rate Calculator   PRESS 1");
    printf("\n\t\t Intensity Calculator           PRESS 2");


    //save calculate
    strcpy(path,"db/app/");
    strcat(path, g_user);
    strcat(path, "_app2.db");
    while(1){
    fp = fopen(path,"a");
    select = getch();

    if(select == '1'){
        system("cls");
        czone :
        printf("\n\t     > > Choose Your Target Heart Rate Zone < <\n\n");
        printf("\t\t ZONE 1 (for lose your fat)      PRESS 1\n");
        printf("\t\t ZONE 2 (for your healthiness)   PRESS 2\n");
        printf("\t\t ZONE 3 (for training)           PRESS 3\n");
        printf("\t\t BACK TO MENU                    PRESS 0\n");

        zone = getch();
        if(zone == '0'){
        return 'x';
        }

        if(zone == '1'){
            printf("\n\t\t Input your age : ");
            scanf("%f" ,&user_age);
            printf("\n\t\t\t   Zone 1 : 60-70%c \n", '%');
            printf("\t\tYour Target Heart Rate is %.2f-%.2f bpm" ,(220-user_age)*0.6 ,(220-user_age)*0.7);
            printf("\n\t\t*****************************************");
            printf("\n\n\t\tTraining in this zone improves the ability \n\t\tof your heart to pump blood and improve \n\t\tthe muscles’ ability to utilize oxygen.");
            printf("\n\tThe body becomes more efficient at feeding the working muscles.\n");
            printf("\n\t\t*****************************************");

        //save calculate
            fprintf(fp,"\n\t\t\t   Zone 1: 60-70%c \n", '%');
            fprintf(fp,"\t\tYour Target Heart Rate is %.2f-%.2f bpm" ,((220.0-user_age)*0.6) ,((220.0-user_age)*0.7));
            break;
        }
        else if(zone == '2'){
            printf("\n\t\t Input your age : ");
            scanf("%f" ,&user_age);
            printf("\n\t\t\t   Zone 2 : 70-80%c \n", '%');
            printf("\t\tYour Target Heart Rate is %.2f-%.2f bpm" ,(220.0-user_age)*0.7 ,(220.0-user_age)*0.8);
            printf("\n\t\t*****************************************");
            printf("\n\n\t\tTraining in this zone will develop \n\t\tyour cardiovascular system. the working muscles can be \n\t\tdeveloped and improved. As you become fitter and stronger \n\t\tfrom training in this zone it will be possible to run \n\t\tsome of your long weekend runs at up to 75%, \n\tso getting the benefits of some fat burning and \n\t\timproved aerobic capacity. \n");
            printf("\n\t\t*****************************************");

        //save calculate
            fprintf(fp,"\n\t\t\t   Zone 2 : 70-80%c \n", '%');
            fprintf(fp,"\t\tYour Target Heart Rate is %.2f-%.2f bpm" ,(220.0-user_age)*0.7 ,(220.0-user_age)*0.8);
            break;
        }
        else if(zone == '3'){
            printf("\n\t\t Input your age : ");
            scanf("%f" ,&user_age);
            printf("\n\t\t\t   Zone 3 : 80-100%c \n", '%');
            printf("\t\tYour Target Heart Rate is %.2f-%.2f bpm" ,(220.0-user_age)*0.8 ,(220.0-user_age));
            printf("\n\t\t*****************************************");
            printf("\n\n\t\tTraining in this zone will only be possible \n\t\tfor short periods. effectively trains your fast \n\t\ttwitch muscle fibers and helps to develop speed. \n\t\tThis zone is reserved for interval running and \n\tonly the very fit tare able to train effectively within this zone. \n");
            printf("\n\t\t*****************************************");

        //save calculate
            fprintf(fp,"\n\t\t\t   Zone 3 : 80-100%c \n", '%');
            fprintf(fp,"\t\tYour Target Heart Rate is %.2f-%.2f bpm" ,(220.0-user_age)*0.8 ,(220.0-user_age));
            break;
        }

        while(zone != 1 && zone != 2 && zone != 3 && zone != 0){
        system("cls");
        fflush(stdin);
        printf("\n\n\t     ***Choose Your Target Heart Rate Zone again*** \n\n");
        goto czone;
    }
        break;
    }
    else if(select == '2'){
        printf("\n\n\n\t\t    > > Intensity Calculator < <\n\n");
        printf("\t\t    Your Exercise Heart Rate : ");
        scanf("%f", &rate);
        rate = (rate*100)/(220.0-user_age);
        printf("\n\t\t    Your Intensity : %.2f%c\n", rate, '%');

        //save calculate
        fprintf(fp,"\n\t\t    Your Intensity : %.2f%c\n", rate, '%');
        break;
    }
    else{
        printf("\n\n\t\t ***Choose Calculate again***");
    }
    }
    fprintf(fp,"\n\t\tCalculate on : %s", time_now());
    fprintf(fp,"\n\t\t* * * * * * * * * * * * * * * * * * *");
    fclose(fp);
}

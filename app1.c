#include <stdio.h>

app1(){
    char more;
    int age, weight, hr, bp;
    float height, BMI;
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
    scanf("%d,%d", &bp);

    BMI = weight/(height*height);
    printf("\n\t\tYour BMI is : %.2f", BMI);

    if (BMI<18.5){
        printf("\n\t\tYou're Underweight");
    }
}

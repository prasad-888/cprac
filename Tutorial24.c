#include<stdio.h>


int main(){
    char input;

    float kmstomiles=0.621371;
    float inchestofoot=0.0833333;
    float cmstoinches=0.393701;
    float poundtokg= 0.453592;
    float inchestometers= 0.0254;
    float first,second;

while(1)
{
        printf("Enter the input character q to quit\n 1. kms to miles \n 2. inches to foot \n 3. cms to inches \n 4. pound to kgs \n 5. inches to meters \n");
        scanf(" %c || %f",&input);
    switch (input)
    {
        case 'q':
        printf("Quitting the program");
        goto end;
        break;

        case'1':
        second=first*kmstomiles;
        printf("Enter quantity in terms of first unit");
        scanf("%f",&first);
        printf("Enter quantity in terms of second unit");
        scanf("%f",&second);
        printf("%f kms is equal to %f miles \n",first,second);
        break;

        case'2':
        second=first*inchestofoot;
        printf("Enter quantity in terms of first unit");
        scanf("%f",&first);
        printf("Enter quantity in terms of second unit");
        scanf("%f",&second);
        printf("%f inches is equal to %f foot\n",first,second);
        break;

        case'3':
        second=first*cmstoinches;
        printf("Enter quantity in terms of first unit");
        scanf("%f",&first);
        printf("Enter quantity in terms of second unit");
        scanf("%f",&second);
        printf("%f cms is equal to inches %f \n",first,second);
        break;

        case'4':
        second=first*poundtokg;
        printf("Enter quantity in terms of first unit");
        scanf("%f",&first);
        printf("Enter quantity in terms of second unit");
        scanf("%f",&second);
        printf("%f pounds is equal to kg %f \n",first,second);
        break;

        case '5':
        second=first*inchestometers;
        printf("Enter quantity in terms of first unit");
        scanf("%f",&first);
        printf("Enter qunatity in terms of second unit");
        scanf("%f",&second);
        printf("%f inches is equal to meters %f \n",first,second);
        break;

        
        default:
         break;
    }
}
     
    end:

    return 0;
}
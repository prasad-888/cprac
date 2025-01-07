
/*
kms to miles
inches to foots
cms to inches
pound to kgs
inches to meters
*/

#include<stdio.h>
    float miles;
    float foot;
    float inches;
    float kg;
    float meters;
    float kms;
    float pound;
    float cms;
    float inches;
float kmstomiles(float kms)
{
    miles=(1.6*kms);
    return miles;
}

float inchestofoots(float inches)
{
    foot=(12*inches);
    return foot;
}
float cmstoinches(float cms)
{
    inches=(2.54*cms);
    return inches;
}

float poundtokgs(float pound )
{
    kg=(2.2*pound);
    return kg;
}

float inchestometers(float inches)
{
    meters=(39.4*inches);
    return meters;
}
int main()
{
    


    printf("Enter km to be converted into meters");
    scanf("%f",&kms);
    printf(" kms %f into meters:  %f\n",kms,kmstomiles(kms));
    

    printf("Enter inches to be converted into foots");
    scanf("%f",&inches);
    printf(" inches %f  into foot:  %f\n",inches,inchestofoots(inches));
    
    printf("Enter cm to be converted into inches");
    scanf("%d",&cms);
    printf(" cms %f  into inches:  %f\n",cms,cmstoinches(cms));
    
    printf("Enter pound to convert into kg");
    scanf("%f",&pound);
    printf(" pound %f into kgs:  %f\n",pound,poundtokgs(pound));
    
    printf("Enter inches to be converted into meters");
    scanf("%f",&inches);
    printf("inches %f into meters:  %f\n",inches,inchestometers(inches));

return 0;
}
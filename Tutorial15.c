#include<stdio.h>

int main()

{   
    int age;
    printf("Enter your age");
    scanf("%d",age);

    if(age>10)
    {
        continue;
        
    }
    

    printf("We have not come across any continue statement");


    return 0;
}
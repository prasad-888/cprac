#include<stdio.h>
//Recursion function in c
//program for factorial


int factorial(int number)
{
    if(number ==1 || number==0)
    {
        return 1;

    }
    else{

        return (number*factorial(number-1));
    }
}
int main()
{ 
    int num;
printf("ENter the number you want the factorial of \n ");
scanf("%d",&num);
printf("The factorial of %d is %d\n",num,factorial(num));    
    return 0;
}
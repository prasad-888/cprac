#include<stdio.h>

int sum(int a,int b) // return argument,return value
{
    return a+b;
}

void printstar(int n)
{
    for(int i=0;i<n;i++)
    {
    
    printf("%c",'*');
    }

}

int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d",&i);
    return i;
}

int main()
{
   

    int a,b,c;
    a=9;
    b=87;
    c=sum(a,b); 
    printf("The sum is %d\n",c);
    printstar(7);
    c = takenumber();



    return 0;
}


// without arguments and without return value
//without arguments and with return value
//with arguments and without return value
//with arguments and with return value 
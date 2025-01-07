/*Given  two numbers a and b, add them then subtract them and
assign to a and b using call by reference
a=4
b=3
after running fun the values should be
a=7
b=1*/

#include<stdio.h>
int add(int x,int y)
{
    x=x+y;
    return x;
}
int sub(int x,int y)
{
    y=y-x;
    return y;
}

int main()
{
    int a,b;
    printf("Enter no1 %d and no2 %d no1>no2\n",a,b);
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    printf("The value of a is\n",a);
    printf("The value of b is\n",b);

    printf("The value of a after calling function is\n",add(a,b));
    printf("The value of b after callling function is\n",sub(a,b));

    return 0;
}
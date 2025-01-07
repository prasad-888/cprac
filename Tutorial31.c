
// In c programming language we can call fun in two ways
//1) call by value
//2) call by reference

/******call by reference exxample************/

#include<stdio.h>
/* function definition to swap the values */
void swap(int *x,int *y)
{
    int temp;
    temp=*x; /* save the value at address x*/
    *x = *y; /* put y into x */
    *y = temp; /* put temp into y*/
    return;
}
int main()
{
    int a=34, b=74;
    printf("before swap %d and %d\n",a,b);
    swap(&a,&b);
    printf("after swap %d and %d\n",a,b);
    return 0;
}
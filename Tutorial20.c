//multiplication table

#include<stdio.h>


int main()
{
    int num;
    printf("Enter the number you want the multiplication of: \n");
    scanf("%d",&num);
/*
    printf("Multiplication table of %d is as follows:\n",num);
    printf("%d * 1 = %d\n",num , num*1 );
    printf("%d *2  = %d\n",num, num*2);
    printf("%d * 3 = %d\n",num,num *3);
    printf("%d *4 = %d\n",num,num*4);
    printf("%d *5 = %d\n",num,num*5);
    printf("%d *6 =%d\n",num,num *6);
    printf("%d *7 =%d\n",num,num *7);
    printf("%d *8 =%d\n",num,num*8);
    printf("%d *9=%d\n",num,num*9);
    printf("%d *10=%d\n",num,num*10);
*/

for (int i = 0; i < 11; i++)
{
    printf("%d * %d = %d\n",num,i,num*i);
}

    return 0;
}
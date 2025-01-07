// pointer it is a variable that stores address of another variable
// can be of int char array function or any other
//size depends on architecture
// used to declare using * asterick sign
// int var =7 which has address a1
//int *ptr =&var in this pointer address that is a1 is stored
// & is address of operator
//* is deference operator or indirection operator
// int a=7
//then &a is address of a
//p=&a stores address of
//but when *p will be ther ethen we will get 7 as the answer
//ie we will get the value stored at that address


// NULL POinter 
// a pointer that is not assigned any value but NULL is known as NULL pointer
// int *ptr=NULL;


#include<stdio.h>
// ****** %p is format specifier in c***********

int main()
{
    printf("Lets learn about python");
    int a=76;
    int *ptra= &a;
    printf("the value of a is %d\n",*ptra); 
    // above if we wriet *ptra or just a then also o/p will be 76
    

    printf("The address of pointer to a is %p\n",&ptra);
    // it will print address of pointer

    printf("The address of a is %p\n",&a);
    printf("The address of a is %p\n",ptra);
    // The address of a can be printed by two method
    //1) by &a
    //2) by ptra
    


    int *ptr2;
    printf("Address of some garbage is %p\n",ptr2);

    int *ptr3=NULL;
    printf("The NULL is %p\n",ptr3);
 

    return 0;
}
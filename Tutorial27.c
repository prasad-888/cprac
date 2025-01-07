/* pointer arithmetic
there are four arithmetic operators that can be used on pointers:
++
--
+
-*/


#include<stdio.h>

int main()
{/*
    int a=34;
    int *ptra=&a;
    printf("The address is %d\n",ptra);
    printf("The addres +1 is %d",ptra+1);
    // by adding +1 the address value gets by +4
    // ie it gets updated by size of int that is 4
    // 4 because in this architecture it is 4
    

    ptra--;
    printf("%d",ptra);
    */
// arr--; this line will throw an error
    int arr[]={1,2,3,4,5,6,7};
    printf("Value at position 3 of the array is %d\n",arr[3]);
    printf("The addressof first element of the array is %d\n", &arr[0]);
    printf("The address of first element of array is %d\n",arr);
    printf("The address of second element of the array is %d\n",&arr[1]);
    printf("The address of second element of the array is %d\n",arr+1);

    printf("The value at address of first element of the array is %d\n",*(&arr[0]));
    printf("The value at address of first element of the array is %d\n", *(arr));
    printf("The value at address of first element of the array is %d\n",arr[0]);
    printf("The value at address of second element of the array is %d\n",*(&arr[1]));
    printf("The value at address of second element of the array is %d\n",*(arr +1));
    return 0;
}
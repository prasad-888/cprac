//array in c
//stored in contagious memory locations
//also stores derived data type like pointers,structures,etc
//1d array is list
//2d array is like a table
//c lang do not place a lin=mit on dimensions of array
//3d array like a cube
/*
Syntax for daclaring and initializing an array
Data_type name[size] ex:int marks[200]
*/
#include<stdio.h>


int main()
{
    int marks[4];
    //marks[0]=34;
    //printf("Marks of student 1 is %d",marks[0]);

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array\n",i);
        scanf("%d",&marks[i]);
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n",i,marks[i]);
    }
    


    return 0;
}
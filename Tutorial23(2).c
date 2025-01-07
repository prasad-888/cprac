#include<stdio.h>
// This is a 2d array 
// It is printed as a matrix
int main()
{   
    int marks[2][4] = {{45,234,2,3},
                        {3,2,3,3}};

    int i,j;

    for (int i = 0; i < 2; i++)  //for loop for rows
    {
        for (int j = 0; j < 4; j++) //for loop for columns
        {
            //printf("The value of %d %d element of the array is %d\n",i,j,marks[i][j]);
            printf("%d ",marks[i][j]);
        }
        printf("\n");
        
    }
    return 0;
    
}
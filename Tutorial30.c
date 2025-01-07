/* take input fro user and ask user to choose
0 for triangular star pattern and
1 for reverse triangular star pattern
then print pattern accordingly
*/
/*

*
**
***
**** triangular star pattern

****
***
**
* reverse triangular star pattern

*/

#include<stdio.h>

int main()
{
    int ch;
    printf("Enter choiced 1)triangular star pattern \n 2)reverse triangular star pattern");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("*\n**\n***\n");
        break;
    case 2:
        printf("***\n**\n*\n");
        break;
    default:
        break;
    }
    return 0;
}

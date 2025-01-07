#include<stdio.h>
// typedef is used to give alternate name to existing data type
// syntax: typedef<previous_name> <alias_name>;

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}

int main()
{
    typedef unsigned Long ul;
    typedef int integer;
    ul l1, l2, l3;
    integer a = 4;
    printf("Value of a is %d",a);


    return 0;
}
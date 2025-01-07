#include<stdio.h>                                                       
#include<string.h>
union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
    union Student s1;
    strcpy(s1.name,"harry");
    s1.fav_char = 'u';
    s1.marks = 45;
    s1.id = 1;

    printf("The id is %d \n");
    printf("The marks is %d \n",s1.marks);
    printf("The fav char is %c \n");
    printf("The name is %s \n",s1.name);
    return 0;
}
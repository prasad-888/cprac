#include<stdio.h>

/*
char name[] = "harry"
here in the above example there ris no need of \0
because " " this symbol has inbuilt \0 function

char name[]={'h','a','r','y','\0'}
there above \o addition makes 
thre character valid string

char name[]={'c','o','d','e','\0'}
*/

void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}

int main()
{/*
    //char str[5];
    //str = "Hello";
    // The above two line will create problem because we cannot declare 
    //aray like that


    //now to take string from user
    char str[52];
    gets(str); // no need to think abt the null charcter \o
    printf("%s",str); // to print the string
    puts(str); //aliter // to print the string
*/

    char str[] ={'h','a','r','r','y','\0'}; // here \0 necessary
    printStr(str);
    char r[]="good\n"; // here \0 included already no need to include
    printf("%s",r);

    char p[34];
    gets(p); /// there is a problem in gets function
    printf("Using printf %s\n",p);

    printf("using puts: \n");
    puts(p);
    
    printf("Using custom function printstr\n");
    printStr(p);
    return 0;
}
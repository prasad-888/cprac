#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]="harry";
    char s2[]="ravi";
    char s3[54];
    puts(strcat(s1,s2)); // concatenate two string
    printf("The length of s1 is %d\n",strlen(s1));
    printf("The length of s2 is %d\n",strlen(s2));

    printf("The reverse string s1 is :");
    puts(strrev(s1));

    printf("The reverse string s2 si:");
    puts(strrev(s2));

    printf("The copy string is\n");
    strcpy(s3,strcat(s1,s2));
    puts(s3);

    printf("The strcmp for s1,s2 returned %d",strcmp(s1,s2));
    // returns 0 <0 or >0
    

    return 0;
}
/*
starcat - concatenate
strlen - length of string
strrev - reverse of string
strcpy - copy one string into another
strcmp - compare two strings
 strlen \0 is not included in length calculation
*/
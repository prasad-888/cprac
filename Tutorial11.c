#include<stdio.h>
 int main(){
   int age,marks;
   printf("Enter your age");
   scanf("%d",&age);
   printf("Enter your marks");
   scanf("%d",marks);

   switch (age)    
   {
      case 3:
         printf("The age is 3");
      switch (marks)
         {
         case 45:
                printf("Your marks are 45");
               break;
      
         default:
               printf("Your markls are not 45"); // something is wrong cross check
      }
   break;
   
   case 13:
      printf("The age is 13");
      break;
   
   case 23:
      printf("The age is 23");
      break;
   
   
   
   default:
      printf("Age is not 3,13 or 23");
      break;
   }

    return 0;
 }
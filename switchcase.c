#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("\nWeeks Name:-\n");
    scanf("\n%d",&x);
    switch(x)
     {
       case 1:printf("SUNDAY");
              break;
       case 2:printf("MONDAY");
              break;
       case 3:printf("TUESDAY");
              break;
       case 4:printf("WEDNESDAY");
              break;
       case 5:printf("THURSDAY");
              break;
       case 6:printf("FRIDAY");
              break;
       case 7:printf("SATURDAY");
              break;
       default:printf("Wrong choice");
     }      
    return 0;
}

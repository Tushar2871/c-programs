//I am Yashovardhan jain and this is my first repositary on github.
#include<stdio.h>
int main ()
{
    int y;
    printf("Enter the year:\n");
    scanf("%d", &y);
    if(y % 100 == 0 && y % 400 == 0)
        printf("%d is a leap year.\n", y);//this shows leap-year.
    else if (y % 4 == 0)
    	printf("%d is a leap year.\n", y);//this shows leap-year.
    else
        printf("%d is not a leap year.\n", y);//this shows non-leap year.
    return 0;

}

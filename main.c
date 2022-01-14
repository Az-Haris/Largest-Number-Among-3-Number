#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1,num2,num3;
    printf("Please Enter 3 Number to identify the Large Number : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("%d is the Largest Number",num1);
        }
        else
        {
            printf("%d is the largest Number",num3);
        }
    }
    else
    {
        if(num2>num3)
        {
            printf("%d is the Largest Number",num2);
        }
        else
        {
            printf("%d is the Largest Number",num3);
        }
    }
    getch();
    return 0;
}

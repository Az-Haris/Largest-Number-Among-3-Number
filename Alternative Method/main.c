#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float num1,num2,num3;
    printf("Please Enter 3 Number to identify the Largest one : ");
    scanf("%f%f%f",&num1,&num2,&num3);
    if((num1>num2)&&(num1>num3))
    {
        printf("%.2f is the Largest Number",num1);
    }
    else
    {
        if((num2>num1)&&(num2>num3))
        {
            printf("%.2f is the Largest Number",num2);
        }
        else
        {
            printf("%.2f is the Largest Number",num3);
        }
    }

    getch();
    return 0;
}

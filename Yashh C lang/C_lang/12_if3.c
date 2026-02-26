#include<stdio.h>
void main()
{
    int month_number;
    printf("Enter month number:");
    scanf("%d", &month_number);

    if(month_number==1)
    {
        printf("January");
    }
    if(month_number==2)
    {
        printf("February");
    }
    if(month_number==3)
    {
        printf("March");
    }
    if(month_number==4)
    {
        printf("April");
    }
    if(month_number==5)
    {
        printf("May");
    }
    if(month_number==6)
    {
        printf("June");
    }
    if(month_number==7)
    {
        printf("July");
    }
    if(month_number==8)
    {
        printf("August");
    }
    if(month_number==9)
    {
        printf("September");
    }
    if(month_number==10)
    {
        printf("October");
    }
    if(month_number==11)
    {
        printf("November");
    }
    if(month_number==12)
    {
        printf("December");
    }
    if(month_number>12)
    {
        printf("Invalid month number");
    }
}
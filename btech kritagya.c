#include<stdio.h>
int main()
{
    double a,da,hra;
    int category;
    printf("enter your basic salary");
    scanf("%lf",&a);
    da= (a*50)/100;
    printf("enter the category of your city");
    scanf("%d",&category);
    {


    switch(category);
    case 1:hra = (a*10)/100;
    break;
    case 2:hra= (a*15)/100;
    break;

    case 3: hra= (a*20)/100;
    break;
    default: printf("wrong category entered");
}
ta= (a*10)/100;
int total_salary=a+da+hra+ta;
printf("total salary :%d",total_salary);
}
}

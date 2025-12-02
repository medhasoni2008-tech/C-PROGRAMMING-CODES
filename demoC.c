#include <stdio.h>

void main()
{ 
float bs,HRA,DA,gS;
    printf("Enter Basic Salary:");
    scanf("%f",&bs);
    if(bs>2000)
    { HRA=25;
    DA=50;}
else
{ HRA=15;
DA=20;}
gS=bs+bs*HRA/100+bs*DA/100;
printf("%f",gS);
}
#include<stdio.h>
int main(){
    float tax ;
int income ,  x = income-250000 ;

printf("enter your income in INR  : \n   ");
scanf("%d",&income );

if (income <=250000)
{
    printf("NO tax is payable on the income below of rs 250000 \n");
}
else if (income > 250000 && income < 500000)
{
 printf("Tax payable : Rs. %f", tax=x*0.05);
}

else if (income >= 500000 && income < 1000000)
{
    printf("Tax payable : Rs. %f", tax = x * 0.2);
}
else  (income >=1000000);
{
    printf("Tax payable : Rs. %f", tax = x * 0.3);
}

return 0;
}
/*
            Simple calculating program is
                written by Md. Rabbi Al Mamun :)

*/


#include <stdio.h>
int main()
{
    printf("\t\t====Calculating software for mass====\n\n"); //written by R4bbi
    float Meal_rate,t,n,d;
    printf("Enter the Meal rate: ");
    scanf("%f",&Meal_rate);
    while(printf("Enter your Number of Meal: ")!=EOF
&&scanf("%f",&n)!=EOF&&printf("Deposite : ")!=EOF&&scanf("%f",&d)){
    printf("==================\n");
    t=Meal_rate*n;
    printf("total bill = %.2f\n",t);
    if (t==d)
    {
        printf("Nothing back or, Given\n");
    }
    else if (t>d)
    {
        printf("Given = %.2f\n",t-d);
    }
    else if (t<d)
    {
        printf("back = %.2f\n",d-t);
    }
    printf("==================\n\n");
    }
    return 0;
}

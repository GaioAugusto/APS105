#include<stdio.h>

int main(){
    double conversionRate, amountInForeignCurrency, amountInCad;

    printf("Enter the conversion rate: ");
    scanf("%lf", &conversionRate);

    printf("Enter the amount to be converted (in foreign currency): ");
    scanf("%lf", &amountInForeignCurrency);

    amountInCad = conversionRate * amountInForeignCurrency;

    printf("The amount in Canadian Dolars is: %.2lf\n", amountInCad);

    return 0;
}
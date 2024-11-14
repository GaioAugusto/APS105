#include <stdio.h>
#include <math.h>

int main(void) {
    double height, weight, bmi;
    char charW1, charW2, charH1, charH2;

    printf("Enter the body weight (e.g., 70kg or 154lb): ");
    scanf("%lf%c%c", &weight, &charW1, &charW2);

    printf("Enter the height (e.g., 1.75mt or 5.8ft): ");
    scanf("%lf%c%c", &height, &charH1, &charH2);

    if (charW1 == 'l' && charW2 == 'b') {
        weight *= 0.4536;
    }

    if (charH1 == 'f' && charH2 == 't') {
        height *= 0.3048;
    } else if (charH1 == 'i' && charH2 == 'n') {
        height *= 0.0254;
    }

    bmi = weight / pow(height, 2.0);

    printf("\nThe Body Mass Index (BMI) is: %.1lf\n", bmi);

    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Category: Healthy Weight\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obesity\n");
    }

    return 0;
}

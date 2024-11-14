// Program that calculates length of the hypotenuse of a right-angled
// triangle, given the length of the other two sides, X and Y, with the Pythagorean formula

#include <stdio.h>
#include <math.h>
int main(void){
    double side1, side2, hyp;

    printf("Enter X: ");
    scanf("%lf", &side1);

    printf("Enter Y: ");
    scanf("%lf", &side2);

    hyp = sqrt(side1*side1 + side2*side2);
    double angle = asin(side2/hyp);
    angle = angle * 180.0 / M_PI;

    printf("The Hypotenuse Length is: %.1lf\n", hyp);
    printf("The Angle Theta is: %.1lf degrees", angle);
    
    return 0;
}
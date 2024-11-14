// Write a C program that takes the x-y coordinates of a point in the Cartesian plane, and
// prints a message telling either an axis on which the point lies, or the quadrant in which it is found

#include <stdio.h>
#include <math.h>
int main(void){
    double x, y;

    printf("Enter the x-coordinate in floating point: ");
    scanf("%lf", &x);

    printf("Enter the y-coordinate in floating point: ");
    scanf("%lf", &y);

    x = floor(x*100+0.5)/100;
    y = floor(y*100+0.5)/100;

    if(x==0){
        if (y==0){
            printf("\n(%.2lf, %.2lf) is at the origin.", x, y); 
        }
        else if(y!=0){
            printf("\n(%.2lf, %.2lf) is on the y axis.", x, y);
        }  
    }
    else if(y==0){
        if(x==0){
            printf("\n(%.2lf, %.2lf) is at the origin.", x, y);
        }
        else if(x!=0){
            printf("\n(%.2lf, %.2lf) is on the x axis.", x, y);  
        }
    }
    else if(y!=0 && x!=0){
        if(y>0 && x>0){
            printf("\n(%.2lf, %.2lf) is in quadrant I.\n", x, y);
        }
        else if(y>0 && x<0){
            printf("\n(%.2lf, %.2lf) is in quadrant II.\n", x,y);
        }
        else if(y<0 && x>0){
            printf("\n(%.2lf, %.2lf) is in quadrant IV.\n", x, y);
        }
        else if(y<0 && x<0){
            printf("\n(%.2lf, %.2lf) is in quadrant III.\n", x, y);
        }
    } 
    return 0;
}
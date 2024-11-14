// Write a program that will take the radius as
// input from the user and will print the corresponding circle.

#include <stdio.h>

int main(){
    int radius, row, col;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    if(radius < 0){
        printf("Invalid\n");
        return -1;
    }
    else if(radius == 0){
        printf("o\n");
        return 0;
    }

    int x = 0 - radius;
    int y = 0 + radius;

    // Printing upper half
    for(row = 0; row<radius; row++){
        for(col = 0; col<(2*radius+1); col++){
            if(x*x + y*y > radius*radius){
                printf(".");
            }  
            else if(x*x + y*y <= radius*radius){
                printf("o");
            }
            x += 1;
        }
        y -= 1;
        x = 0 - radius;
        printf("\n");
    }

    // Priting middle row
    for(int i = 0; i < 2*radius+1; i++){
        printf("o");
    }
    printf("\n");

    // Priting lower half
        x = 0 - radius;
        y = -1;
        for(row = 0; row<(radius); row++){
            for(col = 0; col<(2*radius+1); col++){
                if(x*x + y*y > radius*radius){
                    printf(".");
                }  
                else if(x*x + y*y <= radius*radius){
                    printf("o");
                }
                x = x + 1;
            }
            y = y - 1;
            x = 0 - radius;
            printf("\n");
        }

    return 0;
}
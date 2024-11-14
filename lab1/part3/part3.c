#include <stdio.h>
int main(){
    int n, binary = 0, remainder = 0, d1, d2, d3, d4;

    printf("Enter number to convert to base 2: ");
    scanf("%d", &n);
    printf("The four digits of that number are as follows:\n");

    d1 = n%2;
    n /= 2;
    d2 = n%2;
    n /= 2;
    d3 = n%2;
    n /= 2;
    d4 = n%2;

    printf("Most significant digit: %d\n", d4);
    printf("Next digit: %d\n",d3 );
    printf("Next digit: %d\n", d2);
    printf("Least significant digit: %d\n", d1);
    
    return 0;
}
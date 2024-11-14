#include <stdio.h>
#include <stdbool.h>

int getAscendingOrderedDigits(int number) {
    int digits[10] = {0};

    while (number > 0) {
        digits[number % 10]++;
        number /= 10;
    }

    int i = 0;
    while (i < 10) {
        if (digits[i] > 0) {
            number *= 10;
            number += i;
            digits[i]--;
        } else {
            i++;
        }
    }
    return number;
}

bool isFourDigit(int num){
    if(num < 999){
        printf("Error: the number is too small.\n");
        return false;
    }
    else if(num> 10000){
        printf("Error: the number is too large.\n");
        return false;
    }
    else{return true;}
}

int getNumber(){
    int num;
    
    printf("Enter a number (-1 to stop): ");
    scanf("%d", &num);

    return num;
}

int reverseNumber(int num){
    int reversed_number = 0;
    for(int i = 1000; i > 0; i /= 10){
        int lsb = num % 10;
        num /= 10;
        reversed_number += i * lsb;
    }
    return reversed_number;
}

int main(){
    int number, result = 0, counter = 0;
    
    do{
        number = getNumber();
        if(number == -1){break;}
        if(!isFourDigit(number)){continue;}
        printf("Number 1: %d\n", number);
        if(number == 6174){
            printf("Kaprekar's Constant was reached in 0 iteration(s).\n");
            break;
        }
        while(result != 6174){
            int ascNumber = getAscendingOrderedDigits(number);
            int descNumber = reverseNumber(ascNumber);
            result = descNumber - ascNumber;
            number = result;
            counter ++;
            printf("Number %d: %d\n", counter + 1, number);
        }
        printf("Kaprekar's Constant was reached in %d iteration(s).\n", counter);

    } while(number != -1);

    return 0;
}
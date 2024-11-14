// Write a program that will perform the four basic arithmetic operations (addition, subtraction
// multiplication, and division) on pairs of positive integers written in one base and
// produce answers as numbers written in a (possibly) different base

#include <math.h>
#include <stdio.h>

int to_decimal(int base, int number) {
    int decimal = 0;
    int power = 1;

    while (number > 0) {
        int digit = number % 10;
        if (digit >= base) {
            printf("Invalid digits in operand\n");
            return -1;
        }
        decimal += digit * power;
        power *= base;
        number /= 10;
    }
    return decimal;
}

int from_decimal(int decimal, int base) {
    int converted = 0;
    int power = 1;

    while (decimal > 0) {
        converted += (decimal % base) * power;
        decimal /= base;
        power *= 10;
    }
    return converted;
}

int main(void) {
    char op = 'a';
    int n1, n2, b1, b2, n1_decimal, n2_decimal, n_decimal;

    do {
        printf("Give input ($ to stop): ");
        scanf(" %c %d %d %d %d", &op, &b1, &n1, &n2, &b2);

        if (op == '$') {
            break;
        }

        // check for valid operator and base range
        if (op != '+' && op != '-' && op != '*' && op != '/') {
            printf("Invalid operator\n");
            continue;
        }
        if (b1 < 2 || b1 > 10 || b2 < 2 || b2 > 10) {
            printf("Invalid base\n");
            continue;
        }

        // convert numbers to decimal
        n1_decimal = to_decimal(b1, n1);
        n2_decimal = to_decimal(b1, n2);
        
        if (n1_decimal == -1 || n2_decimal == -1) {
            continue;
        }

        switch (op) {
            case '+':
                n_decimal = n1_decimal + n2_decimal;
                break;
            case '-':
                n_decimal = n1_decimal - n2_decimal;
                break;
            case '*':
                n_decimal = n1_decimal * n2_decimal;
                break;
            case '/':
                if (n2_decimal == 0) {
                    printf("Division by zero error\n");
                    continue;
                }
                n_decimal = n1_decimal / n2_decimal;
                break;
        }

        int result = from_decimal(n_decimal, b2);

        printf("%d %c %d (base %d) = %d %c %d = %d (base %d)\n", 
               n1, op, n2, b1, n1_decimal, op, n2_decimal, result, b2);

    } while (op != '$');

    return 0;
}

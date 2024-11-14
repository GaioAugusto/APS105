#include <math.h>
#include <stdio.h>

int main() {
  int order, deg, flag = 0;
  double coord_y, x0, x1, x2, x3, x, y;
  double d_deg = 0;

  while (d_deg != -1) {
    do {
      printf("Enter the order of the function: ");
      scanf("%lf", &d_deg);
      deg = (int)d_deg;
      if (d_deg == -1) {
        flag = 0;
      } else if ((deg < 0) || (deg > 3)) {
        printf("The order must be between [0, 3].\n");
        flag = 1;
      }
      else {
        flag = 0;
      }
    } while (flag == 1);

    if (d_deg != -1) {
      printf("Enter coefficient of x^0: ");
      scanf("%lf", &x0);
      x1 = 0;
      x2 = 0;
      x3 = 0;

      if (deg >= 1) {
        printf("Enter coefficient of x^1: ");
        scanf("%lf", &x1);
        if (deg >= 2) {
          printf("Enter coefficient of x^2: ");
          scanf("%lf", &x2);
        }
        if (deg >= 3) {
          printf("Enter coefficient of x^3: ");
          scanf("%lf", &x3);
        }
      }

      for (y = 10; y >= -10; y--) {
        for (x = -10; x <= 10; x++) {
          coord_y = x0 + x1 * x + x2 * x * x + x3 * x * x * x;
          if (coord_y == y) {
            printf(" * ");
          } else if (x == 0) {
            printf(" | ");
          } else if (y == 0) {
            printf(" - ");
          } else {
            printf("   ");
          }
        }
        printf("\n");
      }
    }
  }

  return 0;
}

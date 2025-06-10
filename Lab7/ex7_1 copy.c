#include <stdio.h>
#include <math.h>

int main(void) {
  int i = 0;
  double acc, x_old = -10, x_new = -10;

  printf("Program to find the root of the function exp(-x)-x using the Newton - Raphson Method.\n");
  printf("Enter the accuracy (acc): ");
  scanf("%lf", &acc);

  while (1) {
    x_old = x_new;
    x_new = x_old - (exp(-x_old) - x_old) / (-exp(-x_old) - 1);
    printf("iteration : %2d  =>  x_old :  %14.10lf      x_new :  %14.10lf\n", i, x_old, x_new);
    if (x_old - x_new < 0 && (x_old - x_new) * (-1) < acc || x_old - x_new >= 0 && x_old - x_new < acc) {
      printf("The root of the function exp(-x)-x at accuracy %lf is %.6lf\n", acc, x_new);
      printf("The number of iterations is %d", i);
      break;
    }
    i++;
  }

  return 0;
}
#include <stdio.h>
#include <math.h>

int main(void) {
  double acc, old = -10, neww = -10;

  printf("Program to find the root of the function exp(-x)-x using the Newton - Raphson Method.\n");
  printf("Enter the accuracy (acc): ");
  scanf("%lf", &acc);

  for (int i = 0; ; i++) {
    old = neww;
    neww = old - (exp(-old) - old) / (-exp(-old) - 1);
    printf("iteration : %2d  =>  x_old :  %14.10lf      x_new :  %14.10lf\n", i, old, neww);
    if (abs(old - neww) < acc) {
      printf("The root of the function exp(-x)-x at accuracy %lf is %.6lf\n", acc, neww);
      printf("The number of iterations is %d", i);
      break;
    }
  }

  return 0;
}
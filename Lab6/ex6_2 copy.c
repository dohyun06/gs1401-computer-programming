#include <stdio.h>

float calculateCharges(int hour) {
  float fee = 25;

  if (hour >= 13) fee = (hour + 23) / 24 * 50 + hour * 0.5;
  else if (hour >= 8) fee += (hour - 8) * 5 + hour * 0.5;
  else fee += hour * 0.5;

  return fee;
}

int main(void) {
  int a, b, c;
  float charge, tcharge = 0;

  printf("Enter the hours rented for 3 cars: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("%5s%15s%15s\n", "Car", "Hours", "Charge");

  charge = calculateCharges(a);
  printf ("%5d%15d%15.2f\n", 1, a, charge);
  tcharge += charge;
  charge = calculateCharges(b);
  printf ("%5d%15d%15.2f\n", 2, b, charge);
  tcharge += charge;
  charge = calculateCharges(c);
  printf ("%5d%15d%15.2f\n", 3, c, charge);
  tcharge += charge;


  printf ("%5s%15d%15.2f", "TOTAL", a + b + c, tcharge);

  return 0;
}
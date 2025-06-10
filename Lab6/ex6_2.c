#include <stdio.h>

float calculateCharges(int hour) {
  if (hour >= 13) return (hour + 23) / 24 * 50 + hour * 0.5;
  else if (hour >= 8) return 25 + (hour - 8) * 5 + hour * 0.5;
  else return 25 + hour * 0.5;
}

int main(void) {
  int time[3], totalTime = 0;
  float totalCharge = 0;

  printf("Enter the hours rented for 3 cars: ");
  scanf("%d %d %d", &time[0], &time[1], &time[2]);
  printf("%5s%15s%15s\n", "Car", "Hours", "Charge");
  for (int i = 0; i < 3; i++) {
    float charge = calculateCharges(time[i]);
    printf ("%5d%15d%15.2f\n", i + 1, time[i], charge);
    totalTime += time[i];
    totalCharge += charge;
  }
  printf ("%5s%15d%15.2f", "TOTAL", totalTime, totalCharge);

  return 0;
}
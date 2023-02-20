//Write a program that receives the average temperature of the past 7 days;
//Then calculate and print: 1-Average Temperature, 2-Hottest Day, 3-Coldest Day

#include <stdio.h>
 
#define NUM_DAYS 7
 
float temps[NUM_DAYS] = {0.0};
 
int main() {
  for (int i=0; i<NUM_DAYS; i++) {
    printf("Temperature for day %d (degC): ", i+1);
    scanf("%f", &temps[i]);
  }
 
  float max = temps[0];
  int maxDay = 1;
  float min = temps[0];
  int minDay = 1;
  int sum = 0;
  for (int i=0; i<NUM_DAYS; i++) {
    sum += temps[i];
    if (temps[i] > max) {
        maxDay = i+1;
        max = temps[i];
    }
    if (temps[i] < min) {
        minDay = i+1;
        min = temps[i];
    }
  }
 
  float avg = sum / NUM_DAYS;
 
  printf("\nHottest temperature = %.2f degC on day %d\n", max, maxDay);
  printf("Coldest temperature = %.2f degC on day %d\n", min, minDay);
  printf("Average temperature = %.2f degC\n", avg);
 
 
  return 0;
}
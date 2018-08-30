#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char**argv) {
  int earthRadius = 6371;
  double latitudeA, latitudeB, longitudeA, longitudeB, differenceOfLongitude;

//Asking for the coordinates of points A and B

printf("Latitude of location A: \n");
scanf("%lf", &latitudeA);
if (latitudeA <= -180 || latitudeA >= 180) {
  printf("Remember that the Latitude of any location can only be [-180,180] degrees!\n");
  
  printf("Please enter a valid number for latitude A: \n");
  scanf("%lf\n", latitudeA); 
}

printf("Longitude of location A: \n");
scanf("%lf", &longitudeA);
if (longitudeA <=-90 || longitudeA >= 90) {
  printf("Remember that the Longitude of any location can only be [-90,90] degrees!\n");
  
  printf("Please enter a valid number for longitude B: \n");
  scanf("%lf", longitudeA);
}

printf("Latitude of location B: \n");
scanf("%lf\n", &latitudeB);
if (latitudeB <= -180 || latitudeB >= 180) {
  printf("Remember that the Latitude of any location can only be [-180,180] degrees!\n");
  
  printf("Please enter a valid number for latitude B: \n");
  scanf("%lf\n", latitudeB); 
}

printf("Longitude of location B: \n");
scanf("%lf\n", &longitudeB);
if (longitudeB <=-90 || longitudeB >= 90) {
  printf("Remember that the Longitude of any location can only be [-90,90] degrees!\n");
  
  printf("Please enter a valid number for longitude B: \n");
  scanf("%lf", longitudeB);
}



}

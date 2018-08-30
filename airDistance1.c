/**
Author: Seth Stiles
Date: August 8, 2018

Distance between two prompted points on Earth and the distance between them
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char**argv) {
  int earthRadius = 6371;
  double latitudeA, latitudeB, longitudeA, longitudeB, differenceOfLongitude;

//Asking for the coordinates of points A and B

printf("Latitude of location A: \n");
scanf("%lf", &latitudeA);

printf("Longitude of location A: \n");
scanf("%lf", &longitudeA);

printf("Latitude of location B: \n");
scanf("%lf\n", &latitudeB);

printf("Longitude of location B: \n");
scanf("%lf\n", &longitudeB);



}

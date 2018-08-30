#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char**argv) {
  int earthRadius = 6371;
  double latitudeA, latitudeB, longitudeA, longitudeB, differenceOfLongitude;

//Asking for the coordinates of points A and B

printf("Latitude of location A: \n");
scanf("%lf", &latitudeA);
if (latitudeA <= 180 || latitudeA >=-180) {
} else if (latitudeA == 0) {
  printf("Remember that the Latitude of any location can only be [-180,180] degrees!");
}

printf("Longitude of location A: \n");
scanf("%lf", &longitudeA);

printf("Latitude of location B: \n");
scanf("%lf\n", &latitudeB);

printf("Longitude of location B: \n");
scanf("%lf\n", &longitudeB);



}

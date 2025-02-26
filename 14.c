// WAP to calculate an angle between hour and minute hand. (Hours and minutes should be taken from user).
#include <stdio.h>
#include <math.h>
void main() {
    float hour, minute, angle;
    printf("Enter Hour hand and Minute hand: ");
    scanf("%f %f", &hour, &minute);

    angle = fabs((30 * hour) - (5.5 * minute));

    if (angle > 180) {
        angle = 360 - angle;
    }

    printf("Angle: %.2f", angle);

}

#include <stdio.h>

int main()
{
    float arc, radius, angle;

    printf("Enter arc length: ");
    scanf("%f", &arc);

    printf("Enter radius: ");
    scanf("%f", &radius);

    angle = (arc / radius) * (180 / 3.1416);

    printf("Central Angle = %.2f degrees", angle);

    return 0;
}
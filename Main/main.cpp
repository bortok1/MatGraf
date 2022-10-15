#include <cstdio>
#include "Calc/Vector.h"

int main(int argc, char *argv[]) {
    Vector v1 = Vector(4, 4, -4);
    Vector v2 = Vector(3, -3, -3);
    Vector v3 = Vector(v1);

    // Task 1
    v1.add(v2);
    v2.add(v3);

    if (!v1.isEqual(v2))
        printf("1. Addition is not alternant!");
    else
        printf("1. Addition is alternant.\n");

    // Task 2
    v1.setXYZ(0,3,0);
    v2.setXYZ(5,5,0);

    float angle = v1.angle(v2, 1);

    printf("2. Angle between vectors in degrees: %d \n", (int)angle);

    //Task 3
    v1.setXYZ(4,5,1);
    v2.setXYZ(4,1,3);

    v3 = v1.cross(v2);

    printf("3. Vector perpendicular to given vectors is: {%d, %d, %d}\n", (int)v3.getX(), (int)v3.getY(), (int)v3.getZ());

    //Task 4
    v3.normalize();

    printf("4. Normalized vector from point 3.: {%f, %f, %f}\n", v3.getX(), v3.getY(), v3.getZ());
    return 0;
}

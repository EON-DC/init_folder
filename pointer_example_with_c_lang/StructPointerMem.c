#include <stdio.h>

struct point {
    int xpos;
    int ypos;
};

struct circle {
    double radius;
    struct point* center;
};

int main() {
    struct point cen = {2, 7};
    double radius = 5.5;

    struct circle ring = {radius, &cen};
    return 0;
}
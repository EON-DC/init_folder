#include <math.h>
#include <stdio.h>

struct point {
    int xpos;
    int ypos;
};

int main() {
    struct point pos1, pos2;
    double distance;

    fputs("point1 pos: ", stdout);
    scanf("%d %d", &pos1.xpos, &pos1.ypos);

    fputs("point2 pos: ", stdout);
    scanf("%d %d", &pos2.xpos, &pos2.ypos);

    /*두 점 간의 거리 계산 공식 */
    int x_distance = pos1.xpos - pos2.xpos;
    int y_distance = pos1.ypos - pos2.ypos;
    distance =
        sqrt((double)(x_distance * x_distance) + (y_distance * y_distance));
    printf("두 점 사이간 거리 : %f\n", distance);

    return 0;
}
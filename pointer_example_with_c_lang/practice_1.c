#include <stdio.h>

int main() {
    int row = 0, col = 0;
    int map[5][5] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int temp = j + (i * 5) + 1;
            map[i][j] = temp;
            printf("%d ", temp);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

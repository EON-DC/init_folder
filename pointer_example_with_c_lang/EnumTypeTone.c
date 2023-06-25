#include <stdio.h>

typedef enum syllable {
    Do = 1,
    Re = 2,
    Mi = 3,
    Fa = 4,
    So = 5,
    La = 6,
    Ti = 7
} Syllable;

int Sound(Syllable sy) {
    switch (sy) {
        case Do:
            puts("도는 하얀 도라지");

        default:
            break;
    }
}
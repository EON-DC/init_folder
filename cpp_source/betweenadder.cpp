#include <iostream>

int main() {
    int val1, val2;
    int result = 0;
    std::cout << "두 개의 숫자 입력:";
    std::cin >> val1 >> val2;

    if (val1 < val2) {
        for (int i = val1 + 1; i < val2; i++) {
            result += i;
        }
    } else {
        for (int i = val2 + 1; i < val1; i++) {
            result += i;
        }
    }
}
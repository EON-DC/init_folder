#include <stdio.h>
#include <string.h>

struct person {
    char name[20];
    char phoneNum[20];
    int age;
};

int main() {
    struct person man1, man2;
    strcpy(man1.name, "안성준");
    strcpy(man1.phoneNum, "010-1122-3344");
    man1.age = 23;

    printf("%s \n", man1.name);
    printf("%s \n", man1.phoneNum);
    printf("%d \n", man1.age);

    return 0;
}
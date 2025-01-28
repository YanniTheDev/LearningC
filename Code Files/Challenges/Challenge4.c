#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int result = 0;

    for (int i = 1; i <= num * 2; i++) {
        result += i;
    }

    printf("%d", result);

    return 0;
}
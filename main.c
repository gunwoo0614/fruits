#include <stdio.h>

int main(void)
{
    const char *fruits[] = {
        "Apple", "Banana", "Orange", "Grape", "Peach"
    };
    const char *choice[] = {
        "Apple", "Dog", "Orange", "Car", "Peach"
    };

    // 그냥 출력만 (검사/치환 로직 없음)
    for (int i = 0; i < 5; i++) {
        printf("%s\n", choice[i]);
    }

    return 0;
}

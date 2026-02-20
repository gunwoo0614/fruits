#include <stdio.h>

int main(void)
{
    const char *fruits[] = {
        "Apple", "Banana", "Orange", "Grape", "Peach"
    };

    // 일부러 fruits에 없는 단어를 넣어도 됨 (yml에서 고쳐줄 거라서)
    const char *choice[] = {
        "Apple", "Dog", "Orange", "Car", "Peach"
    };

    // 그냥 출력만 (검사/치환 로직 없음)
    for (int i = 0; i < 5; i++) {
        printf("%s\n", choice[i]);
    }

    return 0;
}

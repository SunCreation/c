#include <stdio.h>

void p(int num);
int wow(int i, int num, char c);

int main(void) {
    printf("hi");
    int as;
    scanf("%d", &as);
    char s = 'A';
    int t;
    t = wow(as, as, s);
    printf("%d\n", t);
    p(t);
    return 0;
}

//함수 정의
void p(int num) {
    printf("num은 %d 입니다.\n", num);
}
int wow(int i, int num, char c) {

    return i + 4;
}
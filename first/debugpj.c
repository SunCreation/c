#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();

int main(void) {
    srand(time(NULL));
    int count =0;
    for (int i = 1; i <= 5; i++) {
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        showQuestion(i, num1, num2);
        int answer = -1;
        scanf("%d", &answer);

        if (answer == -1) {
            printf("게임이 끝났습니다.");
            exit(0);
        } else if (answer == num1 * num2) {
            success();
            count++;
        }
    }
}

int getRandomNumber(int level) {
    return rand() % (level * 7) + 1;
}
void showQuestion(int level, int num1, int num2) {
    printf("\n\n\n########### %d 번째 비밀번호 ##########\n", level);
    printf("\n\t%d x %d는?\n\n", num1, num2);
    printf("##############################\n");
    printf("\n비밀번호를 입력하세요.(종료: -1) >>");
}
void success() {
    printf("\n\n\n\n\nGood~ 성공!");
}
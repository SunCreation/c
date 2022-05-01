#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success(int level);
void fail(int num1, int num2);


int main_function_project(void) {
    srand(time(NULL));
    int count = 0;
    for (int i = 1; i<=5; i++) {
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);

        showQuestion(i, num1, num2);

        int answer = -1;
        scanf("%d", &answer);

        if (answer == -1) {
            printf("프로그램을 종료합니다.\n");
            exit(0);
        } else if (answer == num1 * num2) {
            // 성공
            success(i);
            count++;
        } else {
            fail(num1, num2);
        }
    }

    printf("\n\n당신은 5개의 비밀번호 중 %d개를 맞췄습니다.", count);
    return 0;
}

int getRandomNumber(int level) 
{
    // level에 0이 들어가면 오류가 난다. 디버깅도 잘 안해줌.
    return rand() % (level * 7) + 1;
}
void showQuestion(int level, int num1, int num2) 
{
    printf("\n\n\n############ %d 번째 비밀번호 ############\n", level);
    printf("\n\t%d x %d는?\n\n", num1, num2);
    printf("#########################################\n\n");
    printf("\n비밀번호를 입력하세요.(종료: -1) >> ");
}
void success(int level) 
{
    printf("\n Good! %d단계 성공입니다!", level);
}
void fail(int num1, int num2) 
{
    printf("\n땡~~ 정답은 %d", num1 * num2);
}
// #define _CRT_SECURE_NO_WARNINGS // 잔소리 금지!!
#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996) //제발좀
int main(void)
{
    
    // int age =15;
    // if (age >=20)
    // {
    //     printf("일반인");
    // }
    // else if (age >= 15 && age < 20)
    // {
    //     printf("학생");
    // }
    // else 
    // {
    //     printf("what?");
    // }
    // for (int i =1; i <= 30; i++)
    // {
    //     if (i >= 6)
    //     {
    //         printf("나머지 학생은 집에 가세요.\n");
    //         break;
    //     }
    //     printf("%d 번 학생은 조별 발표 준비를 하세요.\n", i);
    // }

    // for (int i = 1; i <= 30; i++)
    // {
    //     if (i >= 6 && i <= 10)
    //     {
    //         if (i == 7)
    //         {
    //             printf("%d번 학생은 결석입니다.\n",i);
    //             continue;
    //         }
    //     printf("%d번 학생은 조별발표준비하세요.\n", i);

    //     }
    // }
    // int a = 0;
    // int b = 12;
    // printf("%d\n",a||b);
    // if ("")
    // {
    //     printf("hij");
    // }
    // srand(time(NULL));
    // int i = rand() % 3; // 0 ~ 2 반환
    // // scanf_s("%d", i);
    // if (i == 0) {
    //     printf("가위\n");
    // } else if (i == 1) {
    //     printf("바위\n");
    // } else if (i == 2) {
    //     printf("보\n");
    // } else {
    //     printf("몰라요.");
    // }
    // switch
    srand(time(NULL));
    int i = rand() % 3;
    switch (i){
        case 0:printf("가위\n"); break;
        case 1:printf("바위\n"); break;
        case 2:printf("보\n"); break;
        default:printf("몰라요\n"); break;
    }


    return 0;
}
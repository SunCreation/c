#include <stdio.h>
int main_loop(void)
{
    // // 
    // int age = 10;
    // printf("%d\n", age);
    // age = 14;
    // printf("%d\n", age);

    // // // 흐 주석 날아감
    // float f = 46.5f;
    // printf("%.2f\n",f);
    // // 
    // double d = 4.428;
    // printf("%.2lf\n", d);

    // // 으아아
    // const int YEAR = 2000;
    // printf("태어난 연도 : %d\n", YEAR);

    // // 연산
    // int add = 3 + 7;
    // printf("3+7 = %d\n", add);
    // printf("%d + %d = %d\n", 30, 79, 30+79);
    // printf("%d * %d = %d\n", 30, 79, 30*79);
    // scanf는 길이를 안받아서 보안상 문제가 있다.
    // 
    // int input;
    // scanf("%d", &input);
    // printf("%d", input);
    // int one, two, three;
    // scanf("%d %d %d", &one, &two, &three);
    // printf("첫 값: %d", one);
    // printf("둘째 값: %d", two);

    // char c = 'd';
    // printf("%c", c);
    // // char* str = "foijw"
    // char str[256];
    // scanf("%s", str);
    // printf("%s\n", str);

    // int a = 10;
    // printf("a는 %d\n", a);
    // a++;
    // a++;
    // printf("a는 %d\n", a++);
    // printf("a는 %d\n", a++);
    // printf("a는 %d\n", ++a);
    // printf("a는 %d\n", ++a);
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("hi %d\n", i);
    // }
    // int i = 1;
    // while (i <= 10)
    // {
    //     printf("hi %d\n", i++);
    // }
    // // do while
    // int i = 1;
    // do {
    //     printf("hi %d\n", i++);
    // } while (i <= 10);

    for (int i = 1; i <= 3; i++)
    {
        printf("hi: %d\n", i);
        for (int j = 1; j <= 5; j++)
        {
            printf("   ?? %d\n", j);
        }
    }

    return 0;
}

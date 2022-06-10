#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <map>
#include <time.h>
#include <stdlib.h>

using namespace std;

// typedef struct hi who;
int add(int x, int y);
int mul(int x, int y);
int sub(int x, int y);
int print_array(int *arr);
int print_array(char * arr);
int print_array(struct vec * arr);
// 위에처럼 할 시, 3개의 구조에 대해 처리 가능해진다.

// using intfunc = (int*)(int,int);
void *wow(char str);
// map <char, int*(int,int)> mymap; 지금같은 때는 굳이 안써도 되겠다. 사용 가능한지는 체크.
char oper[] = "+-*";
struct vec{
    struct vec *next;
    char what;
    void *data;
    // int (*func)(int,int);
    // int length;
};

struct vec *divide_conquer(struct vec *ex);
struct vec *ex2vec(char * expression);

int main(void)
{
    char expression[25]; // char * expression;으로 할 시, 상황에 따라 이해할 수 없는 오류 발생. 진짜 이상하다.
    // char * hhh; //지금 이 아무 의미 없어야 하는 코드가 영향을 미치다.
    // int hh;
    // scanf("%d", &hh);
    // printf("%d", hh);
    setbuf(stdout, NULL);   
    freopen("../inputs/84.txt", "r", stdin);
    struct vec * ex = (struct vec*) malloc(sizeof(struct vec));
    struct vec * array = (struct vec*) malloc(sizeof(struct vec));
    clock_t start, end;
    double result;
    float answer;
    int (*hi)(int,int);
    hi=add;
    printf("%d\n",((int (*)(int,int))(wow('*')))(1,2)); //wowowowowowow
    // 원하는 함수 포인터로 불러오기 성공

    // int arr[10];
    // arr[0]=10;
    // arr[1]=2;
    // cout << *arr << '\n';
    // int eof; feof()출력용 변수
    // int feof(FILE * stream); 이건 뭐지??
    // 파일 끝 도달 실패
    // for (int i = 0; true; i++) {
    //     scanf("%s", expression);
    //     printf("%s", expression);
    //     if (feof(stdin)==EOF) { 
    //         break; 

    //         }
    // };
    // array[0]=1;
    // array[1]=4;
    // array[2]=100;
    // array[3]=24;
    // printf("%d", array[2]);
    // print_array(array);
    // // 원하는 대로 잘 동작함을 확인
    // printf("%s\n", oper);
    // printf("%ld\n", sizeof oper);

    while (!feof(stdin)) {
        scanf("%s", expression);
        printf("%s\n", expression);
        // divide_conquer(expression);
        printf("pre_size is %ld\n", sizeof expression);
        cout << expression << "\n";
        print_array(expression);
        printf("\nhi\n");
        ex = ex2vec(expression);
        array = divide_conquer(ex);
        print_array(array);
        printf("\n\n");
        // printf("%d %ld\n", array->data, sizeof array);
        // printf("%d %d\n", array[0], array[1]);
        // print_array(array);
        // cout << *divide_conquer(expression) << '\n';
        // for (it:=*array[0]; it :array)
            // cout << it <<'\n';
        // 출력해봤는데, 잘 모르겠고 궁금
        // printf("%d\n", hi);
        // fgets(expression, 10, stdin);
        // fgets으로 하니 마지막 줄을 한번 더 읽어오는 모습을 보였다. 왜지?
        // scanf로 하니 의도한 대로 잘 마춰진다.
        // scanf("%s", expression);
        // cout << expression << '\n' << add << '\n'; //  << feof(stdin) << '\n';  문장이 끝나니 1이 나옴
        // printf("%s\n", expression);


    }

    // printf("%ld",NULL); 0 나옴

    // scanf("%s", expression);
    // scanf("%s", expression);
    // scanf("%s", expression);

    // cout << *expression << '\n';
    // cout << 50 << '\n';
    // int a = 5;
    // a = 5 > 7 ? 100 : 10;
    // printf("%d", a);

    return 0;

}
int hih;
int it;
int i;
// struct vec curr;

struct vec *divide_conquer(struct vec *ex) {
    struct vec * arr = (struct vec*) malloc(sizeof(struct vec));
    printf("%d", sizeof(struct vec));
    // struct vec * curr = arr->next;
    // array[0] = 1;
    // array[1] = 100;
    // (*array).next = &curr;
    arr->data=ex->data;
    hih = sizeof ex;
    // print_array(expression);
    printf("its size is %d\n", hih);
    return arr;
}
char *num;
// char c;
struct vec *ex2vec(char * expression) {
    char *c;
    // char *num;
    // num[0] = 's';
    // num[1]='s';
    // num[2]='\0';
    struct vec *hi = (struct vec*) malloc(sizeof(struct vec));
    print_array(expression);
    for (int i=0;*(c=&expression[i])!='\0';i++) {
        // if (c)
        // printf("%c\n",c); 아래와 같다.
        // cout << c << '\n'; //1 ->
        printf("%c\n", *c); //2 -> 이 둘의 차이는 매우 좋다.
        // num += it;
    }
    return hi;
}
int add(int x, int y){
    return x+y;
}
int mul(int x, int y){
    return x*y;
}
int sub(int x, int y){
    return x-y;
}
int print_array(int * arr) {
    hih = sizeof(arr);
    printf("its size is %d\n", hih);
    for (i=0;arr[i]='\0';i++){
        it = arr[i];
        // printf("%d  %d\n", arr[i], *arr);
        cout << *&arr[i] <<'\n'; //주소 값 확인 가능.
    }
    return 0;
}
int print_array(char * arr) {
    hih = sizeof(arr);
    for (i=0;arr[i]!='\0';i++){
        it = arr[i];
        // printf("%d  %d\n", arr[i], *arr);
        cout << *&arr[i]; //주소 값 확인 가능.
    }
    return 0;
}

int print_array(struct vec * arr) {

    return 0;
}

void *wow(char str) {
    if (str=='+')
        return (void*)add;
    if (str=='-')
        return (void*)sub;
    else return (void*)mul;
}
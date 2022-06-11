#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <map>
#include <time.h>
#include <stdlib.h>
#include <math.h>

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
void *str2point(char *str);
// map <char, int*(int,int)> mymap; 지금같은 때는 굳이 안써도 되겠다. 사용 가능한지는 체크.
char oper[] = "+-*";
struct vec{
    struct vec *next;
    char what;
    // void *data;
    int (*fc)(int,int);
    int num;
};

struct vec *ex2vec(char * expression);
struct vec *divide_conquer(struct vec *ex);

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
    // double result;
    // float answer;
    int (*hi)(int,int);
    hi=add;
    // printf("%d\n",((int (*)(int,int))(str2point('*')))(1,2)); //wowowowowowow
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
        // printf("%s\n", expression);
        // divide_conquer(expression);
        // printf("pre_size is %ld\n", sizeof expression);
        // cout << expression << "\n";
        // print_array(expression);
        // printf("\nhi\n");
        ex = ex2vec(expression);
        array = divide_conquer(ex);
        print_array(ex);
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
// int hih;
// int it;
// int i;
// struct vec curr;

struct vec *ex2vec(char * expression) {
    int num;
    char *c;
    // char *num;
    // num[0] = 's';
    // num[1]='s';
    // num[2]='\0';
    struct vec *hi = (struct vec*) malloc(sizeof(struct vec));
    struct vec *cur = hi;
    print_array(expression);
    for (int i=0;*(c=&expression[i])!='\0';i++) {
        struct vec * new_ = (struct vec *)malloc(24);

        // if (c)
        // printf("%c\n",c); 아래와 같다.
        // cout << c << '\n'; //1 ->
        // printf("%c\n", *c); //2 -> 이 둘의 차이는 매우 좋다.
        // cur->data=c;
        // num += it;
        cur->what='o';
        if (*c=='+')
            cur->fc=add;
        else if (*c=='-')
            cur->fc=sub;
        else if (*c=='*')
            cur->fc=mul;
        else {
            cur->what='d';
            cur->num=(num=atoi(c));
            i += (int)pow(num,(1.0/10.0))-1;
        }
        cur->next = new_;
        cur = cur->next;
    }
    cur->what='q';
    return hi;
}

struct vec *divide_conquer(struct vec *ex) {
    struct vec * arr = (struct vec*) malloc(sizeof(struct vec));
    printf("%ld", sizeof(struct vec));
    // struct vec * curr = arr->next;
    // array[0] = 1;
    // array[1] = 100;
    // (*array).next = &curr;
    // arr->data=ex->data; data는 비효율적이어서 안쓰기로 함.
    // hih = sizeof ex;
    // print_array(expression);
    printf("its size is %ld\n", sizeof ex);
    return arr;
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
    // hih = sizeof(arr);
    int it;
    printf("its size is %ld\n", sizeof(arr));
    for (int i=0;(it=arr[i])='\0';i++){
        // int it = arr[i];
        // printf("%d  %d\n", arr[i], *arr);
        cout << *&it <<'\n'; //주소 값 확인 가능.
    }
    return 0;
}
int print_array(char * arr) {
    // hih = sizeof(arr);
    char it;
    for (int i=0;(it=arr[i])!='\0';i++){
        // it = arr[i];
        // printf("%d  %d\n", arr[i], *arr);
        cout << *&it; //주소 값 확인 가능.
    }
    printf("\n");
    return 0;
}

int print_array(struct vec * arr) {
    struct vec * cur = arr;

    while (cur->what!='q'){
        cout << cur->num <<'\n';
        cur = cur->next;
    }
    return 0;
}
// 아래처럼 쓰면 좋을 줄 알았는데, 그렇지 않다.
void *str2point(char *str) {
    if (*str=='+')
        return (void*)add;
    else if (*str=='-')
        return (void*)sub;
    else if (*str=='*')
        return (void*)mul;
    else
        return (void*)str;
}
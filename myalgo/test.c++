#include <cstdio>
#include <iostream>
#include <map>
#include <time.h>
#include <stdlib.h>

using namespace std;

int add(int, int);

int main(void)
{
    char * ex = "-1234+124";
    char hi[5] = "2";
    // int hh;
    // int hh = hi;
    // scanf("%s", &ex);
    // printf("%d", hh);
    // setbuf(stdout, NULL);
    // freopen("../inputs/84.txt", "r", stdin);
    // scanf("%s", ex);
    // printf("%d", sizeof(void *));
    // printf("%ld", sizeof(add)); ¿Ã∞« æ»µ !
    void * hh = hi;
    printf("%d",atoi(ex));

    // while (!feof(stdin)) {

    //     cout << ex << "\n";
    // }


    return 0;

}
int add(int x, int y){
    return x + y;
}
#include <stdio.h>

int main(void) {
    // // 포인터
    // //  [철수] : 101 호 -> a메모리공간의 주소
    // //  [영희] : 201 호
    // //  [민수] : 301 호
    int chursu = 1;
    int younghh = 2;
    int minsu = 3;

    printf("철수네 주소 : %d, 암호 : %d\n", &chursu, chursu); // 변수 앞에 &를 놓으면 주소를 알려준다.
    printf("영희네 주소 : %p, 암호 : %d\n", &younghh, younghh);
    printf("민수네 주소 : %d, 암호 : %d\n", &minsu, minsu);


    // // 미션맨!
    // // 집에 방문하여 암호를 확인!
    // int* mision;
    // mision = &chursu;
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", mision, *mision);
    // mision = &younghh;
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", mision, *mision);
    // mision = &minsu;
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", mision, *mision);

    // int* spi = mision;
    // *spi = *spi -2;
    // printf("민수네 주소 : %d, 암호 : %d\n", &minsu, minsu);

    // // 미션맨도 사는 곳이 있을까?
    // printf("미션맨 주소 %d\n", &mision);
    // printf("스파이 주소 %d", &spi);

    // 배열?
    int arr[3] = {5,10,15};
    int* ptr = arr;
    for (int i = 0; i < 3; i++) {
        printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
    }
    for (int i = 0; i < 3; i++) {
        printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
    }
    return 0;
}
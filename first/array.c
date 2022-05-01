#include <stdio.h>

int main(void) {
    // 배열
    // int subway_1 = 30;
    // int subway_2 = 40;
    // int subway_3 = 50;
    // // □□□□□□□□□
    // printf("지하철 1호차에 %d명이 타고 있습니다.\n", subway_1);
    // printf("지하철 2호차에 %d명이 타고 있습니다.\n", subway_2);
    // printf("지하철 3호차에 %d명이 타고 있습니다.\n", subway_3);
    // int subway_array[3];
    // subway_array[0] = 30;
    // subway_array[1] = 40;
    // subway_array[2] = 50;

    // for (int i = 0; i < 3; i++) {
    //     printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i, subway_array[i]);
    // }

    // int arr[10]; // = {1,2,3,4,5,6,7,8,9,10}; 이걸 해야한다.
    // for (int i = 0; i<10; i++) {
    //     printf("%d\n", arr[i]);
    // }

    int size = 10;
    // int arr[size] = {1,2,3,4,5,6,7,8,9,0}; 이렇게 못쓴다.
    int arr[10] = {1,2,3};
    float arr_f[5] = { 1.0f, 2.0f, 3.0f};

    for (int i = 0; i < 10; i++) {
        printf("%.4f\n", arr_f[i]);
    }
    return 0;
}
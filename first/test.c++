#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

vector<int> hi;

int main(void) {
    // file에서 인풋받기
    // char file[40];
    // scanf("%s", &file); //"../inputs/test"
    // printf("%s\n", file);
    // FILE* stream = fopen(file, "r+");
    // // FILE* stream = fopen("../inputs/test", "r+");

    // int data[3];
    // fscanf(stream, "%d", &data[0]);
    // fscanf(stream, "%d", &data[1]);
    // fscanf(stream, "%d", &data[2]);

    // printf("%d\n", data[0]);
    // printf("%d\n", data[1]);
    // printf("%d\n", data[2]);

    // vector 사용법
    hi.push_back(1);
    hi.push_back(2);
    hi.push_back(2);
    hi.push_back(5);

    cout << hi[0] << '\n';
    printf("%d", hi[10]);
    return 0;
}
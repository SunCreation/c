// #include <stdio.h>
// #include <stdlib.h>
#include <cstdio>
#include <iostream>
#include <map>
#include <iterator>
#include <vector>
using namespace std;

int main(){
    map<int, int> numdict;
    // map<int, int>::iterator p;

    numdict[3] = 10;
    numdict[4] = 5;
    
    numdict.find(4);

    printf("%d",numdict.find(3));

    return 0;
}

// #include <cstdio>
// #include <iostream>
// #include <map>
// #include <cstring>
// #include <iterator>
// using namespace std;

// int main() {
//     map<string, int> myMap;
//     map<string, int>::iterator p;

//     myMap.insert(pair<string, int>("Rob", 28));
//     myMap["Joe"] = 38;
//     myMap["Joe"] = 50;
//     myMap["Sue"] = 75;
//     p = myMap.find("Joe"); //iterator ��ȯ
//     myMap.erase(p);
//     myMap.erase("Sue");
//     p = myMap.find("Joe");
//     if (p == myMap.end()) cout << "nonexistent\n";
//     for (p = myMap.begin(); p != myMap.end(); ++p) {
//         cout << "(" << p->first << "," << p->second << ")\n";
//     }
// }
// class Solution {
//     map<int, int> num_index;
//     vector<int> answer;
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int count=0;
//         for(int num: nums){
//             if(num_index[target-num]!=0) {
//                 answer.push_back(num_index[target-num]-1);
//                 answer.push_back(count);
//                 return answer;
//             };
//             count++;
//             num_index[num]=count;
            
//         }
//         return answer;
//     }
// };
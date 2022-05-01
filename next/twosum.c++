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

    printf("%d",*numdict.find(2));

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
//     p = myMap.find("Joe"); //iterator ¹ÝÈ¯
//     myMap.erase(p);
//     myMap.erase("Sue");
//     p = myMap.find("Joe");
//     if (p == myMap.end()) cout << "nonexistent\n";
//     for (p = myMap.begin(); p != myMap.end(); ++p) {
//         cout << "(" << p->first << "," << p->second << ")\n";
//     }
// }
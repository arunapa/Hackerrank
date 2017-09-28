//https://www.hackerrank.com/challenges/mars-exploration/problem
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.length(); i += 3){
        cout <<s[i] << s[i + 1] << s[i + 2];
        if(s[i] != 's')
            count++;
        if(s[i + 1] != 'o')
            count++;
        if(s[i + 2] != 's')
            count++;
    }
    cout << count;
    return 0;
}

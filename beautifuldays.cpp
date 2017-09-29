//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isBeautiful(int x){
    int y = 0, z = x;
    while(z > 0){
        y = (10 * y) + z % 10;
        z = z / 10;
    }
    //cout << "Y is " << y << endl;
    return abs(x - y);
}

int main() {
    int i, j, k;
    cin >> i >> j >> k;
    int count = 0;
    for(int a = i; a <= j; a++){
        //cout << "X is " << a << endl;
        int b = isBeautiful(a);
        //cout << "Abs is " << b << endl;
        if(b % k == 0){
            count++;
        }
    }
    cout << count;
    return 0;
}

//https://www.hackerrank.com/challenges/maximizing-xor/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int l, r;
    cin >> l >> r;
    int xord = 0;
    for(int i = l; i <= r; i++){
        for(int j = l; j <= r; j++){
            int x = i^j;
            if(x > xord){
                //cout << "VALUE: " << x << " greater than: " << xord << endl;
                xord = x;
            }
        }
    }
    cout << xord;
    return 0;
}

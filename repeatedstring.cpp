//https://www.hackerrank.com/challenges/repeated-string/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    long long n;
    cin >> n;
    int count = 0;
    for(int i = 0; i < s.length(); i++)
        if(s[i] == 'a')
            count++;
    cout << "len " << s.length()<< " count " <<count << endl;
    long long number = count * (n / s.length());
    for(int i = 0; i < n % s.length(); i++){
        if(s[i] == 'a'){
            cout << "yes it is at " << i << endl;
            number++;
        }
    }
    cout << number;
    return 0;
}

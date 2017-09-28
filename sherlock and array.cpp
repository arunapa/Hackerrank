//https://www.hackerrank.com/challenges/sherlock-and-array/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> A(n);
        long long int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            sum += A[i];
        }
        if(n == 1){
            cout << "YES\n";
        }
        else{
            //cout << "SUM: " << sum << endl;
            int lsum = 0, index = -1;
            for(int i = 0; i < n - 1; i++){
                lsum += A[i];
                sum -= A[i];
                if((sum - A[i + 1]) == lsum){
                    index = i + 1;
                }
            }
            if(index == -1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}

//https://www.hackerrank.com/challenges/priyanka-and-toys/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int calctoys(vector<int> &a, int n){
    int total = 0, i;
    sort(a.begin(), a.end());
    /*for(int i = 0; i < n; i++)
    	cout << a[i] << " ";
    cout << endl;*/
    i = n - 1;
    while(i > 0){
        if(a[i] - a[i - 1] > 4){
			//cout << "GREATER THAN 4 " << a[i] << " " << a[i - 1] << endl;
             total++;
            i--;
		}
		else{
			while(a[i] - a[i - 1] <= 4 && i > 0){
			//cout << "LESSER THAN 4 " << a[i] << " " << a[i - 1] << endl;
				i--;
			}
			i--;
            total++;
        }
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    for(int i = 0; i < n; i++)
        cin >> w[i];
    int toys = calctoys(w, n);
    cout << toys;
    return 0;
}

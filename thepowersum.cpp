//https://www.hackerrank.com/challenges/the-power-sum/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int FindPowerSum(int total, int power, int num){
	int value = static_cast<int> (total - pow(num, power));
	if(value < 0)
		return 0;
	else if(value == 0)
		return 1;
	else{
		int a = FindPowerSum(total, power, num + 1); //solution set excluding num
		int b = FindPowerSum(value, power, num + 1); //solution set including num
		return a + b;
	}
}

int main() {
	int x, n;
	cin >> x >> n;
	cout << FindPowerSum(x, n, 1) << endl;
    return 0;
}

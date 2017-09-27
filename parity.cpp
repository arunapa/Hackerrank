//https://www.hackerrank.com/contests/hourrank-22/challenges/parity-game/problem

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int smallestSizeSubsequence(int n, vector <int> A, int odd) {
	if(n == 1){
		if(A[0] % 2 == 0)
			return 0;
		else
			return -1;
	}
	if(odd % 2 == 0)
		return 0;
	else{
	sort(A.begin(), A.end());
		int i = 0;
		while(i <= n){
			if(A[i] % 2 != 0)
				return A[i];
		}
	}
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    int odd = 0;
    
    for(int A_i = 0; A_i < n; A_i++){
       cin >> A[A_i];
       if(A[A_i] % 2 != 0)
			odd++;
    }
    
    int result = smallestSizeSubsequence(n, A, odd);
    cout << result << endl;
    return 0;
}


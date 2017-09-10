#include <iostream>

using namespace std;

void multiply(long long int a[], int &ptr, int no){
	int carry = 0, temp;
	for(int k = 0; k <= ptr; k++){
		temp = no * a[k];
		a[k] = temp + carry;
		carry = a[k] / 10;
		a[k] = a[k] % 10;
	}
	while(carry != 0){
		a[ptr + 1] = carry % 10;
		carry = carry / 10;
		ptr ++;
	}
}

int main(){
	//accept n
	int n;
	cin >> n;
	
	long long int a[200] = {0};
	int ptr = 0;
	a[0] = 1;

	//multiples each value of n
	for(int i = 2; i <= n; i++){
		multiply(a, ptr, i);
	}
	
	//display the resulting array factorial
	for(int i = ptr; i >= 0; i--)
		cout << a[i];
	return 0;
}

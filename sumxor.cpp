//https://www.hackerrank.com/challenges/sum-vs-xor/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    if(n == 0)
      cout << "1";
    else{
      int zero = 0;
      do{
          zero += n % 2 == 0 ? 1 : 0;
      }while(n = n / 2);
      cout << (long int)pow(2, zero);
    }
    return 0;
}

/*I believe the justification is that the xor simulates binary
addition without the carry over to the next digit. For the zero
digits of n you can either add a 1 or 0 without getting a carry
which implies xor = + whereas if a digit in n is 1 then the matching
digit in x is forced to be 0 on order to avoid carry. For each 0 in n
 in the matching digit in x can either being a 1 or 0 with a total
 combination count of 2^(num of zero).*/

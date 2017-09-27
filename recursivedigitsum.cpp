//https://www.hackerrank.com/challenges/recursive-digit-sum

#include <iostream>

using namespace std;

int super_digit(const string &s) {
    int rem = 0;
    for(char ch : s) {
        rem = (rem + (ch - '0')) % 9;
    }
    return rem;
}


int main() {
    string s;
    cin >> s;

    int k;
    cin >> k;

    k %= 9;

    //anything multiplied 9 times will result in 9
    if(k == 0) {
        cout << "9" << endl;
    }
    else {
        int remainder = super_digit(s);
        remainder = (remainder * k) % 9;
        cout << ((remainder != 0) ? to_string(remainder) : "9") << endl;
    }

    return 0;
}

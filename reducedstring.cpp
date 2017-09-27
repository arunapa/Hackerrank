//https://www.hackerrank.com/challenges/reduced-string/problem
#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string &s, int i){
	for(int i = 1; i < s.length(); i++) {
        if(s[i] == s[i - 1]) {
            s.erase(i - 1, 1);
            s.erase(i - 1, 1);
            i = 0;
        }
	}
	
	if(s.empty() == true){
		cout << "Empty String";
		return "";
	}

	return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s, 0);
    cout << result << endl;
    return 0;
}

//https://www.hackerrank.com/challenges/the-time-in-words/problem

#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string hours(int h){
	switch(h){
		case 1:
			return "one";
			break;
		case 2:
			return "two";
			break;
		case 3:
			return "three";
			break;
		case 4:
			return "four";
			break;
		case 5:
			return "five";
			break;
		case 6:
			return "six";
			break;
		case 7:
			return "seven";
			break;
		case 8:
			return "eight";
			break;
		case 9:
			return "nine";
			break;
		case 10:
			return "ten";
			break;
		case 11:
			return "eleven";
			break;
		case 12:
			return "twelve";
			break;
	}
}

string minutes(int m){
	switch(m){
		case 2:
			return "two";
		case 3:
			return "three";
		case 4:
			return "four";
		case 5:
			return "five";
		case 6:
			return "six";
		case 7:
			return "seven";
		case 8:
			return "eight";
		case 9:
			return "nine";
		case 10:
			return "ten";
		case 11:
			return "eleven";
		case 12:
			return "twelve";
		case 13:
			return "thirteen";
		case 14:
			return "fourteen";
		case 16:
			return "sixteen";
		case 17:
			return "seventeen";
		case 18:
			return "eighteen";
		case 19:
			return "nineteen";
		case 20:
			return "twenty";
		case 21:
			return "twenty one";
		case 22:
			return "twenty two";
		case 23:
			return "twenty three";
		case 24:
			return "twenty four";
		case 25:
			return "twenty five";
		case 26:
			return "twenty six";
		case 27:
			return "twenty seven";
		case 28:
			return "twenty eight";
		case 29:
			return "twenty nine";
	}
}

int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    
    if(m == 0){
		cout << hours(h) << " o' clock";
	}
	else if(m == 1){
		cout << "one minute past " << hours(h);
	}
	else if(m == 15){
		cout << "quarter past " << hours(h);
	}
	else if(m == 30){
		cout << "half past " << hours(h);
	}
	else if(m < 30){
		cout << minutes(m) << " minutes past " << hours(h);
	}
	else if(m == 45){
		cout << "quarter to "<< hours(h + 1);
	}
	else if(m == 59){
		cout << "one minute to " << hours(h + 1);
	}
	else if(m > 30){
		cout << minutes(60 - m) << " minutes to " << hours(h + 1);
	}
    return 0;
}



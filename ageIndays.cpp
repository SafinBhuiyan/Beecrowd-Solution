#include <bits/stdc++.h>
using namespace std;
int main() {

        int day , month , year;
        cin >> day;

        year = day/365;
        month = day%365;
      	day = month%30;
      	month = month/30;

        cout << year << " ano(s)" << endl;
        cout << month << " mes(es)" << endl;
        cout << day << " dia(s)" << endl;
        
	return 0;
}

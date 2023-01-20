#include <bits/stdc++.h>
using namespace std;
int main() {

        int second , minute , hour;
        cin >> second;

        minute = second/60;
        hour = minute/60;
        minute = minute%60;
        second = second%60;

        cout <<hour<<":"<<minute<<":"<<second<<endl;
        
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {

        int a,b,c;
        cin >> a >> b >> c;

        int AB;
        AB = ((a+b+abs(a-b))/2);

        int ABC;
        ABC = ((AB+c+abs(AB-c))/2);

        cout << ABC << " eh o maior" << endl;
  
	return 0;
}

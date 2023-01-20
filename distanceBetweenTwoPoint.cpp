#include <bits/stdc++.h>
using namespace std;
int main() {
	//1015 - Distance Between Two Points

        double x , x1 , x2 , y , y1 , y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        x = (x2-x1)*(x2-x1);
        y = (y2-y1)*(y2-y1);

        double distance;
        distance = sqrt(x+y);

        cout << fixed << setprecision(4) << distance << endl;

	return 0;
}

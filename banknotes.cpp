#include <bits/stdc++.h>
using namespace std;
int main() {

        int totalMoney,moduloMoney;
        cin >> totalMoney;

        cout << totalMoney << endl;

        cout << totalMoney/100 << " nota(s) de R$ 100,00\n";
        moduloMoney = totalMoney%100;

        cout << moduloMoney/50 << " nota(s) de R$ 50,00\n";
        moduloMoney = moduloMoney%50;

        cout << moduloMoney/20 << " nota(s) de R$ 20,00\n";
        moduloMoney = moduloMoney%20;

        cout << moduloMoney/10 << " nota(s) de R$ 10,00\n";
        moduloMoney = moduloMoney%10;

        cout << moduloMoney/5 << " nota(s) de R$ 5,00\n";
        moduloMoney = moduloMoney%5;

        cout << moduloMoney/2 << " nota(s) de R$ 2,00\n";
        moduloMoney = moduloMoney%2;

        cout << moduloMoney/1 << " nota(s) de R$ 1,00\n";
        moduloMoney = moduloMoney%1;


	return 0;
}

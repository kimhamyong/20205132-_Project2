#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    // p.115 1�� ����
    string s1, s2;

    cout << "ù ��° ���ڿ�: ";
    cin >> s1;
    cout << "�� ��° ���ڿ�: ";
    cin >> s2;

    if (s1 == s2) cout << "2���� ���ڿ��� �����ϴ�. " << endl;
    else cout << "2���� ���ڿ��� �ٸ��ϴ�. " << endl;

    return 0;


    // p.117 10�� ����
    int a, b, c;

    for (int i = 1; i < 100; i++) {
        a = i * i;
        for (int j = 1; j < 100; j++) {
            b = j * j;
            for (int k = 1; k < 100; k++) {
                c = k * k;
                if (a + b == c) cout << i << " " << j << " " << k << endl;
            }
        }
    }

    return 0;


    // p.119 16�� ����
    srand(time(NULL));
    int bets = 0, wins = 0;

    cout << "�ʱ� �ݾ� $50" << endl;
    cout << "��ǥ �ݾ� $250" << endl;

    for (int i = 0; i < 1000; i++) {
        int cash = 50;
        while (cash > 0 && cash < 250) {
            bets++;
            if ((double)rand() / RAND_MAX < 0.5) cash++;
            else cash--;
            if (cash == 250)wins++;
        }
        cout << fixed;
        cout.precision(6);
        cout << "1000 ���� " << wins << "�¸�" << endl;
        cout << "�̱� Ȯ�� = " << wins / 10.0 << endl;
        cout << "��� ���� Ƚ�� = " << bets / 1000.0 << endl;

        return 0;
    }
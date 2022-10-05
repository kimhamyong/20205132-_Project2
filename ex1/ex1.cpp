#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    // p.115 1번 문제
    string s1, s2;

    cout << "첫 번째 문자열: ";
    cin >> s1;
    cout << "두 번째 문자열: ";
    cin >> s2;

    if (s1 == s2) cout << "2개의 문자열은 같습니다. " << endl;
    else cout << "2개의 문자열은 다릅니다. " << endl;

    return 0;


    // p.117 10번 문제
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


    // p.119 16번 문제
    srand(time(NULL));
    int bets = 0, wins = 0;

    cout << "초기 금액 $50" << endl;
    cout << "목표 금액 $250" << endl;

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
        cout << "1000 중의 " << wins << "승리" << endl;
        cout << "이긴 확률 = " << wins / 10.0 << endl;
        cout << "평균 베팅 횟수 = " << bets / 1000.0 << endl;

        return 0;
    }
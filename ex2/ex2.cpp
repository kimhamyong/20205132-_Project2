#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

// p.160 2번 문제
inline double calc_volume(double radius) {
    return (4.0 / 3.0 * 3.14 * pow(radius, 3));
}
int main() {

    // p.160 2번 문제
    double radius;
    cout << "반지를을 입력하시오: ";
    cin >> radius;
    cout << "구의 부피는 " << calc_volume(radius) << endl;

    return 0;


    // p.162 9번 문제
    srand(time(NULL));
    int dice1, dice2, sum;

    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
    sum = dice1 + dice2;

    cout << "사용자의 주사위: " << dice1 << "+" << dice2 << "=" << sum << endl;

    if (sum == 7 || sum == 12)cout << "사용자가 이겼습니다." << endl;
    else if (sum == 2 || sum == 3 || sum == 12)cout << "사용자가 졌습니다." << endl;

    return 0;


    // p.164 13번 문제
    string password;
    int sml = 0, cap = 0, num = 0;

    cout << "암호를 입력하시오: ";
    getline(cin, password);

    for (int i = 0; i < password.size(); i++) {
        if (password[i] >= 'a' && password[i] <= 'z') sml++;
        else if (password[i] >= 'A' && password[i] <= 'Z') cap++;
        else num++;
    }
    if (sml == 0 || cap == 0 || num == 0) cout << "안전하지 않습니다." << endl;
    else cout << "안전합니다." << endl;

    return 0;
}
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

// p.160 2�� ����
inline double calc_volume(double radius) {
    return (4.0 / 3.0 * 3.14 * pow(radius, 3));
}
int main() {

    // p.160 2�� ����
    double radius;
    cout << "�������� �Է��Ͻÿ�: ";
    cin >> radius;
    cout << "���� ���Ǵ� " << calc_volume(radius) << endl;

    return 0;


    // p.162 9�� ����
    srand(time(NULL));
    int dice1, dice2, sum;

    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
    sum = dice1 + dice2;

    cout << "������� �ֻ���: " << dice1 << "+" << dice2 << "=" << sum << endl;

    if (sum == 7 || sum == 12)cout << "����ڰ� �̰���ϴ�." << endl;
    else if (sum == 2 || sum == 3 || sum == 12)cout << "����ڰ� �����ϴ�." << endl;

    return 0;


    // p.164 13�� ����
    string password;
    int sml = 0, cap = 0, num = 0;

    cout << "��ȣ�� �Է��Ͻÿ�: ";
    getline(cin, password);

    for (int i = 0; i < password.size(); i++) {
        if (password[i] >= 'a' && password[i] <= 'z') sml++;
        else if (password[i] >= 'A' && password[i] <= 'Z') cap++;
        else num++;
    }
    if (sml == 0 || cap == 0 || num == 0) cout << "�������� �ʽ��ϴ�." << endl;
    else cout << "�����մϴ�." << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

// p.353 2번 문제
class Name {
    string name;
public:
    void setName(string name) { this->name = name; }
    string getName() { return name; }
};


// p.353 1번 문제
int main(int argc, const char* argv[]) {

    int num;
    cout << "몇 개의 정수를 입력합니까? ";
    cin >> num;

    int* p = new int[num];

    for (int i = 0; i < num; i++) {
        cout << "정수를 입력하시오 : ";
        cin >> p[i];
    }
    cout << "입력된 정수는 : ";

    for (int i = 0; i < num; i++) {
        cout << p[i] << ", ";
    }
    cout << endl;
    delete p;

    return 0;
}


// p.353 2번 문제
int main() {
    int num;
    string s;

    cout << "얼마나 많은 이름을 입력 하시겠습니까? ";
    cin >> num;
    Name* n = new Name[num];

    for (int i = 0; i < num; i++) {
        cout << "이름 입력 #" << i + 1 << " : ";
        cin >> s;
        n[i].setName(s);
    }
    cout << endl;
    cout << "다음은 이름 목록입니다." << endl;

    for (int i = 0; i < num; i++) {
        cout << "이름 #" << i + 1 << ":" << n[i].getName() << endl;
    }
    delete[] n;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

// p.353 2�� ����
class Name {
    string name;
public:
    void setName(string name) { this->name = name; }
    string getName() { return name; }
};


// p.353 1�� ����
int main(int argc, const char* argv[]) {

    int num;
    cout << "�� ���� ������ �Է��մϱ�? ";
    cin >> num;

    int* p = new int[num];

    for (int i = 0; i < num; i++) {
        cout << "������ �Է��Ͻÿ� : ";
        cin >> p[i];
    }
    cout << "�Էµ� ������ : ";

    for (int i = 0; i < num; i++) {
        cout << p[i] << ", ";
    }
    cout << endl;
    delete p;

    return 0;
}


// p.353 2�� ����
int main() {
    int num;
    string s;

    cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
    cin >> num;
    Name* n = new Name[num];

    for (int i = 0; i < num; i++) {
        cout << "�̸� �Է� #" << i + 1 << " : ";
        cin >> s;
        n[i].setName(s);
    }
    cout << endl;
    cout << "������ �̸� ����Դϴ�." << endl;

    for (int i = 0; i < num; i++) {
        cout << "�̸� #" << i + 1 << ":" << n[i].getName() << endl;
    }
    delete[] n;

    return 0;
}
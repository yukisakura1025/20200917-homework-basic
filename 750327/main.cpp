#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "請輸入你的數字: ";
    cin >> num;
    if (num % 3 == 0) {
      cout << "這是三的倍數";
    } else {
        cout << "這不是三的倍數";
    }
}

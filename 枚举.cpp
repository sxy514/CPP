#include <iostream>
using namespace std;

// 枚举示例,枚举一般搭配 switch 使用
int main() {
    enum color {
        red,
        blue,
        black
    } pen; // 语法为：enum 枚举名 { 标识符1,标识符2，.. } 枚举变量名；
    pen = red;
    // 搭配switch-case
    switch (pen) {
    case red:
        cout << "red" << endl;
        break;
    case blue:
        cout << "blue" << endl;
        break;
    case black:
        cout << "black" << endl;
        break;
    }
    return 0;
}

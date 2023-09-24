#include <iostream>
using namespace std;

// 当你不希望其他人(或你自己)改变现有的变量值时，
// 使用 const 关键字(这将把变量声明为“constant”，这意味着不可更改且只读):
int main() {
    const int a = 5;
    // a = 10; 无法对 常量 a 重复赋值
    // 整数常量可以是十进制、八进制或十六进制的常量
    // 前缀指定基数：0x 或 0X 表示十六进制，0
    // 表示八进制，不带前缀则默认表示十进制。
    const int b = 0x1154; // 0x前缀表示 16进制
    const int v = 0155;   // 0前缀表示 八进制
    const int e = 11;     // 不带前缀 十进制

    cout << a;
}
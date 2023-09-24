#include <iostream> //C++中的头文件
#include <iterator>
using namespace std; // 命名空间

// 本示例展示运算符：C++ 内置了丰富的运算符，并提供了以下类型的运算符：
int main() { // main函数为程序入口
    // 算术运算符：+ - * /  %  ++ --
    int a = 1, b = 2, c = 3;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    cout
        << a++ << ++b
        << endl; // 注意自增运算符在前和在后的区别，在前时先自增/自减再参与运算，在后时先将原值参与运算后再进行自增/自减

    // 关系运算符：>  <  >=  <=  ==  !=
    if (a > b) {
        cout << "a大于 b" << endl;
    } // 当关系表达式成立时为true , 不成立时为 false
    if (a < b) {
        cout << "a 小于 b" << endl;
    }
    if (a >= b) {
        cout << "a 大于或等于 b" << endl;
    }
    if (a <= b) {
        cout << "a 小于或等于 b" << endl;
    }
    if (a == b) {
        cout << "a 等于 b" << endl;
    }
    if (a != b) {
        cout << "a 不等于 b" << endl;
    }

    // 逻辑运算符： &&   ||   !
    if (a && b) // 逻辑与
    {
        cout << "a 和 b 都成立" << endl;
    }
    if (a || b) // 逻辑或
    {
        cout << "a 或者 b 成立" << endl;
    }
    if (!(a && b)) // 逻辑非：  !(逻辑与)
    {
        cout << " 逻辑非条件成立" << endl;
    }

    a = 60;
    b = 13;
    c = 0;
    // a = 0011 1100 ;
    // b = 0000 1101 ;
    // 位运算符：位运算符作用于位，并逐位执行操作。
    // 按位与：当位相同时记原值，不同记0
    c = a & b; // 12 = 0000 1100  按位与运算
    cout << "Line 1 - c 的值是 " << c << endl;
    // 按位或 ：  当位相同时记原值，位不同记1
    c = a | b; // 61 = 0011 1101
    cout << "Line 2 - c 的值是 " << c << endl;
    // 按位异或： 当位不同时记1，位相同记0
    c = a ^ b; // 49 = 0011 0001
    cout << "Line 3 - c 的值是 " << c << endl;
    // 按位取反： 将a的原码取反，然后符号位后取反，再符号位后加1;
    // 比如a原码取反：1100 0011; 符号位后取反: 1011 1100; 符号位后加1: 1011
    // 1101;
    c = ~a; // -61 = 1100 0011
    cout << "Line 4 - c 的值是 " << c << endl;
    // 二进制左移运算符。将一个运算对象的各二进制位全部左移 n
    // 位（左边的二进制位丢弃，右边补0）。
    c = a << 2; // 240 = 1111 0000
    cout << "Line 5 - c 的值是 " << c << endl;
    // 二进制右移运算符。将一个数的各二进制位全部右移 n
    // 位，正数左补0，负数左补1，右边丢弃。
    c = a >> 2; // 15 = 0000 1111
    cout << "Line 6 - c 的值是 " << c << endl;

    // 赋值运算符：
    c = a; // 把右边操作数的值赋给左边操作数
    cout << "Line 1 - =  运算符实例,c 的值 = : " << c << endl;
    // C += A 相当于 C = C + A
    c += a;
    cout << "Line 2 - += 运算符实例,c 的值 = : " << c << endl;
    // c -= a 相当于 c = c - a
    c -= a;
    cout << "Line 3 - -= 运算符实例,c 的值 = : " << c << endl;

    c *= a;
    cout << "Line 4 - *= 运算符实例,c 的值 = : " << c << endl;

    c /= a;
    cout << "Line 5 - /= 运算符实例,c 的值 = : " << c << endl;

    c = 200;
    c %= a;
    cout << "Line 6 - %= 运算符实例,c 的值 = : " << c << endl;

    c <<= 2;
    cout << "Line 7 - <<= 运算符实例,c 的值 = : " << c << endl;

    c >>= 2;
    cout << "Line 8 - >>= 运算符实例,c 的值 = : " << c << endl;

    c &= 2;
    cout << "Line 9 - &= 运算符实例,c 的值 = : " << c << endl;

    c ^= 2;
    cout << "Line 10 - ^= 运算符实例,c 的值 = : " << c << endl;
    // c |= 2 等同于 c = c | 2
    c |= 2;
    cout << "Line 11 - |= 运算符实例,c 的值 = : " << c << endl;

    // 除上的运算符还有杂项运算符
    // 运算符的优先级确定表达式中项的组合。这会影响到一个表达式如何计算。
    // 某些运算符比其他运算符有更高的优先级，例如，乘除运算符具有比加减运算符更高的优先级。
}

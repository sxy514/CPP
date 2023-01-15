#include <iostream>
using namespace std;

// 函数是一个代码块，仅在调用它时运行
// 可以将数据（称为参数）传递到函数中，函数定义一次，然后多次使用
// 如果需要创建函数，请指定函数的名称后跟上括号()
void myFunction() { // void 表示该函数没有返回值，后续将了解修饰符
    cout << "myFunction 函数内的代码" << endl;
}

void tailFunction(); // 可以先声明函数不定义，将函数放在main函数之后定义
void myFunction2(string fname); // 函数参数要一致

// 函数声明和定义
// C++函数由两部分组成：
// 1.声明 ：返回类型、函数名称和参数（如果有）
// 2.定义 ：函数的主体（要执行的代码）
void myFunctionCountry(
    string country = "Norway") { // 还可以使用 = 号 来设置默认参数值
    cout << country << "\n";
}

void function_1(
    string fname,
    int age); // 注意，当您使用多个形参时，函数调用必须具有与形参相同数量的实参，并且实参必须以相同的顺序传递。

int myFunction_a(int x); // 此函数将返回值 5 + x;

void swapNums(int& x, int& y);          // 通过引用传递
void myArrayFunction(int myNumbers[5]); // 将数组作为参数传递

// 函数重载
// 使用函数重载时，多个函数可具有相同的名称，只要参数的数量和/或类型不同
int plusFuncInt(int x, int y) { return x + y; }
double plusFuncDouble(double x, double y) { return x + y; }

int sum(int k); // 函数递归

int main() {
    // 调用函数：
    // 声明的函数不会立即执行，他们会在调用它们时执行，要调用函数，请写下函数名称后跟上();
    // 函数可以多次调用
    myFunction();
    myFunction();
    tailFunction();
    myFunction2("Anna");
    myFunctionCountry(); // 输出参数的默认值 Norway
    function_1("Jack", 18);
    cout << myFunction_a(2) << endl;

    int firstNum = 10;
    int secondNum = 20;
    cout << "交换之前：" << firstNum << secondNum << endl;
    // 接下来调用 swapNums 函数，将交换这两个变量的值
    swapNums(firstNum, secondNum);
    cout << "交换之后：" << firstNum << secondNum << endl;

    // 将数组作为参数传递
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myArrayFunction(myNumbers); // 在调用函数时参数只需要写数组名即可，但是需要先创建完整的数组

    // 函数重载后，可以使用同名但不同类型的函数
    int myNum1 = plusFuncInt(8, 5);
    double myNum2 = plusFuncDouble(4.3, 6.26);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2 << endl;

    // 递归运算
    int result = sum(10);
    cout << "这是递归运算："<< result << "\n"; // 输出55


    return 0;
}

// 注意：如果用户定义的函数（例如在main函数之后声明），在调用时则会发生错误:‘myFunction1’
// was not declared in this scope;
void myFunction1() { // declaration
                     // the body of the function (definition)
}

// 但是，可以将声明和函数定义分开，用于代码优化。
// 在 main 函数之前声明函数，然后在main函数之后写声明的函数定义，这是更易阅读的
void tailFunction() {
    cout << "在main函数前先声明函数,再在尾部将函数进行定义" << endl;
}

// 函数参数：  形参和实参的概念需了解
// 信息可以作为 参数传递 给函数，参数充当函数内的变量;
// 参数在函数名称之后的括号内指定，可以根据需要添加任意数量的参数，只需用逗号分隔符隔开;
// void functionName(parameter1, parameter2, parameter3) {
//      要执行的代码;
// }
void myFunction2(string fname) { cout << fname << " Refsnes\n"; }

// 多个参数：
// 在函数内部，你可以根据需要添加任意数量的参数：
void function_1(string fname, int age) {
    cout << fname << " Refsnes. " << age << " years old. \n";
}

// 函数返回值：
// void关键字
// 表示函数不接受返回值，若需要函数返回值,将void更换为其他数据类型如int，string等
int myFunction_a(int x) { return 5 + x; }

// 函数-通过引用传递
// 可以将引用传递给函数。当你需要改变参数的值时，这可能很有用:
void swapNums(int& x, int& y) {
    int z = x;
    x = y;
    y = z;
}

// 还可以将数组作为函数参数传递
void myArrayFunction(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << endl;
    }
}

// 函数递归
// 递归是函数调用自身的技术，递归将复杂的问题分解为更容易解决的问题
int sum(int k) {
    if(k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}

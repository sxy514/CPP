#include <iostream>
using namespace std;

// 函数是一个代码块，仅在调用它时运行
// 可以将数据（称为参数）传递到函数中，函数定义一次，然后多次使用
// 如果需要创建函数，请指定函数的名称后跟上括号()
void myFunction() { // void 表示该函数没有返回值，后续将了解修饰符
    cout << "myFunction函数内的代码" << endl;
}

void tailFunction(); // 可以先声明函数不定义，将函数放在main函数之后定义

int main() {
    // 调用函数：
    // 声明的函数不会立即执行，他们会在调用它们时执行，要调用函数，请写下函数名称后跟上();
    // 函数可以多次调用
    myFunction();
    myFunction();
    tailFunction();
    
    // 函数声明和定义
    // C++函数由两部分组成：
    // 1.声明 ：返回类型、函数名称和参数（如果有）
    // 2.定义 ：函数的主体（要执行的代码）

   return 0;
}

// 注意：如果用户定义的函数（例如在main函数之后声明），在调用时则会发生错误:‘myFunction1’ was not declared in this scope; 
void myFunction1() { // declaration
  // the body of the function (definition)
}

// 但是，可以将声明和函数定义分开，用于代码优化。
// 在 main 函数之前声明函数，然后在main函数之后写声明的函数定义，这是更易阅读的
void tailFunction() {
    cout << "在main函数前先声明函数,再在尾部将函数进行定义" << endl;
}
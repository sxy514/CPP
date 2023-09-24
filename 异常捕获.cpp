#include <iostream>
using namespace std;

// 异常捕获：
// 在执行代码时，可能会发生不同的错误，发生错误时，程序通常会停止并生成错误信息，这叫做
// 抛出异常 C++中的异常处理由3个关键字组成: try  throw  catch
// 下面编写一个例子，当 age 变量小于18 将抛出异常
int main() {
    try {
        int age = 15;
        string a = "adasd";
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw(age); // 将抛出()中的参数，在catch()中创建对应的参数可以接收                     
        }
    } // 将容易抛出异常的代码 try { }起来，在 catch(){} 内编写抛出异常后的处理方法   
    // 在catch( )时如果你不知道抛出的类型, 在括号内使用“三点”语法，如 catch(...){ } 它将处理任何类型的异常
    catch (int aa) {
        cout << "Access denied - You must be at least 18 years old. \n";
        cout << "Age is: " << aa;
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// 类和对象的关系： 用类来创建对象，类是对象的蓝图，对象是类的实例
// 创建类的关键字 class /
// public是访问修饰符，它表示可以从类外部访问类的成员(属性和方法)
// 在声明变量时，它们被称为类属性。在语法方面与Java等略有不同，需注意
class MyClass {
  public:
    int myNum;
    string myString;
    // 类方法：方法是属于类的函数，有两种方法可以定于属于类的函数：内部类定义/类定义之外
    void myMethod() { // 在类中定义方法/函数
        cout << "hello world" << endl;
    }
    // 想在外部创建该类的方法，必须现在类内部进行声明
    void myMethod2();
    // 方法参数：
    int speed(int maxSpeed);
};

// 在外部创建类方法的语法如下，通过作用域解析运算符 :: 
void MyClass::myMethod2(){
    cout << "在外部创建类方法" << endl;
}

int MyClass::speed(int maxSpeed){  
    return maxSpeed;
}

int main() {
    MyClass myObj; // 创建 一个 MyClass 的对象，与Java等语言语法略有区别，不要混淆
    MyClass myObj2; // 一个类可以创建多个对象

    // 通过对象访问类的属性并赋值
    myObj.myNum = 15;
    myObj.myString = "Some text";
    myObj.myMethod(); // 调用类中的方法/函数
    cout << myObj.speed(200) << endl; // 调用类中的speed方法

    // 输出属性的值
    cout << myObj.myNum << " " << myObj.myString << endl;

    return 0;
}

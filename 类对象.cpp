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

// 构造函数的用法: 构造函数在创建类的对象时生效，构造函数与它的类同名
// 它始终为public, 并且没有任何返回值
class MyConstructors {
    public:
        MyConstructors() {
            cout << "构造函数在创建类的对象时生效" << endl;
        }
};
// 构造函数也可以采用参数，这可以用于设置属性的初始值
class Car {
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
        }
};

// 构造函数也可以像普通函数一样在类的外部定义
class ExternalConstructor {
    public: 
        int myNumber;
        ExternalConstructor(int b);
};
// 类之外的构造函数定义
ExternalConstructor::ExternalConstructor(int b) {
    myNumber = b;
}

int main() {
    MyClass myObj; // 创建 一个 MyClass 的对象，与Java等语言语法略有区别，不要混淆
    MyClass myObj2; // 一个类可以创建多个对象

    // 通过对象访问类的属性并赋值
    myObj.myNum = 15;
    myObj.myString = "Some text";
    myObj.myMethod(); // 调用类中的方法/函数
    cout << myObj.speed(200) << endl; // 调用类中的speed方法
    MyConstructors myConObj; // 创建类的对象时，构造函数生效，这里输出语句
    
    Car myCarObj("BWM","X5",1999); // 创建类的对象时，向构造函数传递参数
    cout << myCarObj.brand << " " << myCarObj.model << " " << myCarObj.year << endl;
    
    ExternalConstructor myExObj(15); // 这是将构造函数写在外时,效果一致
    cout << myExObj.myNumber << endl;

    // 输出属性的值
    cout << myObj.myNum << " " << myObj.myString << endl;

    return 0;
}

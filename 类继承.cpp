#include <iostream>
using namespace std;

// 类继承（inheritance）：可以将属性和方法从一个类继承到另一个类，分为基类(父类)和派生类(子类)
// 继承更好的复用代码
// 要使用继承，使用冒号 ：

// 创建一个基类
class Vehicle {
  public:
    string brand = "Ford";
    void honk() { 
        cout << "Tuut, tuut! \n"; 
    }
};

// 创建派生类，将继承基类的属性和方法
// 创建语法如下：  class 派生类名： public 基类名 { };
class Car : public Vehicle {
  public:
    string model = "Mustang";
};

// 在C++中，类可以多级继承，关系如：父类-->子类-->孙子类
// 现在继续继承 子类 Car
class WheelCar : public Car {
    public:
        string Wheel = "车轮";
};

// 在C++中，类还可以多重继承(Multiple)，一个子类可以使用逗号分隔符从多个基类派生
// 再创建一个基类 
class MyVehicle {
    public:
        void myMethod() {
            cout << "另一个基类中的方法" << endl;
        }
};

// 派生类多重继承, 使用逗号分隔符
class MyCar: public Vehicle, public MyVehicle {   
};

// 访问修饰符 protected: 与 private 类似，但也可以在继承类中访问
class Employee {
    protected: // 受保护访问说明符
        int number;
};
//  创建基类 Employee 的派生类
class Programmer: public Employee {
    public:
        int bonus;
        // 被 proetcted 修饰后，和封装的属性一样，创建public set/get方法来修改和访问
        void setNumer(int a) {
            number = a;
        }
        int getNumber() {
            return number;
        }
};

int main() {
    Car myCar;
    myCar.honk(); // 调用写在基类中的方法 honk()
    cout << myCar.brand + " " + myCar.model << endl;

    // 创建 孙子类 的对象
    WheelCar myChildObj;
    myChildObj.honk(); //在孙子类中同样可以调用 基类的方法 honk()

    // 创建多重继承类 的对象
    MyCar MyMultipleObj;
    cout << "多重继承后调用各个基类的方法: \n";
    MyMultipleObj.myMethod(); 
    MyMultipleObj.honk();

    // 被 protected 修饰的类,调用方法和 private 类似
    Programmer myProtectedObj;
    myProtectedObj.setNumer(1000); // 通过public set方法来修改受保护的属性
    myProtectedObj.bonus = 152;
    cout << "由protected说明的受保护的属性与private类似,使用公共get/set来修改和访问: " << myProtectedObj.getNumber() << " and " << myProtectedObj.bonus << endl;

    return 0;
}

#include <iostream>
using namespace std;

// 类的多态性: 当我们有许多通过继承相互关联的类时，形成多态性
// 继承让我们从 另一个类继承属性和方法，多态性使这些方法执行不同的任务
// 为什么以及何时使用“继承”和“多态”？
// 它对于代码可重用性很有用：在创建新类时重用现有类的属性和方法。

// 创建一个基类
class Animal {
    public:
        void animalSound() {
            cout << "动物的叫声: " << endl;
        }
};

// 派生类1继承基类, animalSound方法将执行不同的任务
class Dog: Animal {
    public:
        void animalSound() {
            cout << "狗在叫: bow wow" << endl;
        }
};
// 派生类2继承基类,animalSound方法再执行不同的任务
class Pig: Animal {
    public:
        void animalSound() {
            cout << "猪在叫: wee wee " << endl;
        }
};

int main() {
    // 分别创建它们的对象
    Animal myAnimal;
    Dog myDog;
    Pig myPig;

    // 多态性：它们的同名方法执行着不同的操作
    myAnimal.animalSound();
    myDog.animalSound();
    myPig.animalSound();

    return 0;

}
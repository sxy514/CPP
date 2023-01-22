#include <iostream>
using namespace std;

// 案例展示类的封装(Encapsulation)
// 封装确保了"敏感"数据不被随意修改，要实现封装，使用关键字 private
// 封装的好处：封装可确保更好的控制数据，可以更改代码的一部分而不会影响其他部分，提高数据安全性
class Encapsulation {
  private:
    // 私有属性
    int salary;

  public:
    // 接下来创建 public set / get 方法
    // Setter
    void setSalary(int s) {
        salary = s; // 传递参数到 salary 进行更改
    }
    // Getter
    int getSalary() {
        return salary; // 调用get方法时，返回 salary 的整型值
    }
};

int main() {
    // 创建封装类的对象
    Encapsulation myObj;
    myObj.setSalary(
        5000); // 调用set方法 传递参数,调用方法时记记得加括号：myMethod();
    cout << myObj.getSalary() << endl; // 调用get方法即可获得 salary 的值
}
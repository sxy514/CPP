#include <iostream>
#include <string>
using namespace std;

// 结构体： 相关的不同类型的数据来描述一个数据对象时，使用结构体，关键字 struct
int main() {
    // 结构内存放不同数据类型
    struct {
        int myNum;
        string myString;
    } myStructure; // 结构体名称写在{ }后面，创建多个结构变量用逗号隔开

    myStructure.myNum = 1;
    myStructure.myString = "hello world! ";

    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;

    // 例如使用同一个结构来表示两辆车：
    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2;

    // Put data into first structure
    myCar1.brand = "BWM";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    // 命名结构：通过为结构命名，可以将其视为数据类型，这意味着你可以随时在程序中的任何位置创建具有此结构的变量
    // 使用命名结构，与上面的创建 struct 不同，如下
    struct game {
        string name;
        int year;
    };
    
    game myGame ;
    myGame.name = "Sekiro";
    myGame.year = 2019;

    game myGame1 ;
    myGame1.name = "overwatch";
    myGame1.year = 2016;

    cout << myGame.name << " " << myGame.year << "\n";
    cout << myGame1.name << " " << myGame1.year << "\n";




    return 0;
}
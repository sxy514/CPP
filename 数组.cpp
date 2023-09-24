#include <iostream>
#include <string>
using namespace std;

int main() {
    // 创建数组
    string cars[4] = {"BWM", "Ford", "Mazda", "GTR"};

    // 访问数组中的元素
    cout << cars[0] << endl;

    // 修改数组中的元素
    cars[0] = "GT";
    cout << cars[0] << endl;

    // 遍历数组,输出每个元素 ,  i < 4 可以替换为 sizeof(cars) / sizeof(string)
    for (int i = 0; i < 4; i++) {
        cout << i << " = " << cars[i] << "\n"; // 像这样即可输出索引号及元素
    }

    // 还有一个“for-each 循环“（在 C++ 版本 11 （2011）
    // 中引入），专门用于循环数组中的元素，语法如下：
    // for (变量类型  变量名 : 数组名) {
    //    code block to be executed
    // }

    for (string i : cars) { // for-each 语句
        cout << i << endl;
    }

    // 在C++中，可以不用指定数组的大小。编译器可以根据插入值的数量确定数组的大小
    // 但是，指定大小的数组被认为是良好的做法，因为它会减少程序出错的几率
    int myNum[] = {1, 2, 3, 4};

    // 也可以在创建数组时不添加元素，并在后续添加
    double dNum[2];
    dNum[0] = 1.1;
    dNum[1] = 1.2;
    cout << dNum[0] << endl;

    // 获取数组的大小： 使用 sizeof()
    // 比如获取 cars 数组的大小
    cout << sizeof(cars) << endl;
    // 为什么这会输出128呢？这是因为运算符返回类型的大小是以 字节 为单位
    cout << sizeof(cars[0]) << endl; // 在这里一个字符串元素大小是 32

    // 要找出数组中有多少个元素，你必须将数组的大小 除以
    // 该数组数据类型大小,例如：
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength =
        sizeof(myNumbers) / sizeof(int); // 获取数组大小后可以用于 遍历循环
    cout << "myNumers数组中有 " << getArrayLength << " 个元素\n";

    // 使用 sizeof() 循环遍历数组，在之前我们在 for
    // 循环条件中定义了数组的大小再去循环，这样仅仅适用于指定大小的数组
    // 现在我们使用 sizeof() 来遍历任何大小的数组, 比如我们想遍历 myNumbers 数组
    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
        cout << myNumbers[i] << "\n";
    }

    // 多维数组
    // 声明一个多维数组，请定义变量类型，指定数组名称，指定主数组有多少个元素，再指定子数组有多少元素
    // 如下表示为，letters数组 主数组中有 2 个子数组 ， 子数组中有 3 个元素
    string letters[2][3] = {{"a", "b", "c"}, {"d", "e", "f"}};
    // 数组可以具有任意数量的维度。数组的维度越多，代码就越复杂。以下数组具有三个维度：
    string letters1[2][2][2] = {{{"A", "B"}, {"C", "D"}},
                                {{"E", "F"}, {"G", "H"}}};
    // 要访问多维数组的元素，请在数组的每个维度指定索引号    
    cout << letters1[0][1][1] << "\n"; // out D

    // 更改多维数组中的元素,请指定每个维度中元素的索引号对其重新赋值：
    // 比如将 letters1数组中的 元素 D 更换为 DD 
    letters1[0][1][1] = "DD";
    cout << letters1[0][1][1] << endl;

    // 遍历多维数组
    // 要遍历多维数组，需要对数组的每个维度进行一次遍历
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++ ) {
            cout << letters[i][j] << endl;
        }
    }
    // 这里遍历了letters1数组的3个维度，使用了3个for
     for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++ ) {
            for(int k = 0; k < 2; k++ ) {
                cout << letters1[i][j][k];              
            }          
        }
    }





    return 0;
}
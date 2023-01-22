#include <iostream>
#include <string>
#include <fstream> 
// 该库允许文件处理，库中包含了三个类
// 用于创建并写入文件 (ofstream)
// 从文件中读取 (ifstream)
// ofstream和ifstream的组合，用于创建、读取和写入文件(fstream)
using namespace std;


int main() {
    // 创建并打开一个文本文件
    ofstream MyFile("CPPFile.txt");

    // 写入到文件中
    MyFile << "这是使用 ofstream 创建的文本文件" << endl;;
    MyFile << "这是使用 ofstream 创建的文本文件2";

    // 关闭文件,在对文件操作完成后关闭，可以清理不必要的内存
    MyFile.close();

    // 创建一个string text用于输出文本文件
    string myText;
    // 从文本文件中读取
    ifstream MyReadFile("CPPFile.txt");

    // 使用while循环和getline逐行读取文本
    while (getline (MyReadFile, myText)) {
        cout << myText << endl;

    }

    // 关闭文件
    MyReadFile.close();

}
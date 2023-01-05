#include <iostream> //这里是头文件，这些头文件包含了必需或有用的信息

using namespace std;  // 这里的using namespace，告诉编译器使用 std命名空间

// 在C++中 main() 是程序入口，程序从这里开始执行
int main() {
    cout << "Hello World!\n"; // \n为换行符
    cout << "h\tw" << endl;
    int i = 0;
      for( ; ; ) // 在C++中，循环条件为两个 ; ; 时表示为true
   {
      cout << ("This loop will run forever. ") << i << endl;
      i++;
      if(i > 10){
         break;
      }
   }
   
   // C++ 编程语言提供了以下几种循环类型:
   // while循环 / for循环 / do while循环 / 嵌套循环
   // C++ 提供了下列的控制语句: break(中断循环) / continue(跳过当前循环中的代码，强迫开始下一次循环) 
   // goto: 语句允许把控制无条件转移到同一函数内的被标记的语句。在任何程序都不建议使用goto
  
   // C++ 编程语言提供了以下类型的判断语句:
   // if语句 / if..else语句 / 嵌套if语句 / switch语句 / 嵌套switch语句
   // 还有 ? 表达式，语法为： Exp1 ? Exp2 : Exp3;


 
    return 0; //return 0; 表示终止main函数，并向调用进程返回值0
}


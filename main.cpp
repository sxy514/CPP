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

   // 定义函数
   // C++ 中的函数定义的一般形式如下：
   // return_type function_name( parameter list )
   // {
   //    body of the function
   // }
/*
   在 C++ 中，函数由一个函数头和一个函数主体组成。下面列出一个函数的所有组成部分：
   返回类型：一个函数可以返回一个值。return_type 是函数返回的值的数据类型。有些函数执行所需的操作而不返回值，在这种情况下，return_type 是关键字 void。
   函数名称：这是函数的实际名称。函数名和参数列表一起构成了函数签名。
   参数：参数就像是占位符。当函数被调用时，您向参数传递一个值，这个值被称为实际参数。参数列表包括函数参数的类型、顺序、数量。参数是可选的，也就是说，函数可能不包含参数。
   函数主体：函数主体包含一组定义函数执行任务的语句。
*/


 
    return 0; //return 0; 表示终止main函数，并向调用进程返回值0
}


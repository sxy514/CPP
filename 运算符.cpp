#include <iostream> //C++中的头文件
#include <iterator>
using namespace std; // 命名空间

// 本示例展示运算符：C++ 内置了丰富的运算符，并提供了以下类型的运算符：
int main(){  //main函数为程序入口
    //算术运算符：+ - * /  %  ++ --
    int a = 1, b = 2, c = 3;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    cout << a++ << ++b << endl;//注意自增运算符在前和在后的区别，在前时先自增/自减再参与运算，在后时先将原值参与运算后再进行自增/自减
    
    //关系运算符：>  <  >=  <=  ==  !=    
    if( a > b ) {  cout << "a大于 b" << endl ; } // 当关系表达式成立时为true , 不成立时为 false
    if( a < b ) {  cout << "a 小于 b" << endl ; }
    if( a >= b ) {  cout << "a 大于或等于 b" << endl ; }
    if( a <= b ) {  cout << "a 小于或等于 b" << endl ; }
    if( a == b ) {  cout << "a 等于 b" << endl ; }
    if( a != b ) {  cout << "a 不等于 b" << endl ; }

    //逻辑运算符： &&   ||   !
     if ( a && b )  //逻辑与
   {
      cout << "a 和 b 都成立"<< endl ;
   } 
     if ( a || b)   //逻辑或
   { 
      cout << "a 或者 b 成立"<< endl ; 
   }
    if ( !(a && b) )//逻辑非：  !(逻辑与)
   {
      cout << " 逻辑非条件成立"<< endl ;
   }

}

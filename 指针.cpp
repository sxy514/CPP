#include <cstdlib>
#include <iostream>
#include <iterator>

const int MAX = 3;


// 在写函数时应习惯性的先声明函数，然后在定义函数,这个函数为展示将指针传递给参数
void getSeconds(unsigned long *par);
// 函数声明
double getAverage(int *arr, int size);
// 函数声明
int * getRandom();

int main() 
{
    int a = 1;
    int *ptr = NULL; // 在指针没有明确的地址可以赋值时,将指针赋值为NULL 是一个很好的编程习惯
    // NULL 指针是一个定义在标准库中的值为零的常量
    std::cout << " 指针变量ptr的值是: " << ptr << std::endl; // 输出的指针内存地址为 0

    // 在大多数的操作系统上，程序不允许访问地址为 0 的内存，因为该内存是操作系统保留的。然而，内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置
    // 但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。
    // 如需检查一个空指针，您可以使用 if 语句，如下所示：

    // 在C/C++中 True 和 False 可以用 1 和 0 表示
    if (ptr) std::cout << "这不是一个空指针\n"; // ptr = 0 = false 所以 if 条件不成立,不会执行后面的代码
    if (!ptr) std::cout << "这个指针是NULL\n";  // !ptr = true 所以 if 成立,执行后面的代码
    if (1) std::cout << "1=True\n";

    // 因此，如果所有未使用的指针都被赋予空值，同时避免使用空指针，就可以防止误用一个未初始化的指针。很多时候，未初始化的变量存有一些垃圾值，导致程序难以调试。
    // 注意: 空指针不提倡使用NULL来表示，C++11标准后，用nullptr来表示空指针。
    int* pptr = nullptr;
    ptr = &a;

    // C++ 指针的算术运算:
    // 指针是一个用数值表示的地址.因此可以对指针执行算术运算,可以对指针进行四种算术运算: ++、--、+、-
    // 假设ptr是指向地址 1000 的整数指针，是一个32位的整数，让我们对改指针执行下列的算术运算：   
    std::cout << "ptr: " << ptr << std::endl;
    std::cout << "ptr自增运算: " << ++ptr << std::endl;
    // 这个运算会在不影响内存位置中实际值的情况下，移动指针到下一个内存位置（地址后移4个字节），不太清楚，继续了解

    // 递增一个指针：
    // 我们喜欢在程序中使用指针代替数组，因为变量指针可以递增，而数组不能递增，因为数组是一个常量指针。下面的程序递增变量指针，以便顺序访问数组中的每一个元素
    int var[MAX] = {10, 100, 200};
    int* ptr1;
    // 指针中的数组地址
    ptr1 = var;
    for (int i = 0; i < MAX; i++) 
    {
        std::cout << "Address of var[" << i << "] = ";
        std::cout << ptr1 << std::endl;

        std::cout << "Value of var[" << i << "] = ";
        std::cout << *ptr1 << std::endl;
        ptr1++;   
    }

    // 递减一个指针：
    int var1[MAX] = {10, 100, 200};
    int* ptr2;
    // 指针中最后一个元素的地址
    ptr2 = &var1[MAX-1];
     for (int i = MAX; i > 0; i--) 
    {
        std::cout << "Address of var2[" << i << "] = ";
        std::cout << ptr2 << std::endl;

        std::cout << "Value of var2[" << i << "] = ";
        std::cout << *ptr2 << std::endl;
        // 移动到下一个位置
        ptr2--;   
    }

    // 指针的比较：
    // 指针可以用关系运算符比较，如==、< 和 > 。如果p1和p2指向两个相关的变量，比如同一个数组中的不同元素，则可对p1和p2进行大小比较。
    // 下面的程序修改了上面的实例，只要变量指针所指向的地址小于或者等于数组的最后一个元素的地址 &var3[MAX-1] ,则把变量指针进行递增:
    int i = 0;
    int* ptr3;
    ptr3 = var;
    while ( ptr3 <= &var[MAX - 1] )
   {
        std::cout << "Address of var3[" << i << "] = ";


        std::cout << "Value of var3[" << i << "] = ";
        std::cout << *ptr3 << std::endl;
 
      // 指向上一个位置
        ptr3++;
        i++;
   }

   // 指针 VS 数组
   // 指针和数组是密切相关的.事实上,指针和数组在很多情况下是可以互换的.例如,一个指向数组开头的指针,可以通过使用指针的算术运算或数组索引来访问数组.
   // ???? 然而,指针和数组并不是完全可以互换的,比如:
   int num[MAX] = {15, 25, 30};
   for (int i = 0; i < MAX; i++)
   {
       *num = i; // 正确的  *num 表示数组开头, 即 num[0]
       // var++; 不正确
   }
   // 把指针运算符*应用到num上是完全可以的,但是修改num的值是非法的.这是因为num是一个指向数组开头的常量,不能作为左值;
   // 由于一个数组名对应一个指针常量,只要不改变数组的值,仍然可以用指针形式的表达式. 如下,是一个有效的语句,把num[2]赋值为500
   *(num + 2) = 500;  // *(num + n) 表示为 num[n] 
   std::cout << num[2] << std::endl;

   // 指针数组:
   // 有一种情况,我们想要让数组存储指向int或者char或其他数据类型的指针,比如:
   int numVar[MAX] = {11, 21, 31}; // 整型数组
   int* arrayPtr[MAX];             // 整型指针数组
   // 在这里把 arrayPtr 声明为一个数组,由MAX个整数指针组成. 因此,arrayPtr中的每个元素都是一个指向int类型的指针,下面的实例用到三个整数,把它们存储到一个指针数组内:
   for (int i = 0; i < MAX; i++) 
   {
       arrayPtr[i] = &numVar[i]; // 将整型数组内的元素取地址并赋值给指针数组
   }
    for (int i = 0; i < MAX; i++) 
    {
        std::cout << " 整型数组numVar[" << i << "] 的值: ";
        std::cout << *arrayPtr[i] << std::endl;  
        // std::cout << numVar[i] << std::endl;         
    }
    // 你也可以用一个指向字符的指针数组来存储一个字符串列表,如下:
    const char* names[MAX] = {"human1","human2","human3"};
    for (int i = 0; i < MAX; i++)
    {
        std::cout << "字符型数组names[" << i << "] 的值: " ;
        std::cout << names[i] << std::endl;
    }

    // 指向指针的指针:
    // 指向指针的指针是一种多级间接寻址的形式,或者说是一个指针链.
    // 指针的指针就是将指针的地址存放在另一个指针里面. 通常,一个指针包含一个变量的地址. 当我们定义一个指向指针的指针时, 第一个指针包含了第二个指针的地址,第二个指针指向包含实际值的位置.
    // pointer1 --> pointer2 --> variable
    // 一个指向指针的指针变量必须如下声明, 即在变量名前放置两个星号.
    int** varPtr;
    // 来看看实例,当一个目标值被一个指针间接指向另一个指针时,访问这个值需要使用两个 *号
    int anum = 300;
    int* aptr;
    aptr = &anum; // 获取变量anum的地址并赋值
    varPtr = &aptr; // 获取指针变量 aptr 的地址并赋值
    std::cout << "anum的值: " << anum << std::endl;
    std::cout << "*aptr的值: " << *aptr << std::endl;
    std::cout << "**varPtr的值: " << **varPtr << std::endl; // 使用指针varPtr获取值

    // 传递指针给函数:
    // C++允许你传递指针给函数,只需要简单地声明函数参数为指针类型即可.
    unsigned long sec;
    getSeconds(&sec);
    std::cout << "Number of seconds: " << sec << std::endl;
    // 能接受指针作为参数的函数，也能接受数组作为参数，如下所示：
    // 带有 5 个元素的整型数组
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    // 传递一个数组作为参数
    avg = getAverage( balance, 5 ) ; // 求元素平均值
    // 输出返回值
    std::cout << "Average value is: " << avg << std::endl; 

    // 从函数返回指针：
    // C++ 允许您从函数返回指针。为了做到这点，您必须声明一个返回指针的函数如下所示：
    // int * myFunction()
    // {
    //   ...    
    // }
    // 另外，C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 static变量。
    // 现在，让我们来看下面的函数，它会生成 10 个随机数，并使用表示指针的数组名（即第一个数组元素的地址）来返回它们，具体如下：
    int* p; //创建一个整型指针
    p = getRandom();
    for(int i = 0; i < 10; i++)
    {
        std::cout << "*(p + " << i << ")的值: " ;
        std::cout << *(p + i) << std::endl;
    }

    


    return 0;
}

// 下面的实例中，我们传递一个无符号的 long 型指针给函数，并在函数内改变这个值：
void getSeconds(unsigned long *par)
{
   // 获取当前的秒数
   *par = time( NULL );
   return;
}

//
double getAverage(int *arr, int size)
{
  int    i, sum = 0;       
  double avg;          
  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
  }
  avg = double(sum) / size;
  return avg;
}

// getRandom() 要生成和返回随机数的函数
int * getRandom() 
{
    static int r[10];

    // 设置种子
    srand((unsigned)time(NULL));
    for(int i = 0; i < 10; i++)
    {
        r[i] = rand();
        std::cout << r[i] << std::endl;
    }
    return r;
}

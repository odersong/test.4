#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//用函数求较大值
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}
//(二进制位操作）
// &  按位与
// |  按位或
// ^  按位异或
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a^b;
//	printf("%d\n", c);
//	return 0;
//}
//赋值的两种
//a = a+10   把a+10赋值给a
//a+ = 10    给a自己加上10
//以上两种赋值相同
//a = a&2
//a& = 2
//复合赋值符    +=   -=   *=   /=	%=	>>=		<<=		&=		|=		^=	


//单目操作符 ！逻辑反操作  -负值 +正值 &取地址符号 sizeof操作数的类型长度（以字节为单位） ~对一个数的二进制按位取反 --前置、后置-- ++前置、后置++ *间接访问操作符（解引用操作符） （类型）强制类型转换
//int main()
//{
//	int a = 10;//    0表示假  1表示真
//	printf("%d\n", a);//打印10
//	printf("%d\n", !a);//打印0
//	return 0;
//}
//int main()
//{
//	int a = 0;//    0表示假  1表示真
//	printf("%d\n", a);//打印0
//	printf("%d\n", !a);//打印1
//	return 0;
//}
//-例int a = -2    如果a = +2  则+号省略
//int main()
//{
//	//sizeof           sizeof计算的是变量/类型所占空间的大小，单位是字节    strlen是计算字符串长度
//	int a = 10;
//	printf("%d\n", sizeof(a));//a所占4字节 
//	printf("%d\n", sizeof a);//可以打印出4，说明sizeof打印变量所占空间大小可以省略（）
//	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof int);//打印错误，说明打印字符不能省略（）
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };//十个整形元素的数组
//	int sz = 0;
//	printf("%d\n", sizeof(arr));//计算得40    10*4
//	//计算数组元素个数
//	//个数=数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);//得10    40/4
//	printf("%d\n", sz);
//	return 0;
//}
//双目操作符  例如a+b  +是双目操作符
//三目操作符


//  ~  按位取反   在二进制中，意思是例1010按位取反后是0101 把1取反为0，把0取反为1
//  ~ 按位取反改变符号位
//int main()
//{
//	int a = -20;//4个字节，32给bit位
//	int b = ~a;
//	//~按二进制取反  :把原数的补码按位取反的到答案
//	//00000000000000000000000000000000
//	printf("%d\n", b);
//	return 0;
//}

//三目操作符  exp1?exp2:exp3  例子如下：
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = (a > b ? a : b);
//	printf("%d\n", c);
//	return 0;
//}

//[]下标引用操作符和()函数调用操作符
//int main()
//{
//	int arr[10] = [0];
//	arr[4];//[] 这个是下标引用操作符
//	return 0;
//}
//int Add = (int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//（） 这个是函数调用操作符
//	return 0;
//}

//&& 这是逻辑与   a=2,b=5   a&&b=1 .a=0,b=5 a&&b=0   || 这是逻辑或    a=5,b=0  a||=1  .a=0,b=0 a||b=0  （有两种情况，大于零的数字是1，等于零的是0）
//正数原码反码补码相同，负数和o原码等于补码减一按位取反
//自己定义的符号名不能和关键字重复例：int float  //float是关键字，不能定义为符号名
//1.      static修饰局部变量
//局部变量的生命周期变长
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
//	a++;
//	printf("%d\n", a);//2 3 4 5 6
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//2.     static修饰全局变量
//改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就无法再使用
//3.     static修饰函数
//static修饰函数改变了函数的链接属性
//外部连接属性->内部链接属性



//#define定义标识符常量
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("%d\n", MAX);
//	return 0;
//}



//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址       p为一个整形指针的变量   *告诉我们p是指针     int*是p的类型
//	printf("%p\n", &a);//打印的是一个地址
//	printf("%p\n", p);//打印的是一个地址
//	*p = 20;//*解引用操作符，或叫间接访问操作符        *是一个符号，与上面的*不一样
//	printf("a=%d\n", a);//a=20
//	printf("%p\n", p);//打印的是一个地址
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//pc是指针的名字
//	*pc = 'k';
//	printf("%p\n", pc);//地址
//	printf("%d\n", sizeof(*pc));//pc=char*在32位是4个字节，在64位是8个字节
//	return 0;
//}
//p指针的类型是int型的



//struct结构体
//创建一个结构体类型

//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",55};
//	strcpy(b1.name, "c++");//strcpy=string copy 字符串拷贝    库函数应加#include<string.h>
//	printf("%s\n", b1.name);
//	//printf("书名：%s\n", b1.name);
//	//printf("价格：%d\n", b1.price);
//	//b1.price = 15;
//	//printf("修改后的价格：%d\n", b1.price);
//	//struct Book* pb = &b1;
//	//printf("%s\n", (*pb).name);//结构体变量.成员
//	//printf("%d\n", (*pb).price);
//	//printf("%s\n", pb->name);//结构体指针->成员
//	//printf("%d\n", pb->price);
//	return 0;
//}



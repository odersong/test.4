#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//�ú�����ϴ�ֵ
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
//(������λ������
// &  ��λ��
// |  ��λ��
// ^  ��λ���
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a^b;
//	printf("%d\n", c);
//	return 0;
//}
//��ֵ������
//a = a+10   ��a+10��ֵ��a
//a+ = 10    ��a�Լ�����10
//�������ָ�ֵ��ͬ
//a = a&2
//a& = 2
//���ϸ�ֵ��    +=   -=   *=   /=	%=	>>=		<<=		&=		|=		^=	


//��Ŀ������ ���߼�������  -��ֵ +��ֵ &ȡ��ַ���� sizeof�����������ͳ��ȣ����ֽ�Ϊ��λ�� ~��һ�����Ķ����ư�λȡ�� --ǰ�á�����-- ++ǰ�á�����++ *��ӷ��ʲ������������ò������� �����ͣ�ǿ������ת��
//int main()
//{
//	int a = 10;//    0��ʾ��  1��ʾ��
//	printf("%d\n", a);//��ӡ10
//	printf("%d\n", !a);//��ӡ0
//	return 0;
//}
//int main()
//{
//	int a = 0;//    0��ʾ��  1��ʾ��
//	printf("%d\n", a);//��ӡ0
//	printf("%d\n", !a);//��ӡ1
//	return 0;
//}
//-��int a = -2    ���a = +2  ��+��ʡ��
//int main()
//{
//	//sizeof           sizeof������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�    strlen�Ǽ����ַ�������
//	int a = 10;
//	printf("%d\n", sizeof(a));//a��ռ4�ֽ� 
//	printf("%d\n", sizeof a);//���Դ�ӡ��4��˵��sizeof��ӡ������ռ�ռ��С����ʡ�ԣ���
//	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof int);//��ӡ����˵����ӡ�ַ�����ʡ�ԣ���
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };//ʮ������Ԫ�ص�����
//	int sz = 0;
//	printf("%d\n", sizeof(arr));//�����40    10*4
//	//��������Ԫ�ظ���
//	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);//��10    40/4
//	printf("%d\n", sz);
//	return 0;
//}
//˫Ŀ������  ����a+b  +��˫Ŀ������
//��Ŀ������


//  ~  ��λȡ��   �ڶ������У���˼����1010��λȡ������0101 ��1ȡ��Ϊ0����0ȡ��Ϊ1
//  ~ ��λȡ���ı����λ
//int main()
//{
//	int a = -20;//4���ֽڣ�32��bitλ
//	int b = ~a;
//	//~��������ȡ��  :��ԭ���Ĳ��밴λȡ���ĵ���
//	//00000000000000000000000000000000
//	printf("%d\n", b);
//	return 0;
//}

//��Ŀ������  exp1?exp2:exp3  �������£�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = (a > b ? a : b);
//	printf("%d\n", c);
//	return 0;
//}

//[]�±����ò�������()�������ò�����
//int main()
//{
//	int arr[10] = [0];
//	arr[4];//[] ������±����ò�����
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
//	int sum = Add(a, b);//���� ����Ǻ������ò�����
//	return 0;
//}

//&& �����߼���   a=2,b=5   a&&b=1 .a=0,b=5 a&&b=0   || �����߼���    a=5,b=0  a||=1  .a=0,b=0 a||b=0  ��������������������������1�����������0��
//����ԭ�뷴�벹����ͬ��������oԭ����ڲ����һ��λȡ��
//�Լ�����ķ��������ܺ͹ؼ����ظ�����int float  //float�ǹؼ��֣����ܶ���Ϊ������
//1.      static���ξֲ�����
//�ֲ��������������ڱ䳤
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
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
//2.     static����ȫ�ֱ���
//�ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ����޷���ʹ��
//3.     static���κ���
//static���κ����ı��˺�������������
//�ⲿ��������->�ڲ���������



//#define�����ʶ������
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("%d\n", MAX);
//	return 0;
//}



//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ       pΪһ������ָ��ı���   *��������p��ָ��     int*��p������
//	printf("%p\n", &a);//��ӡ����һ����ַ
//	printf("%p\n", p);//��ӡ����һ����ַ
//	*p = 20;//*�����ò���������м�ӷ��ʲ�����        *��һ�����ţ��������*��һ��
//	printf("a=%d\n", a);//a=20
//	printf("%p\n", p);//��ӡ����һ����ַ
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//pc��ָ�������
//	*pc = 'k';
//	printf("%p\n", pc);//��ַ
//	printf("%d\n", sizeof(*pc));//pc=char*��32λ��4���ֽڣ���64λ��8���ֽ�
//	return 0;
//}
//pָ���������int�͵�



//struct�ṹ��
//����һ���ṹ������

//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������",55};
//	strcpy(b1.name, "c++");//strcpy=string copy �ַ�������    �⺯��Ӧ��#include<string.h>
//	printf("%s\n", b1.name);
//	//printf("������%s\n", b1.name);
//	//printf("�۸�%d\n", b1.price);
//	//b1.price = 15;
//	//printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	//struct Book* pb = &b1;
//	//printf("%s\n", (*pb).name);//�ṹ�����.��Ա
//	//printf("%d\n", (*pb).price);
//	//printf("%s\n", pb->name);//�ṹ��ָ��->��Ա
//	//printf("%d\n", pb->price);
//	return 0;
//}



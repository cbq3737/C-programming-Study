//#include <stdio.h>
//void main()
//{
//	int n = 100;
//	printf("%d %\n", n);
//	printf("%p\n", &n); //�ּ�
//	printf("%d\n", *&n); //�ּҸ� ������ �ٲ� ������ �̸� 
//	getchar();
//}

#include <stdio.h>
void main()
{
	int a = 10, b = 20;
	printf("%d %p\n", *a,&a); //�ּ� ������
	printf("%d %p\n", b,&b);
	getchar();
}

//#include <stdio.h>
//void main()
//{
//	int a = 10, b = 20;
//	a>b?printf("a>b\n"):printf("a<=b\n");
//	getchar();
//}

//#include <stdio.h>
//void main()
//{
//	int a = 10, b = 20;
//	int result;
//
//	result = a > b ? a + b : a - b;  //���� ������ 
//	printf("%d\n", result);
//	getchar();
//}

//#include <stdio.h>
//void main()
//{
//	int a = 5, b = 3;
//	printf("%d\n", a&b);
//	printf("%d\n", a|b);
//	printf("%d\n", a^b);
//	printf("%d\n", ~a);
//	printf("%d\n", ~b);
//
//	getchar();
//}

//#include <stdio.h>
//void main()
//{
//	int a = 5, b = 0;
//	printf("%d\n", a&&b);
//	printf("%d\n", a || b);
//	printf("%d\n", !a);
//	printf("%d\n", !b);
//
//	getchar();
//}

//#include <stdio.h>
//void main()
//{
//	int a = 5, b = 3;
//	printf("%d\n", a&&b);
//	printf("%d\n", a||b);
//	printf("%d\n", !a);
//	printf("%d\n", !b);
//	getchar();
//}

//#include <stdio.h>
//void main()
//{
//	int a = 10, b = 20;
//	printf("%d\n", a<b);
//	printf("%d\n", a>b);
//	printf("%d\n", a <= b);
//	printf("%d\n", a >= b);
//	printf("%d\n", a == b);
//	printf("%d\n", a != b);
//	getchar();
//}

//#include <stdio.h>
//void main()
//{
//	int a = 10, b = 20;
//	printf("%d\n", a<b);
//	printf("%d\n", a>b);
//	printf("%d\n", a<=b);
//	printf("%d\n", a>=b);
//	printf("%d\n", a==b);
//	printf("%d\n", a!=b);
//	getchar();
//}

//#include <stdio.h>
//void main()
//{
//	int a = 10;
//	int r;
//	r = a--; //���忡�� ����� ������ �ۿ��.
//	printf("r:%d,a:%d\n", r, a);
//	getchar();
//}

//#include <stdio.h>
//void main()
//{
//	int a = 10;
//	int r;
//	r = ++a;
//	printf("r:%d,a:%d\n",r, a);
//	getchar();
//}

//#include <stdio.h>
//void main()
//{
//	int a = 10;
//	a = a + 1;//++a;
//	printf("%d\n", a);
//	a = a + 1;// ++a;
//	printf("%d\n", a);
//	a = a + 1;// ++a;
//	printf("%d\n", a);
//	getchar();
//}

//#include <stdio.h>
//void main()
//{
//	printf("%d\n", 10 + 20);
//	printf("%d\n", 10 - 20);
//	printf("%d\n", 10 * 20);
//	printf("%d\n", 10 / 20);
//	printf("%d\n", 10 % 20);
//	printf("%d\n", 10 % 3);
//	getchar();
//}

//#include <stdio.h>
//void main()
//{
//	int a = 10, b = 20;
//	int c;
//	c = a + 100;
//	printf("%d\n", c);
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int a = 10, b = 20;
//	int c;
//	c = a + b;
//	printf("%d\n",c);
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int a = 10;
//	int b = 20;
//	int size = sizeof(a); //sizeof �� �ڷ����� ũ�⸦ ��Ÿ��
//	printf("%d,%d", size, sizeof(b));
//	getchar();
//
//}

//
//#include<stdio.h>
//void main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d,%d\n", a, b);
//	printf("%d+%d=%d", a,b,a+b);
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int n; //4����Ʈ¥�� ���� ����
//	n = 20; //�޸��� ���� 20���� ���� 
//	printf("%d\n", n);
//	printf("%d\n", 20); //20�� 30�� ��� 
//	printf("%d\n", 30);
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int n = 10.0; //�ڷ����� �߸������Ƿ� ���� ����������. �׷��Ƿ� �߸��� ��� 
//	n = 20; 
//	printf("%d\n", n);  
//	printf("%d\n", 20);
//	printf("%d\n", 30);
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int n = 10; //�޸��� ���� �����ض�
//	n = 20; //n�� 20���� ����, ������ �ִ� 10�� ����. (�������̵� ��.)
//	printf("%d\n", n); //�޸𸮿� �ִ� ���� �о�� 
//	printf("%d\n", 20);
//	printf("%d\n", 30);
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	printf("%d\n",10);
//	printf("%d\n",20);
//	printf("%d\n",30);
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	printf("100\n");
//	printf("200\n");
//	printf("300\n");
//}
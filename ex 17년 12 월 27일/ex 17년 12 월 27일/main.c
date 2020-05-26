//#include <stdio.h>
//void main()
//{
//	int n = 100;
//	printf("%d %\n", n);
//	printf("%p\n", &n); //주소
//	printf("%d\n", *&n); //주소를 역으로 바꿔 변수의 이름 
//	getchar();
//}

#include <stdio.h>
void main()
{
	int a = 10, b = 20;
	printf("%d %p\n", *a,&a); //주소 연산자
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
//	result = a > b ? a + b : a - b;  //조건 연산자 
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
//	r = a--; //문장에서 벗어날때 연산이 작용됨.
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
//	int size = sizeof(a); //sizeof 는 자료형의 크기를 나타냄
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
//	int n; //4바이트짜리 정수 생성
//	n = 20; //메모리의 값을 20으로 보관 
//	printf("%d\n", n);
//	printf("%d\n", 20); //20과 30은 상수 
//	printf("%d\n", 30);
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int n = 10.0; //자료형이 잘못됐으므로 값을 버릴수있음. 그러므로 잘못된 방법 
//	n = 20; 
//	printf("%d\n", n);  
//	printf("%d\n", 20);
//	printf("%d\n", 30);
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int n = 10; //메모리의 값을 저장해라
//	n = 20; //n을 20으로 변경, 기존에 있던 10은 날라감. (오버라이드 됨.)
//	printf("%d\n", n); //메모리에 있는 값을 읽어라 
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
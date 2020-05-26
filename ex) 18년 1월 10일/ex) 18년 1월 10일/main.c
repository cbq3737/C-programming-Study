#include <stdio.h> 
#include <string.h>
typedef struct _person    //구조체 포인트로 정의하겠다. 
{
	char* name;   //다른것처럼 값으로 정의하지 않고 주소로 정의
	char* number;
}Person;
void main()
{
	Person p1 = { "홍길동","201700234" };
	
	p1.name = "장길산";
	p1.number = "201800234";
	//strcpy_s = (p1.name, strlen("장길산") + 1, "장길산"); //이코드들은 상수를 바꿀려고 하기때문에 말이안되는 코드이다. 
	//strcpy_s = (p1.number, strlen("201700234") + 1, "201800234");

	printf("%s,%s\n", p1.name, p1.number);
	printf("%d,%d\n", strlen(p1.name), strlen(p1.number)); //홍길동은 2바이트씩 읽혀짐 . 

}



//#include <stdio.h>    
//#include <stdlib.h>
//#include <string.h>
//typedef struct _person    //구조체 포인트로 정의하겠다. 
//{
//	char name[20];
//	char number[20];
//}Person;
//void main()
//{
//	char* a= "ASDASD";
//	Person p1 = { "홍길동","201700234" };
//	printf("%s,%s\n", p1.name, p1.number);
//
//	printf("%d,%d\n",strlen(p1.name),strlen(p1.number)); //홍길동은 2바이트씩 읽혀짐 .
//	
//}



//#include <Stdio.h>    
//#include <string.h>
//typedef struct _person    //구조체 포인트로 정의하겠다. 
//{
//	char name[20];
//	char number[20];
//}Person;
//void main()
//{
//	Person p1 = { "홍길동","201700234" };
//	printf("%s,%s\n", p1.name, p1.number);
//	
//	//p1.name = "장길산";  이렇게 바꿀수없다. 이유는 p1안에 있는 배열에 문자열은 상수로써 이름이 바꿀수없기때문이다. 
//	strcpy_s(p1.name,strlen("장길산")+1, "장길산");
//	//p2.number = "201800234";
//	strcpy_s(p1.number, strlen("201800234") + 1,"201800234");
//	printf("%s,%s\n", p1.name, p1.number);
//}



//#include <stdio.h>    
//typedef struct _person    //구조체 포인트로 정의하겠다. 
//{
//	char name[20];
//	char number[20];
//}person;
//void main()
//{
//	person p1 = { "홍길동","201700234" };
//	printf("%s,%s\n", p1.name, p1.number);	
//}


//#include <Stdio.h>    
//#include <stdlib.h>
//typedef struct _point    //구조체 포인트로 정의하겠다. 
//{
//	int x;
//	int y;
//} Point; //우리가 직접적으로 쓰는 이름. 
//void InitPointArray(Point* pa, int size) //값을 정해주는 함수 .
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		pa[i].x = pa[i].y = i + 1;
//	}
//}
//void PrintPoint(Point* arr)
//{
//	printf("%d %d\n", (*arr).x, (*arr).y);
//}
//void main()
//{
//	Point* ps = (Point*)malloc(sizeof(Point) * 5);
//	InitPointArray(ps, 5);
//	PrintPoint(&ps[0]);
//	PrintPoint(&ps[1]);
//	PrintPoint(ps + 2);
//	PrintPoint(ps + 3);
//	PrintPoint(ps + 4);
//	free(ps);
//}


//#include <Stdio.h>    
//#include <stdlib.h>
//typedef struct _point    //구조체 포인트로 정의하겠다. 
//{
//	int x;
//	int y;
//} Point; //우리가 직접적으로 쓰는 이름. 
//void PrintPoint(Point* arr)
//{
//	printf("%d %d\n", (*arr).x, (*arr).y);
//}
//void main()
//{
//	Point* ps = (Point*)malloc(sizeof(Point)*5);
//	ps[0].x = 1;
//	ps[0].y = 1;
//	ps[1].x = 2;
//	ps[1].y = 2;
//	ps[2].x = 3;
//	ps[2].y = 3;
//	ps[3].x = 4;
//	ps[3].y = 4;
//	ps[4].x = 5;
//	ps[4].y = 5;
//	PrintPoint(&ps[0]);
//	PrintPoint(&ps[1]);
//	PrintPoint(ps+2);
//	PrintPoint(ps+3);
//	PrintPoint(ps+4);
//	free(ps);
//}


//#include <Stdio.h>    
//#include <stdlib.h>
//typedef struct _point    //구조체 포인트로 정의하겠다. 
//{
//	int x;
//	int y;
//} Point; //우리가 직접적으로 쓰는 이름. 
//void PrintPoint(Point* arr)
//{
//	printf("%d %d\n", (*arr).x, (*arr).y);
//}
//void main()
//{
//	Point* ps = (Point*)malloc(sizeof(Point));
//	(*ps).x = 10;
//	(*ps).y = 15;
//	PrintPoint(ps);
//	free(ps);
//}



//#include <Stdio.h>    
//
//typedef struct _point_tag    //포인트로 정의하겠다. 
//{
//	int x;
//	int y;
//} Point; //우리가 직접적으로 쓰는 이름. 
//void PrintPoint(Point* arr)
//{
//	printf("%d %d\n", (*arr).x, (*arr).y);
//}
//void PrintPointArray(Point* parr)
//{
//	int i;
//	for (i = 0; i < 5; ++i)
//	{
//		PrintPoint(&parr[i]);
//    //PrintPoint(parr+i);
//	}
//}
//void main()
//{
//	Point arr[5] = { 1,1, 2,2, 3,3, 4,4, 5,5 }; //원래 원소마다 중괄호가있어야하는데 생략해준것. 
//	printf("%p %p\n", arr, &arr[0]);
//	printf("%p %p\n", arr + 1, &arr[0] + 1);
//
//	PrintPointArray(arr);
//}



//#include <Stdio.h>    
//
//typedef struct _point    //포인트로 정의하겠다. 
//{
//	int x;
//	int y;
//} Point; //우리가 직접적으로 쓰는 이름. 
//void PrintPoint(Point* arr)
//{
//	printf("%d %d\n", (*arr).x, (*arr).y);
//}
//
//void main()
//{
//	Point arr[5] = { 1,1, 2,2, 3,3, 4,4, 5,5 }; //원래 원소마다 중괄호가있어야하는데 생략해준것. 
//	printf("%p %p\n", arr, &arr[0]);
//	printf("%p %p\n", arr + 1, &arr[0] + 1);
//
//	PrintPoint(&arr[0]); //구조체는 항상 참조만 넘어가기때문에 주소를 주었다.
//	PrintPoint(&arr[1]);
//	PrintPoint(&arr[2]);
//	PrintPoint(&arr[3]);
//	PrintPoint(&arr[4]);
//}


//#include <Stdio.h>    
//#include <stdlib.h>
//typedef struct _point   //포인트로 정의하겠다. 
//{
//	int x;
//	int y;
//} Point; //우리가 직접적으로 쓰는 이름. 
//void main()
//{
//	Point arr[5] = { {1,1}, {2,2}, {3,3}, {4,4}, {5,5} }; //원래 원소마다 중괄호가있어야하는데 생략해준것. 
//	printf("%p %p\n", arr, &arr[0]);
//	printf("%p %p\n", arr+1, &arr[0]+1);
//	system("pause");
//}


//#include <Stdio.h>    
//#include <stdlib.h>
//typedef struct _point    //포인트로 정의하겠다. 
//{
//	int x;
//	int y;
//} Point;
//void PrintPoint(Point* ps)
//{
//	printf("%d,%d\n", (*ps).x, (*ps).y);
//}
//void main()
//{
//	struct _point p1 = { 2,3 };
//	PrintPoint(&p1);
//	system("pause");
//}


//#include <Stdio.h>    
//#include <stdlib.h>
//typedef struct _point    //포인트로 정의하겠다. 
//{
//	int x;
//	int y;
//} Point;
//typedef struct _point Point;
//void main()
//{
//	struct _point p1 = { 2,3 };
//	Point p2 = { 5,8 };
//	printf("%d %d\n", p1.x, p2.y);
//	printf("%d %d\n", p2.x, p1.y);
//	system("pause");
//}


//#include <Stdio.h>    
//#include <stdlib.h>
//struct _point
//{
//	int x;
//	int y;
//};
//typedef struct _point Point;
//void main()
//{
//	struct _point p1 = { 2,3 };
//	Point p2 = { 5,8 };
//	printf("%d %d\n", p1.x, p2.y);
//	printf("%d %d\n", p2.x, p1.y);
//	system("pause");
//}



//#include <Stdio.h>    
//#include <stdlib.h>
//
//typedef int INT;
//typedef int I;
//void main()
//{
//	int n = 10;
//	INT m = 10;
//	I l = 10;
//
//	printf("%d %d %d\n", n, m, l);
//	}


//#include <Stdio.h>  //구조체는 절대로 값을 전달하지 않고, 주소를 전달한다.  
//struct Point
//{
//	int x;
//	int y;
//};
//void PrintPoint(struct Point* pd)
//{
//	printf("%d,%d\n", pd->x, pd->y);
//}
//
//struct Point InputPoint()
//{
//	struct Point data;
//	printf("좌표(x,y) 두 정수 입력:");
//	scanf_s("%d %d", &data.x, &data.y);
//	return data;
//}
//void main()
//{
//	struct Point pt;
//	pt = InputPoint();
//	PrintPoint(&pt);
//}



//#include <Stdio.h>  //구조체는 절대로 값을 전달하지 않고, 주소를 전달한다.  
//
//struct Point
//{
//	int x;
//	int y;
//};
//struct Point InputPoint()
//{
//	struct Point data = { 10, 20 };
//	
//	return data;
//}
//void PrintPoint(struct Point* pd)
//{
//	printf("%d,%d\n", pd->x, pd->y);
//}
//void main()
//{
//	struct Point pt;
//	pt = InputPoint();
//	PrintPoint(&pt);
//}


//#include <stdio.h>  //구조체는 절대로 값을 전달하지 않고, 주소를 전달한다.  
//struct point
//{
//	int x;
//	int y;
//};
//void inputpoint(struct point* pd)
//{
//	(*pd).x = 10;
//	(*pd).y = 20;
//}
//void printpoint(struct point* pd)
//{
//	printf("%d,%d\n", pd->x, pd->y);
//}
//void main()
//{
//	struct point pt;
//	inputpoint(&pt);
//	printpoint(&pt);
//}


//#include <Stdio.h>  //구조체가 주소를 전달했을경우. 구조체는 절대로 값을 전달하지 않고, 주소를 전달한다.  
//#include <stdlib.h>
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(struct Point* pd)
//{
//	printf("%d,%d\n", (*pd).x, (*pd).y);
//}
//void main()
//{
//	struct Point pt = { 2,3 };
//
//	PrintPoint(&pt);
//
//	system("pause");
//}


//#include <Stdio.h>  //구조체가 값을 전달했을경우.  
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(struct Point d)
//{
//	printf("%d,%d\n", d.x , d.y);
//}
//void main()
//{
//	struct Point pt = { 2,3 };
//	PrintPoint(pt);
//}



//#include <Stdio.h>  //구조체 포인터 
//
//struct Point
//{
//	int x;
//	int y;
//};
//void main()
//{
//	struct Point pt = { 2,3 };
//	struct Point pt2;
//
//	pt2 = pt; //같은구조체의 형식끼리는 대입이 가능하다. 
//
//	printf("%d %d\n", pt.x, pt.y);
//	printf("%d %d\n", pt2.x, pt2.y);
//}


//#include <Stdio.h>  //구조체 포인터 
//#include <stdlib.h>
//struct Point
//{
//	int x;
//	int y;
//};
//void main()
//{
//	struct Point pt = { 2,3 }; 
//	struct Point* ps = &pt;
//
//	printf("%d %d\n", pt.x, pt.y);
//	printf("%d %d\n", (*ps).x, (*ps).y);
//	printf("%d %d\n", ps->x, ps->y);
//	printf("%d %d\n", (&pt)->x, (&pt)->y);
//}




//#include <Stdio.h>  //구조체
//#include <stdlib.h>
//struct Point
//{
//	int x;
//	int y;
//};
//void main()
//{
//	struct Point pt = { 2,3 };
//	printf("size:%d\n", sizeof(struct Point));
//	printf("size:%d\n", sizeof(pt));
//	printf("%d, %d\n", sizeof(pt.x),sizeof(pt.y));
//	system("pause");
//}


//#include <Stdio.h>  //구조체
//#include <stdlib.h>
//void main()
//{
//	system("notepad.exe"); //컴퓨터안에 다른 프로그램을 실행시키는 함수 .
//}


//#include <stdio.h>  //구조체
//struct point
//{
//	int x;
//  int y;
//};
//void main()
//{
//	char c = 'a';
//	int n = 100;
//	struct point pt = { 2,3 };
//	struct point pt2 = { 2,-1 };
//
//	printf("%c\n", c);
//	printf("%d\n", n);
//	printf("%d,%d\n", pt.x,pt.y);
//	printf("%d,%d\n", pt2.x, pt2.y);
//}


//#include <Stdio.h> //입력버퍼 
//void Flush()
//{
//	while (getchar() != '\n'); //버퍼를 비우기위한 일반적인 방법
//}
//void main()
//{
//	int n1, n2;
//	char c1, c2;
//
//	printf("두 정수 입력:");
//	scanf_s("%d %d", &n1, &n2);
//	Flush(); //버퍼안에있는것을 날려줌.
//	printf("두 문자 입력: ");  //문자로 받을땐 반드시 getchar로 받아야한다. \n을 지워줘야하기 때문에 buffer를 생각
//	c1 = getchar();
//	c2 = getchar();//엔터값.
//	Flush();
//	printf("%d %d \n", n1, n2);
//	printf("%d %d \n", c1, c2);
//}


//#include <Stdio.h> //정수를 입력받아 출력하는 함수
//
//void main()
//{
//	int n1, n2;
//	char c1, c2;
//	
//	printf("두 정수 입력:");
//	scanf_s("%d %d", &n1, &n2);
//	getchar();
//	printf("두 문자 입력: ");
//	c1 = getchar();
//	c2 = getchar();//엔터값. 
//	printf("%d %d \n",n1,n2);
//	printf("%d %d \n", c1, c2);
//}

//#include <Stdio.h> //정수를 입력받아 출력하는 함수
//
//void main()
//{
//	char c1, c2;
//	c1 = getchar();
//	c2 = getchar();
//	printf("char:%c %c\n", c1, c2);
//}


//#include <Stdio.h> //정수를 입력받아 출력하는 함수
//
//void main()
//{
//	int n1,n2;
//	scanf_s("%d", &n1);
//	scanf_s("%d", &n2);
//	printf("int:%d %d\n", n1,n2);
//}


//#include <stdio.h> //정수를 입력받아 출력하는 함수
//
//void main()
//{
//	int n;
//	scanf_s("%d", &n);
//	printf("int:%d\n", n);
//}



//#include <Stdio.h> //정수를 입력받아 출력하는 함수
//
//int InputInteger()
//{
//	int n;
//	printf("정수입력:");
//	scanf_s("%d", &n);
//	return n;
//}
//void AddArray(int* arr, int* size, int n)
//{
//	arr[(*size)++] = n;
//}
//
//void PrintArray(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//void main()
//{
//
//	int arr[100];
//	int size = 0;
//
//	AddArray(arr, &size, InputInteger());
//	AddArray(arr, &size, InputInteger());
//	AddArray(arr, &size, InputInteger());
//
//	PrintArray(arr, size);
//}



//#include <stdio.h> //정수를 입력받아 출력하는 함수
//
//int Inputinteger()
//{	
//	return 100;
//}
//void Addarray(int* arr, int* size,int n)
//{
//   arr[(*size)++]=n;
//}
//
//void printarray(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//void main()
//{
//	int arr[100];
//	int size = 0;
//	
//	Addarray(arr, &size, Inputinteger());
//	Addarray(arr, &size, Inputinteger());
//	Addarray(arr, &size, Inputinteger());
//
//	printarray(arr,size);
//}
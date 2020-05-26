#include <stdio.h>
void AddArray(int* arr, int* size, int n)
{
	arr[(*size)++] = n;
}

void InputInteger(int* n)
{
	printf("정수입력: ");
	scanf_s("%d", n);
}

void PrintArray(int* arr, int size)
{
	int i;
	for (i = 0; i < size; ++i)
	{
		printf("[%d]:%d\n", i, arr[i]);
	}
}
void Menu()
{
	printf("1. 정수추가\n");
	printf("2. 모든 정수출력\n");
	printf("3. 프로그램 종료 \n");

}
void main()
{
	int arr[100];
	int size = 0;
	int brun = 1;
	while (brun)
	{
		char input;
		Menu();
		input = getchar();
		getchar();
		switch (input)
		{
		case '1':
		{
			int n;
			InputInteger(&n);
			getchar();
			AddArray(arr, &size, n);
		}
			break;
		case '2':
			PrintArray(arr, size);
			break;
		case '3':
			brun = 0;
			break;
		default:
			printf("default\n");
		}
	}
}




//#include <stdio.h>
//void AddArray(int* arr, int* size, int n)
//{
//	arr[(*size)++] = n;
//}
//
//void InputInteger(int* n)
//{
//
//	printf("정수입력: ");
//	scanf_s("%d", n);
//}
//
//void PrintArray(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		printf("[%d]:%d\n", i, arr[i]);
//	}
//}
//void Menu()
//{
//	printf("1. 정수추가\n");
//	printf("2. 모든 정수출력\n");
//	printf("3. 프로그램 종료 \n");
//
//}
//void main()
//{
//	int arr[100];
//	int size = 0;
//	int brun = 1;
//	while (brun)
//	{
//		char input;
//		Menu();
//		char input = getchar();
//		getchar();
//		switch (input)
//		{
//		case '1':
//			printf("case 1\n");
//			break;
//		case '2':
//			printf("case 2\n");
//			break;
//		case '3':
//			brun = 0;
//			break;
//		default:
//			printf("default");
//
//		}
//	}
//}


//#include <stdio.h>
//void AddArray(int* arr, int* size, int n)
//{
//	arr[(*size)++] = n;
//}
//
//void InputInteger(int* n)
//{
//
//	printf("정수입력: ");
//	scanf_s("%d", n);
//}
//
//void PrintArray(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		printf("[%d]:%d\n", i, arr[i]);
//	}
//}
//
//void main()
//{
//	int arr[100];
//	int size = 0;
//	int brun = 1;
//	while (brun)
//	{
//		char input = getchar();
//		getchar();
//		switch (input)
//		{
//		case '1':
//			printf("case 1\n");
//			break;
//		case '2':
//			printf("case 2\n");
//			break;
//		case '3':
//			printf("case 3\n");
//			break;
//		default :
//				printf("default\n");
//	
//		}
//	}
//}



//#include <stdio.h>
//void AddArray(int* arr, int* size, int n)
//{
//	arr[(*size)++] = n;
//}
//
//void InputInteger(int* n)
//{
//
//	printf("정수입력: ");
//	scanf_s("%d", n);
//}
//
//void PrintArray(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		printf("[%d]:%d\n", i, arr[i]);
//	}
//}
//
//void main()
//{
//	int arr[100];
//	int size = 0;
//	int brun = 1;
//	while (brun)
//	{
//		switch (getchar())
//		{
//		case '1':
//			printf("case 1\n");
//			break;
//		case '2':
//			printf("case 2\n");
//			break;
//		case '3':
//			printf("case 3\n");
//			break;
//		}
//	}
//}



//#include <stdio.h>
//void AddArray(int* arr, int* size, int n)
//{
//	arr[(*size)++]=n;
//}
//
//void InputInteger(int* n)
//{
//
//	printf("정수입력: ");
//	scanf_s("%d", n);
//}
//
//void PrintArray(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		printf("[%d]:%d\n", i, arr[i]);
//	}
//}
//
//void main()
//{
//	int arr[100];
//	int size = 0;
//
//	while (1)
//	{
//		int n;
//		InputInteger(&n);
//		if (n > 0)
//		{
//			printf("data:%d\n", n);
//			AddArray(arr, &size, n); //size를 주소값을 보내는 이유는 size의 값이 변경되서 와야하므로 
//		}
//		else
//		{
//			break;
//		}
//	}
//	PrintArray(arr, size);
//}


//#include <stdio.h>
//void InputInteger(int* n)
//{
//
//	printf("정수입력: ");
//	scanf_s("%d", n);
//}
//
//void PrintArray(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		printf("[%d]:%d\n", i, arr[i]);
//	}
//}
//
//void main()
//{
//	int arr[100];
//	int size = 0;
//
//	while (1)
//	{
//		int n;
//		InputInteger(&n);
//		if (n > 0)
//		{
//			printf("data:%d\n", n);
//			arr[size++] = n;
//		}
//		else
//		{
//			break;
//		}
//	}
//		PrintArray(arr, size);
//}


//#include <stdio.h>
//void PrintArray(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		printf("[%d]:%d\n", i, arr[i]);
//	}
//}
//
//void main()
//{
//	int arr[100];
//	int size = 0;
//
//	while (1)
//	{
//		int n;
//		printf("정수입력: ");
//		scanf_s("%d", &n);
//		if (n > 0)
//		{
//			printf("data:%d\n", n);
//			arr[size++] = n;
//		}
//		else
//		{
//			break;
//		}
//	}
//	PrintArray(arr,size);
//}


//#include <stdio.h>
//void main()
//{
//	int arr[100];
//	int size = 0;
//
//	while (1)
//	{
//		int n;
//		printf("정수입력: ");
//		scanf_s("%d", &n);
//		if (n > 0)
//		{
//			printf("data:%d\n", n);
//			arr[size++] = n;
//		}
//		else
//		{
//			break;
//		}
//	}
//		int i;
//		for (i = 0; i < size; ++i)
//		{
//			printf("[%d]:%d\n", i, arr[i]);
//		}
//}


//#include <stdio.h>
//void main()
//{
//	int arr[100];
//	int size = 0;
//
//	while (1)
//	{
//		int n;
//		printf("정수입력: ");
//		scanf_s("%d", &n);
//		if (n > 0)
//		{
//			printf("data:%d\n", n);
//		}
//		else
//		{
//			break;
//		}
//	}
//}


//#include <stdio.h>
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
//	int arr[5] = { 10,20,30,40,50 };
//
//	PrintArray(arr, 5);
//}



//#include <stdio.h>//printf(), gets(), io...
//#include <stdlib.h> // malloc(), free()..
//#include <string.h>
//char* AllocString(char* s)
//{
//	char* t = (char*)malloc(strlen(s) + 1); //생성하는것은 GD메모리에있던걸(문자열) 힙으로 만든것. 
//	strcpy_s(t, strlen(s) + 1, s);
//
//	return t;
//}
//void FreeString(char* s)
//{
//	free(s);
//}
//void main()
//{
//	char* s = AllocString("Hello!"); //Hello!는 상수메모리로써 GD에 할당되어있음.
//	printf("string:%s\n", s);
//	FreeString(s);
//}



//#include <stdio.h>//printf(), gets(), io...
//#include <stdlib.h> // malloc(), free()..
//void main()
//{
//	int* arr= (int*)malloc(sizeof(int)*10) ;
//	int i;
//	for (i = 0; i < 10; ++i)
//	{
//		arr[i] = (i + 1) * 100;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		printf("[%d]:%d\n", i, arr[i]);
//	}
//	free(arr);
//}


//#include <stdio.h>//printf(), gets(), io...
//#include <stdlib.h> // malloc(), free()..
//void main()
//{
//	int arr[10];
//	int i;
//	for (i = 0; i < 10; ++i)
//	{
//		arr[i] = (i + 1) * 100;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		printf("[%d]:%d\n", i, arr[i]);
//	}
//}


//#include <stdio.h>//printf(), gets(), io...
//#include <stdlib.h> // malloc(), free()..
//#include <string.h> //strcpy().. 
//
//void main()
//{
//	char* a = "Hello";
//	char* s = (char*)malloc(strlen(a) + 1); //굳이 아까처럼 500자리 만들필요없이 문자열의 길이를 적어줌. 
//
//	strcpy_s(s, strlen(a) + 1, a);
//	printf("string:%s\n", s);
//	free(s);
//}



//#include <stdio.h>//printf(), gets(), io...
//#include <stdlib.h> // malloc(), free()..
//#include <string.h> //strcpy().. 
//
//void main()
//{
//	char* s = (char*)malloc(strlen("Hello")+1); //굳이 아까처럼 500자리 만들필요없이 문자열의 길이를 적어줌. strlen이많이 쓰임. 
//
//	strcpy_s(s, strlen("Hello")+1, "Hello");
//	printf("string:%s\n", s);
//	free(s);
//}


//#include <stdio.h>//printf(), gets(), io...
//#include <stdlib.h> // malloc(), free()..
//#include <string.h> //strcpy().. 
//
//void main()
//{
//	char* s = (char*)malloc(sizeof(char) * 500);
//
//	//s="Hello";를하는것은 동적메모리를 가르킬려다가 상수로 가르키는것.
//	strcpy_s(s, 6, "Hello");
//	printf("string:%s\n", s);
//	free(s);
//}



//#include <stdio.h> 
//#include <string.h> 
//
//void main()
//{
//	char* s1 = "ABCDE";
//	char* s2 = "abc";
//	char buf[500] = "12345678";
//	
//	printf("%d\n", strcmp(s1, s2)); //strcmp 비교함수. 크기비교는 아스키문자 코드를 하나하나씩 비교해서 연산함 . 앞에가 크면 1 뒤에가 크면 -1,같으면 0을 반환한다. 
//	printf("%d\n", strcmp(s2, s1));
//	printf("%d\n", strcmp(buf, s1));
//	printf("%d\n", strcmp(buf, s2));
//	printf("%d\n", strcmp("ABC", "abc"));
//	printf("%d\n", strcmp("ABC", "ABC"));
//	printf("%d\n", strcmp("EBC","ABC"));
//}


//#include <stdio.h> 
//#include <string.h> 
//
//void main()
//{
//	char* s1 = "ABCDE";
//	char* s2 = "abc";
//	char buf[500]="12345678";  
//
//	strcat_s(buf,strlen(buf)+strlen(s1)+1, s1); //문자열을 덧붙혀라. 
//	
//	printf("%s %s\n", buf, s1);
//}



//#include <stdio.h> 
//#include <string.h> 
//
//void main()
//{
//	char* s1 = "ABCDE";
//	char* s2 = "abc";
//	char buf[500]="12345678";  
//
//	strcpy_s(buf, strlen(s1) + 1, s1); //길이를 명시해주고 +1을 널문자까지 포함이라는 뜻. buf는 메모리의 시작주소를 의미하고 s1은 복사할 문자열의 시작주소를 뜻한다. 
//
//	printf("%s %s\n", buf, s1);
//}


//#include <stdio.h> 
//#include <string.h> 
//
//void main()
//{
//	char* s1 = "ABCDE";
//	char* s2 = "abc";
//	char buf[500]; //문자도 갖고 문자열도 갖는것을 500개만듬. 
//
//	strcpy_s(buf,strlen(s1)+1, s1); //길이를 명시해주고 +1을 널문자까지 포함이라는 뜻. buf는 메모리의 시작주소를 의미하고 s1은 복사할 문자열의 시작주소를 뜻한다. 
//
//	printf("%s %s\n", buf, s1);
//}


//#include <stdio.h> 
//#include <string.h> 
//
//void main()
//{
//	char* s1 = "ABCDE";
//	char* s2 = "abc";
//	char buf[500]; //문자도 갖고 문자열도 갖는것을 500개만듬. 
//	
//	printf("len:%d\n", strlen(s1)); //문자열의 개수를 세주는 함수.
//	printf("len:%d\n", strlen(s2));
//	printf("len:%d\n", strlen("Hello"));
//}



//#include <stdio.h> //힙메모리
//#include <stdlib.h> 
//void Strcpy(char* h, char* s) //힙의 할당한 메모리, 문자열 
//{
//	int i;
//	for (i = 0; s[i]; ++i)
//	{
//		h[i] = s[i];
//	}
//	h[i] = s[i]; //null을 표시 
//}
//void main()
//{
//	char* s = (char*)malloc(sizeof(char) * 6); //스택의 포인터 = (반환형)malloc(반환형의 크기);
//
//	Strcpy(s, "Hello"); //뒤에있는 문자열들 앞에있는 곳에 복사. 
//	printf("%s\n", s);
//
//	free(s);
//}


//#include <stdio.h> //힙메모리
//#include <stdlib.h> //주소는 주소는 아직 안정해져있다라는뜻 .
//void main()
//{
//	char* s=(char*)malloc(sizeof(char)*6); 
//
//	s[0] = 'H';
//	s[1] = 'e';
//	s[2] = 'l';
//	s[3] = 'l';
//	s[4] = 'o';
//	s[5] = '\0';
//
//	printf("%s\n", s);
//
//	free(s); 
//}



//#include <stdio.h> //힙메모리
//#include <stdlib.h> //주소는 주소는 아직 안정해져있다라는뜻 .
//void main()
//{
//	char* p = (char*)malloc(sizeof(char) ); //힙,동적메모리를 할당하는데 사용됨. malloc가 free는 짝이 맞춰줘야함.
//
//	*p = 'A';
//
//	printf("%c\n", *p);
//
//
//	free(p); //동적메모리를 제거하는데 사용됨.
//}



//#include <stdio.h> //힙메모리
//#include <stdlib.h> //주소는 주소는 아직 안정해져있다라는뜻 .
//void main()
//{
//	int* p = (int*)malloc(sizeof(int)*5); //힙,동적메모리를 할당하는데 사용됨. malloc가 free는 짝이 맞춰줘야함.
//
//	p[0] = 10;
//	p[1] = 20;
//	p[2] = 30;
//	p[3] = 40;
//	p[4] = 50;
//
//	printf("%d\n", p[0]);
//	printf("%d\n", p[1]);
//	printf("%d\n", p[2]);
//	printf("%d\n", p[3]);
//	printf("%d\n", p[4]);
//
//
//	free(p); //동적메모리를 제거하는데 사용됨.
//}




//#include <stdio.h> //힙메모리
//#include <stdlib.h> //주소는 주소는 아직 안정해져있다라는뜻 .
//void main()
//{
//	int* p = (int*)malloc(sizeof(int));
//
//	*p = 10;
//	printf("%d\n", *p);
//
//	free(p);
//}


//#include <stdio.h> //힙메모리
//#include <stdlib.h> //주소는 주소는 아직 안정해져있다라는뜻 .
//void main()
//{
//	int* p = (int*)malloc(4); //heap 4바이트 만들기
//
//	*p = 10;
//	printf("%d\n", p);
//
//	free(p);  //제거하기 p는 제거안됨 p는 리턴값을 받아야 제거됨.
//}

	

//#include <stdio.h> //g_n전역변수
//
//int g_n = 100;
//void print()
//{
//	printf("%d\n", g_n);
//}
//void main()
//{
//	int n = 10;
//	static int k = 50;
//	char* s = "hello!";
//	printf("%p %p\n", &n, &s); //주소의 크기가 큰차이가 없음. 스택의 주소를 출력
//	printf("%p % %p\n",&k, s, &g_n); //주소의 크기가 큰차이남. 글로벌 데이터의 주소 출력
//	/*print();
//	printf("%d\n", g_n);*/
//}


//#include <stdio.h> //스택  초기화:최초의 메모리값을 할당하는 작업. 메모리가 생성되고나서 최초로 그메모리에 값을 넣는작업을 초기화라고 한다.
//void print()
//{
//	int a = 0; //a는 자동, 스택
//	static int s = 0; //정적 ,글로벌 데이터 ,초기화하는 과정
//	a = 0; s = 0; 
//	printf("%d, %d\n", a++, s++);
//}
//void main()
//{
//	print();
//	print();
//	print();
//}

//
//#include <stdio.h> //스택  초기화:최초의 메모리값을 할당하는 작업. 메모리가 생성되고나서 최초로 그메모리에 값을 넣는작업을 초기화라고 한다.
//void Print()
//{
//	int a = 0; //a는 자동, 스택
//	static int s = 0; //정적 ,글로벌 데이터 ,초기화하를 딱 한번만 해줌. 
//	//int s =10; //대입 초기화가 아님 
//	printf("%d, %d\n", a++, s++);
//}
//void main()
//{
//	Print();
//	Print();
//	Print();
//}


//#include <stdio.h> //스택
//void print()
//{
//	int a = 0;
//	int s = 0;
//	printf("%d, %d\n", a++, s++);
//}
//void main()
//{
//	print();
//	print();
//	print();
//}


//#include <stdio.h> //스택
//PrintA(int n)
//{
//	printf("PrintA:%d\n", n);
//} 
//PrintB(int n)
//	{
//	PrintA(n + 50);
//	printf("PrintB:%d\n", n);
//	}
//PrintC(int n)
//	{
//	PrintB(n + 100);
//	printf("PrintC:%d\n", n);
//	}
//void main()
//{ 
//	PrintA(100);
//  PrintB(100);
//	PrintC(100);
//}


//#include <stdio.h>
//
//void main()
//{
//	int n = 10; //함수안에 정의된 변수이므로 n,s는 지역변수이다. 
//	char* s = "Hello";  //n,s는 모두 스택변수이다. 
//
//	printf("%d\n", n);
//	printf("%s\n", s);
//}
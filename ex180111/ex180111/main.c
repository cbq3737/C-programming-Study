#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
typedef struct _sa
{
	char* sarr[100];
    int size;
}StringArray;
char* InputString()
{
	char buf[500];
	char *s = NULL;
	printf("문자열입력:");
	gets_s(buf, 500);
	s = (char*)malloc(strlen(buf) + 1);
	strcpy_s(s, strlen(buf) + 1, buf);

	return s;
}
void AddStringArray(StringArray* psa, char* data)
{
	psa-> sarr[psa->size++] = data;
}
void PrintStringArray(StringArray* psa)
{

	int i;
	for (i = 0; i < psa->size; ++i)

		printf("string[%d]:%s\n", i, psa->sarr[i]);

}
void FreeStringArray(StringArray* psa)
{
	int i;
	for (i = 0; i < psa->size; ++i)
		free(psa->sarr[i]);
}

void main(void)
{

	StringArray sa = { {NULL,NULL},0 };

	AddStringArray(&sa, InputString());
	AddStringArray(&sa, InputString());

	PrintStringArray(&sa);
	FreeStringArray(&sa);
	system("pause");
}

//#include <stdio.h> 
//#include <stdlib.h>
//#include <string.h>
//char* InputString()
//{
//	char buf[500];
//	char *s = NULL;
//	printf("문자열입력:");
//	gets_s(buf, 500);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//
//	return s;
//}
//void AddStringArray(char* sarr[], int* psize, char* data)
//{
//	sarr[(*psize)++] = data;
//}
//void PrintStringArray(char* sarr[], int size)
//{
//
//	int i;
//	for (i = 0; i < size; ++i)
//
//		printf("string[%d]:%s\n", i, sarr[i]);
//
//}
//void FreeStringArray(char* sarr[], int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//		free(sarr[i]);
//}
//void main(void)
//{
//	char* sarr[100] = { NULL };
//	int size = 0;
//
//	AddStringArray(sarr,&size,InputString());
//	AddStringArray(sarr,&size,InputString());
//	
//	PrintStringArray(sarr, size);
//	FreeStringArray(sarr, size);
//	system("pause");
//}
//#include <stdio.h> 
//#include <stdlib.h>
//#include <string.h>
//char* InputString()
//{
//	char buf[500];
//	char *s = NULL;
//	printf("문자열입력:");
//	gets_s(buf, 500);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//
//	return s;
//}
//void PrintStringArray(char* sarr[], int size)
//{
//
//	int i;
//	for (i = 0; i < size; ++i)
//
//		printf("string[%d]:%s\n", i, sarr[i]);
//
//}
//void FreeStringArray(char* sarr[], int size)
//{
//		int i;
//		for (i = 0; i < size; ++i)
//			free(sarr[i]);	
//}
//void main(void)
//{
//	char* sarr[100] = { NULL };
//	int size = 0;
//
//	sarr[size++] = InputString();
//	sarr[size++] = InputString();
//
//	PrintStringArray(sarr, size);
//	FreeStringArray(sarr, size);
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
//#include <string.h>
//char* InputString()
//{
//	char buf[500];
//	char *s = NULL;
//	printf("문자열입력:");
//	gets_s(buf, 500);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//
//	return s;
//}
//void PrintStringArray(char** sarr,int size)
//{
//
//		int i;
//		for (i = 0; i < size; ++i)
//
//			printf("string[%d]:%s\n", i, sarr[i]);
//	
//}
//void main(void)
//{
//	char* sarr[100] = { NULL };
//	int size = 0;
//
//	sarr[size++] = InputString();
//	sarr[size++] = InputString();
//
//	PrintStringArray(sarr, size);
//	{
//		int i;
//		for (i = 0; i < size; ++i)
//			free(sarr[i]);
//	}
//
//	system("pause");
//}
//#include <stdio.h> 
//#include <stdlib.h>
//#include <string.h>
//char* InputString()
//{
//	char buf[500];
//	char *s = NULL;
//	printf("문자열입력:");
//	gets_s(buf, 500);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//
//	return s;
//}
//void main(void)
//{
//	char* sarr[100] = { NULL };
//	int size = 0;
//
//	sarr[size++] = InputString();
//	sarr[size++] = InputString();
//
//	{
//		int i;
//		for (i = 0; i < size; ++i)
//
//			printf("string[%d]:%s\n", i, sarr[i]);
//	}
//	{
//		int i;
//		for (i = 0; i < size; ++i)
//			free(sarr[i]);
//	}
//
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
//char* InputString()
//{
//	char buf[500];
//	char *s = NULL;
//	printf("문자열입력:");
//	gets(buf, 500);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//
//	return s;
//}
//void main(void)
//{
//	char* sarr[2] = { NULL };
//
//	sarr[0] = InputString();
//	sarr[1] = InputString();
//
//	printf("string:%s\n", sarr[0]);
//	printf("string:%s\n", sarr[1]);
//
//	free(sarr[0]);
//	free(sarr[1]);
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
//char* InputString()
//{
//	char buf[500];
//	char *s = NULL;
//	printf("문자열입력:");
//	gets(buf, 500);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//
//	return s;
//}
//void main(void)
//{
//	char* s1 = NULL;
//	char* s2 = NULL;
//
//	s1 = InputString();
//	s2 = InputString();
//
//	printf("string:%s\n", s1);
//	printf("string:%s\n", s2);
//
//	free(s1);
//	free(s2);
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
//char* InputString()
//{
//	char buf[500];
//	char *s = NULL;
//	printf("문자열입력:");
//	gets(buf, 500);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//
//	return s;
//}
//void main(void)
//{
//	char* s = NULL;
//	
//	s = InputString();
//
//	printf("string:%s\n", s);
//	free(s);
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
// 많이 사용하는 코드이므로 알아둘것 
//void main(void)
//{
//	char buf[500]; //임시적으로 buf를 이용하여 만들어냄
//	char *s= NULL;
//	printf("문자열입력:");
//	gets(buf , 500);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1 , buf);
//
//	printf("string:%s\n", s);
//	free(s);
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
//
//void main(void)
//{
//	char s[100];
//	printf("문자열입력:");
//	gets(s, 100);
//
//	printf("string:%s\n", s);
//	
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
//
//void main(void)
//{
//	char* s = (char*)malloc(100);
//	printf("문자열입력:");
//	gets(s, 100);
//
//	printf("string:%s\n", s);
//	free(s);
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
//int Find(int list[], int size, int (*cmp)(int))
//{
//	int i;
//	for (i = 0; i < size; ++i)
//		if (cmp(list[i]))
//			return i;
//	return -1;
//
//}
//int Compare(int data)
//{
//	return data % 3 == 0 && data > 50;
//} //클라이언트의정책을 서비스에 반영시킨다라고 할수있음
//void main(void)
//{
//	int list[8] = { 59,30,80,24,108,599,361,92 };
//	int idx = Find(list, 8, Compare);
//	if (idx < 0)
//		printf("찾는원소 없음.\n");
//	else
//		printf("[%d]:%d\n", idx, list[idx]);
//	system("pause");
//
//}

//#include <stdio.h> 
//#include <stdlib.h>
//int Find(int list[], int size,int data)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//		if (list[i] == data)
//			return i;
//	return -1;
//
//}
//void main(void)
//{
//	int list[8] = { 59,30,80,24,108,599,361,92 };
//	int idx = Find(list, 8,100);
//	if (idx < 0)
//		printf("찾는원소 없음.\n");
//	else
//		printf("[%d]:%d\n", idx, list[idx]);
//	system("pause");
//
//}

//#include <stdio.h> 
//#include <stdlib.h>
////클라이언트는 내가만든곳 서버는 다른곳에서 가져온것?
//////////////////server(서버영역)///////////
//void PrintInteger(int n, void(*pf)())
//{
//	pf(); //s ->c :이작업을 callback 이라함
//	printf("%d\n", n);
//}
////////////////client(클라이언트영역)////////////
//void PrintString()
//{
//	printf("Int: ");
//	printf("Int: ");
//	printf("Int: ");
//}
//void k() { printf("kkkk:"); }
//void main(void)
//{
//
//	PrintInteger(100, PrintString); // c->s :이작업을 call 이라함
//	PrintInteger(100, k);
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
////클라이언트는 내가만든곳 서버는 다른곳에서 가져온것?
//////////////////server(서버영역)///////////
//void PrintInteger(int n,void (*pf)() )
//{
//	pf(); //s ->c :이작업을 callback 이라함
//	printf("%d\n", n);
//}
////////////////client(클라이언트영역)////////////
//void PrintString()
//{
//	printf("Int: ");
//	printf("Int: ");
//	printf("Int: ");
//}
//void main(void)
//{
//
//	PrintInteger(100,PrintString); // c->s :이작업을 call 이라함
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
////클라이언트는 내가만든곳 서버는 다른곳에서 가져온것?
//////////////////server(서버영역)///////////
//void PrintString();
//void PrintInteger(int n)
//{
//	PrintString(); //s ->c :이작업을 callback 이라함
//	printf("%d\n", n);
//}
////////////////client(클라이언트영역)////////////
//void PrintString() 
//{
//	printf("Integer: ");
//}
//void main(void)
//{
//
//	PrintInteger(100); // c->s :이작업을 call 이라함
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
//void PrintInteger(int n)
//{
//	printf("int :%d\n", n);
//}
//void main(void)
//{
//	
//	PrintInteger(100);
//	system("pause");
//}

// call(호출)클라이언트가 서버를 불러내는 작업
// call back 서버가 클라이언트를 불러내는 작업

//#include <stdio.h> 
//#include <stdlib.h>
//int Add(int a, int b)
//{
//	return a + b;
//
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//void main()
//{
//	int(*pf)(int, int) = Add; 
//
//	printf("sum:%d\n", pf(10, 20));
//
//	pf = Sub; //함수포인터로인해 기능의유연성을 가질수있음
//	printf("sum:%d\n", pf(10, 20));
//
//	system("pause");
//}
// 
//#include <stdio.h> 
//#include <stdlib.h>
//int Add(int a, int b)
//{
//	return a + b;
//
//}
//void main()
//{
//	int(*pf)(int, int) = Add; //함수포인터의 정의 암기
//
//	int sum = pf(5, 23);
//	printf("sum:%d\n", sum);
//	system("pause");
//}
	
//#include <stdio.h> 
//#include <stdlib.h>
//int Add(int a, int b)
//{
//	return a + b;
//
//}
//void main()
//{
//	int(*pf)(int, int) = Add; //함수포인터의 정의 암기
//	
//	int sum = pf(5, 23);
//	printf("sum:%d\n", sum);
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
//int Add(int a, int b)
//{
//	return a + b;
//
//}
//void main()
//{
//	int (*pf)(int , int ); //함수포인터의 정의 암기
//	pf = Add;
//	int sum = pf(5, 23);
//	printf("sum:%d\n", sum);
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
//int Add(int a, int b)
//{
//	return a + b;
//
//}
//void main()
//{
//	int sum = Add(5, 23);
//	printf("sum:%d\n",sum);
//	system("pause");
//}

//#include <stdio.h> //함수포인터에대한  코드 굉장히중요
//#include <stdlib.h>
//void Print(int data)
//{
//	printf("int : %d\n", data);
//}
//void main()
//{
//	Print(100);
//	Print(200);
//	Print(300);
//
//	printf("%p %p\n", main, Print);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//	int n = 10;
//	double d = 1.98;
//	void* pv = NULL;
//					
//	pv = &n;
//	printf("%d\n", *(int*)pv);
//	pv = &d; 
//	printf("%g\n", *(double*)pv);
//	//*pv는 어떤주소를 가르키는지 모르기때문에 연산이 틀린문장이다
//	//그렇기때문에 타입을 앞에 적어줘야함
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//	int n = 10;
//	double d = 1.98;
//	void* pv = NULL; //	void* pv 이렇게쓰면안됨 초기화를해줘야한다
//	/*널문자:'\0'(0이라는 코드값),널포인터:NULL(0의주소를가르킴)*/
//	
//	pv = &n;
//	pv = &d; //void*는 어떤주소든 담을수있다를 보여주는것임
//
//	system("pause");
//}
// void는 형식이존재하지않는다는의미 그러므로 void변수는있을수가없음
/* void* 는사용가능한데 주소는주소지만 어떤주소인지는 알지못함(void는 안됨)
그러나 현재 잘사용되지않음*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void main()
//{
//	char* s1 = "Hello";
//	char s2[10] = "Hello";
//
//	s1 = "Hi!"; //포인터이므로 바뀔수있음
//				//s2 = "Hi!"; //문자열이므로 변경불가
///*	s2[0] = "Hi!"[0];
//	s2[1] = "Hi!"[1];
//	s2[2] = "Hi!"[2];
//	s2[3] = "Hi!"[3];*/
//	strcpy_s(s2, 4, "Hi!");
//	printf("%s %s\n", s1, s2);
//	system("pause");
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void main()
//{
//	char* s1 = "Hello";
//	char s2[10] = "Hello";
//	 
//	s1 = "Hi!"; //포인터이므로 바뀔수있음
//	//s2 = "Hi!"; //문자열이므로 변경불가
//	s2[0] = "Hi!"[0];
//	s2[1] = "Hi!"[1];
//	s2[2] = "Hi!"[2];
//	s2[3] = "Hi!"[3];
//	printf("%s %s\n", s1, s2);
//	system("pause");
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void main()
//{
//	char* s1 = "Hello";
//	char s2[10] = "Hello";
//
//	printf("%s %s\n", s1, s2);
//	system("pause");
//}
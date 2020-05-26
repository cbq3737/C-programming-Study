
#include <stdio.h> //배열에 원소 5개를 보관하고 그 5개를 출력
void AddInteger(int* array, int* psize, int data)
{
	array[(*psize)++] = data;

}
void PrintIntegerArray(int* array, int size) //여기서 size는 변하지않기때문에 출력매개변수가 아니다. 
{
	int i;
	for (i = 0; i < size; i++) //배열의 내용을 출력하는 기능
	{
		printf("[%d]:%d\n", i, array[i]);
	}
}

void main()
{
	int array[100];
	int size = 0;

	AddInteger(array, &size, 100); //기능이 감춰져있다.
	AddInteger(array, &size, 200);
	AddInteger(array, &size, 300);
	AddInteger(array, &size, 90);
	AddInteger(array, &size, 80);
	PrintIntegerArray(array,size);
}


//#include <stdio.h> //배열에 원소 5개를 보관하고 그 5개를 출력
//void AddInteger(int* array, int* psize, int data)
//{
//	array[(*psize)++] = data;
//
//}
//void main()
//{
//	int array[100];
//	int size = 0;
//
//	AddInteger(array, &size, 100); 
//	AddInteger(array, &size, 200);
//	AddInteger(array, &size, 300);
//	AddInteger(array, &size, 90);
//	AddInteger(array, &size, 80);
//		int i;
//		for (i = 0; i < size; i++)
//		{
//			printf("[%d]:%d\n", i, array[i]);
//		}
//}



//#include <stdio.h> //배열에 원소 5개를 보관하고 그 5개를 출력
//void AddInteger(int* array, int* psize, int data)
//{
//	array[(*psize)++] = data;
//
//}
//
//void main()
//{
//	int array[100];
//	int size = 0;
//
//	AddInteger(array, &size,100); //100이라는 정수를 배열이라는것에 추가한다.사이즈가 가르키고있는 배열의 위치에 인덱스를 집어넣어라. 
//		
//	array[size++] = 200;
//
//	array[size++] = 300;
//
//	array[size++] = 90;
//
//	array[size++] = 80;
//
//		int i;
//		for (i = 0; i < size; i++)
//		{
//			printf("[%d]:%d\n", i, array[i]);
//		}
//}


//#include <stdio.h> //배열에 원소 5개를 보관하고 그 5개를 출력
//
//void main()
//{
//	int array[100];
//	int size = 0;
//
//	array[size++] = 100;
//
//	array[size++] = 200;
//	
//	array[size++] = 300;
//	
//	array[size++] = 90;
//	
//	array[size++] = 80;
//	
//		int i;
//		for (i = 0; i < size; i++)
//		{
//			printf("[%d]:%d\n", i, array[i]);
//		}
//}



//#include <stdio.h> //배열에 원소 5개를 보관하고 그 5개를 출력
//
//void main()
//{
//	int array[100];
//	int size = 0;
//
//	array[size] = 100;
//	++size;
//	array[size] = 200;
//	++size;
//	array[size] = 300;
//	++size;
//	array[size] = 90;
//	++size;
//	array[size] = 80;
//	++size;
//	{
//		int i;
//		for (i = 0; i < size; i++)
//		{
//			printf("[%d]:%d\n", i, array[i]);
//		}
//	}
//}


//#include <stdio.h> 배열에 원소 5개를 보관하고 그 5개를 출력
//
//void main()
//{
//	int array[100];
//	int size = 0;
//
//	array[0] = 100;
//	++size;
//	array[1] = 200;
//	++size;	
//	array[2] = 300;
//	++size;
//	array[3] = 90;
//	++size;
//	array[4] = 80;
//	++size;
//		int i;
//		for (i = 0; i < size; i++)
//		{
//			printf("[%d]:%d\n", i, array[i]);
//		}
//}


//#include <stdio.h> 
//
//void PrintAdd(int* pa, int* pb)
//{
//	
//	printf("%d+%d=%d\n", *pa, *pb, *pa + *pb);
//}
//
//void InputInteger(int* pa, int* pb)
//{
//	printf("두 정수 입력:");
//	scanf_s("%d %d", pa, pb);
//}
//void main()
//{
//	int a, b;
//	InputInteger(&a, &b);
//	printAdd(&a, &b);
//	}


//#include <stdio.h> 
//
//void PrintAdd(int a, int b)
//{
//	printf("%d+%d=%d\n", a, b, a + b);
//}
//
//void PrintSub(int a, int b)
//{
//	printf("%d-%d=%d\n", a, b, a - b);
//
//}
//void InputInteger(int* pa, int* pb)  //pa,pb는 출력매개변수이다. 쓰는역할
//{
//	printf("두 정수 입력:");
//	scanf_s("%d %d", pa, pb);
//}
//void main()
//{
//	int a, b;
//	InPutInteger(&a, &b);
//
//	printAdd(a, b);
//	printSub(a, b);
//}


//
//#include <stdio.h> 
//
//void printAdd(int a, int b)
//{
//	int result;
//	result = a + b;
//	printf("%d\n", result);
//}
//
//void printSub(int a, int b)
//{
//	int result;
//	result = a - b;
//	printf("%d\n", result);
//
//}
//
//void main()
//{
//	int a, b;
//	printf("두정수 입력:");
//	scanf_s("%d %d", &a, &b);
//
//	printAdd(a, b);
//	printSub(a, b);
//}


//#include <stdio.h> 실행화면에서 exit를 치면 종료하는것.
//#include <string.h> //strcmp의 함수선언을 해준것. 
//void UpperString(char*p)
//{
//	int i;
//	for (i = 0; i < p[i]; i++)
//	{
//		if (p[i] >= 'a' && p[i] <= 'z')
//		{
//			p[i] -= 32;
//		}
//	}
//}
//
//
//void PrintString(char* p)
//{
//	printf("%s\n", p);
//}
//
//void main()
//{
//	while (1)
//	{
//		char arr[100];
//
//		gets_s(arr, 100);
//		UpperString(arr);
//		PrintString(arr);
//		if (strcmp(arr,"EXIT")==0) //숫자를 비교해주는 함수 
//		{
//			break;
//		}
//	}
//}



//#include <stdio.h> 실행화면에서 exit를 치면 종료하는것.
//
//void UpperString(char*p)
//{
//	int i;
//	for (i = 0; i < p[i]; i++)
//	{
//		if (p[i] >= 'a' && p[i] <= 'z')
//		{
//			p[i] -= 32;
//		}
//	}
//}
//
//void PrintString(char* p)
//{
//	printf("%s\n", p);
//}
//
//void main()
//{
//	while (1)
//	{
//		char arr[100];
//
//		gets_s(arr, 100);
//		UpperString(arr);
//		PrintString(arr);
//		if (arr[0] == "EXIT"[0] && arr[1] == "EXIT"[1] && arr[2] == "EXIT"[2] && arr[3] == "EXIT"[3] && arr[4] == "EXIT"[4])
//		{
//			break;
//		}
//	}
//}


//#include <stdio.h> 실행화면에서 exit를 치면 종료하는것.
//
//void UpperString(char*p)
//{
//	int i;
//	for (i = 0; i < p[i]; i++)
//	{
//		if (p[i] >= 'a' && p[i] <= 'z')
//		{
//			p[i] -= 32;
//		}
//	}
//}
//void PrintString(char* p)
//{
//	printf("%s\n", p);
//}
//
//void main()
//{
//	while (1)
//	{
//		char arr[100];
//
//		gets_s(arr, 100); 
//		UpperString(arr);
//		PrintString(arr);
//		if (arr[0] == 'E' && arr[1]=='X' && arr[2]=='I' && arr[3]=='T' && arr[4]=='\0')
//		{
//			break;
//		}
//	}
//}


//#include <stdio.h> 문자열 전용함수 gets_s
//
//void UpperString(char*p)
//{
//	int i;
//	for (i = 0; i < p[i]; i++)
//	{
//		if (p[i] >= 'a' && p[i] <= 'z')
//		{
//			p[i] -= 32;
//		}
//	}
//}
//
//void PrintString(char* p)
//{
//	printf("%s\n", p);
//}
//
//void main()
//{
//	char arr[100];
//
//	//scanf_s("%s", arr, 100);
//	gets_s(arr, 100); //문자열 전용 입력함수이고 띄어쓰기를 인식한다. 
//	UpperString(arr);
//	PrintString(arr);
//}


//#include <stdio.h> scanf로 소문자를 대문자로 바꿈
//
//void UpperString(char*p)
//{
//	int i;
//	for (i = 0; i < p[i]; i++)
//	{
//		if (p[i] >= 'a' && p[i] <= 'z')
//		{
//			p[i] -= 32;
//		}
//	}
//}
//
//void PrintString(char* p) 
//{
//	printf("%s\n", p);
//}
//
//void main()
//{
//	char arr[100];
//
//	scanf_s("%s", arr,100); //100자까지 입력받을수 있다.이거를 반드시 적어줘야함. scanf는 공백문자를 인식하지 못함.
//	UpperString(arr);
//	PrintString(arr);
//}



//#include <stdio.h> 소문자를 다 대문자로 만드는것. 
//
//void UpperString(char*p)
//{
//	int i;
//	for (i = 0; i < p[i]; i++)
//	{
//		if (p[i] >= 'a' && p[i] <= 'z')
//		{
//			p[i] -= 32;
//		}
//	}
//}
//
//void PrintString(char* p) //p는 입력매개변수
//{
//	printf("%s\n", p);
//}
//
//void main()
//{
//	char arr[10] = "Hello";
//	UpperString(arr);
//	PrintString(arr);
//}


//#include <stdio.h> 
//
//void IncrementArray(int* p, int a) //모든원소를 1씩 증가  여기서 a는입력매개변수 p는 출력 매개변수,정확히 보자면 입력받고 내보냈기에 입출력이라 부름. 
//{
//	p[0] = p[0] + 1;  //++p[0];	
//	p[1] = p[1] + 1;  //++p[1];
//	p[2] = p[2] + 1;  //++p[2];
//	p[3] = p[3] + 1;  //++p[3];
//}
//void PrintArray(int* p, int a)  //둘다` 입력 매개변수
//{
//	int i;
//	for (i = 0; i<a; i++)
//	{
//		printf("%d\n", p[i]); //p[i]는 입력받는데 사용되엇으므로 입력매개변수임
//	}
//}
//
//void main()
//{
//	int arr[4] = { 10,20,30,40 };
//
//	IncrementArray(arr, 4);
//	PrintArray(arr, 4);
//}




//#include <stdio.h> 
//
//void InitArray(int* p, int a) //초기화 하겠다는 뜻 , p는 여기서 출력매개변수 
//{
//	p[0] = 0;
//	p[1] = 0;
//	p[2] = 0;
//	p[3] = 0;
//}
//void PrintArray(int* p, int a)  //둘다 입력 매개변수
//{
//	int i;
//	for (i = 0; i<a; i++)
//	{
//		printf("%d\n", p[i]); //p[i]는 입력받는데 사용되엇으므로 입력매개변수임
//	}
//}
//
//void main()
//{
//	int arr[4] = { 10,20,30,40 };
//	InitArray(arr, 4);
//	PrintArray(arr, 4);
//}


//#include <stdio.h> //배열의 원소를 모두다 출력하시오.
//
//void PrintArray(int* p, int a)
//{
//	int i;
//	for (i = 0; i<a; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//}
//
//void main()
//{
//	int arr[4] = { 10,20,30,40 };
//	PrintArray(arr, 4);
//}


//#include <stdio.h> //참조를 이용한 값의 출력  
//
//void Add(int* a, int* b, int* psum)
//{
//	*psum = *a + *b;  //참조를 썻다고 하더라고 무조건다 출력매개변수가 아니라 목적이 a,b는 함수의 값을 읽어왔기때문에 입력매개변수이고 sum은 값을 내보내기 위해서기때문에 출력매개변수이다. 출력매개변수는 참조만 가능. 
//}
//
//
//void main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	Add(&a, &b, &sum);
//
//	printf("sum=%d\n", sum);
//
//}


//#include <stdio.h> //참조를 이용한 값의 출력  
//
//void Add(int a, int b, int* psum)
//{
//	*psum = a + b; //**중요**함수입장에서 보면 클라이언트의 10,20을 받기위해서 사용되었기 때문에 a,b는  입력매개변수임.그리고 sum은 클라이언트에게 결과치를 내보내기 위한 것이므로 출력매개변수임.출력매개변수는 참조,포인터가아닌 이상 클라이언트에게 보낼수없음.
//}
//
//void main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	Add(a, b, &sum); 
//
//	printf("sum=%d\n", sum);
//
//}


//#include <stdio.h> //int형 세수를 더하는것. 위에랑 연관됨.
//
//void Add(int a, int b, int sum)
//{
//	sum= a + b;
//}
//
//void main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0; 
//	Add(a, b, sum); //위에 연산에는 상관이없고 메인에있는 sum만 연관이됨. Add sum과 메인 sum은 아예 다른것. 
//	printf("sum=%d\n", sum);
//}


//#include <stdio.h> //int형 두수를 더하는것. 
//
//int Add(int a, int b) 
//{
//	return a + b;
//}
//
//
//void main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//
//	printf("sum=%d\n", sum);
//
//}


//#include <stdio.h> 아스키 코드값 출력 
//
//void PrintStringASCII(char* p)
//{
//	int i;
//	for (i = 0; p[i]; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//}
//
//void main()
//{
//	char* s = "Hello!\n";
//	PrintStringASCII(s);
//}


//#include <stdio.h> 
//
//void PrintString(char* p)
//{
//	printf("%s",p);
//}
//
//void main()
//{
//	char* s = "Hello!\n";
//	PrintString(s);
//}



//#include <stdio.h> //hello를 3번 나오게 하기위한것.
//
//void main()
//{
//	//char* s = "Hello!";
//	printf("Hello!");
//	printf(s);  //s가 나오면 그냥 주소라고 생각하면 됨.
//	printf("%s", s);
//}
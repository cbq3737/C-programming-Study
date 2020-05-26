//#include <stdio.h> //디버깅을 위한 예제
//int Add(int lhs, int rhs)
//{
//	return lhs + rhs;
//}
//
//void PrintInteger(int n)
//{
//	printf("sum=%d\n", n);
//}
//
//void main()
//{
//	int sum = 0;
//	int a=5, b=10;
//	sum = Add(a,b);
//	PrintInteger(sum);
//}


//#include <stdio.h> //형식 변환
//
//
//void main()
//{
//	int arr[2] = { 0x41424344, 0x45464748 };
//	char* pc = (char*)arr;
//	char (*pk)[4] = (char(*)[4])arr;
//
//	printf("%d %d\n", arr[0],arr[1]);
//	printf("%x %x\n", arr[0],arr[1]); 
//	printf("%x %x %x %x\n", pc[0], pc[1], pc[2], pc[3]);
//	printf("%x %x %x %x\n", pc[4], pc[5], pc[6], pc[7]);
//	printf("%x %x %x %x\n", pk[0][0], pk[0][1], pk[0][2], pk[0][3]);
//	printf("%x %x %x %x\n", pk[1][0], pk[1][1], pk[1][2], pk[1][3]);
//}


//#include <stdio.h> //형식 변환
//
//
//void main()
//{
//	int n = 10;
//	printf("%p %p\n", (int**)&n,(int(*)[4])&n);  //연습을 위해 2차포인터로 변경
//	printf("%p %p\n", (int**)&n + 1, (int(*)[4])&n + 1); //첫번째는 int*만큼 건너뛰어라 , 열의개수를 건너뛰어라 뜻.  
//}



//#include <stdio.h> //형식 변환
//
//
//void main()
//{
//	int n = 10;
//	printf("%p %p\n", (char*)&n, &n);  //int형주소에 저장되어있기때문에 4바이트씩 증가 
//	printf("%p %p\n", (char*)&n+1, (int*)&n+1); //(int*)가 생략되어있음
//}



//#include <stdio.h> //10x10짜리 함수만들기
//
//void InitArray(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		arr[i] = i + 1;
//	}
//}
//void PrintArray(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		printf("%5d", arr[i]);
//	}
//		printf("\n");	
//}
//
//void main()
//{
//	int arr[10][10];
//
//	InitArray((int*)arr, 10 * 10);
//	PrintArray((int*)arr, 10*10);
//}



//#include <stdio.h> //10x10짜리 함수만들기
//
//void InitArray(int* arr, int size)  
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		arr[i]= i + 1;
//	}
//}
//void PrintArray(int(*arr)[10], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; ++i)
//	{
//		for (j = 0; j < col; ++j)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void main()
//{
//	int arr[10][10];
//
//	InitArray((int*)arr, 10*10);
//	PrintArray(arr, 10, 10);
//}


//#include <stdio.h> //10x10짜리 함수만들기
//
//void InitArray(int(*arr)[10], int row, int col)  //열의 개수가 10로 지정되어있는 상수이기때문에 변경을 할 수 없다. 
//{
//	int i, j;
//	for (i = 0; i < row; ++i)
//	{
//		for (j = 0; j < col; ++j)
//		{
//			arr[i][j] = i * col + j + 1;
//		}
//	}
//}
//void PrintArray(int(*arr)[10], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; ++i)
//	{
//		for (j = 0; j < col; ++j)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void main()
//{
//	int arr[10][10];
//	int i, j;
//	InitArray(arr, 10, 10);//행과 열을 적어줌. 	
//	PrintArray(arr, 10, 10);
//}




//#include <stdio.h> //10x10짜리 함수만들기
//
//void InitArray(int(*arr)[10], int row, int col)//여기서 arr는 2차원배열의 시작주소,배열포인터로 받아야함. 
//{
//	int i, j;
//	for (i = 0; i < row; ++i)
//	{
//		for (j = 0; j < col; ++j)
//		{
//			arr[i][j] = i * col + j + 1;
//		}
//	}
//}
//void PrintArray(int (*arr)[10],int row,int col)
//{
//	int i, j;
//	for (i = 0; i < row; ++i)
//	{
//		for (j = 0; j < col; ++j)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void main()
//{
//	int arr[10][10];
//	int i, j;
//	InitArray(arr, 10, 10);//행과 열을 적어줌. 	
//	PrintArray(arr, 10, 10);
//}



//#include <stdio.h> //100까지 출력
//
//void main()
//{
//	int arr[10][10];
//	int i, j;
//	for (i = 0; i < 10; ++i)
//	{
//		for(j = 0; j < 10;++j)
//		{
//			arr[i][j] = i * 10 + j + 1;
//		}
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		for (j = 0; j < 10;++j)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> //2차원 배열을 1차원배열처럼 사용하기.
//
//void main()
//{
//	int arr[3][3] = { 10,20,30,40,50,60,70,80,90 };
//	//int* p = &arr[0][0];
//	//int* p = arr[0];
//	int* p = (int*)arr;//2차원 배열의 주소, 그래서 형식이 다름. 형식변환을 해줌. 
//
//	printf("%d %d %d\n", p[0], p[1], p[2]); //p는 배열의 시작주소
//	printf("%d %d %d\n", p[3], p[4], p[5]);
//	printf("%d %d %d\n", p[6], p[7], p[8]);
//}


//#include <stdio.h> //2차원 배열을 1차원배열처럼 사용하기.
//
//void main()
//{
//	int arr[3][3] = { 10,20,30,40,50,60,70,80,90 };
//
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[0][3], arr[0][4], arr[0][5]);
//	printf("%d %d %d\n", arr[0][6], arr[0][7], arr[0][8]);
//}


//#include <stdio.h> //2차원 배열을 1차원배열처럼 사용하기.
//
//void main()
//{
//	int arr[3][3] = { 10,20,30,40,50,60,70,80,90 };
//	
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//	printf("%d %d %d\n", arr[2][0], arr[2][1], arr[2][2]);
//}


//#include <stdio.h> //1차원 배열을 2차원배열처럼 사용하기.
//
//void main()
//{
//	int arr[6] = { 10,20,30,40,50,60 };
//	int(*p)[2] = (int(*)[2])arr;
//	printf("%d %d\n", p[0][0], p[0][1]);
//	printf("%d %d\n", p[1][0], p[1][1]);
//	printf("%d %d\n", p[2][0], p[2][1]);
//}


//#include <stdio.h>
//
//void main() 
//{
//	int arr[6] = { 10,20,30,40,50,60 };
//	int(*p)[2] = (int(*)[2])arr;
//	printf("%d %d\n", p[0][0], p[0][1]);
//	printf("%d %d\n", p[1][0], p[1][1]);
//	printf("%d %d\n", p[2][0], p[2][1]);
//}

//#include <stdio.h>
//
//void main()
//{
//	int arr[6] = { 10,20,30,40,50,60 };
//	int* p1 = arr;
//	int(*p2)[3] = (int (*)[3])arr;
//	printf("%d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
//	printf("%d %d %d %d %d %d\n", p1[0], p1[1], p1[2], p1[3], p1[4], p1[5]);
//	printf("%d %d %d %d %d %d\n", p2[0][0], p2[0][1], p2[0][2], p2[1][0], p2[1][1], p2[1][2]);
//}


//#include <stdio.h>
//
//void main()
//{
//	int n = 10;
//	char* p = (char*)&n; //char형식으로 바꾸는 이유는 메모리를 적을때 한바이트씩 적기위해서 형식변환 연산자  
//	n = 0x41424344;
//	printf("%08x %d\n", n);
//	printf("%x %x %x %x", p[0], p[1], p[2], p[3]);
//	printf("%c %c %c %c", p[0], p[1], p[2], p[3]);
//}



//#include <stdio.h>
//
//void main()
//{
//	int n = 10;
//	char* p = (char*)&n; //char형식으로 바꾸는 이유는 메모리를 적을때 한바이트씩 적기위해서 형식변환 연산자  
//	n = 0x41424344;
//	printf("%08x %d\n", n);
//	printf("%x %x %x %x", p[0], p[1], p[2], p[3]);
//}


//#include <stdio.h>
//
//void main()
//{
//	int n= 10;
//
//	printf("%d %08x %d\n",n,n);
//	n = 0x1234; //0x는 16진수
//	printf("%d %08x %d\n", n, n);
//	n = 0x41424344;
//}


//#include <stdio.h> //첫번째 두번째처럼 똑같이 작용하는 포인터만들기위해 만듬.
//
//void main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[0][3], arr[0][4], arr[0][5]);
//	printf("%d %d %d\n", arr[1][-3], arr[1][-2], arr[1][-1]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//
//}




//#include <stdio.h> //첫번째 두번째처럼 똑같이 작용하는 포인터만들기위해 만듬.
//
//void main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int(*p)[3] = arr; //열의 개수 3개씩 뛰어넘는 포인터를 만들자.
//	
//	printf("%p %p\n", arr, p);
//	printf("%p %p\n", arr+1, p+1);
//	printf("%p %p\n", arr[0], p[0]);
//	printf("%p %p\n", arr[1], p[1]);
//
//
//
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//
//	printf("%d %d %d\n", p[0][0], p[0][1], p[0][2]);
//	printf("%d %d %d\n", p[1][0], p[1][1], p[1][2]);
//
//}


//#include <stdio.h> //첫번째 두번째처럼 똑같이 작용하는 포인터만들기위해 만듬.
//
//void main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int(*p)[3] = arr; //열의 개수 3개씩 뛰어넘는 포인터를 만들자.
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//
//	printf("%d %d %d\n", p[0][0], p[0][1], p[0][2]);
//	printf("%d %d %d\n", p[1][0], p[1][1], p[1][2]);
//
//}


//#include <stdio.h> //메모리를 그림으로 그릴줄 알아야함. 
//void main()
//{
//	char arr[5] = { 'A','B','C','D','E' };
//	char* p = arr;
//	printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4]);
//
//	printf("%c %c %c %c %c\n", p[0], p[1], p[2], p[3], p[4]);
//
//}


//#include <stdio.h> //메모리를 그림으로 그릴줄 알아야함. 
//void main()
//{
//	int arr[5] = { 10,20,30,40,50};
//	int* p = arr;
//	printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3],p[4]);
//
//}


//#include <stdio.h> //2차원 배열 
//
//void main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//}


//#include <stdio.h> // int arr[3][3] {1,2,3....,9}다음 3x3으로 출력 
//
//void main()
//{
//
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int i,j;
//	for (i = 0; i < 3; ++i)
//	{
//		for (j = 0; j < 3; ++j)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}




//#include <stdio.h> //배열의 원소에 1씩 커지는 배열을 만들어라. 
//
//void incrementArray(int* arr,int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		arr[i]=i+1;
//	}
//}
//void main()
//{
//	int arr[5];
//	incrementArray(arr, 5);
//	int i;
//	for (i = 0; i < 5; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}




//#include <stdio.h> //문자열을 입력받아 대문자만 출력하시오. 
//
//void PrintUpperString(char* s)
//{
//	int i;
//	for (i = 0; i < s[i]; i++)
//	{
//		if (s[i] >= 'A'&& 'Z' >= s[i])
//		{
//			printf("%c\n", s[i]);
//		}
//		
//	}
//}
//
//void main()
//{
//	char array[100];
//	scanf_s("%s", array,100);
//	PrintUpperString(array);
// }





//#include <stdio.h> 두 정수를 입력받아 큰수를 반환하는 함수 Max(a,b)를 작성하시오.
//
//int Max(int* a,int* b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
// // return a>b? a:b; //조건 연산자
//void main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d가 더 큰수입니다.", Max(a, b));
//}



//#include <stdio.h> //Hello를 출력하는 PrintHello()를 작성하시오.
//
//void PrintHello(char* s)
//{
//	printf("Hello\n");
//}
//
//void main()
//{
//	char s = "Hello";
//	PrintHello(s);
//}

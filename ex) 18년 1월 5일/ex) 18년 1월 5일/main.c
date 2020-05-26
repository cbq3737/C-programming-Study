#include <stdio.h> //2차원 배열

void main()
{
	int arr[2][2] = { 10,20,30,40 }; //총배열의 바이트 수는 16바이트

	printf("%p %p\n", arr, arr +1); //2차원 주소 
	printf("%p %p\n", arr[0], arr[1]); // 둘다 행의 주소임 , 1차원 주소
	printf("%p %p\n", arr[0]+1, arr[1]+1); //arr[0]+1은 arr[0]에 존재하는 1번째 메모리뜻
	printf("%p %p\n", &arr[0][0], &arr[0][1]);
	printf("%p %p\n", &arr[1][0], &arr[1][1]);
}

//
//#include <stdio.h> //2차원 배열
//
//void main()
//{
//	int arr[2][2] = { 10,20,30,40 }; //총배열의 바이트 수는 16바이트
//
//	printf("%p %p\n", arr[0], arr[1]); // 둘다 행의 주소임
//	printf("%p %p\n", &arr[0][0], &arr[0][1]);  
//	printf("%p %p\n", &arr[1][0], &arr[1][1]);
//}


//#incl ude <stdio.h> //2차원 배열
//
//void main()
//{
//	int arr[2][2] = { 10,20,30,40 }; //총배열의 바이트 수는 16바이트
//
//	printf("size:%d\n", sizeof(arr));
//	printf("%p %p\n", &arr[0][0], &arr[0][1]);  //주소는 4바이트씩 차이
//	printf("%p %p\n", &arr[1][0], &arr[1][1]);
//}


//#include <stdio.h> //2차원 배열
//
//void main()
//{
//	int arr[2][2] = { 10,20,30,40 }; //총배열의 바이트 수는 16바이트
//    
//	printf("size:%d\n", sizeof(arr));
//	printf("%d %d\n", arr[0][0], arr[0][1]);
//	printf("%d %d\n", arr[1][0], arr[1][1]);
//
//}


//#include <stdio.h> //2차원 배열
//
//void main()
//{
//	int arr[5][5] = { 0 };
//	int i, j;
//	for (i = 0; i < 5; ++i) //초기화
//	{
//		for (j = 0; j < 5; ++j)
//		{
//			arr[i][j] = i * 5 + j + 1;
//		}
//	}
//
//	for (i = 0; i < 5; ++i) //출력
//	{
//		for (j = 0; j < 5; ++j)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> //2차원 배열
//
//void main()
//{
//	int arr[5][5] = { 0 };
//	int i, j;
//	for (i = 0; i < 5; ++i) 
//	{
//		for (j = 0; j < 5; ++j)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> //2차원 배열
//
//void main()
//{
//	int arr[2][2] = { { 10,20 },{ 30,40 } };
//	int i,j;
//	for (i = 0; i < 2; ++i)//아래와 같은뜻, 생략되어있다고 보면됌. 
//	{
//		for (j = 0; j < 2; ++j)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}



//#include <stdio.h> //2차원 배열
//
//void main()
//{
//	int arr[2][2] = { {10,20},{30,40} }; //아래와 같은뜻, 생략되어있다고 보면됌. 
//	printf("%d %d\n", arr[0][0], arr[0][1]);
//	printf("%d %d\n", arr[1][0], arr[1][1]);
//}



//#include <stdio.h> //2차원 배열
//
//void main()
//{
//	int arr[2][2] = { 10,20,30,40 };
//	printf("%d %d\n", arr[0][0], arr[0][1]);
//	printf("%d %d\n", arr[1][0], arr[1][1]);
//}



//#include <stdio.h> //기본적으로 두수를 교차하기 위해 로테이션하는 방법
//
//void Swap(int* pa, int* pb)
//{
//	int t = *pa; //a를 일단 t에 저장해둔다.
//	*pa = *pb; // 서로 교차하는것.a에 b를 넣고
//	*pb = t; // 서로 교차하는것.t에 있던 a값을 b에 넣는다는 개념. 
//
//}
////아까 안만들었던 배열을 갖고옴.
//void InitArray(int* arr, int a, int seed, int step)
//{
//	int i;
//	int n = seed;
//	for (i = 0; i < a; ++i)
//	{
//		arr[i] = n;
//		n += step;
//	}
//}
//	
//void PrintArray(int* arr, int a)
//{
//	int i;
//	for (i = 0; i < a; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//	
//void ReverseArray(int* arr, int a) 
//{
//	//Swap(&arr[0], &arr[9]); //값이 날라가면 복사되기때문에 주소를 날린다. 
//	//Swap(&arr[1], &arr[8]);
//	//Swap(&arr[2], &arr[7]);
//	//Swap(&arr[3], &arr[6]);
//	//Swap(&arr[4], &arr[5]);
//	int i;
//	for (i = 0; i < a/2; ++i) //절반 나누기반까지 
//	{
//		Swap(&arr[i], &arr[(a-1)- i]);
//	}
//}
//	
//void main()
//{
//	
//	int arr[10] = { 0 };
//	InitArray(arr, 10, 10, 10);
//	PrintArray(arr, 10);
//	ReverseArray(arr, 10);
//	PrintArray(arr, 10);
//}


//#include <stdio.h> //기본적으로 두수를 교차하기 위해 로테이션하는 방법
//
//void Swap(int* pa, int* pb) 
//{
//	int t = *pa; //a를 일단 t에 저장해둔다.
//	*pa = *pb; // 서로 교차하는것.a에 b를 넣고
//	*pb = t; // 서로 교차하는것.t에 있던 a값을 b에 넣는다는 개념. 
//
//}
//
//void main()
//{
//	int a = 10, b = 20;
//	printf("%d, %d\n", a, b);
//	Swap(&a, &b); //a와b를 바꾸는것.  값이 복사되서 날라가기 때문에 절때 바꿀수없으므로 주소를 던져야함.
//	printf("%d, %d\n", a, b);
//
//}


//#include <stdio.h> //기본적으로 두수를 교차하기 위해 로테이션하는 방법
//void main()
//{
//	int a = 10, b = 20;
//	printf("%d, %d\n", a, b);
//	int t = a; //a를 일단 t에 저장해둔다.
//	a = b; // 서로 교차하는것.a에 b를 넣고
//	b = t; // 서로 교차하는것.t에 있던 a값을 b에 넣는다는 개념. 
//	printf("%d, %d\n", a, b);
//
//}


//#include <stdio.h> 배열에 10씩 증가 및 감소하는것
//
//void InitArray(int* arr, int a, int seed, int step)
//{
//	int i;
//	int n = seed;
//	for (i = 0; i < a; ++i)
//	{
//		arr[i] = n;
//		n += step;
//	}
//}
//
//void PrintArray(int* arr, int a)
//{
//	int i;
//	for (i = 0; i < a; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//
//void ReverseArray(int* arr, int a) /10개의 정수를 뒤집을려면 5개의 수를 수합 시켜야함. 즉 서로 교차시켜야함
//{
//	
//}
//
//void main()
//{
//
//	int arr[10] = { 0 };
//	InitArray(arr, 10, 10, 10);
//	PrintArray(arr, 10);
//	ReverseArray(arr, 10);
//	PrintArray(arr, 10);
//}



//#include <stdio.h> 배열에 2씩 증가
//
//void InitArray(int* arr, int a, int seed, int step)
//{
//	int i;
//	int n = seed;
//	//arr[0] = n;
//	//n += step;
//	//arr[1] = n;
//	//n += step;
//	for (i = 0; i < a; ++i)
//	{
//		arr[i] = n;
//		n += step;
//	}
//}
//
//void PrintArray(int* arr, int a)
//{
//	int i;
//	for (i = 0; i < a; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//void main()
//{
//
//	int arr[10] = { 0 };
//	InitArray(arr, 10, 100, 2); //초기화하는 함수 배열,배열크기,초기값,증감값
//	PrintArray(arr, 10);
//}



//#include <stdio.h> 배열에 2씩 증가
//
//void InitArray(int* arr, int a, int seed, int step)
//{
//	/*arr[0] = seed + 0;
//	arr[1] = seed + 2; = seed + 1*2(step)
//	arr[2] = seed + 4; = seed + 2*2(step)
//	arr[3] = seed + 6; = seed + 3*2(step으로 바꿔도됨.) */
//
//	int i;
//	for (i = 0; i < a; ++i)
//	{
//		arr[i] = seed + i * step;
//	}
//}
//
//void PrintArray(int* arr, int a)
//{
//	int i;
//	for (i = 0; i < a; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//
//void main()
//{
//	
//	int arr[10] = { 0 };
//	InitArray(arr, 10, 100, 2);
//	PrintArray(arr, 10);
//}


//#include <stdio.h>
//
//void PrintArray(int arr[], int a) //매개변수에 []가있으면 포인터로 사용된다. 
//{
//	int i;
//	for (i = 0; i < a; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//
//void main()
//{
//	int arr[10] = { 0 };
//	PrintArray(arr, 10);
//}


//#include <stdio.h>
//
//void PrintArray(int* arr, int a)
//{
//	int i;
//	for (i = 0; i < a; ++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//
//void main()
//{
//	int arr[10] = { 0 };
//	PrintArray(arr, 10);
//}
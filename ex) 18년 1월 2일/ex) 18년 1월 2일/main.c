//#include <stdio.h> 배열 
//
//void main()
//{
//	char* s;
//
//	s = "Hello";
//	printf("%s\n", s);
//	printf(s);
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//	int* p;
//  int i;
//
//	p = array;//	for (i = 0; i < 4; ++i)
//	{
//		printf("%d %d\n", array[i], p[i]);
//	}
//
//}

//#include <stdio.h> 배열 
//
//void main()
	//{
	//	int array[4] = { 10,20,30,40 };
	//	int* p = &array[3];
	//
	//	printf("%d %d\n", *(p-3), array[0]);
	//	printf("%d %d\n", *(p-2), array[1]);
	//	printf("%d %d\n", *(p-1), array[2]);
	//	printf("%d %d\n", *p, array[3]);
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//	int* p = array+3;
//
//	printf("%d %d\n", p[-3], array[0]);
//	printf("%d %d\n", p[-2], array[1]);
//	printf("%d %d\n", p[-1], array[2]);
//	printf("%d %d\n", p[0], array[3]);
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//	int* p = &array[0];
//
//	printf("%d %d\n", p[0],array[0]);
//	printf("%d %d\n", p[1],array[1]);
//	printf("%d %d\n", p[2],array[2]);
//	printf("%d %d\n", p[3],array[3]);
//
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//	int* p = &array[0];
//
//	printf("%d\n", p[0]);
//	printf("%d\n", p[1]);
//	printf("%d\n", p[2]);
//	printf("%d\n", p[3]);
//
//}


//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//	int* p = &array[0];
//
//	printf("%d\n", *p);
//	printf("%d\n", *(p+1));
//	printf("%d\n", *(p+2));
//	printf("%d\n", *(p+3));
//
//}


//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//
//	printf("%d %d\n", *array + 0, *&array[0]);
//	printf("%d %d\n", array[0] ,(&array[0])[0]);
//	printf("%p %p\n", array + 1, &array[1]);
//	printf("%p %p\n", array + 2, &array[2]);
//	printf("%p %p\n", array + 3, &array[3]);
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//
//	printf("%p %p\n", array+0, &array[0]); //주소가 같다는걸 표시 
//	printf("%p %p\n", array+1, &array[1]);
//	printf("%p %p\n", array+2, &array[2]);
//	printf("%p %p\n", array+3, &array[3]);
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//
//	printf("%d\n", *(array+0));
//    printf("%d\n", array[1]);
//	printf("%d\n", *(array+2));
//	printf("%d\n", array[3]);
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//
//	printf("%p %d\n", &array[0], *(&array[0] + 0)); 
//	printf("%p %d\n", &array[1], *(&array[0] + 1));  
//	printf("%p %d\n", &array[2], *(&array[0] + 2));
//	printf("%p %d\n", &array[3], *(&array[0] + 3));
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//
//	printf("%p %p\n", &array[0], &array[0]+0); //배열의 첫번째 주소, 주소이기때문에 4바이트씩 차이가남.
//	printf("%p %p\n", &array[1], &array[0]+1); //형식의 크기만큼 넘어감. 
//	printf("%p %p\n", &array[2], &array[0]+2);
//	printf("%p %p\n", &array[3], &array[0]+3);
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//
//	printf("%p\n", &array[0]); //배열의 첫번째 주소, 주소이기때문에 4바이트씩 차이가남.
//	printf("%p\n", &array[1]);
//	printf("%p\n", &array[2]);
//	printf("%p\n", &array[3]);
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[5] = { 0 };
//
//	printf("size:%d\n", sizeof(array)); //배열의 크기 
//	printf("size:%d\n", sizeof(array)/sizeof(int)); // 배열의 크기 나누기 인트형의 크기 나눔
//	printf("%d\n", array[0]);
//	printf("%d\n", array[1]);
//	printf("%d\n", array[2]);
//	printf("%d\n", array[3]);
//	printf("%d\n", array[4]);
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[5] ; //배열을 초기화하지 않기때문에 정의되지않아서 쓰레기값이 출력됨. 
//	printf("%d\n", array[0]);
//	printf("%d\n", array[1]);
//	printf("%d\n", array[2]);
//	printf("%d\n", array[3]);
//	printf("%d\n", array[4]);
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[5] = { 0 };
//	printf("%d\n", array[0]);
//	printf("%d\n", array[1]);
//	printf("%d\n", array[2]);
//	printf("%d\n", array[3]); 
//	printf("%d\n", array[4]); 
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[5] = { 10,20,30 };
//	printf("%d\n", array[0]);
//	printf("%d\n", array[1]);
//	printf("%d\n", array[2]);
//	printf("%d\n", array[3]); //메모리는 5개인데 수가 없으니까 0으로 출력
//	printf("%d\n", array[4]); //메모리는 5개인데 수가 없으니까 0으로 출력
//}


//#include <stdio.h> 1개짜리 배열 
//
//void main()
//{
//	int array[1] = {10};
//	printf("%d\n", array[0]);
//
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[100];
//	int i;
//
//	for (i = 0; i < 100; ++i)
//	{
//		array[i] = (i + 1)*10; //10의 배수만큼 넣고싶다.
//		printf("%d\n", array[i]);
//	 }
// }

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[100];
//	int i;
//
//	for (i = 0; i < 100; ++i) 
//	{
//		array[i] = i+1; //배열의 인덱스보다 값은 +1이 커야함.
//		printf("%d\n", array[i]);
//	}
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//	int i;
//
//	for (i = 0; i < 4; ++i) //배열의 값을 변경
//	{
//		array[i] = i;
//	}
//
//		for (i = 0; i < 4; ++i) //배열의 출력 기능
//		{
//			printf("%d\n", array[i]);
//		}
//	
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//	int i;
//	for (i = 0; i < 4; ++i)
//	{
//		printf("%d\n", array[i]);
//	}
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//
//	printf("%d\n", array[0]);
//	printf("%d\n", array[1]);
//	printf("%d\n", array[2]);
//	printf("%d\n", array[3]);
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 0,1,2,3 };
//	printf("%d\n", array[0] );
//	printf("%d\n", sizeof(array[0]));
//}

//#include <stdio.h> 배열 
//
//void main()
//{
//	int array[4] = { 0,1,2,3 };
//	printf("%d %d %d %d\n", array[0], array[1], array[2], array[3]);
//
//}

//#include <stdio.h> 주소의 연산  
//
//void main()
//{
//    double n = 10; //8만큼 증가 
//	printf("%p\n", &n);
//	printf("%p\n", &n + 1);
//	printf("%p\n", &n + 2);
//	printf("%p\n", &n + 3);
//	printf("%p\n", &n - 1);
//}

//#include <stdio.h> 주소의 연산  
//
//void main()
//{
//	char n = 10;
//	printf("%p\n", &n);
//	printf("%p\n", &n + 1);
//	printf("%p\n", &n + 2);
//	printf("%p\n", &n + 3);
//	printf("%p\n", &n - 1);
//}

//#include <stdio.h> 주소의 연산  
//
//void main()
//{
//	int n = 10; //int형이 4바이트이므로 4바이트씩 건너뜀.
//	printf("%p\n", &n);
//	printf("%p\n", &n+1);
//	printf("%p\n", &n+2);
//	printf("%p\n", &n+3);
//	printf("%p\n", &n-1);
//}

//#include <stdio.h> 다차 포인터  
//
//void main()
//{
//	int n = 10;
//	int* p = &n; // 정수의 주소 
//	int** pp = &p; //pp는 p의 주소를 담기때문에 더블 포인터, 정수의 주소의 주소
//	int*** ppn = &pp; //삼차포인터 ,정수의 주소의주소의 주소
//	
//	printf("%d %d %d %d\n", n , *p, **pp,***ppn); //모두다 정수 
//	printf("%p %p %p %p\n", &n, p, *pp, **ppn); //모두다 1차 주소
//
//}


#include <stdio.h> 포인터  

void main()
{
	int n = 10;
	int* p = &n;

	printf("%d %d\n", n, *p); //정수를 나타냄
	printf("%p %p\n", &n, p); //주소를 나타냄 
	printf("%d %d\n", *&n, *p);
	printf("%p %p\n", &*&n, &*p);
	printf("%d %d\n", *&*&n, *&*p);
}


//#include <stdio.h> 1부터 100까지 리을자 방향으로 출력하기 
//
//void main()
//{
//	int i, j, k;
//	int x = 1;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = x; j < x + 10; j++)
//		{
//			printf("%3d", j);
//			if (j % 10 == 0)
//			{
//				printf("\n");
//			}
//		}
//		for (k = j + 9; k >= j; k--)
//		{
//			printf("%3d", k);
//			x = j + 10;
//
//
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h> 10987654321 10줄
//
//void main()
//{
//	int i, j;
//	for (i = 1; i <= 10; i++)
//	{
//
//		for (j = 10; j >= 1; j--)
//		{
//			printf("%d", j);
//		}
//
//		printf("\n");
//	}
//
//}

//#include <stdio.h> 12345678910 10줄
//
//void main()
//{
//	int i, j;
//	for (i = 1; i <= 10; i++)
//	{
//
//		for (j = 1; j <= 10; j++)
//		{
//			printf("%d", j);
//		}
//
//		printf("\n");
//	}
//
//}


//#include <stdio.h> 
//
//void main()
//{
//	int i, j;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= 5; ++j)
//        {
//			printf("%5d", j);
//           }
//		printf("\n");
//	}
//}

//#include <stdio.h> 
//
//void main()
//{
//	int i,j;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= 5; ++j)
//         {
//			printf("%5d", i); //콘솔창에 왼쪽부터 다섯칸을 확보해서 출력하라.
//			}
//     printf("\n");
//	}
//}


//#include <stdio.h> 3의 배수 이면서 5의배수를 출력,공배수일때 출력하라,아래와 같음
//
//void main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <=100; i++)
//	{
//		if(i % 5 == 0)
//		{
//			if (i % 3 == 0)
//			{
//				printf("%d\n", i);
//				sum += i;
//			}
//		}
//
//	}
//	printf("%d", sum);
//}


//#include <stdio.h> 3의 배수 이면서 5의배수를 출력,공배수일때 출력하라 
//
//void main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <=100; i++)
//	{
//		if (i % 3 == 0 && i  % 5 == 0)
//		{
//			printf("%d\n", i );
//			sum += i ;
//		}
//
//	}
//	printf("%d", sum);
//}

//#include <stdio.h> 3의 배수 이면서 5의배수를 출력,공배수일때 출력하라 
//
//void main()
//{
//	int i;
//	int sum = 0;
//	for (i = 0; i <100; i++)
//	{
//		if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0)
//		{
//			printf("%d\n", i + 1);
//			sum += i+1;
//		}
//		
//	}
//	printf("%d", sum);
//}


//#include <stdio.h> 3의 배수 또는/이기도하고 5의배수를 출력 
//
//void main()
//{
//	int i;
//	int sum=0;
//	for (i = 0; i <100; i++)
//	{
//		if ((i + 1) % 3 == 0 || (i + 1) % 5 == 0)
//		{
//			printf("%d\n", i + 1);
//		}
//			
//	}
//}

//#include <stdio.h> for문의범위가 0~99까지일때 
//
//void main()
//{
//	int i;
//	int sum = 0;
//	for (i = 0; i <100; i++)
//	{
//			if ((i+1) % 5 == 0)
//			{
//				printf("%d\n", i+1);
//				sum += i+1;
//			}
//		}
//	
//	printf("%d", sum);
//}

//#include <stdio.h> 5의 배수의 합
//
//void main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 5 == 0)
//		{
//			printf("%d\n", i);
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	
//}

//#include <stdio.h> 1~100까지 정수중 5의 배수 출력
//
//void main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 5 == 0)
//		{
//			printf("%d\n", i);
//		}
//
//	}
//}
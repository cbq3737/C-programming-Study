#include <stdio.h> //2���� �迭

void main()
{
	int arr[2][2] = { 10,20,30,40 }; //�ѹ迭�� ����Ʈ ���� 16����Ʈ

	printf("%p %p\n", arr, arr +1); //2���� �ּ� 
	printf("%p %p\n", arr[0], arr[1]); // �Ѵ� ���� �ּ��� , 1���� �ּ�
	printf("%p %p\n", arr[0]+1, arr[1]+1); //arr[0]+1�� arr[0]�� �����ϴ� 1��° �޸𸮶�
	printf("%p %p\n", &arr[0][0], &arr[0][1]);
	printf("%p %p\n", &arr[1][0], &arr[1][1]);
}

//
//#include <stdio.h> //2���� �迭
//
//void main()
//{
//	int arr[2][2] = { 10,20,30,40 }; //�ѹ迭�� ����Ʈ ���� 16����Ʈ
//
//	printf("%p %p\n", arr[0], arr[1]); // �Ѵ� ���� �ּ���
//	printf("%p %p\n", &arr[0][0], &arr[0][1]);  
//	printf("%p %p\n", &arr[1][0], &arr[1][1]);
//}


//#incl ude <stdio.h> //2���� �迭
//
//void main()
//{
//	int arr[2][2] = { 10,20,30,40 }; //�ѹ迭�� ����Ʈ ���� 16����Ʈ
//
//	printf("size:%d\n", sizeof(arr));
//	printf("%p %p\n", &arr[0][0], &arr[0][1]);  //�ּҴ� 4����Ʈ�� ����
//	printf("%p %p\n", &arr[1][0], &arr[1][1]);
//}


//#include <stdio.h> //2���� �迭
//
//void main()
//{
//	int arr[2][2] = { 10,20,30,40 }; //�ѹ迭�� ����Ʈ ���� 16����Ʈ
//    
//	printf("size:%d\n", sizeof(arr));
//	printf("%d %d\n", arr[0][0], arr[0][1]);
//	printf("%d %d\n", arr[1][0], arr[1][1]);
//
//}


//#include <stdio.h> //2���� �迭
//
//void main()
//{
//	int arr[5][5] = { 0 };
//	int i, j;
//	for (i = 0; i < 5; ++i) //�ʱ�ȭ
//	{
//		for (j = 0; j < 5; ++j)
//		{
//			arr[i][j] = i * 5 + j + 1;
//		}
//	}
//
//	for (i = 0; i < 5; ++i) //���
//	{
//		for (j = 0; j < 5; ++j)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h> //2���� �迭
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


//#include <stdio.h> //2���� �迭
//
//void main()
//{
//	int arr[2][2] = { { 10,20 },{ 30,40 } };
//	int i,j;
//	for (i = 0; i < 2; ++i)//�Ʒ��� ������, �����Ǿ��ִٰ� �����. 
//	{
//		for (j = 0; j < 2; ++j)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}



//#include <stdio.h> //2���� �迭
//
//void main()
//{
//	int arr[2][2] = { {10,20},{30,40} }; //�Ʒ��� ������, �����Ǿ��ִٰ� �����. 
//	printf("%d %d\n", arr[0][0], arr[0][1]);
//	printf("%d %d\n", arr[1][0], arr[1][1]);
//}



//#include <stdio.h> //2���� �迭
//
//void main()
//{
//	int arr[2][2] = { 10,20,30,40 };
//	printf("%d %d\n", arr[0][0], arr[0][1]);
//	printf("%d %d\n", arr[1][0], arr[1][1]);
//}



//#include <stdio.h> //�⺻������ �μ��� �����ϱ� ���� �����̼��ϴ� ���
//
//void Swap(int* pa, int* pb)
//{
//	int t = *pa; //a�� �ϴ� t�� �����صд�.
//	*pa = *pb; // ���� �����ϴ°�.a�� b�� �ְ�
//	*pb = t; // ���� �����ϴ°�.t�� �ִ� a���� b�� �ִ´ٴ� ����. 
//
//}
////�Ʊ� �ȸ������ �迭�� �����.
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
//	//Swap(&arr[0], &arr[9]); //���� ���󰡸� ����Ǳ⶧���� �ּҸ� ������. 
//	//Swap(&arr[1], &arr[8]);
//	//Swap(&arr[2], &arr[7]);
//	//Swap(&arr[3], &arr[6]);
//	//Swap(&arr[4], &arr[5]);
//	int i;
//	for (i = 0; i < a/2; ++i) //���� ������ݱ��� 
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


//#include <stdio.h> //�⺻������ �μ��� �����ϱ� ���� �����̼��ϴ� ���
//
//void Swap(int* pa, int* pb) 
//{
//	int t = *pa; //a�� �ϴ� t�� �����صд�.
//	*pa = *pb; // ���� �����ϴ°�.a�� b�� �ְ�
//	*pb = t; // ���� �����ϴ°�.t�� �ִ� a���� b�� �ִ´ٴ� ����. 
//
//}
//
//void main()
//{
//	int a = 10, b = 20;
//	printf("%d, %d\n", a, b);
//	Swap(&a, &b); //a��b�� �ٲٴ°�.  ���� ����Ǽ� ���󰡱� ������ ���� �ٲܼ������Ƿ� �ּҸ� ��������.
//	printf("%d, %d\n", a, b);
//
//}


//#include <stdio.h> //�⺻������ �μ��� �����ϱ� ���� �����̼��ϴ� ���
//void main()
//{
//	int a = 10, b = 20;
//	printf("%d, %d\n", a, b);
//	int t = a; //a�� �ϴ� t�� �����صд�.
//	a = b; // ���� �����ϴ°�.a�� b�� �ְ�
//	b = t; // ���� �����ϴ°�.t�� �ִ� a���� b�� �ִ´ٴ� ����. 
//	printf("%d, %d\n", a, b);
//
//}


//#include <stdio.h> �迭�� 10�� ���� �� �����ϴ°�
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
//void ReverseArray(int* arr, int a) /10���� ������ ���������� 5���� ���� ���� ���Ѿ���. �� ���� �������Ѿ���
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



//#include <stdio.h> �迭�� 2�� ����
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
//	InitArray(arr, 10, 100, 2); //�ʱ�ȭ�ϴ� �Լ� �迭,�迭ũ��,�ʱⰪ,������
//	PrintArray(arr, 10);
//}



//#include <stdio.h> �迭�� 2�� ����
//
//void InitArray(int* arr, int a, int seed, int step)
//{
//	/*arr[0] = seed + 0;
//	arr[1] = seed + 2; = seed + 1*2(step)
//	arr[2] = seed + 4; = seed + 2*2(step)
//	arr[3] = seed + 6; = seed + 3*2(step���� �ٲ㵵��.) */
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
//void PrintArray(int arr[], int a) //�Ű������� []�������� �����ͷ� ���ȴ�. 
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
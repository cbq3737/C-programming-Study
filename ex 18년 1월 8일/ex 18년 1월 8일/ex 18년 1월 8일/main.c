//#include <stdio.h> //������� ���� ����
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


//#include <stdio.h> //���� ��ȯ
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


//#include <stdio.h> //���� ��ȯ
//
//
//void main()
//{
//	int n = 10;
//	printf("%p %p\n", (int**)&n,(int(*)[4])&n);  //������ ���� 2�������ͷ� ����
//	printf("%p %p\n", (int**)&n + 1, (int(*)[4])&n + 1); //ù��°�� int*��ŭ �ǳʶپ�� , ���ǰ����� �ǳʶپ�� ��.  
//}



//#include <stdio.h> //���� ��ȯ
//
//
//void main()
//{
//	int n = 10;
//	printf("%p %p\n", (char*)&n, &n);  //int���ּҿ� ����Ǿ��ֱ⶧���� 4����Ʈ�� ���� 
//	printf("%p %p\n", (char*)&n+1, (int*)&n+1); //(int*)�� �����Ǿ�����
//}



//#include <stdio.h> //10x10¥�� �Լ������
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



//#include <stdio.h> //10x10¥�� �Լ������
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


//#include <stdio.h> //10x10¥�� �Լ������
//
//void InitArray(int(*arr)[10], int row, int col)  //���� ������ 10�� �����Ǿ��ִ� ����̱⶧���� ������ �� �� ����. 
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
//	InitArray(arr, 10, 10);//��� ���� ������. 	
//	PrintArray(arr, 10, 10);
//}




//#include <stdio.h> //10x10¥�� �Լ������
//
//void InitArray(int(*arr)[10], int row, int col)//���⼭ arr�� 2�����迭�� �����ּ�,�迭�����ͷ� �޾ƾ���. 
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
//	InitArray(arr, 10, 10);//��� ���� ������. 	
//	PrintArray(arr, 10, 10);
//}



//#include <stdio.h> //100���� ���
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


//#include <stdio.h> //2���� �迭�� 1�����迭ó�� ����ϱ�.
//
//void main()
//{
//	int arr[3][3] = { 10,20,30,40,50,60,70,80,90 };
//	//int* p = &arr[0][0];
//	//int* p = arr[0];
//	int* p = (int*)arr;//2���� �迭�� �ּ�, �׷��� ������ �ٸ�. ���ĺ�ȯ�� ����. 
//
//	printf("%d %d %d\n", p[0], p[1], p[2]); //p�� �迭�� �����ּ�
//	printf("%d %d %d\n", p[3], p[4], p[5]);
//	printf("%d %d %d\n", p[6], p[7], p[8]);
//}


//#include <stdio.h> //2���� �迭�� 1�����迭ó�� ����ϱ�.
//
//void main()
//{
//	int arr[3][3] = { 10,20,30,40,50,60,70,80,90 };
//
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[0][3], arr[0][4], arr[0][5]);
//	printf("%d %d %d\n", arr[0][6], arr[0][7], arr[0][8]);
//}


//#include <stdio.h> //2���� �迭�� 1�����迭ó�� ����ϱ�.
//
//void main()
//{
//	int arr[3][3] = { 10,20,30,40,50,60,70,80,90 };
//	
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//	printf("%d %d %d\n", arr[2][0], arr[2][1], arr[2][2]);
//}


//#include <stdio.h> //1���� �迭�� 2�����迭ó�� ����ϱ�.
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
//	char* p = (char*)&n; //char�������� �ٲٴ� ������ �޸𸮸� ������ �ѹ���Ʈ�� �������ؼ� ���ĺ�ȯ ������  
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
//	char* p = (char*)&n; //char�������� �ٲٴ� ������ �޸𸮸� ������ �ѹ���Ʈ�� �������ؼ� ���ĺ�ȯ ������  
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
//	n = 0x1234; //0x�� 16����
//	printf("%d %08x %d\n", n, n);
//	n = 0x41424344;
//}


//#include <stdio.h> //ù��° �ι�°ó�� �Ȱ��� �ۿ��ϴ� �����͸�������� ����.
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




//#include <stdio.h> //ù��° �ι�°ó�� �Ȱ��� �ۿ��ϴ� �����͸�������� ����.
//
//void main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int(*p)[3] = arr; //���� ���� 3���� �پ�Ѵ� �����͸� ������.
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


//#include <stdio.h> //ù��° �ι�°ó�� �Ȱ��� �ۿ��ϴ� �����͸�������� ����.
//
//void main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int(*p)[3] = arr; //���� ���� 3���� �پ�Ѵ� �����͸� ������.
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//
//	printf("%d %d %d\n", p[0][0], p[0][1], p[0][2]);
//	printf("%d %d %d\n", p[1][0], p[1][1], p[1][2]);
//
//}


//#include <stdio.h> //�޸𸮸� �׸����� �׸��� �˾ƾ���. 
//void main()
//{
//	char arr[5] = { 'A','B','C','D','E' };
//	char* p = arr;
//	printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4]);
//
//	printf("%c %c %c %c %c\n", p[0], p[1], p[2], p[3], p[4]);
//
//}


//#include <stdio.h> //�޸𸮸� �׸����� �׸��� �˾ƾ���. 
//void main()
//{
//	int arr[5] = { 10,20,30,40,50};
//	int* p = arr;
//	printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3],p[4]);
//
//}


//#include <stdio.h> //2���� �迭 
//
//void main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//}


//#include <stdio.h> // int arr[3][3] {1,2,3....,9}���� 3x3���� ��� 
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




//#include <stdio.h> //�迭�� ���ҿ� 1�� Ŀ���� �迭�� ������. 
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




//#include <stdio.h> //���ڿ��� �Է¹޾� �빮�ڸ� ����Ͻÿ�. 
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





//#include <stdio.h> �� ������ �Է¹޾� ū���� ��ȯ�ϴ� �Լ� Max(a,b)�� �ۼ��Ͻÿ�.
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
// // return a>b? a:b; //���� ������
//void main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d�� �� ū���Դϴ�.", Max(a, b));
//}



//#include <stdio.h> //Hello�� ����ϴ� PrintHello()�� �ۼ��Ͻÿ�.
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


#include <stdio.h> //�迭�� ���� 5���� �����ϰ� �� 5���� ���
void AddInteger(int* array, int* psize, int data)
{
	array[(*psize)++] = data;

}
void PrintIntegerArray(int* array, int size) //���⼭ size�� �������ʱ⶧���� ��¸Ű������� �ƴϴ�. 
{
	int i;
	for (i = 0; i < size; i++) //�迭�� ������ ����ϴ� ���
	{
		printf("[%d]:%d\n", i, array[i]);
	}
}

void main()
{
	int array[100];
	int size = 0;

	AddInteger(array, &size, 100); //����� �������ִ�.
	AddInteger(array, &size, 200);
	AddInteger(array, &size, 300);
	AddInteger(array, &size, 90);
	AddInteger(array, &size, 80);
	PrintIntegerArray(array,size);
}


//#include <stdio.h> //�迭�� ���� 5���� �����ϰ� �� 5���� ���
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



//#include <stdio.h> //�迭�� ���� 5���� �����ϰ� �� 5���� ���
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
//	AddInteger(array, &size,100); //100�̶�� ������ �迭�̶�°Ϳ� �߰��Ѵ�.����� ����Ű���ִ� �迭�� ��ġ�� �ε����� ����־��. 
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


//#include <stdio.h> //�迭�� ���� 5���� �����ϰ� �� 5���� ���
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



//#include <stdio.h> //�迭�� ���� 5���� �����ϰ� �� 5���� ���
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


//#include <stdio.h> �迭�� ���� 5���� �����ϰ� �� 5���� ���
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
//	printf("�� ���� �Է�:");
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
//void InputInteger(int* pa, int* pb)  //pa,pb�� ��¸Ű������̴�. ���¿���
//{
//	printf("�� ���� �Է�:");
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
//	printf("������ �Է�:");
//	scanf_s("%d %d", &a, &b);
//
//	printAdd(a, b);
//	printSub(a, b);
//}


//#include <stdio.h> ����ȭ�鿡�� exit�� ġ�� �����ϴ°�.
//#include <string.h> //strcmp�� �Լ������� ���ذ�. 
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
//		if (strcmp(arr,"EXIT")==0) //���ڸ� �����ִ� �Լ� 
//		{
//			break;
//		}
//	}
//}



//#include <stdio.h> ����ȭ�鿡�� exit�� ġ�� �����ϴ°�.
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


//#include <stdio.h> ����ȭ�鿡�� exit�� ġ�� �����ϴ°�.
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


//#include <stdio.h> ���ڿ� �����Լ� gets_s
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
//	gets_s(arr, 100); //���ڿ� ���� �Է��Լ��̰� ���⸦ �ν��Ѵ�. 
//	UpperString(arr);
//	PrintString(arr);
//}


//#include <stdio.h> scanf�� �ҹ��ڸ� �빮�ڷ� �ٲ�
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
//	scanf_s("%s", arr,100); //100�ڱ��� �Է¹����� �ִ�.�̰Ÿ� �ݵ�� ���������. scanf�� ���鹮�ڸ� �ν����� ����.
//	UpperString(arr);
//	PrintString(arr);
//}



//#include <stdio.h> �ҹ��ڸ� �� �빮�ڷ� ����°�. 
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
//void PrintString(char* p) //p�� �Է¸Ű�����
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
//void IncrementArray(int* p, int a) //�����Ҹ� 1�� ����  ���⼭ a���Է¸Ű����� p�� ��� �Ű�����,��Ȯ�� ���ڸ� �Է¹ް� �����±⿡ ������̶� �θ�. 
//{
//	p[0] = p[0] + 1;  //++p[0];	
//	p[1] = p[1] + 1;  //++p[1];
//	p[2] = p[2] + 1;  //++p[2];
//	p[3] = p[3] + 1;  //++p[3];
//}
//void PrintArray(int* p, int a)  //�Ѵ�` �Է� �Ű�����
//{
//	int i;
//	for (i = 0; i<a; i++)
//	{
//		printf("%d\n", p[i]); //p[i]�� �Է¹޴µ� ���Ǿ����Ƿ� �Է¸Ű�������
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
//void InitArray(int* p, int a) //�ʱ�ȭ �ϰڴٴ� �� , p�� ���⼭ ��¸Ű����� 
//{
//	p[0] = 0;
//	p[1] = 0;
//	p[2] = 0;
//	p[3] = 0;
//}
//void PrintArray(int* p, int a)  //�Ѵ� �Է� �Ű�����
//{
//	int i;
//	for (i = 0; i<a; i++)
//	{
//		printf("%d\n", p[i]); //p[i]�� �Է¹޴µ� ���Ǿ����Ƿ� �Է¸Ű�������
//	}
//}
//
//void main()
//{
//	int arr[4] = { 10,20,30,40 };
//	InitArray(arr, 4);
//	PrintArray(arr, 4);
//}


//#include <stdio.h> //�迭�� ���Ҹ� ��δ� ����Ͻÿ�.
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


//#include <stdio.h> //������ �̿��� ���� ���  
//
//void Add(int* a, int* b, int* psum)
//{
//	*psum = *a + *b;  //������ ���ٰ� �ϴ���� �����Ǵ� ��¸Ű������� �ƴ϶� ������ a,b�� �Լ��� ���� �о�Ա⶧���� �Է¸Ű������̰� sum�� ���� �������� ���ؼ��⶧���� ��¸Ű������̴�. ��¸Ű������� ������ ����. 
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


//#include <stdio.h> //������ �̿��� ���� ���  
//
//void Add(int a, int b, int* psum)
//{
//	*psum = a + b; //**�߿�**�Լ����忡�� ���� Ŭ���̾�Ʈ�� 10,20�� �ޱ����ؼ� ���Ǿ��� ������ a,b��  �Է¸Ű�������.�׸��� sum�� Ŭ���̾�Ʈ���� ���ġ�� �������� ���� ���̹Ƿ� ��¸Ű�������.��¸Ű������� ����,�����Ͱ��ƴ� �̻� Ŭ���̾�Ʈ���� ����������.
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


//#include <stdio.h> //int�� ������ ���ϴ°�. ������ ������.
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
//	Add(a, b, sum); //���� ���꿡�� ����̾��� ���ο��ִ� sum�� �����̵�. Add sum�� ���� sum�� �ƿ� �ٸ���. 
//	printf("sum=%d\n", sum);
//}


//#include <stdio.h> //int�� �μ��� ���ϴ°�. 
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


//#include <stdio.h> �ƽ�Ű �ڵ尪 ��� 
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



//#include <stdio.h> //hello�� 3�� ������ �ϱ����Ѱ�.
//
//void main()
//{
//	//char* s = "Hello!";
//	printf("Hello!");
//	printf(s);  //s�� ������ �׳� �ּҶ�� �����ϸ� ��.
//	printf("%s", s);
//}
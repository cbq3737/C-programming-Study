#include <stdio.h>
void AddArray(int* arr, int* size, int n)
{
	arr[(*size)++] = n;
}

void InputInteger(int* n)
{
	printf("�����Է�: ");
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
	printf("1. �����߰�\n");
	printf("2. ��� �������\n");
	printf("3. ���α׷� ���� \n");

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
//	printf("�����Է�: ");
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
//	printf("1. �����߰�\n");
//	printf("2. ��� �������\n");
//	printf("3. ���α׷� ���� \n");
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
//	printf("�����Է�: ");
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
//	printf("�����Է�: ");
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
//	printf("�����Է�: ");
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
//			AddArray(arr, &size, n); //size�� �ּҰ��� ������ ������ size�� ���� ����Ǽ� �;��ϹǷ� 
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
//	printf("�����Է�: ");
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
//		printf("�����Է�: ");
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
//		printf("�����Է�: ");
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
//		printf("�����Է�: ");
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
//	char* t = (char*)malloc(strlen(s) + 1); //�����ϴ°��� GD�޸𸮿��ִ���(���ڿ�) ������ �����. 
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
//	char* s = AllocString("Hello!"); //Hello!�� ����޸𸮷ν� GD�� �Ҵ�Ǿ�����.
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
//	char* s = (char*)malloc(strlen(a) + 1); //���� �Ʊ�ó�� 500�ڸ� �����ʿ���� ���ڿ��� ���̸� ������. 
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
//	char* s = (char*)malloc(strlen("Hello")+1); //���� �Ʊ�ó�� 500�ڸ� �����ʿ���� ���ڿ��� ���̸� ������. strlen�̸��� ����. 
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
//	//s="Hello";���ϴ°��� �����޸𸮸� ����ų���ٰ� ����� ����Ű�°�.
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
//	printf("%d\n", strcmp(s1, s2)); //strcmp ���Լ�. ũ��񱳴� �ƽ�Ű���� �ڵ带 �ϳ��ϳ��� ���ؼ� ������ . �տ��� ũ�� 1 �ڿ��� ũ�� -1,������ 0�� ��ȯ�Ѵ�. 
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
//	strcat_s(buf,strlen(buf)+strlen(s1)+1, s1); //���ڿ��� ��������. 
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
//	strcpy_s(buf, strlen(s1) + 1, s1); //���̸� ������ְ� +1�� �ι��ڱ��� �����̶�� ��. buf�� �޸��� �����ּҸ� �ǹ��ϰ� s1�� ������ ���ڿ��� �����ּҸ� ���Ѵ�. 
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
//	char buf[500]; //���ڵ� ���� ���ڿ��� ���°��� 500������. 
//
//	strcpy_s(buf,strlen(s1)+1, s1); //���̸� ������ְ� +1�� �ι��ڱ��� �����̶�� ��. buf�� �޸��� �����ּҸ� �ǹ��ϰ� s1�� ������ ���ڿ��� �����ּҸ� ���Ѵ�. 
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
//	char buf[500]; //���ڵ� ���� ���ڿ��� ���°��� 500������. 
//	
//	printf("len:%d\n", strlen(s1)); //���ڿ��� ������ ���ִ� �Լ�.
//	printf("len:%d\n", strlen(s2));
//	printf("len:%d\n", strlen("Hello"));
//}



//#include <stdio.h> //���޸�
//#include <stdlib.h> 
//void Strcpy(char* h, char* s) //���� �Ҵ��� �޸�, ���ڿ� 
//{
//	int i;
//	for (i = 0; s[i]; ++i)
//	{
//		h[i] = s[i];
//	}
//	h[i] = s[i]; //null�� ǥ�� 
//}
//void main()
//{
//	char* s = (char*)malloc(sizeof(char) * 6); //������ ������ = (��ȯ��)malloc(��ȯ���� ũ��);
//
//	Strcpy(s, "Hello"); //�ڿ��ִ� ���ڿ��� �տ��ִ� ���� ����. 
//	printf("%s\n", s);
//
//	free(s);
//}


//#include <stdio.h> //���޸�
//#include <stdlib.h> //�ּҴ� �ּҴ� ���� ���������ִٶ�¶� .
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



//#include <stdio.h> //���޸�
//#include <stdlib.h> //�ּҴ� �ּҴ� ���� ���������ִٶ�¶� .
//void main()
//{
//	char* p = (char*)malloc(sizeof(char) ); //��,�����޸𸮸� �Ҵ��ϴµ� ����. malloc�� free�� ¦�� ���������.
//
//	*p = 'A';
//
//	printf("%c\n", *p);
//
//
//	free(p); //�����޸𸮸� �����ϴµ� ����.
//}



//#include <stdio.h> //���޸�
//#include <stdlib.h> //�ּҴ� �ּҴ� ���� ���������ִٶ�¶� .
//void main()
//{
//	int* p = (int*)malloc(sizeof(int)*5); //��,�����޸𸮸� �Ҵ��ϴµ� ����. malloc�� free�� ¦�� ���������.
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
//	free(p); //�����޸𸮸� �����ϴµ� ����.
//}




//#include <stdio.h> //���޸�
//#include <stdlib.h> //�ּҴ� �ּҴ� ���� ���������ִٶ�¶� .
//void main()
//{
//	int* p = (int*)malloc(sizeof(int));
//
//	*p = 10;
//	printf("%d\n", *p);
//
//	free(p);
//}


//#include <stdio.h> //���޸�
//#include <stdlib.h> //�ּҴ� �ּҴ� ���� ���������ִٶ�¶� .
//void main()
//{
//	int* p = (int*)malloc(4); //heap 4����Ʈ �����
//
//	*p = 10;
//	printf("%d\n", p);
//
//	free(p);  //�����ϱ� p�� ���žȵ� p�� ���ϰ��� �޾ƾ� ���ŵ�.
//}

	

//#include <stdio.h> //g_n��������
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
//	printf("%p %p\n", &n, &s); //�ּ��� ũ�Ⱑ ū���̰� ����. ������ �ּҸ� ���
//	printf("%p % %p\n",&k, s, &g_n); //�ּ��� ũ�Ⱑ ū���̳�. �۷ι� �������� �ּ� ���
//	/*print();
//	printf("%d\n", g_n);*/
//}


//#include <stdio.h> //����  �ʱ�ȭ:������ �޸𸮰��� �Ҵ��ϴ� �۾�. �޸𸮰� �����ǰ��� ���ʷ� �׸޸𸮿� ���� �ִ��۾��� �ʱ�ȭ��� �Ѵ�.
//void print()
//{
//	int a = 0; //a�� �ڵ�, ����
//	static int s = 0; //���� ,�۷ι� ������ ,�ʱ�ȭ�ϴ� ����
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
//#include <stdio.h> //����  �ʱ�ȭ:������ �޸𸮰��� �Ҵ��ϴ� �۾�. �޸𸮰� �����ǰ��� ���ʷ� �׸޸𸮿� ���� �ִ��۾��� �ʱ�ȭ��� �Ѵ�.
//void Print()
//{
//	int a = 0; //a�� �ڵ�, ����
//	static int s = 0; //���� ,�۷ι� ������ ,�ʱ�ȭ�ϸ� �� �ѹ��� ����. 
//	//int s =10; //���� �ʱ�ȭ�� �ƴ� 
//	printf("%d, %d\n", a++, s++);
//}
//void main()
//{
//	Print();
//	Print();
//	Print();
//}


//#include <stdio.h> //����
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


//#include <stdio.h> //����
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
//	int n = 10; //�Լ��ȿ� ���ǵ� �����̹Ƿ� n,s�� ���������̴�. 
//	char* s = "Hello";  //n,s�� ��� ���ú����̴�. 
//
//	printf("%d\n", n);
//	printf("%s\n", s);
//}
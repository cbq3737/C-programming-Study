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
	printf("���ڿ��Է�:");
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
//	printf("���ڿ��Է�:");
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
//	printf("���ڿ��Է�:");
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
//	printf("���ڿ��Է�:");
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
//	printf("���ڿ��Է�:");
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
//	printf("���ڿ��Է�:");
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
//	printf("���ڿ��Է�:");
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
//	printf("���ڿ��Է�:");
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
// ���� ����ϴ� �ڵ��̹Ƿ� �˾ƵѰ� 
//void main(void)
//{
//	char buf[500]; //�ӽ������� buf�� �̿��Ͽ� ����
//	char *s= NULL;
//	printf("���ڿ��Է�:");
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
//	printf("���ڿ��Է�:");
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
//	printf("���ڿ��Է�:");
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
//} //Ŭ���̾�Ʈ����å�� ���񽺿� �ݿ���Ų�ٶ�� �Ҽ�����
//void main(void)
//{
//	int list[8] = { 59,30,80,24,108,599,361,92 };
//	int idx = Find(list, 8, Compare);
//	if (idx < 0)
//		printf("ã�¿��� ����.\n");
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
//		printf("ã�¿��� ����.\n");
//	else
//		printf("[%d]:%d\n", idx, list[idx]);
//	system("pause");
//
//}

//#include <stdio.h> 
//#include <stdlib.h>
////Ŭ���̾�Ʈ�� ��������� ������ �ٸ������� �����°�?
//////////////////server(��������)///////////
//void PrintInteger(int n, void(*pf)())
//{
//	pf(); //s ->c :���۾��� callback �̶���
//	printf("%d\n", n);
//}
////////////////client(Ŭ���̾�Ʈ����)////////////
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
//	PrintInteger(100, PrintString); // c->s :���۾��� call �̶���
//	PrintInteger(100, k);
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
////Ŭ���̾�Ʈ�� ��������� ������ �ٸ������� �����°�?
//////////////////server(��������)///////////
//void PrintInteger(int n,void (*pf)() )
//{
//	pf(); //s ->c :���۾��� callback �̶���
//	printf("%d\n", n);
//}
////////////////client(Ŭ���̾�Ʈ����)////////////
//void PrintString()
//{
//	printf("Int: ");
//	printf("Int: ");
//	printf("Int: ");
//}
//void main(void)
//{
//
//	PrintInteger(100,PrintString); // c->s :���۾��� call �̶���
//	system("pause");
//}

//#include <stdio.h> 
//#include <stdlib.h>
////Ŭ���̾�Ʈ�� ��������� ������ �ٸ������� �����°�?
//////////////////server(��������)///////////
//void PrintString();
//void PrintInteger(int n)
//{
//	PrintString(); //s ->c :���۾��� callback �̶���
//	printf("%d\n", n);
//}
////////////////client(Ŭ���̾�Ʈ����)////////////
//void PrintString() 
//{
//	printf("Integer: ");
//}
//void main(void)
//{
//
//	PrintInteger(100); // c->s :���۾��� call �̶���
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

// call(ȣ��)Ŭ���̾�Ʈ�� ������ �ҷ����� �۾�
// call back ������ Ŭ���̾�Ʈ�� �ҷ����� �۾�

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
//	pf = Sub; //�Լ������ͷ����� ������������� ����������
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
//	int(*pf)(int, int) = Add; //�Լ��������� ���� �ϱ�
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
//	int(*pf)(int, int) = Add; //�Լ��������� ���� �ϱ�
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
//	int (*pf)(int , int ); //�Լ��������� ���� �ϱ�
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

//#include <stdio.h> //�Լ������Ϳ�����  �ڵ� �������߿�
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
//	//*pv�� ��ּҸ� ����Ű���� �𸣱⶧���� ������ Ʋ�������̴�
//	//�׷��⶧���� Ÿ���� �տ� ���������
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//	int n = 10;
//	double d = 1.98;
//	void* pv = NULL; //	void* pv �̷��Ծ���ȵ� �ʱ�ȭ��������Ѵ�
//	/*�ι���:'\0'(0�̶�� �ڵ尪),��������:NULL(0���ּҸ�����Ŵ)*/
//	
//	pv = &n;
//	pv = &d; //void*�� ��ּҵ� �������ִٸ� �����ִ°���
//
//	system("pause");
//}
// void�� ���������������ʴ´ٴ��ǹ� �׷��Ƿ� void������������������
/* void* �»�밡���ѵ� �ּҴ��ּ����� ��ּ������� ��������(void�� �ȵ�)
�׷��� ���� �߻���������*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void main()
//{
//	char* s1 = "Hello";
//	char s2[10] = "Hello";
//
//	s1 = "Hi!"; //�������̹Ƿ� �ٲ������
//				//s2 = "Hi!"; //���ڿ��̹Ƿ� ����Ұ�
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
//	s1 = "Hi!"; //�������̹Ƿ� �ٲ������
//	//s2 = "Hi!"; //���ڿ��̹Ƿ� ����Ұ�
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
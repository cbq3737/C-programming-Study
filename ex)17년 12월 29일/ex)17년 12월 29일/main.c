//#include<stdio.h> 
//void main()
//{
//	double d = 10.123;
//	double* p = &d;
//	printf("%g %p\n",d, p); //d�� *p�� �Ȱ���.
//	printf("%g %p",*p, p);
//	getchar();
//}

//#include<stdio.h> 
//void main()
//{
//	double d = 10.123;
//	double*p = &d;
//	printf("%d %d\n",sizeof(d),sizeof(p)); //�ּ��� ũŰ�� ������ 4����Ʈ��. 
//	printf("%d %d", sizeof(double), sizeof(double*)); 
//	getchar();
//}

//#include<stdio.h> 
//void main()
//{
//	int n = 10;
//	int* p = &n;
//	printf("%d %d\n",sizeof(n),sizeof(p));
//	printf("%d %d", sizeof(int), sizeof(int*)); //�������� ũ��� ������ 4����Ʈ��.
//	getchar();
//}

//#include<stdio.h> 
//void main()
//{
//	int n = 10;
//	int* p = &n; 
//	printf("%d %p %p\n", n, p, &n); //�ƹ�ư �� ���� ���� �ǹ�
//	printf("%d %d %d\n", n, *p, *&n); //�ּҸ� ��� ������ �����Ͷ�� �θ���. 
//	getchar();
//}

//#include<stdio.h> 
//void main()
//{
//	int n = 10;
//	int* p = &n; //n�� �ּ�, �� ������
//	printf("%d %p %p\n", n, p ,&n);
//	getchar();
//}

//#include<stdio.h> //�ƽ�Ű �ڵ�� 0���� 9���� ��� 
//void main()
//{
//	int i;
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d %c\n", '0' + i, '0' + i);
//	}
//	getchar();
//}

//#include<stdio.h> //26�� ���빮�ڸ� ��� , �ƽ�Ű�ڵ�� ���
//void main()
//{
//	int i;
//	for (i = 0; i <= 26; ++i)
//	{
//		printf("%d %c\n", 'A'+i, 'A'+i);
//	}
//	getchar();
//}

//#include<stdio.h> //26�� ���빮�ڸ� ��� , �ƽ�Ű�ڵ�� ���
//void main()
//{
//	int i;
//	for (i = 'A'; i <= 'Z'; ++i)
//	{
//		printf("%d %c\n", i, i);
//	}
//	getchar();
//}

//#include<stdio.h> //26�� ���빮�ڸ� ��� , �ƽ�Ű�ڵ�� ��� , �������� ���������� ����. 
//void main()
//{
//	int i;
//	for (i = 'A'; i <'A' + 26; ++i) 
//	{
//		printf("%d %c\n", i, i);
//	}
//	getchar();
//}

//#include<stdio.h> //26�� ���빮�ڸ� ��� , �ƽ�Ű�ڵ�� ���
//void main()
//{
//	int i;
//	for (i = 65; i < 65 + 26; ++i ) // 65=A,�̰� 26�� ���� ������ �����ڰ� 25���̱⶧����
//	{
//		printf("%d %c\n", i, i);
//	}
//	getchar();
//}

//#include<stdio.h> //�����ڸ� ��� , �ƽ�Ű�ڵ�� ���
//void main()
//{
//	printf("%d %c\n", 'A', 65);   // 65='A' 66='B'.......
//	printf("%d %c\n", 'a', 66);   // 97='a' 98='b'......
//	printf("%d %c\n", '0', 67);   // 48='0' 49='1'.....
//	getchar();
//}

//#include<stdio.h> //�����ڸ� ��� , �ƽ�Ű�ڵ�� ���
//void main()
//{
//	printf("%d %c\n", 65, 65);   // 65='A' 66='B'.......
//	printf("%d %c\n", 65, 66);   // 97='a' 98='b'......
//	printf("%d %c\n", 65, 67);   // 48='0' 49='1'.....
//	getchar();
//}

//#include<stdio.h> //1���� 100������ �����߿� ¦���� ���    
//void main()
//{
//	int i;
//	for (i = 0; i <= 100; ++i)
//	{
//		 if (i % 2 == 0)
//		 {
//			printf("%d\n", i);
//		 }
//    }
//	getchar();
//}

//#include<stdio.h> //���� ����   
//void main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i < 100; i++)
//	{
//		sum += i;
//		printf("%d: %d\n", i,sum);
//	}
//	getchar();
//}

//#include<stdio.h>  //1���� 100���� ���
//void main()
//{
//	int i;
//	for (i = 1; i < 101; i++)
//	{
//		printf("%d\n", i);
//	}
//	getchar();
//}

//#include<stdio.h>
//#define sz 1000 //�����ϴ°� , �������� ��, ������ ����� �����ϴµ� �����ɸ��� ������ �����. 
//void main()
//{
//	int flag = 1;
//	while (flag)
//	{
//		int data;
//		scanf_s("%d", &data);
//		if (data >= 0)     //while���̱⶧���� ��� �Է��� ����������. 
//		{
//			printf("data:%d\n", data);
//		}
//		else 
//		{
//			flag = 0;
//		}	
//	}
//	getchar();
//}

//#include<stdio.h>
//#define sz 1000 //�����ϴ°� , �������� ��, ������ ����� �����ϴµ� �����ɸ��� ������ �����. 
//void main()
//{
//	
//	while (1) 
//	{
//		int data;
//		scanf_s("%d", &data);
//		if (data >= 0)     //while���̱⶧���� ��� �Է��� ����������. 
//		{
//			printf("data:%d\n", data);
//		}
//		else               //if���� �����϶� �� ���⼱ -,������ ������ ����. 
//			break;
//	}
//	getchar();
//}

//#include<stdio.h>
//#define sz 1000 //�����ϴ°� , �������� ��, ������ ����� �����ϴµ� �����ɸ��� ������ �����. 
//void main()
//{
//	int i=0;
//	while(i < sz) // ���ǹ�, i �� �ᱹ 1000�� �Ǹ� ����.
//	{
//		printf("hello!:%d,%d.%d\n", i, sz - 1 - i, i + 1); 
//		++i;
//	}
//	getchar();
//}

//#include<stdio.h>
//#define sz 1000 //�����ϴ°� , �������� ��, ������ ����� �����ϴµ� �����ɸ��� ������ �����. 
//void main()
//{
//	int i;
//	for (i = 0; i < sz; ++i) //�Ϲ������� 0���� �����Ҷ��� ����. 
//	{
//		printf("hello!:%d,%d.%d\n", i, sz-1- i, i + 1);   //���϶� ���� 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 0; i < 10; ++i) //�Ϲ������� 0���� �����Ҷ��� ����. 
//	{
//		printf("hello!:%d,%d.%d\n", i,10-i,i + 1);   //���϶� ���� 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 0; i < 10; ++i) //�Ϲ������� 0���� �����Ҷ��� ����. 
//	{
//		printf("hello!:%d,%d\n", i,i+1);   //���϶� ���� 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 0; i < 5; ++i) //�Ϲ������� 0���� �����Ҷ��� ����. 
//	{
//		printf("hello!:%d\n", i);   //���϶� ���� 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 5; i <= 500; i=i+1) //�ʱ�ȭ ����(ó������ ����), ���� ����, ��������
//	{
//		printf("hello!:%d\n", i); //���϶� ���� 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 1; i <= 500; i++) //�ʱ�ȭ ����(ó������ ����), ���� ����, ��������
//	{
//		printf("hello!:%d\n",i);   //���϶� ���� 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 1; i <= 5; i++) //�ʱ�ȭ ����(ó������ ����), ���� ����, ��������
//	{
//		printf("hello!\n");   //���϶� ���� 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int data = 1;
//	switch (data) //���ǹ��� ���°� �ƴ϶� ������ ��
//	{
//	case 1:
//		printf("1�Դϴ�.");
//		//break;
//	case 2:
//		printf("2�Դϴ�.");
//		//break;
//	case 3:
//		printf("3�Դϴ�.");
//		break;
//	default:
//		printf("default�Դϴ�.");
//		break;
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int data = 1;
//	switch (data) //���ǹ��� ���°� �ƴ϶� ������ ��
//	{
//	case 1:
//		printf("1�Դϴ�.");
//		//break;
//	case 2:
//		printf("2�Դϴ�.");
//		//break;
//	case 3:
//		printf("3�Դϴ�.");
//		break;
//	default:
//		printf("default�Դϴ�.");
//		break;
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int data= 1;
//	switch (data) //���ǹ��� ���°� �ƴ϶� ������ ��
//	{
//	case 1:
//		printf("1�Դϴ�.");
//		break; 
//	case 2:
//		printf("2�Դϴ�.");
//		break;
//	case 3:		
//		printf("3�Դϴ�.");
//		break;
//	default: 
//		printf("default�Դϴ�.");
//		break;
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int data;
//    printf("�����Է�");
//	scanf_s("%d", &data);
//	if(data>100)
//	{
//		printf("data>100\n");
//	}
//	else
//	{
//		printf("data<=100\n");
//	}
//	getchar();
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	printf("A\n");
//	printf("B\n");
//	if (1)
//	{
//		printf("C\n");   //���϶� ����
//		printf("D\n");
//	}
//	else  
//	{
//		printf("E\n");  //�����϶� ���� 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	printf("A\n");
//	printf("B\n");
//	if (0)// ���⿡ �����ݷ��� ����ϸ� �̰͸� �����̵ǰ� �Ʒ� ���� �������� ������ �´�. 
//	{
//		printf("C\n");   
//		printf("D\n");
//	}
//	printf("E\n");
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int data = 10;
//	printf("A\n");
//	printf("B\n");
//	if (data>200)//���ǹ�, ���ǿ��� �׻� ���̳� ������ �� �� ����. 
//	{
//		printf("C\n");   //if�� ���� ���� �� �� ���� ���� 
//		printf("D\n");
//		printf("E\n");
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	printf("A\n");
//	printf("B\n");
//	if (1)//���ǹ�, ���ǿ��� �׻� ���̳� ������ �� �� ����. , 1�� �� 0�� ����
//	{
//		printf("C\n");   //if�� ���� ���� �� �� ���� ���� 
//		printf("D\n");
//		printf("E\n");
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int data1;
//	int data2;
//	scanf_s("%d %d", &data1, &data2); 
//	printf("%d+%d=%d", data1, data2, data1+data2);
//	getchar();
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int data1;
//	int data2;
//	scanf_s("%d %d", &data1,&data2); //�Է¹޴� �� �̱⶧���� �޸��� �Ⱦ� 
//	printf("%d,%d", data1, data2);
//	getchar();
//	getchar(); 
//
//}

//#include<stdio.h>
//void main()
//{
//	int data1;
//	int data2;
//	scanf_s("%d", &data1); //scanf�� ����� �Լ� 
//	scanf_s("%d", &data2);
//	printf("%d,%d", data1, data2);
//	getchar();
//	getchar(); //�Է°��� �ΰ����� ������� ���� ����Ѵ�. ���ͳ� �����̽��� ��Ű�� �Է�
//
//}

//#include<stdio.h>
//void main()
//{
//	int data; //���� ���� �� ����  
//	scanf_s("%d", &data); //������ �Է¹ްڴ�. ������ ������ �ּҿ����ڷ� �޾ƾ��Ѵ�.
//	printf("Hello! %d,%g,%c,%s\n",data, 1.234, 'a', "avbc"); //data�ڸ����� data�Է°��� ���.
//	getchar();
//	getchar(); //�������� getchar�� �ΰ��� ����� ������ �� ���� �ִ�.
//
//}

//#include<stdio.h>
//void main()
//{
//	printf("Hello! %d,%g,%c,%s\n",100,1.234,'a',"avbc");
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	printf("Hello\n");
//	printf("%d\n", 100);
//	printf("%g\n",1.234); //g�� �Ǽ��� ����Ѵ�.,f�� �ε��Ҽ���6�ڸ��� ǥ��
//	printf("%c\n",'a');
//	printf("%s\n","abc");
//	getchar();
//
//}
//#include <stdio.h> �迭 
//
//void main()
//{
//	char* s;
//
//	s = "Hello";
//	printf("%s\n", s);
//	printf(s);
//}

//#include <stdio.h> �迭 
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

//#include <stdio.h> �迭 
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

//#include <stdio.h> �迭 
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

//#include <stdio.h> �迭 
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

//#include <stdio.h> �迭 
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


//#include <stdio.h> �迭 
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


//#include <stdio.h> �迭 
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

//#include <stdio.h> �迭 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//
//	printf("%p %p\n", array+0, &array[0]); //�ּҰ� ���ٴ°� ǥ�� 
//	printf("%p %p\n", array+1, &array[1]);
//	printf("%p %p\n", array+2, &array[2]);
//	printf("%p %p\n", array+3, &array[3]);
//}

//#include <stdio.h> �迭 
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

//#include <stdio.h> �迭 
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

//#include <stdio.h> �迭 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//
//	printf("%p %p\n", &array[0], &array[0]+0); //�迭�� ù��° �ּ�, �ּ��̱⶧���� 4����Ʈ�� ���̰���.
//	printf("%p %p\n", &array[1], &array[0]+1); //������ ũ�⸸ŭ �Ѿ. 
//	printf("%p %p\n", &array[2], &array[0]+2);
//	printf("%p %p\n", &array[3], &array[0]+3);
//}

//#include <stdio.h> �迭 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//
//	printf("%p\n", &array[0]); //�迭�� ù��° �ּ�, �ּ��̱⶧���� 4����Ʈ�� ���̰���.
//	printf("%p\n", &array[1]);
//	printf("%p\n", &array[2]);
//	printf("%p\n", &array[3]);
//}

//#include <stdio.h> �迭 
//
//void main()
//{
//	int array[5] = { 0 };
//
//	printf("size:%d\n", sizeof(array)); //�迭�� ũ�� 
//	printf("size:%d\n", sizeof(array)/sizeof(int)); // �迭�� ũ�� ������ ��Ʈ���� ũ�� ����
//	printf("%d\n", array[0]);
//	printf("%d\n", array[1]);
//	printf("%d\n", array[2]);
//	printf("%d\n", array[3]);
//	printf("%d\n", array[4]);
//}

//#include <stdio.h> �迭 
//
//void main()
//{
//	int array[5] ; //�迭�� �ʱ�ȭ���� �ʱ⶧���� ���ǵ����ʾƼ� �����Ⱚ�� ��µ�. 
//	printf("%d\n", array[0]);
//	printf("%d\n", array[1]);
//	printf("%d\n", array[2]);
//	printf("%d\n", array[3]);
//	printf("%d\n", array[4]);
//}

//#include <stdio.h> �迭 
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

//#include <stdio.h> �迭 
//
//void main()
//{
//	int array[5] = { 10,20,30 };
//	printf("%d\n", array[0]);
//	printf("%d\n", array[1]);
//	printf("%d\n", array[2]);
//	printf("%d\n", array[3]); //�޸𸮴� 5���ε� ���� �����ϱ� 0���� ���
//	printf("%d\n", array[4]); //�޸𸮴� 5���ε� ���� �����ϱ� 0���� ���
//}


//#include <stdio.h> 1��¥�� �迭 
//
//void main()
//{
//	int array[1] = {10};
//	printf("%d\n", array[0]);
//
//}

//#include <stdio.h> �迭 
//
//void main()
//{
//	int array[100];
//	int i;
//
//	for (i = 0; i < 100; ++i)
//	{
//		array[i] = (i + 1)*10; //10�� �����ŭ �ְ�ʹ�.
//		printf("%d\n", array[i]);
//	 }
// }

//#include <stdio.h> �迭 
//
//void main()
//{
//	int array[100];
//	int i;
//
//	for (i = 0; i < 100; ++i) 
//	{
//		array[i] = i+1; //�迭�� �ε������� ���� +1�� Ŀ����.
//		printf("%d\n", array[i]);
//	}
//}

//#include <stdio.h> �迭 
//
//void main()
//{
//	int array[4] = { 10,20,30,40 };
//	int i;
//
//	for (i = 0; i < 4; ++i) //�迭�� ���� ����
//	{
//		array[i] = i;
//	}
//
//		for (i = 0; i < 4; ++i) //�迭�� ��� ���
//		{
//			printf("%d\n", array[i]);
//		}
//	
//}

//#include <stdio.h> �迭 
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

//#include <stdio.h> �迭 
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

//#include <stdio.h> �迭 
//
//void main()
//{
//	int array[4] = { 0,1,2,3 };
//	printf("%d\n", array[0] );
//	printf("%d\n", sizeof(array[0]));
//}

//#include <stdio.h> �迭 
//
//void main()
//{
//	int array[4] = { 0,1,2,3 };
//	printf("%d %d %d %d\n", array[0], array[1], array[2], array[3]);
//
//}

//#include <stdio.h> �ּ��� ����  
//
//void main()
//{
//    double n = 10; //8��ŭ ���� 
//	printf("%p\n", &n);
//	printf("%p\n", &n + 1);
//	printf("%p\n", &n + 2);
//	printf("%p\n", &n + 3);
//	printf("%p\n", &n - 1);
//}

//#include <stdio.h> �ּ��� ����  
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

//#include <stdio.h> �ּ��� ����  
//
//void main()
//{
//	int n = 10; //int���� 4����Ʈ�̹Ƿ� 4����Ʈ�� �ǳʶ�.
//	printf("%p\n", &n);
//	printf("%p\n", &n+1);
//	printf("%p\n", &n+2);
//	printf("%p\n", &n+3);
//	printf("%p\n", &n-1);
//}

//#include <stdio.h> ���� ������  
//
//void main()
//{
//	int n = 10;
//	int* p = &n; // ������ �ּ� 
//	int** pp = &p; //pp�� p�� �ּҸ� ��⶧���� ���� ������, ������ �ּ��� �ּ�
//	int*** ppn = &pp; //���������� ,������ �ּ����ּ��� �ּ�
//	
//	printf("%d %d %d %d\n", n , *p, **pp,***ppn); //��δ� ���� 
//	printf("%p %p %p %p\n", &n, p, *pp, **ppn); //��δ� 1�� �ּ�
//
//}


#include <stdio.h> ������  

void main()
{
	int n = 10;
	int* p = &n;

	printf("%d %d\n", n, *p); //������ ��Ÿ��
	printf("%p %p\n", &n, p); //�ּҸ� ��Ÿ�� 
	printf("%d %d\n", *&n, *p);
	printf("%p %p\n", &*&n, &*p);
	printf("%d %d\n", *&*&n, *&*p);
}


//#include <stdio.h> 1���� 100���� ������ �������� ����ϱ� 
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

//#include <stdio.h> 10987654321 10��
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

//#include <stdio.h> 12345678910 10��
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
//			printf("%5d", i); //�ܼ�â�� ���ʺ��� �ټ�ĭ�� Ȯ���ؼ� ����϶�.
//			}
//     printf("\n");
//	}
//}


//#include <stdio.h> 3�� ��� �̸鼭 5�ǹ���� ���,������϶� ����϶�,�Ʒ��� ����
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


//#include <stdio.h> 3�� ��� �̸鼭 5�ǹ���� ���,������϶� ����϶� 
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

//#include <stdio.h> 3�� ��� �̸鼭 5�ǹ���� ���,������϶� ����϶� 
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


//#include <stdio.h> 3�� ��� �Ǵ�/�̱⵵�ϰ� 5�ǹ���� ��� 
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

//#include <stdio.h> for���ǹ����� 0~99�����϶� 
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

//#include <stdio.h> 5�� ����� ��
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

//#include <stdio.h> 1~100���� ������ 5�� ��� ���
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
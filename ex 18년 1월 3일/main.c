//#include <stdio.h> //�빮�� ���
//
//void printUpperString(char* ps)
//{
//	int i;
//	for (i = 0; ps[i]; i++)
//	{
//		if('A'<=ps[i] && ps[i]<='Z' ) //�ƽ�Ű�ڵ带 ��� 
//		printf("%c\n", ps[i]);
//	}
//}
//void printLowString(char* ps)
//{
//	int i;
//	for (i = 0; ps[i]; i++)
//	{
//		if ('a' <= ps[i] && ps[i] <= 'z') //�ƽ�Ű�ڵ带 ��� 
//			printf("%c\n", ps[i]);
//	}
//
//}
//void main()
//{
//	char* s = "Hello!";
//	printUpperString(s);
//	printLowString(s);
//}



//#include <stdio.h> //���ڿ����� ����ϱ�  
//
//int StringLength(char* ps) 
//{
//	int i;
//	for (i = 0; ps[i]; i++)
//	{
//
//	}
//	return i;
//}
//
//void main()
//{
//	char* s1 = "Hello";
//	char s2[] = "Hello";
//
//	printf("len:%d\n", StringLength(s1));
//	printf("len:%d\n", StringLength(s2));
//	printf("len:%d\n", StringLength("ABC"));
//	}


//#include <stdio.h> //���ڿ��� �Ѱ��� ����ϱ� 
//void printString(char* ps)
//{
//	int i;
//	printf("string: %s\n", ps);
//	for (i = 0; ps[i]; ++i)
//	{
//	printf("%c", ps[i]);
//	printf("\n");
//  }
//}
//void main()
//{
//	char* s1 = "Hello";  
//	char s2[] = "Hello"; 
//
//	printString(s1); 
//	printString(s2); 
//	printString("Hello~!"); 
//}


//#include <stdio.h> //���ڿ�
//void printstring(char* ps) //���� �ּҸ� ����. ��� ���ڵ��� char�����θ� ����
//{
//	printf("string: %s\n", ps);
//}
//void main()
//{
//	char* s1 = "hello"; //s1�� �����Ϳ� ���ڿ��� �������ִ�. 
//	char s2[] = "hello"; //�迭�� ���ڿ��� ���� ���ִ�.
//
//	printstring(s1); //�����ּҸ� �˷���
//	printstring(s2); //�迭�� �����ּ�
//	printstring("hello~!"); //�굵 �����ּҷ� ���� ����.
//}


//#include <stdio.h> //���ڿ�
//
//void main()
//{
//	char* s1 = "Hello"; //s1�� �����Ϳ� ���ڿ��� �������ִ�. 
//	char s2[] = "Hello"; //�迭�� ���ڿ��� ���� ���ִ�.
//
//	s1[0] = 'k'; //x
//	s2[0] = 'k'; //����
//	printf("%s %s\n", s1, s2);
//}


//#include <stdio.h>
//
//double TotalDoubleArray(double* pdata, int size)
//{
//	int i;
//	double sum = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("double: %g\n", *(pdata + i));
//		sum += pdata[i];            
//	}                             
//	return sum;                     //���� ������     
//}
//
//void main()
//{
//	double darr[3] = { 1.22, 5.67, 10.89 };
//	double sum = TotalDoubleArray(darr, 3);
//    printf("sum=%g\n", sum);
//}


//#include <stdio.h>
//
//void printDoubleArray(double* pdata, int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		printf("double: %g\n", *(pdata+i));  //p[i]�� ���°� ����.
//	}
//}
//
//void main()
//{
//	double darr[3] = { 1.22, 5.67, 10.89 };
//	printDoubleArray(darr, 3); //�׻� �迭�� ������ ������ �Բ� �����ּҸ� �ѱ��. 
//}


//#include <stdio.h>
//
//void printDouble(double* pdata)
//{
//	printf("double: %g\n", *pdata);
//}
//
//void main()
//{
//	double d = 5.678;
//	printDouble(&d);
//}


//#include <stdio.h>
//
//void printDouble(double data)
//{
//	printf("double: %g\n", data);
//}
//
//void main()
//{
//	double d = 5.678;
//	printDouble(d);
//}


//#include <stdio.h>
//
//void printArray(int* pa, int size) // int* pa�� arr�̹Ƿ� �����ּҰ��� ������ְ�, size���� 4��¼��� ������մ�.
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d\n", pa[i]);
//	}
//}
//
//void main()
//{
//	int arr[] = { 10,20,30,40,60,90 }; // []���� ������ �� ����. {}�ȿ� ���Ұ� �ֱ⶧����.
//	printArray(arr, sizeof(arr)/sizeof(int)); // 6*4����Ʈ / 4����Ʈ �ϸ� �Ȱ���.
//}



//#include <stdio.h>
//
//void printArray(int* pa, int size) // int* pa�� arr�̹Ƿ� �����ּҰ��� ������ְ�, size���� 4��¼��� ������մ�.
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d\n", pa[i]);
//	}
//}
//
//void main()
//{
//	int arr[4] = { 10,20,30,40 };
//	printArray(arr,4);  //�����ּҸ� ���������.���� �Լ��� �ּҸ� �˷��ٻ����� ������ ������ �������־����Ƿ� ���Ұ����� ���� �����ش�. printArray(arr[4])�̰Ŵ� ���̾ȵ�. �̰��� arr�� �ε����� 4��° �޸𸮶�� ���� ����.
//
//	}



//#include <stdio.h>
//
//void printint(int* pn) //�ּ� 
//{
//	printf("int: %d\n", *pn);
//}
//void main()
//{
//	int n = 10;
//	printint(&n);
//}	



//#include <stdio.h>
//
//void printint(int data)
//{
//	printf("int: %d\n", data);
//}
//void main()
//{
//	int n = 10;
//	printint(n);
//}



//#include <stdio.h>
//
//
//int Add(int a, int b) //int�� ��ȯ ���� , Add�� �Լ� �̸�. a,b,�� �Ű����� 
//{
//	int result = a + b; //result�� ��ȯ ��.
//	return result; //���� �Լ��� ��ȯ���� 
//}
//int Sub(int a, int b)
//{
//	int result = a - b;
//	return result; //���� �Լ��� ��ȯ����
//}
//void main()
//{
//	printf("%d\n", Add(100, 50)); //���Լ��� ��
//	printf("%d\n", Sub(100, 50)); //���Լ��� ��
//}



//#include <stdio.h>
//
//int Add(int a, int b)//int�� ��ȯ ���� , Add�� �Լ� �̸�. a,b,�� �Ű�����
//{
//	int result = a + b;//result�� ��ȯ ��.
//	return result; //���� �Լ��� ��ȯ���� 
//}
//int Sub(int a, int b)
//{
//	int result = a - b;
//	return result; //���� �Լ��� ��ȯ����
//}
//void main() 
//{
//	printf("%d\n", Add(2, 3)); //���Լ��� ��
//	printf("%d\n", Sub(2, 3)); //���Լ��� ��
//}



//#include <stdio.h>
//
//int TotalIntegerRange(int a, int b); //ȣ��Ǵ��Լ����� ���ǵǴ� �Լ��� �Ʒ��־ �����Ϸ����� �Լ���°��� �˷��ִ°�.�� �Լ��� ����
//void main() //�� �Լ� 
//{
//	printf("%d\n", TotalIntegerRange(1, 10));
//	printf("%d\n", TotalIntegerRange(5, 6));
//	printf("%d\n", TotalIntegerRange(20, 30));
//}

//int TotalIntegerRange(int a, int b)
//{
//	int i;
//	int sum = 0;
//	for (i = a; i <= b; i++)
//	{
//		sum += i;
//	}
//	return sum; //���� Ŭ���̾�Ʈ�� ��ȯ�Ѵ�.
//}



//#include <stdio.h>
//
//int TotalIntegerRange(int a, int b)
//{
//	int i;
//	int sum = 0;
//	for (i = a; i <= b; i++)
//	{
//		sum += i;
//	}
//	return sum; //���� Ŭ���̾�Ʈ�� ��ȯ�Ѵ�.
//}
//void main() //�� �Լ� 
//{
//	printf("%d\n", TotalIntegerRange(1, 10));
//	printf("%d\n", TotalIntegerRange(5, 6));
//	printf("%d\n", TotalIntegerRange(20, 30));
//
//}



//#include <stdio.h>
//
//int TotalIntegerRange(int a, int b)
//{
//	int i;
//	int sum = 0;
//	for (i = a; i <= b; i++ )
//	{
//		sum += i;
//	}
//	return sum; //���� Ŭ���̾�Ʈ�� ��ȯ�Ѵ�.
//}
//void main() //�� �Լ� 
//{
//	int sum = TotalIntegerRange(1, 100); //���������� ��,�� ���ġ�� �������� �ް� �װ��� sum�� �ִ´�.
//
//	printf("sum=%d\n", sum);
//}



//#include <stdio.h>
//
//int TotalIntegerRange(int a,int b)  
//{
//	return 100;
//}
//void main() //�� �Լ� 
//{
//	int sum = TotalIntegerRange(1, 100); //���������� ��,�� ���ġ�� �������� �ް� �װ��� sum�� �ִ´�.
//
//	printf("sum=%d\n", sum);
//}




//#include <stdio.h>
//
//void printHello(int n)  //���Ǹ� ���ִ°�. 
//{
//	int i;
//	for(i=0; i < n; i++)
//	{
//		printf("Hello!\n");
//	}
//}
//void main() //�� �Լ� 
//{
//	printHello(10); // Hello!�� ���� ����ؼ� �ҷ����°�.
//}


//#include <stdio.h>
//
//void printint(int n)  //���Ǹ� ���ִ°�. 
//{
//	printf("int:%d", n);
//}
//void main() //�� �Լ� 
//{
//	printint(100);
//	printint(200);
//	printint(300);
//
//}

//#include <stdio.h>
//
//void main()
//{
//	char s1[10] = "Hello";
//	char* s2 = "Hello";
//
//	printf("%s %s",s1, s2);
//
//}

//#include <stdio.h>
//
//void main()
//{
//	char s[7] = "Hello!"; //[]�� 10���� ������.�װ� �׳� 7���� �ʱ�ȭ �Ѱ�.
//	//{ 'H','e','l','l','o','!','\0' };
//	printf("%s", s);
//	
//}

//#include <stdio.h>
//
//void main()
//{
//	char s[7] = { 'H','e','l','l','o','!','\0' };
//
//	printf("%s", s); //���⼭ s�� �迭�� �����ּ����� ���ڿ�
//
//}

//#include <stdio.h>
//
//void main()
//{
//	char* s = "Helloabcabc";
//	int i;
//	for (i = 0; s[i] != '\0'; i++) //�ι��ڰ� �ƴҶ����� ������ 
//	{
//		printf("%c", s[i]);
//	}
//
//	for (i = 0; s[i]; i++) //���� ����� ���� ��
//	{
//		printf("%c", s[i]);
//	}
//}

//#include <stdio.h>
//
//void main()
//{
//	char* s = "Hello";
//	int i;
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%c", s[i]);
//	}
//}


//#include <stdio.h>
//
//void main()
//{
//	char* s = "Hello";
//
//	printf("%c", s[0]); //�ּ��̱⶧���� []�� ����������.�ڵ尪, H�� ����̵� 
//	printf("%c", s[1]);
//	printf("%c", s[2]);
//	printf("%c", s[3]);
//	printf("%c", s[4]);
//}

//#include <stdio.h>
//
//void main()
//{
//	char* s = "Hello";
//
//	printf("%d %c\n", s[0], "Hello"[0]); //�ּ��̱⶧���� []�� ����������.�ڵ尪, H�� ����̵� 
//	printf("%d %c\n", s[1], "Hello"[1]);
//	printf("%d %c\n", s[2], "Hello"[2]);
//	printf("%d %c\n", s[3], "Hello"[3]);
//	printf("%d %c\n", s[4], "Hello"[4]);
//	printf("%d %c\n", s[5], "Hello"[5]);
//}

//#include <stdio.h>
//
//void main()
//{
//	char* s = "Hello";
//
//	printf("%p %p\n", s, "Hello"); //�� ���ڿ��� �����ּҰ� ��µ�.
//	printf("%s %s\n", s, "Hello"); //�� ���ڿ��� ��µ�.
//}


//#include <stdio.h>
//
//void main()
//{
//	char* s = "Hello\n";
//	printf("say:%s",s); //%s�� ���ڿ��� �θ�. %s�� �ּҸ� �־����. s�� �����ּ�
//	printf("say:%s",s + 1); 
//	printf("say:%s",s + 2); 
//}


//#include <stdio.h>
//
//void main()
//{
//	char* s = "Hello\n";
//	printf(s); //���ڿ��� ���� �ּ�
//	printf(s + 1); //ello
//	printf(s + 2); //llo
//}


//#include <stdio.h>
//
//void main()
//{
//	printf("Hello\n"+0);
//	printf("Hello\n"+1); //ello
//	printf("Hello\n"+2); //llo
//}
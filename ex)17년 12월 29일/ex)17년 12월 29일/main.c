//#include<stdio.h> 
//void main()
//{
//	double d = 10.123;
//	double* p = &d;
//	printf("%g %p\n",d, p); //d나 *p나 똑같다.
//	printf("%g %p",*p, p);
//	getchar();
//}

//#include<stdio.h> 
//void main()
//{
//	double d = 10.123;
//	double*p = &d;
//	printf("%d %d\n",sizeof(d),sizeof(p)); //주소의 크키는 무조건 4바이트다. 
//	printf("%d %d", sizeof(double), sizeof(double*)); 
//	getchar();
//}

//#include<stdio.h> 
//void main()
//{
//	int n = 10;
//	int* p = &n;
//	printf("%d %d\n",sizeof(n),sizeof(p));
//	printf("%d %d", sizeof(int), sizeof(int*)); //포인터의 크기는 무조건 4바이트다.
//	getchar();
//}

//#include<stdio.h> 
//void main()
//{
//	int n = 10;
//	int* p = &n; 
//	printf("%d %p %p\n", n, p, &n); //아무튼 다 같은 것을 의미
//	printf("%d %d %d\n", n, *p, *&n); //주소를 담는 변수를 포인터라고 부른다. 
//	getchar();
//}

//#include<stdio.h> 
//void main()
//{
//	int n = 10;
//	int* p = &n; //n의 주소, 즉 포인터
//	printf("%d %p %p\n", n, p ,&n);
//	getchar();
//}

//#include<stdio.h> //아스키 코드로 0부터 9까지 출력 
//void main()
//{
//	int i;
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d %c\n", '0' + i, '0' + i);
//	}
//	getchar();
//}

//#include<stdio.h> //26자 영대문자를 출력 , 아스키코드로 출력
//void main()
//{
//	int i;
//	for (i = 0; i <= 26; ++i)
//	{
//		printf("%d %c\n", 'A'+i, 'A'+i);
//	}
//	getchar();
//}

//#include<stdio.h> //26자 영대문자를 출력 , 아스키코드로 출력
//void main()
//{
//	int i;
//	for (i = 'A'; i <= 'Z'; ++i)
//	{
//		printf("%d %c\n", i, i);
//	}
//	getchar();
//}

//#include<stdio.h> //26자 영대문자를 출력 , 아스키코드로 출력 , 문자형은 정수형으로 받음. 
//void main()
//{
//	int i;
//	for (i = 'A'; i <'A' + 26; ++i) 
//	{
//		printf("%d %c\n", i, i);
//	}
//	getchar();
//}

//#include<stdio.h> //26자 영대문자를 출력 , 아스키코드로 출력
//void main()
//{
//	int i;
//	for (i = 65; i < 65 + 26; ++i ) // 65=A,이고 26을 더한 이유는 영문자가 25자이기때문에
//	{
//		printf("%d %c\n", i, i);
//	}
//	getchar();
//}

//#include<stdio.h> //영문자를 출력 , 아스키코드로 출력
//void main()
//{
//	printf("%d %c\n", 'A', 65);   // 65='A' 66='B'.......
//	printf("%d %c\n", 'a', 66);   // 97='a' 98='b'......
//	printf("%d %c\n", '0', 67);   // 48='0' 49='1'.....
//	getchar();
//}

//#include<stdio.h> //영문자를 출력 , 아스키코드로 출력
//void main()
//{
//	printf("%d %c\n", 65, 65);   // 65='A' 66='B'.......
//	printf("%d %c\n", 65, 66);   // 97='a' 98='b'......
//	printf("%d %c\n", 65, 67);   // 48='0' 49='1'.....
//	getchar();
//}

//#include<stdio.h> //1부터 100까지의 정수중에 짝수를 출력    
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

//#include<stdio.h> //누적 변수   
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

//#include<stdio.h>  //1부터 100까지 출력
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
//#define sz 1000 //정의하는것 , 명명상수라고 함, 일일이 상수를 변경하는데 오래걸리기 때문에 사용함. 
//void main()
//{
//	int flag = 1;
//	while (flag)
//	{
//		int data;
//		scanf_s("%d", &data);
//		if (data >= 0)     //while문이기때문에 계속 입력을 받을수있음. 
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
//#define sz 1000 //정의하는것 , 명명상수라고 함, 일일이 상수를 변경하는데 오래걸리기 때문에 사용함. 
//void main()
//{
//	
//	while (1) 
//	{
//		int data;
//		scanf_s("%d", &data);
//		if (data >= 0)     //while문이기때문에 계속 입력을 받을수있음. 
//		{
//			printf("data:%d\n", data);
//		}
//		else               //if문이 거짓일때 즉 여기선 -,음수를 받을때 사용됨. 
//			break;
//	}
//	getchar();
//}

//#include<stdio.h>
//#define sz 1000 //정의하는것 , 명명상수라고 함, 일일이 상수를 변경하는데 오래걸리기 때문에 사용함. 
//void main()
//{
//	int i=0;
//	while(i < sz) // 조건문, i 가 결국 1000이 되면 끝남.
//	{
//		printf("hello!:%d,%d.%d\n", i, sz - 1 - i, i + 1); 
//		++i;
//	}
//	getchar();
//}

//#include<stdio.h>
//#define sz 1000 //정의하는것 , 명명상수라고 함, 일일이 상수를 변경하는데 오래걸리기 때문에 사용함. 
//void main()
//{
//	int i;
//	for (i = 0; i < sz; ++i) //일반적으로 0부터 시작할때가 많다. 
//	{
//		printf("hello!:%d,%d.%d\n", i, sz-1- i, i + 1);   //참일때 실행 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 0; i < 10; ++i) //일반적으로 0부터 시작할때가 많다. 
//	{
//		printf("hello!:%d,%d.%d\n", i,10-i,i + 1);   //참일때 실행 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 0; i < 10; ++i) //일반적으로 0부터 시작할때가 많다. 
//	{
//		printf("hello!:%d,%d\n", i,i+1);   //참일때 실행 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 0; i < 5; ++i) //일반적으로 0부터 시작할때가 많다. 
//	{
//		printf("hello!:%d\n", i);   //참일때 실행 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 5; i <= 500; i=i+1) //초기화 영역(처음에만 실행), 조건 영역, 증감영역
//	{
//		printf("hello!:%d\n", i); //참일때 실행 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 1; i <= 500; i++) //초기화 영역(처음에만 실행), 조건 영역, 증감영역
//	{
//		printf("hello!:%d\n",i);   //참일때 실행 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 1; i <= 5; i++) //초기화 영역(처음에만 실행), 조건 영역, 증감영역
//	{
//		printf("hello!\n");   //참일때 실행 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int data = 1;
//	switch (data) //조건문이 들어가는게 아니라 정수가 들어감
//	{
//	case 1:
//		printf("1입니다.");
//		//break;
//	case 2:
//		printf("2입니다.");
//		//break;
//	case 3:
//		printf("3입니다.");
//		break;
//	default:
//		printf("default입니다.");
//		break;
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int data = 1;
//	switch (data) //조건문이 들어가는게 아니라 정수가 들어감
//	{
//	case 1:
//		printf("1입니다.");
//		//break;
//	case 2:
//		printf("2입니다.");
//		//break;
//	case 3:
//		printf("3입니다.");
//		break;
//	default:
//		printf("default입니다.");
//		break;
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int data= 1;
//	switch (data) //조건문이 들어가는게 아니라 정수가 들어감
//	{
//	case 1:
//		printf("1입니다.");
//		break; 
//	case 2:
//		printf("2입니다.");
//		break;
//	case 3:		
//		printf("3입니다.");
//		break;
//	default: 
//		printf("default입니다.");
//		break;
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	int data;
//    printf("정수입력");
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
//		printf("C\n");   //참일때 실행
//		printf("D\n");
//	}
//	else  
//	{
//		printf("E\n");  //거짓일때 실행 
//	}
//	getchar();
//}

//#include<stdio.h>
//void main()
//{
//	printf("A\n");
//	printf("B\n");
//	if (0)// 여기에 세미콜론을 사용하면 이것만 문장이되고 아래 블럭은 독립적인 문장이 됀다. 
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
//	if (data>200)//조건문, 조건에는 항상 참이나 거짓만 올 수 있음. 
//	{
//		printf("C\n");   //if의 블럭은 참일 때 만 실행 문장 
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
//	if (1)//조건문, 조건에는 항상 참이나 거짓만 올 수 있음. , 1은 참 0은 거짓
//	{
//		printf("C\n");   //if의 블럭은 참일 때 만 실행 문장 
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
//	scanf_s("%d %d", &data1,&data2); //입력받는 애 이기때문에 콤마를 안씀 
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
//	scanf_s("%d", &data1); //scanf는 입출력 함수 
//	scanf_s("%d", &data2);
//	printf("%d,%d", data1, data2);
//	getchar();
//	getchar(); //입력값을 두가지를 써줘야지 값을 출력한다. 엔터나 스페이스나 탭키로 입력
//
//}

//#include<stdio.h>
//void main()
//{
//	int data; //변수 정의 즉 선언  
//	scanf_s("%d", &data); //정수로 입력받겠다. 변수를 받을때 주소연산자로 받아야한다.
//	printf("Hello! %d,%g,%c,%s\n",data, 1.234, 'a', "avbc"); //data자리에는 data입력값이 뜬다.
//	getchar();
//	getchar(); //버전마다 getchar를 두개를 써야지 실행이 될 수도 있다.
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
//	printf("%g\n",1.234); //g는 실수를 출력한다.,f는 부동소수점6자리를 표현
//	printf("%c\n",'a');
//	printf("%s\n","abc");
//	getchar();
//
//}
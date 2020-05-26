//#include <stdio.h> //대문자 출력
//
//void printUpperString(char* ps)
//{
//	int i;
//	for (i = 0; ps[i]; i++)
//	{
//		if('A'<=ps[i] && ps[i]<='Z' ) //아스키코드를 사용 
//		printf("%c\n", ps[i]);
//	}
//}
//void printLowString(char* ps)
//{
//	int i;
//	for (i = 0; ps[i]; i++)
//	{
//		if ('a' <= ps[i] && ps[i] <= 'z') //아스키코드를 사용 
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



//#include <stdio.h> //문자열길이 출력하기  
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


//#include <stdio.h> //문자열을 한개만 출력하기 
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


//#include <stdio.h> //문자열
//void printstring(char* ps) //시작 주소를 받음. 모든 문자들은 char형으로만 받음
//{
//	printf("string: %s\n", ps);
//}
//void main()
//{
//	char* s1 = "hello"; //s1에 포인터에 문자열을 담을수있다. 
//	char s2[] = "hello"; //배열에 문자열을 담을 수있다.
//
//	printstring(s1); //시작주소를 알려줌
//	printstring(s2); //배열의 시작주소
//	printstring("hello~!"); //얘도 시작주소로 볼수 있음.
//}


//#include <stdio.h> //문자열
//
//void main()
//{
//	char* s1 = "Hello"; //s1에 포인터에 문자열을 담을수있다. 
//	char s2[] = "Hello"; //배열에 문자열을 담을 수있다.
//
//	s1[0] = 'k'; //x
//	s2[0] = 'k'; //가능
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
//	return sum;                     //값을 던져줌     
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
//		printf("double: %g\n", *(pdata+i));  //p[i]로 쓰는게 좋음.
//	}
//}
//
//void main()
//{
//	double darr[3] = { 1.22, 5.67, 10.89 };
//	printDoubleArray(darr, 3); //항상 배열은 원소의 개수와 함께 시작주소를 넘긴다. 
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
//void printArray(int* pa, int size) // int* pa는 arr이므로 시작주소값이 담겨져있고, size에는 4라는수가 담겨져잇다.
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
//	int arr[] = { 10,20,30,40,60,90 }; // []안을 생략할 수 있음. {}안에 원소가 있기때문에.
//	printArray(arr, sizeof(arr)/sizeof(int)); // 6*4바이트 / 4바이트 하면 똑같음.
//}



//#include <stdio.h>
//
//void printArray(int* pa, int size) // int* pa는 arr이므로 시작주소값이 담겨져있고, size에는 4라는수가 담겨져잇다.
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
//	printArray(arr,4);  //시작주소를 적어줘야함.위에 함수에 주소만 알려줄뿐이지 원소의 개수를 말안해주었으므로 원소개수도 같이 적어준다. printArray(arr[4])이거는 말이안됨. 이것은 arr의 인덱스의 4번째 메모리라는 말의 뜻임.
//
//	}



//#include <stdio.h>
//
//void printint(int* pn) //주소 
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
//int Add(int a, int b) //int는 반환 형식 , Add는 함수 이름. a,b,는 매개변수 
//{
//	int result = a + b; //result는 반환 값.
//	return result; //메인 함수에 반환해줌 
//}
//int Sub(int a, int b)
//{
//	int result = a - b;
//	return result; //메인 함수에 반환해줌
//}
//void main()
//{
//	printf("%d\n", Add(100, 50)); //두함수의 합
//	printf("%d\n", Sub(100, 50)); //두함수의 차
//}



//#include <stdio.h>
//
//int Add(int a, int b)//int는 반환 형식 , Add는 함수 이름. a,b,는 매개변수
//{
//	int result = a + b;//result는 반환 값.
//	return result; //메인 함수에 반환해줌 
//}
//int Sub(int a, int b)
//{
//	int result = a - b;
//	return result; //메인 함수에 반환해줌
//}
//void main() 
//{
//	printf("%d\n", Add(2, 3)); //두함수의 합
//	printf("%d\n", Sub(2, 3)); //두함수의 차
//}



//#include <stdio.h>
//
//int TotalIntegerRange(int a, int b); //호출되는함수보다 정의되는 함수가 아래있어도 컴파일러에게 함수라는것을 알려주는것.즉 함수의 선언
//void main() //주 함수 
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
//	return sum; //값을 클라이언트로 반환한다.
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
//	return sum; //값을 클라이언트로 반환한다.
//}
//void main() //주 함수 
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
//	return sum; //값을 클라이언트로 반환한다.
//}
//void main() //주 함수 
//{
//	int sum = TotalIntegerRange(1, 100); //정수사이의 합,의 결과치를 서버에게 받고 그값을 sum에 넣는다.
//
//	printf("sum=%d\n", sum);
//}



//#include <stdio.h>
//
//int TotalIntegerRange(int a,int b)  
//{
//	return 100;
//}
//void main() //주 함수 
//{
//	int sum = TotalIntegerRange(1, 100); //정수사이의 합,의 결과치를 서버에게 받고 그값을 sum에 넣는다.
//
//	printf("sum=%d\n", sum);
//}




//#include <stdio.h>
//
//void printHello(int n)  //정의를 해주는것. 
//{
//	int i;
//	for(i=0; i < n; i++)
//	{
//		printf("Hello!\n");
//	}
//}
//void main() //주 함수 
//{
//	printHello(10); // Hello!를 열번 출력해서 불러오는것.
//}


//#include <stdio.h>
//
//void printint(int n)  //정의를 해주는것. 
//{
//	printf("int:%d", n);
//}
//void main() //주 함수 
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
//	char s[7] = "Hello!"; //[]를 10으로 만들어도됌.그건 그냥 7개만 초기화 한것.
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
//	printf("%s", s); //여기서 s는 배열의 시작주소이자 문자열
//
//}

//#include <stdio.h>
//
//void main()
//{
//	char* s = "Helloabcabc";
//	int i;
//	for (i = 0; s[i] != '\0'; i++) //널문자가 아닐때까지 돌려라 
//	{
//		printf("%c", s[i]);
//	}
//
//	for (i = 0; s[i]; i++) //위에 문장과 같은 말
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
//	printf("%c", s[0]); //주소이기때문에 []를 붙힐수있음.코드값, H만 출력이됨 
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
//	printf("%d %c\n", s[0], "Hello"[0]); //주소이기때문에 []를 붙힐수있음.코드값, H만 출력이됨 
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
//	printf("%p %p\n", s, "Hello"); //이 문자열의 시작주소가 출력됨.
//	printf("%s %s\n", s, "Hello"); //이 문자열이 출력됨.
//}


//#include <stdio.h>
//
//void main()
//{
//	char* s = "Hello\n";
//	printf("say:%s",s); //%s는 문자열을 부름. %s는 주소를 넣어야함. s도 시작주소
//	printf("say:%s",s + 1); 
//	printf("say:%s",s + 2); 
//}


//#include <stdio.h>
//
//void main()
//{
//	char* s = "Hello\n";
//	printf(s); //문자열의 시작 주소
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
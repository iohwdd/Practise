#include <stdio.h>
//int main()
//{
//	char a[14],mod[12]="0123456789X";
//	scanf("%s",&a);
//	int i,t=0,j=1;
//	for(i=0;i<12;i++)
//	{
//		
//		if(a[i]=='-')
//		continue;
//		t+=(a[i]-'0')*j++;
//	}
//	if(mod[t%11]==a[12])
//	printf("Right");
//	else
//	{
//		a[12]=mod[t%11];//0-670-82162-0
//		printf("%s",a);
//	}
//	return 0;
// } 
//代码简洁明了（个人观点）
//int main(void){
//char a[14], mod[12] = "0123456789X"; //先将mod11后的十一个字符存入数组
//  gets(a); //输入字符串
//  printf("%c\n",a[12]);
//  int i, j = 1, t = 0;
//  for(i = 0; i < 12; i++) {
//        if(a[i] == '-') continue; //字符串为分隔符‘-’时跳过此次循环进入下一次循环,不做计算 
//    t += (a[i]-'0')*j++; //t储存 第j个  数字  * j 的和
//  }
////  if((char)(t%11)==a[12])
////  printf("Right");
////  else {
////      a[12] = mod[t%11]; //若识别码错误，则赋正确的识别码，然后输出
////      puts(a);
////  }
//  if(mod[t%11] == a[12]) printf("Right");
//  else {
//      a[12] = mod[t%11]; //若识别码错误，则赋正确的识别码，然后输出
//      puts(a);
//  }
//  return 0;
//}
//bool cmp(int a,int b)
//{
//	return a<b;
//}
//int main()
//{
//	int arr1[3];
//	char arr2[3];
//	int i;
//	for(i=0;i<3;i++)
//	scanf("%d",&arr1[i]);
//	sort(arr1,arr1+3);
//	while((getchar()!='\n'))
//	;
//	for(i=0;i<3;i++)
//	{
//	scanf("%c",&arr2[i]);
//	printf("%d ",arr1[arr2[i]-'A']);
//	}		
//	return 0;
//}
//int main()
//{
//	int arr[10],h;
//	int i;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	scanf("%d",&h);
//	int sum=0;
//	for(i=0;i<10;i++)
//	{
//		if(h+30>=arr[i])
//		sum++;
//	}
//	printf("%d",sum);
//	return 0;
//}
//**********求最大公约数***********// 
//int grc(int a,int c)
//{
//	int t;
//		while(a)
//	{
//		t=c%a;
//		c=a;
//		a=t;
//	}
//	return c;
//}
//int main()
//{
//	int a,b,c;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b) swap(a,b);
//	if(a<c) swap(a,c);
//	if(b<c) swap(b,c);
////if()//约分 a c 
//	printf("%d/%d",c/grc(a,c),a/grc(a,c));
//	return 0;
//}
//int main()
//{
//	//求有效天数，3 2 1 4
//	int x,n;
//	scanf("%d%d",&x,&n);
//	int i,km=0;
//	for(i=0;i<n;i++)
//	{
//		if(x!=6&&x!=7)
//		{
//			km+=250;
//		}
//		if(x==7)
//		x=0;
//		x++;
//	 } 
//	 printf("%d",km);
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	double num=0;
//	if(n<=150)
//	{
//		num=0.4463*n;
//	}
//	else if(n>150&&n<=400)
//	{
//		num=150*0.4463+(n-150)*0.4663;	
//	}
//	else
//	{
//	//  num=150*0.4463+250*0.4663+(n-400)*0.5563;//66.945  116.575
//		num+= 150*0.4463;
//      num+= 250*0.4663;
//      num+= (n-400)*0.5663;
//	}
//	//num=("%.1Lf",(int)((num*10)+0.5)/10.0);
//		printf("%.1lf",num);
//	return 0;
//}
//using namespace std;
//bool cmp(int a,int b)
//{
//	return a>b;
//}
//int main()
//{
//	int a,b,c;
//	scanf("%d%d%d",&a,&b,&c);
//	int t;
//	if(a<b)// a,b,c大到小排序 
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	if(a<c)
//	{
//		t=a;
//		a=c;
//		c=t;
//	}
//	if(b<c)
//	{
//		t=b;
//		b=c;
//		c=t;
//	}
//	//b+c>a，c>a-b
//	if(b+c<a)	
//	printf("Not triangle");
////	return 0;
//	else
//	{
//		if(a*a==b*b+c*c)
//		printf("Right triangle\n");
//		if(a*a<b*b+c*c)
//		printf("Acute triangle\n");
//		if(a*a>b*b+c*c)
//		printf("Obtuse triangle\n");
//		if(a==b||a==c||b==c)
//		printf("Isosceles triangle\n");
//		if(a==b&&b==c)
//		printf("Equilateral triangle");	
//	}
//	return 0;
//}
//int main()
//{
//	char arr[1000];
//	scanf("%s",&arr);
//	int sz=strlen(arr);
////	printf("%d",sz);
//	int i,num=1,NUM=0;
//	char letter;
//	for(i=0;i<sz;i++)//apppllll  1->2 2->3
//	{
//		int j;
//		for(j=i+1;j<sz;j++)//得出下标为i的字符出现的次数 num 
//		{
//			if(arr[i]==arr[j])//pple
//			{
//			//	letter=arr[i];
//				num++;
//			}			
//		}
//	//	printf("%d\n",num);
//		if(num>NUM) 
//		{	
//		NUM=num;
//		letter=arr[i];
//		}
//		if(num==NUM&&arr[i]<letter)
//		{
//			letter=arr[i];
//		}
//		num=1;
//	}
//	printf("%c\n%d",letter,NUM);	
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int num, price;
//	int i, minprice=0;
//	for (i = 0;i < 3;i++)
//	{
//		int sumprice=0;
//		scanf("%d%d", &num, &price);		
//		if (n % num != 0)
//			//n/num+1袋
//			sumprice = (n / num + 1) * price;
//		else
//			sumprice = n / num * price;	
//		if (i == 0)
//		minprice = sumprice;
//		if (minprice > sumprice)
//		minprice = sumprice;	
//	}
//	printf("%d", minprice);
//	return 0;
//}
//int main()
//{
//	int a,b,sum=0,c=0;
//	int i;
//	for(i=1;i<=7;i++)
//	{
//		scanf("%d%d",&a,&b);
//		if(a+b>8)
//		{
//		if(sum<a+b)
//		{
//		sum=a+b;
//		c=i;
//		}
//	
//		}
//	}	
//	printf("%d",c);
//	return 0;
//}
//int main()
//{
//	//闰年：能被4整除且不能被100整除或被400整除 
//	int y,m;
//	scanf("%d%d",&y,&m);
//	// 1 3 5 7 8 10 12 ->31天
//	if((y%4==0&&y%100!=0)||y%400==0)//判断是否为闰年 
//	{
//		if(m==2)
//		printf("%d",29);
//		else if((m<8&&m%2!=0)||(m>=8&&m%2==0))
//		printf("%d",31);
//		else
//		printf("%d",30);
//		
//	 } 
//	 else
//	 {	
//	 	if(m==2)
//	 	printf("%d",28);
//	 	else if((m<8&&m%2!=0)||(m>=8&&m%2==0))
//		printf("%d",31);
//		else
//		printf("%d",30);
//	 }
//	return 0;
//}
//int main()
//{
//	int a,b,c;
//	scanf("%d%d%d",&a,&b,&c);
//	int t;
//	if(a>b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	if(a>c)
//	{
//		t=a;
//		a=c;
//		c=t;
//	}
//	if(b>c)
//	{
//		t=b;
//		b=c;
//		c=t;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
// } 
//int main()
//{
//	float m,n,BMI;
//	scanf("%f%f",&m,&n);
//	BMI=m/(n*n);
//	
//	if(BMI<18.5)
//	printf("Underweight");
//	else if(BMI>=18.5&&BMI<24)
//	printf("Normal");
//	else
//	{
//	法一	if(BMI<100){
//		
//		printf("%6.4f\n",BMI);
//		printf("Overweight");
//	}
//		else{
//		printf("%6.3f\n",BMI);
//		printf("Overweight");
//	}
//	
//	法二	int bmi=(int)(BMI*100000);//3460207
//	//	printf("%d\n",bmi);
//		if(bmi%10>4)
//		{
//			printf("%.4f\n",(double)(bmi/10+1)/10000);//强制转换时注意/号，防止小数丢失 
//			printf("Overweight");
//		}
//		else
//		{
//			printf("%.4lf\n",(double)(bmi/10)/10000);
//			printf("Overweight");
//		}
//	}
//}
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int t1,t2;
//	t1=5*n;
//	t2=3*n+11;
//	if(t1>t2)
//	printf("Luogu");
//	else
//	printf("Local");
//	return 0;
//}
//int main()
//{
//	int x;
//	scanf("%d",&x);
//	if(x==1)
//	printf("Today, I ate 1 apple.");
//	else if(x==0)
//	printf("Today, I ate 0 apple.");
//	else
//	printf("Today, I ate %d apples.",x);
//	return 0;
//}
//int main()
//{
//	int x;
//	scanf("%d",&x);
//	int a,b,c,d;
//	if(x%2==0 && (x>4 && x<=12))
//	a=1;
//	else
//	a=0;
//	if((x%2==0 ||( x>4 && x<=12))||x%2==0 && x>4 && x<=12)
//	b=1;
//	else
//	b=0;
//	if((x%2==0 && ( x<=4 || x>12)) ||(x%2!=0 && x>4 && x<=12))
//	c=1;
//	else
//	c=0;
//	if(x%2!=0 && (x<=4 || x>12))
//	d=1;
//	else
//	d=0;
//	printf("%d %d %d %d",a,b,c,d);
//	return 0;
//}
//int main()
//{
//	//s%t!=0,sum-1
//	int m,t,s;
//	scanf("%d%d%d",&m,&t,&s);
//	int sum;
//	if(t!=0)
//	{
//	if(s%t!=0)
//	{
//		sum=m-s/t-1;
//		if(sum<0)
//		printf("%d",0);
//		else
//		printf("%d",sum);
//	}
//	else
//	{
//		sum=m-s/t;
//		if(sum<0)
//		printf("%d",0);
//		else
//		printf("%d",sum);
//	}
//	}
//	else
//	printf("%d",0);
//	
//	return 0;
//}
//int main()
//{
//	int a,b,c;
//	scanf("%d%d%d",&a,&b,&c);
//	int d=a*0.2+b*0.3+c*0.5;
//	printf("%d",d);
//	return 0;
//}
//int main(){
//	int a,b,c;
//	scanf("%d%d",&a,&b);
//	c=b+a*10;
//
//	printf("%d",c/19);
//	
//	
//	return 0;
//}
//int main()
//{
//	//a:b->c:d  so c>a
//	//1、d>b, 直接减
//	//2、d<b, c-1,d+60
//	int a,b,c,d;
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	if(d>b)
//	{
//		printf("%d %d",c-a,d-b);
//	 } 
//	 if(d<b)
//	 {
//	 	printf("%d %d",c-1-a,d+60-b);
//	 }
//	return 0;
//}
////1cm3=1ml 20l=20000ml
//int main() 
//{
//	int h,r,c;
//	scanf("%d%d",&h,&r);
//	float num=3.1415926*r*r*h;
//
//	if(num>(int)num){
//	
//	 c=20000/(int)num;
//	c++;
//	}
////	printf("%d",(int)num);
//	printf("%d",c);
//	return 0;
//}
//***********蚊香数组************* 
//int main() {
//	int h, r;
//	scanf("%d%d", &h, &r);
//	float n;
//	n = 20000 / 3.1415926 * r * r * h;
//
//
//	printf("%d", (int)n + 1);
//	return 0;
//}

//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[n][n];
//	int i = 0, j = 0, k = 1;
//	int N = n, ret = 0;
//	int h = 0;
//	while (n * n != k ) {
//		while (j < N) {
//			arr[i][j] = k;
//			k++;
//			j++;
//			h++;
//		}
//
//		j--;
//		i++;
//		while (i < N) {
//
//			arr[i][j] = k;
//			k++;
//			i++;
//
//		}
//		i--;
//		j--;
//		N--;
//		while (j >= ret) {
//			arr[i][j] = k;
//			k++;
//			j--;
//		}
//		j++;
//		i--;
//		while (i >= ret + 1) {
//			arr[i][j] = k;
//			k++;
//		
//			i--;
//		
//		}
//			if(k>n*n)
//			k--;
//		i++;
//		j++;
//		ret++;
//		if (n % 2 != 0)
//			arr[(n - 1) / 2][(n - 1) / 2] = n * n;
//	}

//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++) {
//			printf("%4d ", arr[i][j]);
//			if (j == n - 1)
//				printf("\n");
//		}
//	return 0;
//}

//int main() {
//	int s, v;
//	int time;
//	scanf("%d%d", &s, &v);
//	if ((float)s / v != s / v)
//		time = s / v + 10;
//	else
//		time = s / v + 9;
////time/60时time%60分
//	int H = 7, h = 59;
//	if (time <= 479)//同一天
//		printf("%d%d:%d%d",  0, 7 - time / 60, (59 - time % 60) / 10, (59 - time % 60) % 10);
//
//	if (time > 479 && time < 1440-1) { //早一天
//		time -= 480;//向后一分钟
//		H = 23;
//		h = 59;
//
//
//		printf("%d%d:%d%d", (23 - time / 60) / 10, (23 - time / 60) % 10, (59 - time % 60) / 10, (59 - time % 60) % 10 );
//
//
//	}
//
//	return 0;
//}

//int main() {
//	double a, b, c, p;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	p = (a + b + c) / 2;
//	printf("%.1f", sqrt(p * (p - a) * (p - b) * (p - c)));
//	return 0;
//}

//int main() {
//	float t;
//	int n;
//	scanf("%f%d", &t, &n);
//	printf("%.3f\n%d", t / n, n * 2);
//	return 0;
//}

//int main() {
//	float a;
//	scanf("%f", &a);
//	int b = int(a * 10);
//	printf("%.3f", (b % 10 * 1000 + b / 10 % 10 * 100 + b / 100 % 10 * 10 + b / 1000) * 0.001);
//	return 0;
//}

//int main() {
//	char let;
//	scanf("%c", &let);
//	printf("%c", let - 32);
//	return 0;
//}


//int main()
//{
//	int sum,stu;
//	scanf("%d%d",&sum,&stu);
//	printf("%d",sum*stu);
//
//	return 0;
//}
//int main() {
//	char let;
//	scanf("%c", &let);
//	printf("  %c  \n %c%c%c \n%c%c%c%c%c\n", let, let, let, let, let, let, let, let, let);
//	return 0;
//}
//

//int f(int n) {
//	if (n > 0) {
//		return n * f(n - 1);
//	}
//	if (n == 0)
//		return 1;
//}
//
//int main() {
//	int n = 5;
//	printf("%d", f(n));
//	return 0;
//}
//int main() {
//	int i;
//	for (i = 1; i <= 9; i++) {
//		int j;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%d ", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//}
//int main() {
//	char arr[100] ;
//	printf("输入一行字符：");
//	gets(arr);
//	int sz = strlen(arr);
//	int i;
//	int letter = 0, num = 0, empty = 0, k = 0;
//	for (i = 0; i < sz; i++) {
//
//		if (arr[i] >= '0' && arr[i] <= '9')
//			num++;
//		else if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
//			letter++;
//		else if (arr[i] == ' ')
//			empty++;
//		else
//			k++;
//	}
//	printf("num=%d,letter=%d,empty=%d,k=%d", num, letter, empty, k);
//
//	return 0;
//}

//int main() {
//	int nums[4] = {1, 3, 5, 7};
//	int target = 10;
//	int i;
//	for (i = 0; i < 3; i++) {
//		int j;
//		for (j = i + 1; j < 4; j++) {
//			if (nums[i] + nums[j] == target)
//				printf("[%d,%d]", i, j);
//		}
//	}
//	return 0;
//}

//int main() {
//	char c1 = 'X', c2 = 'B', c3 = '\112', c4 = '\113';
//	int i = 13;
//	printf("%c%c%d%d", c3, c4, (c4 - c3), (c1 - c2 - i));
//	return 0;
//}

//int main() {
//	int a = 12;
//	float b = 12.121212;
//	int c = 466;
//	b += ++a;
//	printf("%d\n", sizeof(b));
//	printf("%.3f\n", b);
//	printf("%d", (c >> 1));
//	return 0;
//}
//int max(int a, int b);

//int main() {
//	int a = 5;
//	int b = 6;
//	int c = 7;
//	printf("最大值=%d\n", max(a++, --b));
//	printf("a=%d,b=%d\n", a, b);
//	--a &&++b || --c;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	++a &&--b || c--;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	a-- || --b &&c++;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	return 0;
//}
//
//int max(int a, int b) {
//	if (a > b)
//		return a;
//	else
//		return b;
//}


//int main() {
//	int a, b, c, d;
//	a = 10;
//	b = a++;
//	c = ++a;
//	d = 10 * a++;
//	printf("b,c,d:%d,%d,%d", b, c, d );
//	return 0;
//}
//int fun(int x) {
//	return x;
//}
//
//int main() {
//	int (*p)[10](int x);
//	p = fun;
//	printf("%p", p);
//	return 0;
//}

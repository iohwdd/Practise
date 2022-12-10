#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<stdio.h>
enum DAY{MON=1, TUE, WED, THU=6, FRI, SAT, SUN}day;
int main(){
	scanf("%d",&day);
	if(day==MON)
    printf("%d",666);
    
    return 0;
}


//#define m 8
//#ifdef m
//#pragma message("m is defined")
//#endif
//	char buf[10]={0};
//	fgets(buf,3,stdin);//留个\0 
//	getchar();
////	fputs(buf,stdout);
//	printf("%s",buf); 
//	return 0;
//} 
//struct s{
//	char a;
//	int b;
//	float c;
//};
//int main(){
//	struct s f={0};
//	FILE*ptr=fopen("D:\\文档\\123.txt","r");
//	if(fopen==NULL){
//		perror("fopen");
//		return 1;
//	}
////	fprintf(ptr,"%c %d %f",f.a,f.b,f.c);写
////	fscanf(ptr,"%c %d %f",&(f.a),&(f.b),&(f.c));读 文本形式，ASCII码 
//	
//	fclose(ptr);
//	ptr=NULL;
//}
//int main(){
//	FILE* ptr=fopen("D:\\文档\\123.txt","r");
//	if(ptr==NULL){
//		perror("fopen");
//		return 1;
//	}
//	int a=fputs("1234",ptr);
////	printf("%d",a);//读写成功返回非0；失败返回-1（EOF） 
//	char arr[10]={0};
//	fgets(arr,3,ptr);
//	printf("%s",arr);
//	fgets(arr,3,ptr);
//	printf("%s",arr);
//	fclose(ptr);
//	ptr=NULL;
//	return 0;	
//}
//struct s{
//	int a:1;
//};
//int main(){
//	struct s s;
//	printf("%d",s.a);
//	return 0;
//}
//void fun(char *s,char t[]){
//	int i=0,k=0;
//	while(*(s+i)!=0){
//		if((int)*(s+i)%2==0)//保证是奇数 
//			continue;
//		t[k]=*(s+i);
//		k++;
//		i++;
//	}
//}
//struct S{ 
//	int n;
//	int arr[];//柔性数组
//} ;
//struct s{
//	int n;
//	int *arr;
//} ;
//int main()
//{
//	struct S *ps=(struct S*)malloc(sizeof(struct S)+40);
//	for(int i=0;i<10;i++)ps->arr[i]=i;
//	for(int i=0;i<10;i++)printf("%d ",ps->arr[i]);
//	free(ps);
//	ps=null;
//	struct s *ps=(struct s*)malloc(sizeof(struct s));
//	if(ps=NULL)
//		return 1;
//	ps->arr=(int*)malloc(sizeof(int)*10);
//	if(ps->arr=NULL)
//		return 1;
//	for(int i=0;i<10;i++)
//		ps->arr[i]=i;
//	return 0;
//}
//int main()
//{
//	int a[10];
//	int i,j=9;
//	for(i=0;i<10;i++)
//	scanf("%d",&a[i]);
//	for(i=0;i<5;i++)
//	{
//		int tmp;
//		tmp=a[i];
//		a[i]=a[j];
//		a[j]=tmp;
//		j--;
//	}
//	for(i=0;i<10;i++)
//	printf("%d ",a[i]);
//	return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
//}
//int main()
//{
//	int a[10],min,max;
//	double grade;
//	int i,j;
//	for(i=0;i<10;i++)
//	scanf("%d",&a[i]);
//	for(i=0;i<10;i++)
//	{
//		for(j=i+1;j<10;j++)
//		{
//			if(a[i]<a[j])min=a[i];
//			if(a[i]>a[j])max=a[i];
//		}
//	}
//	for(i=0;i<10;i++)
//	{
//		grade+=a[i];
//	}
//	grade=(grade-min-max)/8.0;
//	printf("%.1lf",grade);
//	return 0;
//}
//int main()
//{
//	int a[10],x;
//	int i;
//	scanf("%d",&x);
//	for(i=0;i<10;i++)
//	scanf("%d",&a[i]);
//	for(i=0;i<10;i++)
//	{
//		if(x==a[i])
//		{
//			printf("FOUND!\n");
//			printf("%d ",i);
//			break;
//		}
//	}
//	if(i==10)printf("NOT FOUND!");
//	return 0;
//}
//int main()
//{
//	int a[10];
//	int i;
//	for(i=0;i<10;i++)
//	scanf("%d",&a[i]);
//	for(i=0;i<10;i++)
//	printf("%d ",a[i]);
//	int j=0;
//	for(i=9;i>=0;i--)//趟数 
//	{
//	for(j=0;j<9;j++)
//	{
//		if(a[j+1]<a[j])
//		{
//			int tmp;
//			tmp=a[j+1];
//			a[j+1]=a[j];
//			a[j]=tmp;
//		}
//	}
//	}
//	printf("\n");
//	for(i=0;i<10;i++)
//	printf("%d ",a[i]);
//	return 0;
//}
//int main()
//{
//    int arr[10];
//    int i,ret=0,num;
//    for(i=0;i<10;i++)
//    scanf("%d",&arr[i]);
//    for(i=0;i<9;i++)
//    {  
//        if(arr[i]>ret)
//        {
//           if(arr[i]>arr[i+1]) 
//            { 
//                ret=arr[i];
//                 num=i;
//            }
//           if(arr[i]<arr[i+1])
//           {
//                ret=arr[i+1];
//                num=i+1;
//           }
//        }
//    }
//    printf("%d %d",ret,num);
//    return 0;
//}
//void my_memmove(void*dest,void*src,size_t num)
//{
//    char*cp;
//    memcpy(cp,src,num);
//    while(num--)
//    {
//        *(char*)dest=*cp;
//        dest=(char*)dest+1;
//        cp=(char*)cp+1;
//    }
//}
//int main()
//{
//    int arr1[20]={1,2,3,4,5,6,7,8,9,10};
//    my_memmove(arr1+2,arr1,20);
//    return 0;
//}
//int my_strlen(const char*p)
//{
//	if(*p) return 1+my_strlen(p+1);
//	else return 0;//递归 
//}
//int my_strlen(const char*p)
//{
//	const char* cp=p;
//	while(*p)
//	{
//		p++;
//	}
//	return p-cp;//指针-指针 
//}
//int my_strlen(const char*p)
//{
//	int count=0;//计数器 
//	while(*p++)
//	{
//		count++;
//	}
//	return count;
//}
//char* my_strcat(char*arr1,char*arr2)
//{
//	char* ret=arr1;
//	while(*arr1)
//	{
//		arr1++;//找到\0的地址 
//	}
//	while(*arr1=='\0')
//	{
//		*arr1++=*arr2++;
//	}
//	return ret;
//}
//void* my_strcpy(char*arr1,char*arr2)
//{
//	assert(arr1&&arr2);
//	while(*arr1++=*arr2++)
//	{
//		;
//	}
//}
//char my_strcmp(const char*arr1,const char*arr2)
//{
//	assert(arr1&&arr2);
//	while(*arr1==*arr2)
//	{
//		arr1++,arr2++;
//	}
//	int a=*arr1-*arr2;
//	if(a>0)return'>';
//	else if(a==0)return'=';
//	else return'<';
//}
//char* my_strstr(char*arr1,char*arr2)
//{
//	assert(arr1&&arr2);
//	char*cp=arr1;
//	char*ap=arr2;
//	while(*cp!=0){
//	arr1=cp;
//	arr2=ap;
//	while(*arr1!=*arr2)
//	{
//		arr1++;
//	}
//	cp=arr1;
//	while(*arr1==*arr2)
//	{
//		arr1++;arr2++;
//		if(*arr2==0)return cp;
//	}
//	cp++;
//	}
//	while(*cp)
//	{
//		arr1=cp;
//		arr2=ap;
//		while(*arr1&&*arr2&&(*arr1==*arr2))
//		{
//			arr1++,arr2++;
//		}
//		if(*arr2==0)
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[20]="abftgbbbcdef";
//	char arr2[20]="bbcd";
//	char* a=my_strstr(arr1,arr2);
//	printf("%s",a);
//	return 0;
//}
//int main()
//{
//	char*p="abc",*q="abcd";//0的ASCII码值小于字母的 
//	printf("%d",strcmp(p,q));
//	return 0;
// } 
// int main()
// {
//  int a,b,arr[20];
//  scanf("%d%d",&a,&b);
//  int n=5,ret;
//  while(n<=b)
//  {
//   int i=2;
//  for(i=2;i<=sqrt(n);i++) 
//  {
//   if(n%i==0)break;
//  }
//  if(i==(int)sqrt(n)+1)//判断为质数 
//  {
//   ret=n;//保存n 
//   int j=0,k=0;
//   //判断回文
//    while(n!=0)//取出每一位数字,逆序放在数组中 
//    {
//     arr[j]=(n%10);
//     k++;
//     n/=10;
//     j++;
//    }
//    n=ret;//恢复n 
//    for(j=0;j<k;j++)
//    {
//     if(arr[j]!=arr[k-1-j])break;
//    }
//    if(j==k) printf("%d\n",n);
//  }  
//  n++;
// }
// return 0;
// }
//int main()
//{
//	int a=1;
//	int*p=&a;
//	b(p);
//	printf("%p",p);
//	return 0;
//}
//int main()
//{
//	int n=1,m=1,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
//	while(1)
//	{
//		
//		while(n){
//		if(n%10==1)a++;
//		if(n%10==2)b++;
//		if(n%10==3)c++;
//		if(n%10==4)d++;
//		if(n%10==5)e++;
//		if(n%10==6)f++;
//		if(n%10==7)g++;
//		if(n%10==8)h++;
//		if(n%10==9)i++;
//		if(n%10==0)j++;
//		n=n/10;
//		}
//		m++;
//		n=m;
//		if(a==2021||b==2021||c==2021||d==2021||e==2021||f==2021||g==2021||h==2021||i==2021||j==2021)break;
//	}
//	printf("%d",--n);
//	return 0;
// } 
//
//#include<stdio.h>
//int
//main(){
//	int k,n;
//	double sn=0.0;
//	scanf("%d",&k);
//	for(n=1;;n++){//死循环 
//	 sn+=1.0/n;
//	 if(sn>k*1.0)
//	  break;
//    }
//	printf("%d",n);
//	return 0;
//}
//int main()
//{
//	int n,B[100]={0},A[100]={0};
//	scanf("%d",&n);
//	int i,j=0;
//	B[0]=1,A[0]=1;
//	for(i=2;i<=n;i++)
//	{
//		for(j=0;j<100;j++)
//		B[j]*=i;
//		for(j=0;j<100;j++)
//		{
//			if(B[j]>9)
//			{
//			B[j+1]+=B[j]/10;
//			B[j]=B[j]%10;
//			}
//		}
//		for(j=0;j<100;j++)
//		{
//			A[j]+=B[j];
//			if(A[j]>9)
//			{
//				A[j+1]+=A[j]/10;
//				A[j]=A[j]%10;
//			}
//		
//		}
//	}
//	for(i=100;i>=0&&A[i]==0;i--);
//	for(j=i;j>=0;j--)
//	printf("%d",A[j]);
//	return 0;
//}
//void Prinft1(int (*p)[3],int x,int y)
//{
//	int i;
//	for(i=0;i<x;i++)
//	{
//		int j;
//		for(j=0;j<y;j++)
//		printf("%d ",p[i][j]);
//		printf("\n");
//	}
//}
//int main()
//{
//	//%d打印有符号位十进制数，%u打印无符号位十进制数 
//	int arr[3][3]={{1,2,3},{2,3,4},{3,4,5}};
//	Prinft1(arr,3,3);
//	printf("%p %p ",arr,arr+1);//二维数组数组名（首元素的地址）是第一行数组地址,可以把二维数组当作一维数组，每一行为一个元素，每一个元素都是一个一维数组 
//	return 0;
//}


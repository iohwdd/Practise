#include<stdio.h>
#include<math.h>
2 2 
//��iֻ����0~i-1ֻ��Ƚϣ������ڣ���++
//int main()
//{
//	int n,arr[n];
//	scanf("%d",&n);
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(int i=0;i<n;i++)
//	{
//		int num=0;
//		for(int j=0;j<=i-1;j++)
//		{
//			if(arr[i]>arr[j])num++;
//		}
//		printf("%d ",num);
//	}
//	return 0;
// } 
//1���ж���+300�Ƿ���
//2�����㻨Ǯ+��-Ԥ��>=100,�� (�㻨Ǯ-Ԥ��)/100*100������- 
//   ����ֱ��-Ԥ�㼴�� 
//3����һ�����»�����+300��
//int main()
//{
//	int remain=0,account=0,arr[12]={0};
//	for(int i=0;i<12;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(int i=0;i<12;i++)
//	{
//		
//		if(300+remain>=arr[i])
//		{
//			if(300+remain-arr[i]>=100)
//			{
//				account+=(300+remain-arr[i])/100*100;
//				remain=(300+remain-arr[i])%100;
//				continue;
//			}
//			remain=300+remain-arr[i];
//		}
//		else
//		{
//			printf("-%d",i+1);
//			return 0;
//		}
//	}
//	printf("%d",(int)(account*1.2)+remain);
//	return 0;
// } 
//(7x+21k)*52=n,k��1��ʼ���x  
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int i,j,k,ret=1;
//	for(i=1;i<=n;i++)
//	{
//		for(j=4*i-3;j<=4*i;j++)
//		printf("%d%d",j/10,j%10);
//		printf("\n");
//	}
//	printf("\n");
//	for(i=1;i<=n;i++)
//	{
//		for(j=2*n-2-(i-1)*2;j>0;j--)
//		printf(" ");
//		for(k=1;k<=i;k++)
//		{
//			printf("%d%d",ret/10,ret%10);
//			ret++;
//		}
//		printf("\n");
//	}
//	return 0;
// } 
//int main()
//{
//	int n,i=1,j=1;
//	scanf("%d",&n);
//	while(1)
//	{
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)break;
//		}
//		if(j==i)
//		{
//			if(n%i==0)
//			{
//				printf("%d",n/i);
//				break;
//			}
//		}
//		i++;
//	}
//}
//int main()
//{
//	int n,len=1,ret=1;
//	scanf("%d",&n);
//	int arr[n],i;
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<n-1;i++)
//	{
//		if(arr[i+1]-arr[i]==1)
//		{
//			len++;
//		}
//		else
//		{
//			len=1;
//		}
//		if(ret<len)ret=len;
//	}
//	printf("%d",ret);
//	return 0;
//}
//int main()
//{
//	int n,max=0,min=1000;
//	scanf("%d",&n);
//	int arr[n],i,j;
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	��һ����ÿһ����������Ƚϣ���¼�ϴ�����С�� 
//	for(i=1;i<n;i++)
//	{
//		if(arr[0]<=arr[i])
//		{
//			if(min>arr[0])min=arr[0];
//			if(max<arr[i])max=arr[i];
//		}
//		else
//		{
//			if(min>arr[i])min=arr[i];
//			if(max<arr[0])max=arr[0];
//		}
//	}
//	printf("%d",max-min);
//	return 0;
//}
//double fun(int n)
//{
//	return(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%.2f",fun(n));
//	return 0;
//}
//P1307int main()
//{
//	int n,arr[20]={0};
//	scanf("%d",&n);
//	int k=0,j=0,ret=n;
//	while(n)
//	{
//		if(n>0)
//		arr[j++]=(n%10);
//		else
//		arr[j++]=(-n%10);
//		k++;
//		n/=10;
//	}
//	n=ret;
//	if(n==0)printf("0");
//	int i=0;
//	while(arr[i]==0)
//	{
//		i++;
//	}
//	
//	if(arr[0]==0)
//	{
//		if(n>=0)
//	{
//		for(j=i;j<k;j++)
//	{
//		printf("%d",arr[j]);	
//	}
//	}
//		else
//		{
//			printf("-");
//			for(j=i;j<k;j++)
//			{
//				printf("%d",arr[j]);	
//			}
//		}
//	}
//	else
//	{
//		if(n>=0)
//	{
//		for(j=0;j<k;j++)
//	{
//		printf("%d",arr[j]);	
//	}
//	}
//		else
//		{
//			printf("-");
//			for(j=0;j<k;j++)
//			{
//				printf("%d",arr[j]);	
//			}
//		}
//	}
//}
//int main()
//{
//	double x,foot=2,sfoot=2;
//	int n=1;
//	scanf("%lf",&x);
//	while(sfoot<x)
//	{
//		foot*=0.98;
//		sfoot+=foot;
//		n++;
//	}
//	printf("%d",n);
//	return 0;
//}
// int main()
// {
//  int a,b,arr[20]={0};
//  scanf("%d%d",&a,&b);//ȷ����Χ[a,b] 
//  int n=5,ret;
//  while(n<=b)
//  {
//   int i=2;
//  for(i=2;i<=sqrt(n);i++) 
//  {
//   if(n%i!=0)break;
//  }
//  if(i==(int)sqrt(n)+1)//�ж�Ϊ���� 
//  {
//   ret=n;//����n 
//   int j=0,k=0; 
//   //�жϻ���
//    while(n!=0)//ȡ��ÿһλ����,������������� 
//    {
//     arr[j]=(n%10);
//     k++;//�õ�λ�� 
//     n/=10;
//     j++;
//    }
//    n=ret;//�ָ�n 
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
//int count(int n)//λ�� 
//{
//	int a=1;
//	while((n/=10)!=0)
//	{
//		a++;
//	}
//	return a;
//}
//int huiwen(int n,int arr[],int k)
//{
//	int j=0;
// 	while(n!=0)//ȡ��ÿһλ����,������������� 
//	 {
//		arr[j]=(n%10);
//		n/=10;
//		j++;
//	 }
//	 for(j=0;j<k;j++)
//	 {
//	 	if(arr[j]!=arr[k-1-j])
//		return 0;
//	 }
//	 return 1;
//}
// int main()
// {
// 	int a,b,arr[20];
// 	scanf("%d%d",&a,&b);
// 	int n=5;
// 	while(n<=b)
// 	{
// 		int i=2;
//		for(i=2;i<=sqrt(n);i++)	
//		{
//			if(n%i==0)break;
//		}
//		if(i==(int)sqrt(n)+1)//�ж�Ϊ���� 
//		{
//			int j,k;
//			k=count(n);
//			//�жϻ���
//			j=huiwen(n,arr,k);
//			if(j) printf("%d\n",n);
//		}	 
//		n++;
//	}
// }
//1.��������2.С��������
//P5723int main()
//{
//	int num=0,sum=0,i=2,L;
//	scanf("%d",&L);
//	while(1)
//	{
//		//ֻ�ܱ���1�ͱ�������
//		if(sum+i>L)break;
//		int j;
//		for(j=i-1;j>=2;j--)//������1�ͱ�������������������ѭ���������� 
//		{
//			if(i%j==0)break;//����������� 
//		}//2�Ǹ�����㣬����Ҳ��ӵ�һ������ 
//		if(j==1)
//		{
//			num++;
//			sum+=i;
//			printf("%d\n",i);
//		}
//		i++;
//	}
//	printf("%d",num);
// } 
//int main()
//{
//	int i,n,num=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		num+=i;
//	}
//	printf("%d",num);
//	return 0;
//}
//P2669int main()
//{
//	int k,i,sum=0;//1 2 2 3 3 3 4 4 4 4
//	scanf("%d",&k);//1 3 6 10
//	int j=1,n=1;//an-an-1=n an=2+  +n+1=n(n+1)/2
//	for(i=1;i<=k;i++)
//	{
//		sum+=j;
//		if(i==n*(n+1)/2)
//		{
//			j++;
//			n++;
//		}
//	}
//	printf("%d",sum);
//	return 0;
//}
//P1035int main()
//{
//	int k,n=1;
//	scanf("%d",&k);
//	double num=0;
//	while(1)
//	{
//		num+=1.0/n++;
//		if(k<num)
//		break;	
//	}
//	printf("%d",--n);
//	return 0;
//}
//int main()
//{
//	int n,x;
//	scanf("%d%d",&n,&x);
//	int i,j,num=0;
//	for(i=1,j=1;i<=n;i++,j++)
//	{
//		while(j)
//		{
//			if(j%10==x)
//			num++;
//			j/=10;
//		}
//		j=i;//�ָ�j 
//	}
//	printf("%d",num);
//	return 0;
//}
//int main()
//{
//    int i,A[1005]={0},B[1005]={0},n,j;
//    scanf("%d", &n);
//    A[0]=B[0]=1;
//    for (i=2;i<=n;i++){//������׳˵������׳� B[] 
//        for (j=0;j<100;j++)//ģ����ʽ�˷� ���߾��ȣ� j��ʾ���ֳ��� 
//            B[j]*=i;
//        for (j=0;j<100;j++)//��λ 
//            if (B[j]>9){
//                B[j+1] += B[j]/10;//������ 
//                B[j]%=10;
//            }
//        for (j=0;j<100;j++){// �׳˵ĺ�A[] 
//            A[j]+=B[j];//ģ����ʽ�ӷ����߾��ȣ� 
//            if (A[j]>9) {//��λ 
//                A[j+1] += A[j]/10;
//                A[j]%=10;
//            }
//        }
//    }//1564652000000000
//    for (i=100;i>=0&&A[i]==0;i--);//�ҵ���һ����0���ֵ��±�i 
//    for (j=i;j>=0;j--) printf("%d", A[j]);//�����ӡ 
//    return 0;
//}
//int main()
//{
//
//	int n;
//	long long sum=0,num=1;
//	scanf("%d",&n);
//	int i;
//	for(i=1;i<=n;i++)//��1��n�Ľ׳�
//	{
//		int j=1;
//		for(j=1;j<=i;j++)//��׳� num
//		{
//			num*=j;	
//		}
//		sum+=num;//��׳˵ĺ�sum 
//		printf("%lld\n",num);
//		num=1;
//		
//	 } 
//	 printf("%lld",sum);
//	return 0;
//}
//3.int main()
//{
//	int a;
//	scanf("%d",&a);
//	int day=0;
//	while(1)
//	{
//		if(a>1)
//		{
//			a/=2;
//			day++;
//		}
//		else
//		break;
//	}
//	printf("%d",day+1);
//	return 0;
//}
//2.int main()
//{
//	int n,k;
//	scanf("%d%d",&n,&k);
//	int a=0,b=0;
//	int i=0,j=0;
//	for(i=1;i<=n;i++)
//	{
//		if(i%k==0)
//		{
//		a+=i;
//		j++;
//	}
//		else
//		b+=i;
//	}
//	printf("%.1f %.1f",(float)a/j,(float)b/(n-j));
//	return 0;
//}
//1.int main()
//{
//	int n,num=1001;;
//	scanf("%d",&n);
//	int i;
//	for(i=0;i<n;i++)
//	{
//		int a;
//		scanf("%d",&a);
//		if(a<num)
//		num=a;
//	}
//	printf("%d",num);
//	return 0;
//}


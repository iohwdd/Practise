#include<stdio.h>
//int main()
//{
//	int l,m;
//	scanf("%d%d",&l,&m);
//	int arr[l];
//	for(int i=0;i<l;i++)arr[i]=1;
//	for(int i=0;i<m;i++)
//	{
//		int u,v;
//		scanf("%d%d",&u,&v);
//		for(int j=u-1;j<=v-1;j++)
//		arr[j]=0;				
//	}
//	int sum=0;
//	for(int i=0;i<500;i++)sum+=arr[i];
//	printf("%d",sum);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int n,num=0;
//	scanf("%d",&n);
//	int arr[n][3];
//	for(int a=0;a<n;a++)
//	{
//		for(int b=0;b<3;b++)
//		scanf("%d",&arr[a][b]);
//	}
//	int x=0,y=0,ret;
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			x=0,y=0;
//			for(int k=0;k<3;k++) x+=arr[i][k];
//			for(int k=0;k<3;k++) y+=arr[j][k];
//			for(int k=0;k<3;k++)
//			{
//				if(arr[i][k]-arr[j][k]<=5&&fabs(x-y)<=10)
//				ret=k;
//				else
//				break;
//			}
//			if(ret==2)
//			{
//				num++;
//				ret=0;
//			}
//		}
//	}
//	printf("%d",num);
//	return 0;
//}

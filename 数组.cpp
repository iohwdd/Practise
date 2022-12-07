#include<stdio.h>
//实现第i个数与除第i个数以外任意两个数之和比较 
//arr[i]  双for j,k==i continue arr[j]+arr[k] 
//int main()
//{
//	int n,ans=0;
//	scanf("%d",&n);
//	int arr[n];
//	for(int i=0;i<n;i++)
//		scanf("%d",&arr[i]);
//	for(int i=0;i<n;i++)
//	{
//		if(arr[i]==1||arr[i]==2)continue;
//		for(int k=0;k<n;k++)
//			for(int j=1+k;j<n;j++)//不能往回，否则重复 
//			{                     //eg. 1 2 3 4 1+2->2+1 
//				if(k==i)break;//k与i不等 
//				if(j==k||j==i)continue;//j与k，i不等 
//				if(arr[k]+arr[j]==arr[i])ans++;
//			}
//	}
//	printf("%d",ans);
//}
//int main()
//{
//	int n,k=2;
//	scanf("%d",&n);
//	int arr[n+1][n+1]={0};
//	int x=1,y=2;
//	arr[x][y]=1;
//	while(k<=n*n)
//	{
//		if(x==1&&y!=n)
//		{
//			x=n,y=y+1;
//			arr[x][y]=k;
//			k++;
//		}
//		if(y==n&&x!=1)
//		{
//			y=1,x=x-1;
//			arr[x][y]=k;
//			k++;
//		}
//		if(x==1&&y==n)
//		{
//			y=y,x=x+1;
//			arr[x][y]=k;
//			k++;
//		}
//		if(x!=1&&y!=n)
//		{
//			if(arr[x-1][y+1]==0)
//			{
//				x=x-1,y=y+1;
//				arr[x][y]=k;
//				k++;
//			}
//			else
//			{
//				x=x+1,y=y;
//				arr[x][y]=k;
//				k++;
//			}
//		}
//	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int min(int x,int y)
//{
//	if(x>=y)return y;
//	else return x;
//}
//int max(int x,int y)
//{
//	if(x>=y)return x;
//	else return y;
//}
//int main()
//{
//	int w,x,h,q,ans=0;
//	scanf("%d%d%d%d",&w,&x,&h,&q);
//	int arr[21][21][21]={0};//边长最大20，为方便三维数组与坐标点对应，增加一个单位，不用下标0 
//	while(q--){
//	int x1,y1,z1,x2,y2,z2;
//	scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
//	for(int i=min(x1,x2);i<=max(x1,x2);i++)
//		for(int j=min(y1,y2);j<=max(y1,y2);j++)
//			for(int k =min(z1,z2);k<=max(z1,z2);k++)
//			arr[i][j][k]=1;
//	for(int i=1;i<=w;i++)
//		for(int j=1;j<=x;j++)
//			for(int k=1;k<=h;k++)
//			if(arr[i][j][k]==0)ans++;
//		}
//	printf("%d",ans);
//	return 0;
// } 
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
//	printf("%d",sum+1);
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

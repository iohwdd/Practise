#include<stdio.h>
#include<string.h>
#define NAME_MAX 20//姓名的长度
#define SEX_MAX 5//性别的长度
#define TELE_MAX 12//电话号码的长度
#define ADDR_MAX 30//地址长度
#define PON_MAX 1000//通讯录的大小
#include<assert.h>
typedef struct peo{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	char  tel[TELE_MAX];
	char adr[ADDR_MAX];
}peo;
typedef struct contact{
	peo con[PON_MAX];//联系人 
	int sz;//通讯录人数 
}contact;
void menu(){
	printf("=====================================\n");
	printf("============1.增加联系人=============\n");
	printf("============2.删除联系人=============\n");
	printf("============3.查找联系人=============\n");
	printf("============4.修改联系人=============\n");
	printf("============5.排序通讯录=============\n");
	printf("============6.打印通讯录=============\n");
	printf("============0.退出通讯录=============\n");
	printf("=====================================\n");
}
void ini(contact*p){//初始化通讯录 
	p->sz=0;
	memset(p->con,0,sizeof(p->con));
}
enum option{//
	Exit,
	add,
	del,
	sek,
	modify,
	sort,
	print,
}op2;
void addcon(contact*p){
	if(p->sz==100){
		printf("通讯录满了！");
		return ;
	}
	printf("请输入姓名：");
	scanf("%s",p->con[p->sz].name);
	printf("请输入性别：");
	scanf("%s",p->con[p->sz].sex);
	printf("请输入电话：");
	scanf("%s",p->con[p->sz].tel); 
	printf("请输入地址：");
	scanf("%s",p->con[p->sz].adr);
	p->sz++;
	printf("添加成功!\n");
}
int find(contact*p,char*ptr){
	assert(p&&ptr);
	for(int i=0;i<p->sz;i++){
		if(0==strcmp(p->con[i].name,ptr)){//
			return i;
		}
	}
	return -1;
}
void delcon(contact*p){//删除
	if(p->sz==0){
		printf("无联系人!\n");
		return ;
	} 
	assert(p);
	char name[NAME_MAX];
	printf("请输入要删除联系人的名字：");
	scanf("%s",name);//输入要删除的联系人 
	int ps=find(p,name);
	if(ps!=-1){//ps为寻找人的下标 
		for(int i=ps;i<p->sz-1;i++){
		p->con[i]=p->con[i+1];//覆盖要删除的人，向前补齐 
		printf("删除成功\n");
		p->sz--;//人数减一 
		}
	}
	else{
		printf("查无此人!\n");
	}
}
void sekcon(contact*p){//查找 
	if(p->sz==0){
		printf("无联系人!\n");
		return;
	}
	assert(p);
	char name[NAME_MAX];
	printf("请输入要寻找联系人的名字：\n");
	scanf("%s",name);
	int ps=find(p,name);
	if(ps==-1){
		printf("查无此人\n");
		return ;
	}
	else{
		printf("%-5s %-5s %-12s %-30s\n","姓名","性别","电话","地址");
		printf("%-5s %-5s %-12s %-30s\n",p->con[ps].name,p->con[ps].sex,p->con[ps].tel,p->con[ps].adr);
	} 
}
enum Option{
	EXIT,
	NAME,
	SEX,
	TEL,
	ADR,
}op1;
void modifycon(contact*p){
	assert(p);
	if(p->sz==0){
		printf("无联系人!\n");
		return;
	}
	char name[NAME_MAX];
	printf("请输入要修改联系人的名字：\n");
	scanf("%s",name);
	int ps=find(p,name);
	if(ps==-1)
		printf("查无此人！\n");
	else{
	printf("请输入要修改该联系人的信息：\n");
	printf( " 1、姓名\n 2、性别\n 3、电话\n 4、地址\n 0、退出\n");
	
	do{
		scanf("%d",&op1);
		switch(op1){
		case EXIT:
			printf("退出");
			break;
		case NAME:
			printf("输入新的名字：\n") ;
			scanf("%s",p->con[ps].name);
			printf("可继续修改，退出请选择0\n");
			break;
		case SEX:
			printf("输入新的性别:\n");
			scanf("%s",p->con[ps].sex);
			printf("可继续修改，退出请选择0\n");
			break;
		case TEL:
			printf("输入新的电话:\n");
			scanf("%s",p->con[ps].tel);
			printf("可继续修改，退出请选择0\n");
			break;
		case ADR:
			printf("输入新的地址:\n");
			scanf("%s",p->con[ps].adr);
			printf("可继续修改，退出请选择0\n");
			break;
		default:
			printf("无效操作数！\n");
		}
	}while(op1);
	}
}
void sortcon(contact*p){//排序
	if(p->sz==0){
		printf("无联系人！\n");
		return ;
	} 
	for(int i=0;i<p->sz-1;i++){//趟 
		for(int j=0;j<p->sz-1-i;j++){
		if(strcmp(p->con[j].name,p->con[j+1].name)>0){
			peo tmp;
			tmp=p->con[j];
			p->con[j]=p->con[j+1];
			p->con[j+1]=tmp;
			}
		}
	}
	printf("排序成功！\n");
}	
void printcon(contact*p){
	if(p->sz==0){
		printf("无联系人！");
		return ;
	}
	for(int i=0;i<p->sz;i++){
		printf("姓名:%s\n",p->con[i].name); 
		printf("性别:%s\n",p->con[i].sex);
		printf("电话:%s\n",p->con[i].tel);
		printf("地址:%s\n",p->con[i].adr);
		printf("\n");
	}
}

int main(){
	contact con;//创建通讯录
	ini(&con);//初始化通讯录
	menu();
	do{
		
		scanf("%d",&op2);
		switch(op2){
			
			case Exit:
				printf("退出");
				break;
			case add:
				addcon(&con);
				break;
			case del:
				delcon(&con);
				break;
			case sek:
				sekcon(&con);
				break;
			case modify:
				modifycon(&con);
				break;
			case sort:
				sortcon(&con);
				break;
			case print:
				printcon(&con);
				break;
			default:
				printf("请输入正确的选项！\n");
		}
	}while(op2);
	
	
	return 0;
}

#include<stdio.h>
#include<string.h>
#define NAME_MAX 20//�����ĳ���
#define SEX_MAX 5//�Ա�ĳ���
#define TELE_MAX 12//�绰����ĳ���
#define ADDR_MAX 30//��ַ����
#define PON_MAX 1000//ͨѶ¼�Ĵ�С
#include<assert.h>
typedef struct peo{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	char  tel[TELE_MAX];
	char adr[ADDR_MAX];
}peo;
typedef struct contact{
	peo con[PON_MAX];//��ϵ�� 
	int sz;//ͨѶ¼���� 
}contact;
void menu(){
	printf("=====================================\n");
	printf("============1.������ϵ��=============\n");
	printf("============2.ɾ����ϵ��=============\n");
	printf("============3.������ϵ��=============\n");
	printf("============4.�޸���ϵ��=============\n");
	printf("============5.����ͨѶ¼=============\n");
	printf("============6.��ӡͨѶ¼=============\n");
	printf("============0.�˳�ͨѶ¼=============\n");
	printf("=====================================\n");
}
void ini(contact*p){//��ʼ��ͨѶ¼ 
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
		printf("ͨѶ¼���ˣ�");
		return ;
	}
	printf("������������");
	scanf("%s",p->con[p->sz].name);
	printf("�������Ա�");
	scanf("%s",p->con[p->sz].sex);
	printf("������绰��");
	scanf("%s",p->con[p->sz].tel); 
	printf("�������ַ��");
	scanf("%s",p->con[p->sz].adr);
	p->sz++;
	printf("��ӳɹ�!\n");
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
void delcon(contact*p){//ɾ��
	if(p->sz==0){
		printf("����ϵ��!\n");
		return ;
	} 
	assert(p);
	char name[NAME_MAX];
	printf("������Ҫɾ����ϵ�˵����֣�");
	scanf("%s",name);//����Ҫɾ������ϵ�� 
	int ps=find(p,name);
	if(ps!=-1){//psΪѰ���˵��±� 
		for(int i=ps;i<p->sz-1;i++){
		p->con[i]=p->con[i+1];//����Ҫɾ�����ˣ���ǰ���� 
		printf("ɾ���ɹ�\n");
		p->sz--;//������һ 
		}
	}
	else{
		printf("���޴���!\n");
	}
}
void sekcon(contact*p){//���� 
	if(p->sz==0){
		printf("����ϵ��!\n");
		return;
	}
	assert(p);
	char name[NAME_MAX];
	printf("������ҪѰ����ϵ�˵����֣�\n");
	scanf("%s",name);
	int ps=find(p,name);
	if(ps==-1){
		printf("���޴���\n");
		return ;
	}
	else{
		printf("%-5s %-5s %-12s %-30s\n","����","�Ա�","�绰","��ַ");
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
		printf("����ϵ��!\n");
		return;
	}
	char name[NAME_MAX];
	printf("������Ҫ�޸���ϵ�˵����֣�\n");
	scanf("%s",name);
	int ps=find(p,name);
	if(ps==-1)
		printf("���޴��ˣ�\n");
	else{
	printf("������Ҫ�޸ĸ���ϵ�˵���Ϣ��\n");
	printf( " 1������\n 2���Ա�\n 3���绰\n 4����ַ\n 0���˳�\n");
	
	do{
		scanf("%d",&op1);
		switch(op1){
		case EXIT:
			printf("�˳�");
			break;
		case NAME:
			printf("�����µ����֣�\n") ;
			scanf("%s",p->con[ps].name);
			printf("�ɼ����޸ģ��˳���ѡ��0\n");
			break;
		case SEX:
			printf("�����µ��Ա�:\n");
			scanf("%s",p->con[ps].sex);
			printf("�ɼ����޸ģ��˳���ѡ��0\n");
			break;
		case TEL:
			printf("�����µĵ绰:\n");
			scanf("%s",p->con[ps].tel);
			printf("�ɼ����޸ģ��˳���ѡ��0\n");
			break;
		case ADR:
			printf("�����µĵ�ַ:\n");
			scanf("%s",p->con[ps].adr);
			printf("�ɼ����޸ģ��˳���ѡ��0\n");
			break;
		default:
			printf("��Ч��������\n");
		}
	}while(op1);
	}
}
void sortcon(contact*p){//����
	if(p->sz==0){
		printf("����ϵ�ˣ�\n");
		return ;
	} 
	for(int i=0;i<p->sz-1;i++){//�� 
		for(int j=0;j<p->sz-1-i;j++){
		if(strcmp(p->con[j].name,p->con[j+1].name)>0){
			peo tmp;
			tmp=p->con[j];
			p->con[j]=p->con[j+1];
			p->con[j+1]=tmp;
			}
		}
	}
	printf("����ɹ���\n");
}	
void printcon(contact*p){
	if(p->sz==0){
		printf("����ϵ�ˣ�");
		return ;
	}
	for(int i=0;i<p->sz;i++){
		printf("����:%s\n",p->con[i].name); 
		printf("�Ա�:%s\n",p->con[i].sex);
		printf("�绰:%s\n",p->con[i].tel);
		printf("��ַ:%s\n",p->con[i].adr);
		printf("\n");
	}
}

int main(){
	contact con;//����ͨѶ¼
	ini(&con);//��ʼ��ͨѶ¼
	menu();
	do{
		
		scanf("%d",&op2);
		switch(op2){
			
			case Exit:
				printf("�˳�");
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
				printf("��������ȷ��ѡ�\n");
		}
	}while(op2);
	
	
	return 0;
}

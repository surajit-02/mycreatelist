#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *createlist(NODE*,int);

NODE *createlist(NODE *z,int p){
	NODE *y,*temp;
	 
	printf(" Enter node no=");
	scanf("%d",&p);
	for(int i=0;i<p;i++){
		y=(NODE*)malloc(sizeof(node));
		printf(" Enter %d data of linked list=",i);
		scanf("%d",&y->data);
		if(i==0){
			z=y;
			temp=y;
		}else{
			temp->next=y;
			temp=y;
		}
	}
	
	
	temp->next=NULL;
	return z;
}
void display(NODE *head){
	NODE *tmp=head;
	

		while(tmp!=NULL){
			printf("Data= %d\n",tmp->data);
			tmp=tmp->next;
		}
		printf("NULL \n");
	}
	int search(NODE *m,int p){
		int flag=0;
		while(m!=NULL){
			if(m->data==p){
				flag=1;
				break;
			}
			m=m->next;
		}
		if(flag==1){
			return 1;
		}else{
			return NULL;
		}
	}
  
int main(){
	NODE *head=NULL;
	int a,ch;
	
	head=createlist(head,a);
	printf(" Enter choice=(1 for display/ 2 for search/3 for delete)=");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			display(head);
			break;
			case 2:
				int n;
				printf(" Enter number to search=");
				scanf("%d",&n);
				int x;
				x=search(head,n);
				if(x==1){
					printf(" the number preseent in the linked list");
				}else{
					printf(" The number not present in linked list");  
				}
				
				break;
				
			default:
				printf(" Invalid input");
				break;
	}
	
	return 0;
}


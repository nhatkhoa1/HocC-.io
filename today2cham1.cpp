#include<bits/stdc++.h>

using namespace std;

struct node{
	int ten;
	double gpa;
	node*next;
};
node * makeNode(int x){
	node*newNode = new node();
	newNode->ten=x;
	newNode->next=NULL;
	return newNode;
}
int size(node *head) {
    int count = 0;
    node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}
void duyet(node*head){
	while(head!=NULL){
		cout << head->ten << ' ';
		head=head->next;
	}
}
void count(node*head){
	int dem=0;
	while(head!=NULL){
		++dem;
		head=head->next;
	}
	cout<< "\n" <<dem;
}
void chendau(node *&head,int x){
	node*newNode=makeNode(x);
	
	newNode->next=head;
	
	head=newNode;
}
void chencuoi(node*&head,int x){
    node*temp= head;
    node*newNode=makeNode(x);
    if(head==NULL){
    	head=newNode;
    	return;
	}
    while(temp->next!=NULL){
    	temp=temp->next;
	}
	temp->next=newNode;
}
void chengiua(node*&head,int k,int x){
	int n = size(head);
	node*temp=head;
	for(int i=1;i<k-2;i++){
		temp=temp->next;
	}
	node * newNode=makeNode(x);
	newNode->next=temp->next;
	temp->next=newNode;
}
int main() {
    node *head = NULL;
    while(1){
    	cout<<"--------------------------------"<<endl;
    	cout<<"1.Chendau"<<endl;
    	cout<<"2.Chencuoi"<<endl;
    	cout<<"3.chenGiua"<<endl;
		cout<<"4.Duyet"<<endl; 
		cout<<"0.Thoat"<<endl; 
		cout<<"--------------------------------"<<endl;
    	int cl; cin>>cl;
    	if (cl==1){
    		int x; cout <<"Nhap x :"; cin>>x;
    		chendau(head,x);
		}
		else if (cl==2){
    		int x; cout <<"Nhap x :"; cin>>x;
    		chencuoi(head,x);
		}
		else if (cl==3){
    		int x; cout <<"Nhap x :"; cin>>x;
    		int k; cout <<"Nhap k :"; cin>>k;
    		chengiua(head,k,x);
		}
		else if (cl==4){
			duyet(head);
			cout<<endl;
		} 
		else{
			break;
		}
	}
    return 0;
} 


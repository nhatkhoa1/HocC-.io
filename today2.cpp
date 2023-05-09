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

int main() {
    node *head = NULL;
   /* int n;
    cout << "Nhap so luong node: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cout << "Nhap gia tri cho node thu " << i << ": ";
        cin >> x;
        node *newNode = makeNode(x);
        if (head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }
    */
   for(int i=1;i<=5;i++){
    	chendau(head,i);
	}
	for(int i=6;i<=10;i++){
    	chencuoi(head,i);
	}
    duyet(head);
    count(head);
    return 0;
} 


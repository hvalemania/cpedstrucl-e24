#include<iostream>
#include<conio.h>
using namespace std;

struct Node{
	int data;
	Node *next, *back;
	
} *top = NULL, *bottom = NULL, *prev, *p;

void push(int x){
	p = new Node;
	p->data = x;
	p->next = NULL;
	if (top == NULL){
		p->back = NULL;
		top = bottom = p;
	
	} else{
		top->next = p;
		p->back = top;
		top = p;
	}
}

void pop(){
	if (top == NULL){
		cout<<"Stack is empty!\n";
	} else{
		p = top;
		top = top->back;
		cout<<p->data<<" is popped.\n";
		delete p;
	}
	getch();
}

void display(){
	p = top;
	cout<<"\n STACK: ";
	if(p == NULL){
		cout<<"Empty";
	} else{
		while (p != NULL){
			cout << p->data << " ";
			p = p->back;
		}
	}
	getch();
}

int main() {
	int x;
	
	while(1){
		system("cls");
		cout<<"STACK \n";
		cout<<"1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Display\n";
		cout<<"4. Exit\n";
		cout<<"Choice: ";
		cin>>x;
		
		switch(x){
			case 1:{
				cout<<" Enter a value to be pushed: ";
				cin>> x;
				push(x);
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4: return 0;
		}
	}
}

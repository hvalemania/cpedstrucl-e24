#include <iostream>
#include<conio.h>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret;
        
		if (head==NULL){
			return NULL;
		}
		else{
			ret = n->x;
			head = head->next;
			delete n;
        	return ret;
		   }
   		
    }
    
    void menu(){
    	cout<<"MAIN MENU\n";
    	cout<<"1 - Insert into linked list\n";
    	cout<<"2 - Pop\n";
    	cout<<"3 - Exit\n";
    	cout<<"4 - Display\n";
	}
	
	void display(){
		Node *n;
		n = head;
		if (n == NULL){
			cout<<"\nNothing to display. Please add a value first.";
		}
		else{
			while(n!=NULL){
				cout<< n->x <<" ";
				n = n->next;
			}	
		}
		getch();
	}

private:
    Node *head; 
};

int main() {
    LinkedList list;
	int n, choice;
	
	while(1){
		system("cls");
		list.menu();
		cout<<"---\nEnter choice: ";
		cin>>choice;
		
		switch(choice){
			case 1: {
				cout<<"\nEnter Number: ";
				cin>>n;
				list.addValue(n);
				break;
			}
			case 2: {
				n = list.popValue();
				
				if (n==NULL){
					cout<<"\nNothing to pop. Add value first."; 
				}
				else{
					cout<<"\n"<< n <<" has been deleted.";
				}

				getch();
				break;
			}
			case 3: exit(1);
			case 4:{
				list.display();
				break;
			}
			default: break;
		}
	}
    return 0;
}

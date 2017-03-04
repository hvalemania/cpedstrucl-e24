#include <iostream>
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
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }
    
    void display(){
    	Node *n=head;
    	while(n!=NULL){
     		cout<<n->x<<" - ";
    		n=n->next;   			
		}
    }
    int mainMenu(){
		int choice;
		cout<<"Main menu: "<<endl
			<<"[1] Insert into linked list"<<endl
			<<"[2] Pop"<<endl
			<<"[3] Exit"<<endl
			<<"[4] Display linked list"<<endl
			<<"Enter your choice: ";
		cin>>choice;
		return choice;
    }

private:
    Node *head; 
};

int main() {
		LinkedList list; 
		int choice,element;
		while(1){
			choice=list.mainMenu();
			if(choice==1){
				cout<<"Enter the number you want to insert: ";
				cin>>element;
    			list.addValue(element);	
				cout<<"Done"<<endl;
				system("pause>0");
				system("cls");
			}	
			else if(choice==2){
				cout<<"Pop "<<list.popValue();
				system("pause>0");
				system("cls");
			}
			else if (choice==3)
				exit(1);
			else if (choice==4){
				list.display();
				system("pause>0");
				system("cls");
			}	
			else{
				cout<<"Your choice is invalid!"<<endl;
				system("pause>0");
				system("cls");
			}
		}
    return 0;
}  

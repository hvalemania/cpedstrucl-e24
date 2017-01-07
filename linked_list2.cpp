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

    int popValue()
	{
        Node *n = head;
        int ret = n->x;
        head = head->next;
		delete n;
        return ret;
    }
    
    void displayValue()
    {
    	Node *j = head;
    	Node *k = head;
    	while(k)
    	{
    		j=k;
    		cout << j-> x <<endl;
    		k = j-> next;
		}
	}


private:
    Node *head; 
};

void mainMenu();
int main()
{
	int choice, insertNum, ctr=0;
	LinkedList list;
	while(1)
	{
		mainMenu();
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter a number: ";
				cin>>insertNum;
				list.addValue(insertNum);
				cout<<"Value Added!"<<endl;
				system("pause>0");
				break;
			case 2:	
				cout << "deleted: " <<list.popValue();
				system("pause>0");
				break;
			case 4:
				cout <<"Display : " << endl;
				list.displayValue();
				system("pause >0");
				
			case 3:
				exit(1);
				break;
		}
}
	
}

void mainMenu()
{
	
	system("cls");
	
	int choice;
	cout <<"[ 1 ] Insert into linked list" <<endl;
	cout <<"[ 2 ] Pop" <<endl;
	cout <<"[ 3 ] Exit" <<endl;
 	cout <<"[ 4 ] Display" <<endl;
	
	
	cout <<"Enter: ";
}

#include <iostream>
using namespace std;
  
class Node {
public:
    int data;
    Node* next;
    Node()
    {
        data = 0;
        next = NULL;
    }
	Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Linkedlist 
{
    Node* head;
  
public:
    Linkedlist() 
	{
	 head = NULL; 
	}
	void insertNode(int data)
	{
		 Node* newNode = new Node(data);
        if (head == NULL) 
		{
		  head = newNode;
          return;
		}
        Node* temp = head;
        while (temp->next != NULL) 
		{
           temp = temp->next;
		}
        temp->next = newNode;
	}
	void printList()
	{
	  Node* temp = head;
      if (head == NULL) 
	  {
        cout << "List empty" << endl;
        return;
      }
      while (temp != NULL) 
	  {
        cout << temp->data << " ";
        temp = temp->next;
      }
    }
};
int main()
{
	Linkedlist obj;
	obj.insertNode(12);
	obj.insertNode(13);
	obj.insertNode(10);
	cout<<"Linked List is : \n";
	obj.printList();
	return 0;
}

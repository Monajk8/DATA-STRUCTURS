#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

	Node()
	{
		data = 0;
		next = NULL;
	}
};
class Queue
{
public:
	Node* front;
	Node* rear;

	Queue()
	{
		front = rear = NULL;
	}
	bool isEmpty()
	{
		if (front == NULL && rear == NULL)
		{
			return true;
		}
		else
			return false;
	}
	bool isfull()
	{
		return false;
	}



	int Enqueue(int item)
	{

		Node* temp;
		temp = new Node;
		temp->data = item;

		if (isEmpty())
			rear = front = temp;
		else
		{
			rear->next = temp;
			rear = temp;
		}
	}
	void display()
	{

		Node* temp = front;
		while (temp != NULL)
		{
			cout << temp->data;
			temp = temp->next;
		}

		cout << endl;
	}

};


int main()
{
	Queue q;
	int item;
	for (int i = 1; i < 3; i++)
	{
		int item;
	cout << "Enter item:\n";
		cin >> item;
	q.Enqueue(item);
}
}

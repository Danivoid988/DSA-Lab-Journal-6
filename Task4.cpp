#include<iostream>
using namespace std;
int x = 0;
class node {
public:
	int data;
	node* next;
	node* prev;
	node(int data) {
		this->data = data;
		this->next = NULL;
		this->prev = NULL;
	}
};
class queue {
public:
	node* front;
	node* back;
	queue() {
		front = NULL;
		back = NULL;
	}
	void enque(int d ,int* count) {
		node* newnode = new node(d);
		if (front == NULL && back == NULL) {
			front = back = newnode;
			x++;
			*count = x;
			return;

		}
		newnode->prev = back;
		back->next = newnode;
		newnode->next = back;
		back = newnode;
		x++;
		*count = x;


	}
	int deqeue() {
		if (front == NULL) {
			cout << "the queue is empty " << endl;
		}
		int temp;
		temp = front->data;
		front = front->next;
		return temp;

	}
};
void main() {

	queue q1;
	int count = 0;
	q1.enque(10,&count);
	q1.enque(20, &count);
	q1.enque(30, &count);
	q1.enque(40, &count);

	cout << "the value is = " << q1.deqeue() << endl;
	cout << "the value is = " << q1.deqeue() << endl;
	cout << "the value is = " << q1.deqeue() << endl;
	cout << "the value is = " << q1.deqeue() << endl;
	
	
	cout << endl << "the total value in the queue is = "<<count << endl;

	system("pause");
}

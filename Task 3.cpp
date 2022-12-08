#include<iostream>
using namespace std;
int n = 5;
class stack {
public:
	int* arr2;
	int top;
	stack() {
		arr2 = new int[n];
		top = -1;
	}
	void push(int d) {
		if (top >= n) {
			cout << "the stack is full now: " << endl;
		}

		top++;
		arr2[top] = d;

	}
	int pop() {
		if (top == -1) {
			cout << "the stack is empty now " << endl;
		}
		int x;
		x = arr2[top];
		top--;
		return x;
	}


};
class queue {
public:
	int* arr;
	int front;
	int back;
	queue() {
		arr = new int[5];
		front = -1;
		back = -1;
	}

	void enqueue(int d) {
		if (front == -1 && back == -1) {
			front++;
			back++;
			arr[back] = d;
			return;
		}

		back++;
		arr[back] = d;
	}
	int dequeue() {

		if (back == -1) {
			cout << "the queue is empty yet : ok " << endl;

		}
		int x;
		x = arr[front];
		front++;

		if (front > back) {
			front = -1;
			back = -1;
		}

		return x;

	}



};
void revesequeue(queue* Qa) {
	stack s1;

	for (int i = 0; i < n; i++) {
		s1.push(Qa->dequeue());
	}

	for (int i = 0; i < 5; i++) {
		Qa->enqueue(s1.pop());
	}

}






void main() {
	queue q1;

	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(5);

	revesequeue(&q1);

	cout << "the value is = " << q1.dequeue() << endl;
	cout << "the value is = " << q1.dequeue() << endl;
	cout << "the value is = " << q1.dequeue() << endl;
	cout << "the value is = " << q1.dequeue() << endl;
	cout << "the value is = " << q1.dequeue() << endl;






	system("pause");

}

#include<iostream>
using namespace std;

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

	int arr3[5];


	for (int i = 0; i < 5; i++) {
		arr3[i] = Qa->dequeue();
	}
	for (int i = 4; i >= 0; i--) {
		int x = arr3[i];
		Qa->enqueue(x);
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

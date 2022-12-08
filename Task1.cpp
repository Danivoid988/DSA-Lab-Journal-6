#include<iostream>
using namespace std;
int n = 5;
class stack {
public:
	int* arr;
	int size;
	int top;
	stack() {
		arr = new int[n];
		size = n;
		top = -1;
	}
	void push(int da) {
		if (top > size - 1) {
			cout << "stack is over flow " << endl;
		}
		else {
			top++;

			arr[top] = da;
		}

	}
	int pop() {
		if (top <= -1) {
			cout << "no value entered yet " << endl;

		}
		else {
			int temp;
			temp = arr[top];
			--top;
			return temp;
		}



	}
	int emty() {
		return top;
	}


};

class queue {
public:
	stack s1, s2;

	void enqueue(int d) {



		s1.push(d);


	}
	int dequeue() {
		if (s1.emty() == -1 && s2.emty() == -1) {
			cout << "stack is empty yet " << endl;
			exit(0);
		}
		if (s2.emty() == -1) {
			while (s1.emty() >= 0) {
				s2.push(s1.pop());
			}
		}
		int x;
		x = s2.pop();
		return x;


	}



};
void main() {
	queue q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(5);

	cout << "the value is = " << q1.dequeue() << endl;
	cout << "the value is = " << q1.dequeue() << endl;
	cout << "the value is = " << q1.dequeue() << endl;
	cout << "the value is = " << q1.dequeue() << endl;
	cout << "the value is = " << q1.dequeue() << endl;






	system("pause");
}

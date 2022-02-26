#include <iostream>
#include "Queue.h"

using namespace std;

int main() {

	Queue queue;
	queue.addQueue(5);
	queue.addQueue(25);
	queue.addQueue(8);
	queue.addQueue(99);

	cout << "print" << endl;
	cout << queue.getFront() << endl;
	cout << queue.getEnd() << endl;

	cout << "remove" << endl;
	queue.removeQueue();

	cout << "print" << endl;
	cout << queue.getFront() << endl;
	cout << queue.getEnd() << endl;

	cout << "add" << endl;
	queue.addQueue(50);

	cout << "print" << endl;
	cout << queue.getFront() << endl;
	cout << queue.getEnd() << endl;

	cout << "delete" << endl;
	queue.~Queue();

	cout << "print" << endl;
	cout << queue.getFront() << endl;
	cout << queue.getEnd() << endl;

	return 0;
}
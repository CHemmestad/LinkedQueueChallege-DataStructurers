#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

using namespace std;

struct Node; //Doesnt work unless this is here, not sure why yet

class Queue {
public:
	Queue(); //Constructor
	~Queue(); //Deconstructor

	void makeEmpty(); //Empties list
	void addQueue(int n); //Adds to the the end of the line
	void removeQueue(); //Removes from the beginning of the line
	bool isEmpty(); //Checks if the list is empty
	bool isFull(); //Checks to see if theres any more memory available to allocate

	int getFront(); //Returns data from the front pointer
	int getEnd(); //Returns data from the end pointer

private:
	Node* front;
	Node* end;
};

#endif // !QUEUE_H

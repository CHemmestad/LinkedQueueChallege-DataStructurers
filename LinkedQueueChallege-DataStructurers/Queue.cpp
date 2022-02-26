#include "Queue.h"

struct Node {
	int data;
	Node* next;
};

Queue::Queue() {
	front = NULL;
	end = NULL;
}

Queue::~Queue() {
	makeEmpty();
}

bool Queue::isFull() {
	Node* location;
	location = new Node();
	if (!location) {
		return true;
	}
	else {
		delete location;
		return false;
	}
	/*
	try { // <-- dont know this
		location = new Node();
		delete location;
		return false;
	}
	catch (bad_alloc exception) { // <-- dont know this
		return true;
	}
	*/
}

bool Queue::isEmpty() {
	if (front == NULL) {
		return true;
	}
	else {
		return false;
	}
}

void Queue::makeEmpty() {
	Node* temp;
	while (front != NULL) {
		temp = front;
		front = front->next;
		delete temp;
	}
	end = NULL;
}

void Queue::addQueue(int n) {
	Node* temp = new Node();
	temp->data = n;
	temp->next = NULL;

	if (end == NULL) {
		front = temp;
	}
	else {
		end->next = temp;
	}
	end = temp;
}

void Queue::removeQueue() {
	Node* temp;

	temp = front;
	front = front->next;
	if (front == NULL) {
		end = NULL;
	}
	delete temp;
}

int Queue::getFront() {
	Node* temp;
	int data;
	temp = front;
	data = front->data;
	return data;
}

int Queue::getEnd() {
	Node* temp;
	int data;
	temp = end;
	data = end->data;
	return data;
}
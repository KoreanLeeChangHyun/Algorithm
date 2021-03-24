
#include<iostream>
#include<string>
#include"Node.h"

using namespace std;

class LinedList;


class LinkedList {
private:
	Node* head;
	Node* tail;
	int list_size;

public:
	// constructor
	LinkedList();

	// add
	void addFisrt(string data);
	void addLast(string data);
	void add(string data);
	void add(int index, string data);

	// remove (pop)
	string removeFrist();
	string removeLast();
	string remove(int index);
	void clear();

	// search
	string get(int index);
	bool contains(int index);
	int indexof(int index);

	// size
	int size();

	// show
	void show();

private:
	Node* gotoIndex(int index);
};
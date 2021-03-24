
#include"LinkedList.h"

using namespace std;


LinkedList::LinkedList()
{
	this->head = 0;
	this->list_size = 0;
	this->tail = 0;
}

void LinkedList::addFisrt(string data)
{
	Node* node = new Node(data);

	if (!head) {
		head = node;
		node->prev = node;
		node->next = node;
		tail = node;
	}
	else {
		node->next = head;
		node->prev = tail;

		head->prev = node;
		tail->next = node;

		head = node;
	}

	list_size++;
}

void LinkedList::addLast(string data)
{
	Node* node = new Node(data);
	if (!head) {
		head = node;
		node->prev = node;
		node->next = node;
		tail = node;
	}
	else {
		node->next = head;
		node->prev = tail;

		head->prev = node;
		tail->next = node;

		tail = node;
	}

	list_size++;
}

void LinkedList::add(string data)
{
	addLast(data);
}

void LinkedList::add(int index, string data)
{
	Node* node = new Node(data);
	if (index == 0) {
		addFisrt(data);
	}
	else if (index >= list_size) {
		addLast(data);
	}
	else {
		Node* ptr = gotoIndex(index);
		Node* ptr_prev = gotoIndex(index-1);

		node->next = ptr;
		node->prev = ptr_prev;

		ptr_prev->next = node;
		ptr->prev = node;

		list_size++;
	}
}

string LinkedList::removeFrist()
{
	return "";
}

string LinkedList::removeLast()
{
	return "";
}

string LinkedList::remove(int index)
{
	return "";
}

void LinkedList::clear()
{

}

string LinkedList::get(int index)
{
	return "";
}

bool LinkedList::contains(int index)
{
	return false;
}

int LinkedList::indexof(int index)
{
	return 0;
}

int LinkedList::size()
{
	return 0;
}

void LinkedList::show() {
	Node* ptr = head;

	for (int i = 0; i < list_size; i++) {
		cout << ptr->data << " : ";
		ptr = ptr->next;
	}
}

Node* LinkedList::gotoIndex(int index) {
	Node* ptr = 0;

	if (index < list_size / 2) {
		ptr = head;
		for (int i = 0; i < index; i++) {
			ptr = ptr->next;
		}
	}
	else {
		ptr = tail;
		for (int i = 0; i < list_size - 1 - index; i++) {
			ptr = ptr->prev;
		}
	}

	return ptr;
}
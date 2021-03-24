
#include"Node.h"
using namespace std;

Node::Node(string data)
{
	this->prev = 0;
	this->data = data;
	this->next = 0;
}
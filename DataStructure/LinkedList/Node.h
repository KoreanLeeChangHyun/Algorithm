
#include<string>
using namespace std;

class Node {
public:
	Node* prev;
	string data;
	Node* next;

	Node(string data);
};
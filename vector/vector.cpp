// vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <list>
using namespace std;
void vectorEx() {
	cout << "vector" << endl;
	// Create a vector containing integers
	std::vector<int> v = { 7, 5, 16, 8 };

	// Add two more integers to vector
	v.push_back(25);
	v.push_back(13);
	v.insert(v.begin(), 1, 1);

	// Print out the vector
	std::cout << "v = { ";
	for (int n : v)
		std::cout << n << ", ";
	std::cout << "}; \n";
}
void stackEx() {
	cout << "stack" << endl;
	stack<string> stack;
	stack.push("top");// The values pushed in the stack should be of the same data which is written during declaration of stack
	stack.push("a");
	stack.push("b");
	stack.push("c");
	string empty = "var";
	stack.push(empty);
	//ne peux iter facilement
	stack.pop();
	while (!stack.empty()) {
		cout << stack.top() << " ";
		stack.pop();
	}
	cout << endl;
}

void QueueExe() {
	cout << "queue" << endl;
	auto it = { 1,2,3,4,5 };
	priority_queue<int> q(less<int>(), it);

	cout << "Queue contents are" << endl;
	//enlève 5 et 4 dans la queue
	q.pop();//5
	q.pop();//4
	while (!q.empty()) {
		cout << q.top() << " ";
		q.pop();
	}
	cout << endl;
}

void ListEx() {
	cout << "liste`" << endl;
	list<string> liste{ "item 1","item 2","item 3","item 4","item 5" };
	// enlève le dernier
	liste.pop_back();
	//enlève le dernier
	liste.pop_front();
	for (auto i : liste) {
		cout << i << ' ';
	}
	cout << endl;
}

int main()
{
	vectorEx();
	stackEx();
	QueueExe();
	ListEx();
}
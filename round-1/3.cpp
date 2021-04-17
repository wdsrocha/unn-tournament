#include<iostream>

using namespace std;


template<typename T>
class Node{
public:
	Node<T>* next;
	Node<T>* prev;
	T item;

	Node();
};

template<typename T>
Node<T>::Node(){
	next = NULL;
	prev = NULL;
}

template<typename T>
class List{
private:
	Node<T>* head;
	Node<T>* tail;
	int listSize;

public:
	List();
	bool empty();
	void push(T element);
	T top();
	void pop();
	void print();
};

template<typename T>
List<T>::List(){
	this->listSize = 0;
	this->head = new Node<T>();
	this->tail = new Node<T>();
	this->head->next = this->tail;
	this->tail->prev = this->head;
}

template<typename T>
void List<T>::push(T element){
	Node<T>* aux = new Node<T>();

	this->tail->prev->next = aux;
	aux->prev = this->tail->prev;
	aux->next = this->tail;
	this->tail->prev = aux;
	aux->item = element;
	this->listSize++;
}

template<typename T>
bool List<T>::empty(){
	return this->listSize == 0;
}

template<typename T>
T List<T>::top(){
	Node<T>* it = this->tail;
	return it->item;
}

template<typename T>
void List<T>::pop(){
	Node<T>* it = this->head->next;
	it->prev->next = it->next;
	it->next->prev = it->prev;
	this->listSize--;
	delete it;
}

template<typename T>
void List<T>::print(){
	Node<T>* it = this->head->next;
	if(listSize > 0) cout << it->item;
	for(int i=1; i < this->listSize; i++){
		it = it->next;
		cout << ' ' << it->item;
	}
	cout << endl;
}

int main() {
	Queue<int> q;

	int v[5] = {1, 2, 3, 5, 8, 13};

	for(int i=0; i < 5; ++i) {
		q.push(v[i]);
	}

	while(!q.empty()) {
		cout << q.top() << endl;
		q.pop();
	}
	
	for(int i=0; i < 5; ++i) {
		q.push(v[i]);
	}
	
	q.pop(); q.pop();
	while(!q.empty()) {
		cout << q.top() << endl;
		q.pop();
	}

    return 0;
}
int main() {
    return 0;
}
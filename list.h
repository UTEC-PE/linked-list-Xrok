#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"
#include "iterator.h"

using namespace std;

template <typename T>
class List {
    private:
        Node<T>* head;
        Node<T>* tail;
        int nodes;

        void print_reverse(Node<T>* head);

    public:
        List(){
        };

        T front(){
        	return head-> data;
        };
        T back(){
        	return tail->data;
        };
        void push_front(T value){
        	Node<T>* nuevo = new Node<T>;
        	nuevo -> next = head;
        	nuevo -> data = value;
        	head = nuevo;
        };
        void push_back(T value){
			Node<T>* nuevo = new Node<T>;
        	nuevo -> next = NULL;
        	nuevo -> data = value;
        	tail->next = nuevo;
        	tail=nuevo;
        };
        void pop_front();
        void pop_back();
        T get(int position);
        void concat(List<T> &other);
        bool empty();
        int size();
        void print();
        void print_reverse();
        void clear();
        Iterator<T> begin();
        Iterator<T> end();

        ~List();

};

#endif

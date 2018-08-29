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
            if(empty()){
                nuevo->data=value;
                nuevo->next=nullptr
                head=nuevo;
                tail=nuevo;
            }else{
        	nuevo -> next = head;
        	nuevo -> data = value;
        	head = nuevo;
            }
        };
        void push_back(T value){
			Node<T>* nuevo = new Node<T>;
            if (empty())
            {
                nuevo->data=value;
                nuevo->next=nullptr
                head=nuevo;
                tail=nuevo;
            }else{
        	nuevo -> next = NULL;
        	nuevo -> data = value;
        	tail->next = nuevo;
        	tail=nuevo; 
            }
        };
        void pop_front(){
            
            if(empty()){
                if (head->next==nullptr)
                {
                    delete head;
                    head= nullptr;
                } else{
                    Node* temp= head->next;
                    delete head;
                    head= nullptr;
                    head = temp;
                }


        };

        void pop_back(){
            if (empty())
            {
                if(head->next=nullptr){
                    delete head;
                    head = nullptr;
                } else{
                        Node* temp=head;   
                        while(temp->next=!tail){
                            temp=temp->next;
                        }

                        delete tail;
                        tail=temp;
                        tail->next= nullptr;
                    }

            }
        };
        T get(int position){
            Node* temp;
            temp=head;
            for (int i = 0; i < position; ++i)
            {
                if (temp->next==nullptr)
                {
                    return cout<<"Posicion demasiado larga"<<endl;
                }
                temp->next=temp;
            }
            cout<<temp<<endl;
        };
        void concat(List<T> &other){
            if(empty()){
                head=other->head;
                tail=other->tail;
            }else if(!other.empty()){
                tail->next = other->head;
                tail= other->tail;

            }else{
                cout<<"No hay cambios"<<endl;
            }
        };
     
        bool empty(){
        return head==NULL?true:false;
    };
        int size(){
            if(empty()){int i=0;
                Node* temp=head
                do
                {
                    i++;
                } while(temp->next=!nullptr);}
                return i;
        };
        void print(){
            if(empty()){int i=0;
                Node* temp=head
                do
                {
                    i++;
                } while(temp->next=!nullptr);}
                return i;
        };
        void print_reverse(){

            for (int i = size(); i>0; --i)
            {
                cout<<get(i-1)<<endl;
            }
        };

        void clear(){
        };
        Iterator<T> begin();
        Iterator<T> end();

        ~List();

};

#endif

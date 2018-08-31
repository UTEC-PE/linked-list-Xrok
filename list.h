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
        List(){ // Te faltó incializar
        };

        T front(){
        	return head-> data; // Te faltó controlar los casos de lista vacía
        };
        T back(){
        	return tail->data; // Igual que el caso anterior
        };
        void push_front(T value){
        	Node<T>* nuevo = new Node<T>;
            if(empty()){
                nuevo->data=value;
                nuevo->next=nullptr  // Falta ; esto no va a compilar
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
                nuevo->next=nullptr // Falta ; esto no va a compilar
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
                    Node* temp= head->next; // Falta el tipo <T>, esto no va a compilar
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
                        Node* temp=head;     // Falta el tipo <T>, esto no va a compilar
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
            Node* temp; // Falta el tipo <T>, esto no va a compilar
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
        return head==NULL?true:false; // No es necesario el ? true:false
    };
        int size(){
            if(empty()){int i=0;
                Node* temp=head  // Falta el tipo <T>, esto no va a compilar
                do
                {
                    i++;
                } while(temp->next=!nullptr);}
                return i;
        };
        void print(){
            if(empty()){int i=0;
                Node* temp=head  // Falta el tipo <T>, esto no va a compilar
                do
                {
                    i++;
                } while(temp->next=!nullptr);} // Esto imprime la lista, no el tamaño
                return i;
        };
        void print_reverse(){ // Podrías haber usado la manera recursiva para un mejor tiempo, pero esto debería funcionar

            for (int i = size(); i>0; --i)
            {
                cout<<get(i-1)<<endl;
            }
        };

        void clear(){ // No se implementó
        };
        Iterator<T> begin();
        Iterator<T> end();

        ~List(); // No se implementó

};

#endif

#ifndef SLL_H
#define SLL_H
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class StringNode
{
    private:
        T elem;
        StringNode<T> *next;
        template<typename>  friend class StringLinkedList;
};
template<typename T>
class StringLinkedList
{
    private:
        StringNode<T> *head;
    public:
        StringLinkedList(){
            this->head=NULL;
        }
        ~StringLinkedList()
        {while (!empty()) removeFront();}
        bool empty()const{
            return head==NULL;
        }
        const string &front() const{
            return head->elem;
        }
        void addFront(const T& e){
            StringNode<T>* v=new StringNode<T>;
            v->elem=e;
            v->next=head;
            head=v;
        }
        void removeFront(){
            if (!empty()){
                StringNode<T> *v=head;
                head=head->next;
                delete v;
            }
        }
        void print()const{
            StringNode<T> *v=head;
            while (v!=NULL){
                cout<<v->elem<<endl;
                v=v->next;
            }
        }
        void find(T e){
            int k=0;
            StringNode<T> *v=head;
            while(v!=NULL){
                if (v->elem==e){
                    k=k+1;
                    break;
                }
                else
                    v=v->next;          
            }
            if(k==1)
                cout<<"True"<<endl;
            else
                cout<<"False"<<endl;
        }
};
#endif
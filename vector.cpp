#pragma one
#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
	public:
		T data;
		Node<T>  *next;
		Node(T data)
		{
		    this->data=data;
		    this->next=NULL;
		}
};
template <typename T>
class Vector
{
	private:
	    Node<T>  *head;
	    Node<T>  *tail;
	public:
	    Vector()
		{
	        this->head=NULL;
	        this->tail=NULL;
	    }
	    T size()
		{
	    	T counter=0;
	        Node<T> *s = head;
	        while(s != NULL)
			{
	            counter = counter + 1;
	            s = s -> next;    
	        }
	    return counter;
	    }
	    void resize(T n)
		{
	        Node<T> *q = head;
	        int s = size();
	        if(n > size())
			{
	            while(s!=n)
				{
	                Node<T> *temp = new Node<T>(0);
	                tail -> next = temp;
	                tail = temp;
	                s++;
	            }
	        }
	        else{
	            for(int i=0; i<n-1; i++)
				{
	                q = q -> next; 
	            }
	            tail = q;
	            q -> next = NULL;
	        }
	    }
	    void push_back(T data)
		{
	        Node<T> *temp = new Node<T>(data);
	        if(head==NULL)
			{
	            head = temp;
	            tail = temp;
	        }
	        else
			{
	            tail -> next = temp;
	            tail = tail -> next;
	        }
	    }
	    void pop_back(){
	        Node<T> *p = head;
	        while(p -> next -> next != NULL)
	            p = p -> next;
	        tail = p;
	        p -> next = NULL;
	    }
	    void erase(T e){
	        Node<T> *p = head;
	        if(e > size())
	            return ;
	        else if(e == 1)
			{
	            head = head -> next;
	            delete p;
	        } 
	        else
			{            
	            int r=0;
	            while(r != e - 2 && p -> next -> next != NULL)
				{    
	                p=p->next;
	                    ++r;
	            }
	            p -> next = p -> next -> next;
	        }
	    }
	    T &operator [](T i)
		{
	        Node<T> *p = head;
	        int a = 0;
	        while(a != i)
			{
	            p = p -> next;
	            a++;
	        }
	        return p -> data;
	    }
};

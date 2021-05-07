

#ifndef LNKLIST_H
#define	LNKLIST_H

#include <iostream>
using namespace std;

template <class T>
class LnkList {
    private:
        struct List {
            T value;
            struct List *next;
        };
        List *head;
        int size;
    public:
        //Constructor
        LnkList() {head=NULL;size=0;}
        
        //Copy Constructor
        LnkList(const LnkList &);
        
        //Destructor
        ~LnkList();
        
        //extract
        void extr(T);
        void prepend(T);
        void append(T);
        void insertAfter(T,T);
        void insertBefore(T,T);
        void dspList() const; //display the list
        T &operator[](const int &);
        int getSize() const {return size;}
        void subError();
};

//Copy Constructor
template <class T>
LnkList<T>::LnkList(const LnkList &a) {
    //New version for copy constructor using append function
//    cout<<"copy constructor of link list"<<endl;
    List *node;
    List *node2;
    this->usdSize=a.size();
    if(size>0) {
        head=new List;
        head->next=NULL;
        node=head;
        for(int i=0;i<size-1;i++) {
            node->next=new List;
            node=node->next;
        }
        node=head;
        node2=a.head;
        for(int i=0;i<size;i++) {
            node->value=node2->value;
            node=node->next;
            node2=node2->next;
        }
    } else {
        LnkList();
    }
}

//Destructor
template <class T>
LnkList<T>::~LnkList() {
//    cout<<"Linked List destructor"<<endl;
    List *node;
    List *nextNode;
    //loop to delete the pointer
    if(head!=NULL) {
        node=head;
        //loop to delete the pointer
        for(int i=0;i<size;i++) {
            nextNode=node->next;
            delete node;
            node=nextNode;
        }
    }
    
}


//push the node containing value n at the beginning
template <class T>
void LnkList<T>::prepend(T n) {
    List *newNode;//node needed to push
    newNode=new List;
    //set the new node
    newNode->value=n;
    newNode->next=NULL;
    //when head is null
    if(!head) head=newNode;
    else {
        newNode->next=head;
        head=newNode;
    }
    size++;
}
//push the node containing value n to the end
template <class T>
void LnkList<T>::append(T n) {
    List *node;
    List *newNode;//node needed to push
    newNode=new List;
    //set the new node
    newNode->value=n;
    newNode->next=NULL;
    //when head is null
    if(head==NULL) head=newNode;
    else {
        node=head;
        //loop to the last node
        while(node->next!=NULL) {
            node=node->next;
        }
        node->next=newNode;
    }    
    size++;
}

//insert a number n before number a 
template <class T>
void LnkList<T>::insertBefore(T n,T a) {
    List *newNode;//node needed to push
    List *node;
    newNode=new List;
    //set the new node
    newNode->value=n;
    newNode->next=NULL; 
    if(head==NULL) return;
    else if(head->value==a) {
            newNode->next=head;
            head=newNode;
    } else {
        node=head;
        while(node->next!=NULL&&node->next->value!=a) {
            node=node->next;
        } 
        if(node->next!=NULL&&node->next->value==a) {
            newNode->next=node->next;
            node->next=newNode;
            size++;
        }
    }
}

//insert a number n after number a 
template <class T>
void LnkList<T>::insertAfter(T n,T a) {
    List *newNode;//node needed to push
    List *node;
    newNode=new List;
    //set the new node
    newNode->value=n;
    newNode->next=NULL; 
    if(head==NULL) return;
    node=head;
    //loop to find a number a
    while(node->next!=NULL&&node->value!=a) {
        node=node->next;
    } 
    if(node->value==a) {
        newNode->next=node->next;
        node->next=newNode;
        size++;
    }
    
}

//delete a node that contains value n
template <class T>
void LnkList<T>::extr(T n) {
    List *node=head;
    List *temp;//next node
    if(head==NULL) return;
    while(node->next!=NULL) {
        if(node->next->value==n) {
            temp=node->next;
            node->next=temp->next;
            delete temp;
            size--;
        } else {
            node=node->next;
        }
    }
    if(head->value==n) {
        node=node->next;
        delete head;
        head=node;
        size--;
    } 
}

//Output all node of Linked List
template <class T>
void LnkList<T>::dspList() const {
    List *node;
    node=head;
    //output the Linked List
    while(node) {
        cout<<node->value<<endl;
        node=node->next;
    } 
}

//Override operation
template <class T>
T &LnkList<T>::operator[](const int &sub) {
   if (sub < 0||sub >=size)
      subError();
   List *node=head;
   for(int i=0;i<sub;i++) {
       node=node->next;
   }
   return node->value;
}

// subError function. Displays an error message and         
// terminates the program when a subscript is out of range. 
template <class T>
void LnkList<T>::subError() {
   cout << "ERROR: Subscript out of range.\n";
   exit(EXIT_FAILURE);
}

#endif	/* LNKLIST_H */


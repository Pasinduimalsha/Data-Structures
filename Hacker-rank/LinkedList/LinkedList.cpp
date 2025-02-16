#include <iostream>
using namespace std;

class Node{
    public:
    int elem;
    Node* next;

    Node(int elem){
        this->elem = elem;
        this->next = NULL;
    }
};

class SinglyLinkedList{
    private:
    Node* head;
    Node* tail;
    int size;

    public:
    SinglyLinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
 
    void insertFirst(int elem){
        Node* temp = new Node(elem);

        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertLast(int elem){
        Node* temp = new Node(elem);

        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAt(int elem, int index){
        Node* temp = new Node(elem);
        if(index < 0 || index > size){
            cout << "Invalid Index" << endl;
        }
        else if(index ==0){
            insertFirst(elem);
        }else if(index == size){
            insertLast(elem);
        }else{
            Node* current = head;

            for(int i =0;i<index-1;i++){
                current = current->next;
                temp->next = current->next;
                current->next = temp;
            }
            size++;
        }

    }

    void deleteFirst(){
        if(head ==NULL){
            cout << "List is empty" << endl;
        }else{

            if(size ==1){
                delete head;
                head = NULL;
                tail = NULL;
            }else{
                Node* temp = head;
                head = temp->next;
                delete temp;
            }
            size--;
        }
    }

    void deleteLast(){
        if(head == NULL){
            cout << "List is empty" << endl;
        }else{
            if(size==1){
                delete head;
                head = NULL;
                tail = NULL;
            }else{
                Node* temp = tail;
                Node* current = head;

                for(int i =0;i<size-2;i++){
                    current = current->next;
                }
                
                tail = temp;

            }
        }
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->elem << " ";
            temp = temp->next;
        }
    }
    
};

int main(){

    SinglyLinkedList obj1 ;
    
    cout << "Enter 5 elements" << endl;
    for(int i=0;i<5;i++){
        int num;
        cin >> num;
        obj1.insertFirst(num);
    }
    obj1.print();
     
    cout << endl;
    cout << "Insert at last" << endl;
    obj1.insertLast(10);
    obj1.print();

    cout << endl;
    cout << "Insert at :" << endl;
    obj1.insertAt(20, 2);
    obj1.print();

    cout << endl;
    cout << "Delete first" << endl;
    obj1.deleteFirst();
    obj1.print();
   

    return 0;
}
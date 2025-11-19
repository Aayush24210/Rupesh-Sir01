// #include<iostream>
// using namespace std;
// class Demo{
//     public:
//     int x;
//     float y;
//     Demo(){
//         y=new float;

//     }
//     void display(){
//         cout<<"x="<<x<<"y="<<*y<<endl,
//     }
// }
// int main(){
//     Demo d ;
//     d.x= 10;
//     x(d.y)=

// }
// #include<iostream>
// using namespace std;
// void addbefore(int x,int y){
//     int first = 100;
//     temp-> new node ;
//     temp->data=50;
//     temp->next=first;
//     first = 500;
//     temp = first ;
// }

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class LinkedList {
//     Node* head;
// public:
//     LinkedList() { head = NULL; }

//     void insertEnd(int val) {
//         Node* n = new Node(val);
//         if (!head) head = n;
//         else {
//             Node* temp = head;
//             while (temp->next) temp = temp->next;
//             temp->next = n;
//         }
//     }

//     void insertBegin(int val) {
//         Node* n = new Node(val);
//         n->next = head;
//         head = n;
//     }

//     void display() {
//         Node* temp = head;
//         while (temp) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL\n";
//     }
// };

// int main() {
//     LinkedList list;
//     list.insertEnd(20);
//     list.insertEnd(30);
//     list.insertBegin(10);  // insert before (at beginning)
//     list.display();
//     return 0;
// }
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int v) { data = v; next = NULL; }
};

class LinkedList {
public:
    Node* head = NULL;

    void addfirst(int v) {
        Node* n = new Node(v);
        n->next = head;
        head = n;
    }

    void addlast(int v) {
        Node* n = new Node(v);
        Node* t = head;
        for (; t && t->next; t = t->next);
        (t ? t->next : head) = n;
    }

    void display() {
        for (Node* t = head; t; t = t->next)
            cout << t->data << " -> ";
        cout << "NULL\n";
    }
};

int main() {
    LinkedList l;
    l.addlast(20);
    l.addlast(30);
    l.addfirst(10);
    l.display();
}

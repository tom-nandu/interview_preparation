
#include <iostream>

// -------------------------------
// 1) The node structure
// -------------------------------
struct node {
    int   data;    // payload
    node* prev;    // pointer to previous node
    node* next;    // pointer to next node

    // (optional) convenience constructor
    node(int d, node* p = nullptr, node* n = nullptr)
        : data(d), prev(p), next(n) {} // initialize fields
};


// -------------------------------
// 2) The list class that owns head & tail
// -------------------------------
class th {
    node* head;    // first node in the list (nullptr if empty)
    node* tail;    // last  node in the list (nullptr if empty)

public:
    // ---------- Constructor ----------
    th()
        : head(nullptr)   // list starts empty: head points to nothing
        , tail(nullptr)   // list starts empty: tail points to nothing
    {
        // Constructor body empty; all init done in the initializer list above.
        // When this runs, you have an empty list: head == nullptr, tail == nullptr.
    }

    // ---------- Destructor ----------
    ~th() {
        // Goal: free ALL heap-allocated nodes to avoid memory leaks.
        // Strategy: walk from head to tail, delete each node.

        node* cur = head;            // start at the first node
        while (cur != nullptr) {     // while we still have nodes
            node* next = cur->next;  // remember the next node (before delete)
            delete cur;              // free the current node
            cur = next;              // advance to the next node
        }

        // After the loop, the list is clear; set pointers to nullptr for safety.
        head = nullptr;
        tail = nullptr;
    }

    // ---------- Insert at the beginning (head) ----------
    void insert_at_begin(int da) {
        // 1) Allocate a new node on the heap.
        node* n = new node(da);   // data=da, prev=null (set below), next=null (set below)

        // 2) Link new node to current head.
        n->prev = nullptr;        // new head has no previous node
        n->next = head;           // its next is the current head (could be nullptr if empty)

        // 3) If the list was not empty, fix the old head's prev pointer.
        if (head != nullptr) {
            head->prev = n;       // old head now points back to the new node
        } else {
            // 4) If the list was empty, this new node is also the tail.
            tail = n;             // when inserting the very first node, head==tail==n
        }

        // 5) Finally, move head to the new node.
        head = n;
    }

    // ---------- Insert at the end (tail) ----------
    void insert_at_end(int da) {
        // 1) Allocate a new node
        node* n = new node(da);

        // 2) Link new node to current tail
        n->next = nullptr;        // new tail has no next
        n->prev = tail;           // its previous is the current tail (could be nullptr if empty)

        // 3) If list not empty, old tail should point forward to new node
        if (tail != nullptr) {
            tail->next = n;
        } else {
            // 4) If empty list, this new node is also the head
            head = n;
        }

        // 5) Move tail to the new node
        tail = n;
    }

    // ---------- Remove from the beginning ----------
    void pop_front() {
        if (head == nullptr) return;    // empty list: nothing to do

        node* n = head;                 // node to delete
        head = head->next;              // move head forward

        if (head != nullptr) {
            head->prev = nullptr;       // new head has no previous
        } else {
            tail = nullptr;             // list became empty; set tail to nullptr too
        }

        delete n;                       // free removed node
    }

    // ---------- Remove from the end ----------
    void pop_back() {
        if (tail == nullptr) return;    // empty list: nothing to do

        node* n = tail;                 // node to delete
        tail = tail->prev;              // move tail backward

        if (tail != nullptr) {
            tail->next = nullptr;       // new tail has no next
        } else {
            head = nullptr;             // list became empty
        }

        delete n;                       // free removed node
    }

    // ---------- Print from head to tail ----------
    void print_forward() const {
        const node* cur = head;         // start at head
        while (cur != nullptr) {
            std::cout << cur->data;
            if (cur->next) std::cout << " <-> ";
            cur = cur->next;            // advance forward
        }
        std::cout << "\n";
    }

    // ---------- Print from tail to head ----------
    void print_backward() const {
        const node* cur = tail;         // start at tail
        while (cur != nullptr) {
            std::cout << cur->data;
            if (cur->prev) std::cout << " <-> ";
            cur = cur->prev;            // advance backward
        }
        std::cout << "\n";
    }
};


// -------------------------------
// 3) Demo / Execution flow
// -------------------------------
int main() {
    th list;                 // Calls constructor: head=nullptr, tail=nullptr (empty list)

    list.insert_at_begin(60); // Create node(60). head==nullptr, tail==nullptr initially.
                              // n->prev=nullptr, n->next=head(nullptr), so n->next=nullptr.
                              // head==nullptr ⇒ else branch ⇒ tail = n.
                              // head = n. Now head=tail=node(60).

    list.insert_at_begin(90); // Create node(90).
                              // n->prev=nullptr, n->next=head(node 60).
                              // head != nullptr ⇒ head->prev = n (node 60 prev points to node 90).
                              // head = n. Now head=node(90), tail=node(60).
                              // Links: 90 <-> 60

    list.insert_at_end(120);  // Create node(120).
                              // n->next=nullptr, n->prev=tail(node 60).
                              // tail != nullptr ⇒ tail->next = n (node 60 next points to node 120).
                              // tail = n. Now tail=node(120).
                              // Links: 90 <-> 60 <-> 120

    std::cout << "Forward:   ";
    list.print_forward();     // Output: 90 <-> 60 <-> 120

    std::cout << "Backward:  ";
    list.print_backward();    // Output: 120 <-> 60 <-> 90

    list.pop_front();         // Remove node at head (node 90).
                              // head = node 60, head->prev=nullptr.
                              // List: 60 <-> 120; head=node(60), tail=node(120).

    list.pop_back();          // Remove node at tail (node 120).
                              // tail = node 60, tail->next=nullptr.
                              // List: 60; head=tail=node(60).

    std::cout << "After pops: ";
    list.print_forward();     // Output: 60

    // Exiting main: destructor ~th() runs.
    // It walks from head (node 60) to the end, deletes each node, sets head/tail=nullptr.
    return 0;
}
``

My_implementation

#include<iostream>


struct node
{
    int data;
    node *prev;
    node *next;
    
    node(int da , node *p = nullptr , node *nx = nullptr):data(da),prev(p),next(nx)
    {
        
    }
};

class List 
{
    node *head;
    node *tail;
    
    public:
    
    List():head(nullptr),tail(nullptr) 
    {
        
    }
    
    ~List()
    {
        node *cur = head ;
        
        if (cur != NULL)
        {
            node *next=cur->next;
            delete cur;
            cur = next;
        }
        
        head = nullptr;
        tail = nullptr;
    }
    
    void insert_at_begin(int x)
    {
        node *n = new node(x);
        
        n->prev=NULL;
        n->next=head;
        
        if (head!=NULL)
        {
            head->prev=n;
        }
        else 
        {
           tail=n;
        }
        
        head=n;
    }
    
    void insert_at_end(int x)
    {
        node *n = new node(x);
        
        n->next =NULL;
        n->prev=tail;
        
        if (tail !=nullptr)
        {
            tail->next=n;
        }
        else
        {
            head=n;
        }
        tail = n;
    }
    
    void print_forward() const
    {
        node *cur = head ;
        
        while (cur != NULL)
        {
            std::cout << cur->data  ;
            if (cur->next) std::cout << " <-> " ; 
            {
                cur=cur->next;
            }
        }
        
        std::cout << "\n";
    }
    
};

int main()
{
    List tom;
    tom.insert_at_end(100);
    tom.insert_at_begin(1);
    tom.print_forward();
}


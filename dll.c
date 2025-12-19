dll.c 
notes and code



internal helpers are similar to encapsulation as like in c++

  that the list uses behind the scenes to do common subtasks.
  Why use internal helpers?

Encapsulation: Hide implementation details so the public API stays clean.
Reuse: Avoid duplicating tricky pointer logic in multiple places.
Safety: Centralize checks (e.g., NULL, bounds), reducing bugs.
Maintainability: Easier to modify internals without changing the API.



Think fo two logic one as node and other is list 

struct node         {so whenever u want to store an data it should be in node format . 
{                     so for that we create an function known as internal helper to   
int data ;           create an new node . it will be pointer of node }
node *prev;
node *next;
}

struct list          {So here the head and tail are store the address of the first and last node }
{                    { It is our duty to keep update the head and tail whenever changes made } 
node *head;
node *tail;
size_t size;
}











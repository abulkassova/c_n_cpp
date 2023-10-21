#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED


struct list {
    int info;
    struct list* next;
};

struct list*  push_front(struct list* , int);
struct list* push_back (struct list* , int);
struct list* remove_first(struct list*);
void dispose(struct list*);
void print(struct list*);


#endif
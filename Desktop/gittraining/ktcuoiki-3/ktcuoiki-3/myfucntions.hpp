#ifndef myfucntions_hpp
#define myfucntions_hpp

#include <iostream>
using namespace std;
struct node{
    node *pnext;
    int data;
};
struct queue{
    node *phead;
    node *ptail;
};

void push( queue & q, node *p);

void top(queue &q);

int pop(queue &q);

void init(queue &q );
node* CreateNode(int x);
void output( queue &q);
void nhapdanhsach(queue &q);
#endif /* myfucntions_hpp */

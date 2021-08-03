#ifndef myfucntions_hpp
#define myfucntions_hpp

#include <iostream>
using namespace std;

struct node{
    node* pnext;
    int data;
};

bool isEmpty(node *s);

void push(node*&s, int data);

int pop(node *&p);

void top(node *p);

node* createnode(int x);

void output(node *s);
void create(node *&s);
void nhapmang(node *&s);
#endif /* myfucntions_hpp */

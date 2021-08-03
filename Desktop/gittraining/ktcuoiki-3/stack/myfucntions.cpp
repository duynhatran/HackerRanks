#include "myfucntions.hpp"


node* createnode(int x){
    node* p = new node;
    if(p==NULL){
        return NULL;
    }
    p->data = x;
    p->pnext = NULL;
    return p;
}
void top(node *p){
    if(!isEmpty(p)){
        cout <<p->data<<endl;
    }
}
//isempty
//push
//pop
//top
void create(node *&top){
    top = NULL;
}
bool isEmpty(node *top){
    return (top == NULL);
}
void push(node *&top, int data){
    node *t = new node;
    t->data = data;
    t->pnext = NULL;
    if(isEmpty(top)) top = t;
    else{
        t->pnext = top;
        top = t;
    }
}
void nhapmang(node *&top){
    int n,x;
    cout<<"Nhap so phan tu: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout<<"nhap gia tri cho phan tu: ";
        cin>>x;
        push(top, x);
    }
}
int pop(node *&top){
    if(!isEmpty(top)){
        node *p = top;
        top = top->pnext;
        cout << p->data <<endl;
        delete p;
    }
    return 0;
}

void output(node *top){
    node *ptr = top;
    while(ptr != NULL){
        cout <<ptr->data <<"->";
        ptr = ptr->pnext;
    }
    if(ptr == NULL){
        cout <<"NULL"<<endl;
    }
}


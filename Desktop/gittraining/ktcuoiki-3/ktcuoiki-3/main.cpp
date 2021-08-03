#include "myfucntions.hpp"
int main( ){
    queue q;
    init(q);    
    node* p = CreateNode(3);
    node* t = CreateNode(4);
    push(q, p);
    push(q, t);
    nhapdanhsach(q);
    top(q);
    pop(q);
    output(q);


    delete t;
    return 0;
}

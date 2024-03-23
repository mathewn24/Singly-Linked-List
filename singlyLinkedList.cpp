#include<iostream>

class Node {
    public:
    int Value;
    Node* Next;
};

void printList(Node* n){
    while(n!= nullptr){
        std::cout << n->Value << std::endl;
        n = n->Next;
    }
}

int main(){
    
    return 0;
}
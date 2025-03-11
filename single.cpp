#include <iostream>

using namespace std;

class node
{
  public:
    int val;
    node* next;
    
    node(int v) : val(v), next(nullptr) {}
};

class list
{
  public :
    node *l = nullptr;
    
    void create(int v)
    {
        node* newN = new node(v);
        newN -> next = l;
        l = newN;
    }
    
    void print()
    {
        node* temp = l;
        while(temp != nullptr)
        {
            cout << temp -> val << " ";
            temp = temp -> next;
        }
    }
    
    ~list()
    {
        node* curr = l;
        while(curr != nullptr)
        {
            node* n = curr -> next;
            delete curr;
            curr = n;
        }
    }
};

int main() 
{
    list *newL = new list();
    for(int i = 0; i < 5; i++)
    {
        newL -> create(i);
    }
    
    newL->print();
    delete newL;
    return 0;
}

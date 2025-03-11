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
        node* newN = new node(v), *last;
        if(l == nullptr)
        {
            last = newN;
            last -> next = newN;
            l = newN;
        }
        else
        {
            last -> next = newN;
            newN -> next = l;
            l = newN;
        }
    }
    
    void print()
    {
        node* temp = l;
        do
        {
            cout << temp -> val << " ";
            temp = temp -> next;
        }while(temp != l);
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
    return 0;
}

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <stack>
#include <iterator>
#include <string>


using namespace std;

class Stack{
    private :
    int taille;
    int *file;
    int last_element_id;

    public :
    Stack(int t=20){
        taille = t;
        last_element_id = -1;
        file = new int[taille];
    }
    ~Stack(){
        delete[] file;
    }
    void push(int n)
    {
        if(last_element_id == taille -1) cout << "la file est plaine !";
        else 
        {
            last_element_id++;
            file[last_element_id]=n;
        }
    }
    int pop()
    {
        int n=file[last_element_id];
        last_element_id--;
        return n;
    }

    Stack& operator<<(int n)
    {
        push(n);
    }

    Stack& operator>>(int n)
    {
        int n=file[last_element_id];
        last_element_id--;    
    }
    
    Stack& operator++()
    {
        int boul;
        if(last_element_id==-1)
        {
            boul=1;
        }
        else
        {
            boul=0;
        }
        return *this;
    }

    Stack& operator--()
    {
        bool boul;
        if(last_element_id==-1)
        {
            boul=1;
        }
        else
        {
            boul=0;
        }
        return *this;

    }

};

int main()
{

}


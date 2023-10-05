#include<iostream>
#include<list>

using namespace std;

typedef struct Node
{
    int value;
    struct Node *next;
}Node;


int main(int argc, char const *argv[])
{
    
    list<int> array;
    array.push_back(2);
    array.push_back(5);
    array.push_back(7);
    array.push_back(4);

    // for (list<int> :: iterator it = array.begin(); it != array.end(); it++)
    // {
    //     cout<<"i ="<<*it<<endl;
    // }

    for( auto i : array){

        cout<<"i= "<<i<<endl;
    }
    
    return 0;
}

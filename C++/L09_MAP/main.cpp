#include<iostream>
#include<map>
#include<string>

using namespace std;

typedef struct 
{
    string name;
    int age;
}information;

int main(int argc, char const *argv[])
{
    map<int, information> students;

    students[100] = information{"Hoang", 20}; //  {"Hoang", 20};
    students[101] = information{"Tuan", 21};  //  {"Tuan", 21};
    students[105] = information{"Ha", 22};   //  {"Ha", 22};

    for(auto item : students){

        cout<<endl<<"ID = "<<item.first<<", Name: "<< item.second.name<<", age: "<<item.second.age<<endl;
    }
    return 0;
}

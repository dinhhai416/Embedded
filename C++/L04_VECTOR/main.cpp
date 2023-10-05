#include<iostream>
#include<vector>
#include<stdint.h>

using namespace std;

// void Count(vector<int> &v){

//     v.at(0)=10;

// }

vector<int> Count(){

    vector<int> v ={1,8,9};
    return v;

}

int main(int argc, char const *argv[])
{
    
    vector<int> v = {1,7,4,8,3};

    vector<int> v1 = {7,9,4,2};

    //  v.push_back(7);

    // v.emplace_back(9);             // them phan tu 9 vao cuoi vector v

    // v.swap(v1);                      // chuyen doi giua hai vector v va v1

    // v.pop_back();

    // v.insert(v.begin() + 2,9);

    // v.erase(v.begin() + 1);

    // v. clear();

    // v.assign(3,5);

    // v = Count();

    // v1.assign(v.begin() + 1, v.end() - 1);   // / Gán phần tử từ v[1] đến v1[3] vào v2

    // for (int num : v1)                        // vong for cai tien
    // {
    //     cout<<" "<< num;
    // }
    
    // for (uint8_t i = 0; i < v1.size(); i++)
    // {
    //      cout<<v[i];
    // }

    for (std:: vector<int>::iterator i = v1.begin(); i < v1.end(); i++)
    {
        std::cout<<*i<<std::endl;
    }

    for ( vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
    {
        std::cout<<*i<<std::endl;
    }
    
    return 0;
}

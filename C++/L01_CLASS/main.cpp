#include<iostream>
#include<string>

using namespace std;

class SinhVien{

    public:
        SinhVien(string ten, int nam_sinh, string lop){                       // Constructors with the input paramaters;

                TEN = ten;
                LOP = lop;
                NAM_LINH = nam_sinh;                                                               
                id = 1000;                                       // declare id with the key "static" will free memory id when the end of program
                ptr = &id;                                                  
                MSSV = id;
                id++;
        }
        ~SinhVien(){                                                      //Destructor : pha huy
            
                cout <<"THOAT TEN : "<< TEN << endl;
                //*ptr = 1000;

                cout <<"ID " <<  id << endl;
        }
        static int id ;                           // property khai bao static
        int *ptr;
        int MSSV;                                // property
        string TEN;                             // property
        string LOP;                             // property
        int NAM_LINH;                          // property
        void display(){                       //method
                cout << "MSSV: " << MSSV <<endl;
                cout << "TEN :"  << TEN <<endl ;
                cout << "LOP: " << LOP <<endl;
                cout << "NAM_LINH: " << NAM_LINH <<endl;
                cout << "TUOI: " << 2023 - NAM_LINH <<endl;
        }
};

int SinhVien::id ;

void test1(){

       SinhVien sv1("Hoang",2001,"CDT50");                         // Instance: Một Object thể hiện cụ thể.
       SinhVien sv2("Kiet",1999,"KHMT20");
       sv1.display();
       printf("----------\n");
       sv2.display();
}

void test2(){

       SinhVien sv1("Hoang",2001,"CDT50");
       SinhVien sv2("Kiet",1999,"KHMT20");
       sv1.display();
       printf("----------\n");
       sv2.display();
}

int main(int argc, char const *argv[])
{
    //test1();
    std::cerr << "This is an error message." << std::endl;
    printf("----------\n");
    //test2();

    return 0;
}

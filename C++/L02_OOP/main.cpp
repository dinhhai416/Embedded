#include<iostream>
#include<string>

using namespace std;

class DoiTuong{
    protected:
            string TEN;
            int TUOI;
    public:
            void SetInformation(string ten, int tuoi);
            void Display();

};

void DoiTuong :: SetInformation(string ten, int tuoi){
    this->TEN = ten;                                    // the term 'this' is pointer of class DoiTuong 
    this->TUOI = tuoi;
}
void DoiTuong :: Display(){
    cout<<"Ten: "<<TEN<<endl;
    cout<<"Tuoi: "<<TUOI<<endl;
}

class SinhVien : protected DoiTuong{
    private:
            int MSSV;
    public:
            void SetInformation1(string ten, int tuoi, int mssv);    // Kieu or phuong phap ghi de trong tinh ke thua cua OOP
            void Display1();
    
};

void SinhVien::SetInformation1(string ten, int tuoi, int mssv){

    this->TEN = ten;
    this->TUOI = tuoi;
    this->MSSV = mssv;

}

 void SinhVien:: Display1(){

    cout<<"Ten: "<<TEN<<endl;
    cout<<"Tuoi: "<<TUOI<<endl;
    cout<<"MSSV: "<<MSSV<<endl;

 }

 /////////////////////////////////////////////////

 class ToanHoc{
    public:
            void Tong(int a, int b){
                cout<<"Tong a va b: " <<a+b<<endl;
            }
            void Tong(int a, int b, int c){
                cout<<"Tong a, b va c: " <<a+b+c<<endl;
            }
            int Tong(int a, double b){
                return a+(int)b;
            }
 };


int main(int argc, char const *argv[])
{
  
   ToanHoc sv;

    sv.Tong(8,9);
     
    sv.Tong(2,9,9);

    cout<<"Tong a va b: "<<sv.Tong(5,14.6)<<endl;
    

    return 0;
}

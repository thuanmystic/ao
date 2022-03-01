#include<iostream>
using namespace std;
class nguoi
{
private:
    string hoten;
public:
    virtual void nhap();
    virtual void in();
};
void nguoi::nhap(){
    cout<<"nhap vao ho ten ";
    getline(cin, hoten);
}
void nguoi::in(){
    cout<<hoten<<endl;
}
class giaovien: public nguoi{
    private:
        int tuoi;
    public:
        void nhap();
        void in();
};
void giaovien::nhap(){
    nguoi::nhap();
    cout<<"nhap vao tuoi cua giao vien: "; cin>>tuoi;
}
void giaovien::in(){
    nguoi::in();
    cout<<" "<<tuoi;
}
int main(){
    nguoi *a; 
    a=new giaovien();
    a->nhap();
    a->in();
    return 0;
}
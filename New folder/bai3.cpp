#include<iostream>
#include<iomanip>
using namespace std;
#define MAX 100

class bai3
{
protected:
    float a[MAX][MAX];
    int n;
public: 
    virtual void nhap();
    virtual void in();
};
void bai3::nhap(){
    cout<<"nhap vao co cua ma tran vuong n= ";
    do
    {
        cin>>n;
    } while (n<1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"nhap vao gia tri thu a["<<i<<"]"<<"["<<j<<"]";
            cin>>a[i][j];
        }
    }
}
void bai3::in(){
    cout<<"cap cua ma tran da nham la "<<n<<"x"<<n<<endl;
}
class b437: public bai3{
    public:
        void in();
        
};
template<class T>
void doicho(T &x,T&y){
    T z;
    z=x;x=y;y=z;
}
    void b437::in(){
        for(int i=0;i<n*n-1;i++){
            for(int j=i+1;j<n*n;j++){
                if(a[i/n][i]>a[j][j]){
                    doicho(a[i][i],a[j][j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cout<<setw(10)<<a[i][j];
        }
        cout<<endl;
    }
}   
class b438: public bai3{
    public: 
        void in();
};
    void b438::in(){
     int tong1 = 0;
      int tong = 0;
      for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            tong += a[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            tong1 += a[i][j];
        }
    }
    
   cout <<"tong tam gia tren duong cheo chinh " <<tong<<endl;
   cout <<"tong tam gia tren duong cheo phu " <<tong1;
}
class b439: public bai3{
    public: 
        void in();
};
    void b439::in(){
     int tong1 = 0;
      int tong = 0;
      for(int i = 1; i < n; i++)
    {
        for(int j = i - 1; j >= 0; j--)
        {
            tong += a[i][j];
        }
    }
    

    for(int i = 1; i < n; i++)
    {
        for(int j = n - i; j < n; j++)
        {
            tong1 += a[i][j];
        }
    }
    
   cout <<"tong tam gia duoi duoi duong cheo chinh " <<tong<<endl;
   cout <<"tong tam gia duoi duoi duong cheo phu " <<tong1;
    }
int main(){
    bai3 *a;
    cout<<"chon de bai can tinh\n  1:bai 437;\n 2:bai438;\n 3:bai439. ";
    int chon;
    cin>>chon;
    switch(chon){
        case 1:
            a = new b437;
            break;
        case 2:
            a=new b438;
            break;

        case 3:
            a=new b439;
            break;
        default:
            cout<<"ban chon sai chuc nang";
    }
    a->nhap();
    a->in();
    
    return 0;
}
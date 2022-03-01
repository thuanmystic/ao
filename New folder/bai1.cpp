#include<iostream>
using namespace std;
class bai1
{
private:
    int a[100][100];
    int i,j,m,n,dem;
public:
    void nhap();
    void in();
    int demm();
};
void bai1::nhap(){
    
    cout<<"nhap vao so cot ma tran: ";
    cin>>m;
    cout<<"nhap vao so cot ma tran: ";
    cin>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"nhap vap phan tu thu a["<<i<<"]"<<"["<<j<<"]";
            cin>>a[i][j];
        }
    }
}
int bai1::demm(){
    dem=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j] % 2 != 0){
                dem++;
            }
        }
    }
    return dem;
}
void bai1::in(){
    cout<< demm()<<endl;
}
int main(){
    bai1 a;
    a.nhap();
    a.in();
    return 0;
}

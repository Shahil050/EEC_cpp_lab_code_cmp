#include<iostream>
using namespace std;
class Matrix3{
    private:
        double A[3][3];

    public:
        void read();
        void print();
        Matrix3 add(Matrix3 m);
        
};
void Matrix3::read(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>A[i][j];
        }
    }
}

void Matrix3::print(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }

}
Matrix3 Matrix3::add(Matrix3 m){
    Matrix3 sum;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum.A[i][j]=A[i][j]+m.A[i][j];
        }
    }
    return sum;
}

int main(){
    Matrix3 m1,m2,m3;
    cout<<"Enter a 3*3 matrix:"<<endl;
    m1.read();
    cout<<"Enter a 3*3 matrix:"<<endl;
    m2.read();
    m3=m2.add(m1);
    cout<<"Sum of matrix m1 and m2 is:"<<endl;
    m3.print();
   
    return 0;
}
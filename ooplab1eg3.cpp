#include<iostream>
using namespace std;
class Matrix3{
    private:
        double A[3][3];

    public:
        void read();
        void print();
        Matrix3 scalarmul(int);
       
        
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
Matrix3 Matrix3::scalarmul(int k){
    Matrix3 scalar;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scalar.A[i][j]=k*A[i][j];
        }
    }
    return scalar;
}


int main(){
    Matrix3 m1;
    int k;
    cout<<"Enter a 3*3 matrix:"<<endl;
    m1.read();
    cout<<"The given matrix is "<<endl;
    m1.print();
    cout<<"Enter the scalar number:"<<endl;
    cin>>k;
    Matrix3 m2=m1.scalarmul(k);
    cout<<"Matrix after scalar Multiplication is:"<<endl;
    m2.print();
    return 0;
}
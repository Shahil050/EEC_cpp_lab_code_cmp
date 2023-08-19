#include<iostream>
using namespace std;
class Matrix3{
    private:
        double A[3][3];

    public:
        void read();
        Matrix3 transpose();
        void print();
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
Matrix3 Matrix3::transpose(){
    Matrix3 tp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tp.A[i][j]=A[j][i];
        }
    }
    return tp;
}
int main(){
    Matrix3 m;
    cout<<"Enter a 3*3 matrix:"<<endl;
    m.read();
    cout<<"Your entered matrix is"<<endl;
    m.print();
    cout<<"Transpose of entered matrix is"<<endl;
    Matrix3 t=m.transpose();
    t.print();
    return 0;
}
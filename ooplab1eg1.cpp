#include<iostream>
using namespace std;
class Matrix3{
    private:
        double A[3][3];

    public:
        void read();
        double trace();
        void print();
};
void Matrix3::read(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>A[i][j];
        }
    }
}
double Matrix3::trace(){
    double sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+A[i][j];
        }
    }
    return sum;
}
void Matrix3::print(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }

}
int main(){
    Matrix3 m;
    cout<<"Enter a 3*3 matrix:"<<endl;
    m.read();
    cout<<"Matrix is: "<<endl;
    m.print();
    cout<<"Trace="<<m.trace()<<endl;
    return 0;
}
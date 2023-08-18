#include<iostream>
using namespace std;
class fraction{
    private:
        float numerator;
        float denominator;

    public:
        void read();
        void print();
        void decimal();
        fraction sum(fraction);

};
void fraction::read(){
    cin>>numerator>>denominator;
}
void fraction::print(){
    cout<<numerator<<"/"<<denominator;
}
void fraction::decimal(){
    cout<<numerator/denominator;
}
fraction fraction::sum(fraction a2){
    fraction a;
    a.numerator=(a2.denominator)*(numerator)+denominator*a2.numerator;
    a.denominator=denominator*a2.denominator;
    return a;
}
int main(){
    fraction a1,a2;
    cout<<"Enter first numerator and denominator:"<<endl;
    a1.read();
    cout<<"\nYour first entered fractional number is:";
    a1.print();
    cout<<"\nEnter second numerator and denominator:"<<endl;
    a2.read();
    cout<<"\nYour second entered fractional number is:";
    a2.print();
    cout<<"\nYour first entered fractional number in decimal is:";
    a1.decimal();
    cout<<"\nSum of first and second number is in fraction is:";
    fraction s=a1.sum(a2);
    s.print();
    return 0;
}
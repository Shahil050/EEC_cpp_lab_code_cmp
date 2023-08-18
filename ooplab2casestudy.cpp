#include<iostream>
#include<fstream>
#include<cassert>
using namespace std;
class student{
    private:
        int roll_no;
        string name;
        float marks;

    public:
        void print();
        float get_marks();
        ifstream& read_from_file(ifstream&);
        void highest_marks();
};
while(st.read_from_file(fin)){
        // st.print()
        total_marks=total_marks+st.get_marks();
        n_students++;
    }

void student::print(){
    cout<<"Roll number= "<<roll_no<<endl;
    cout<<"Name= "<<name<<endl;
    cout<<"Marks= "<<marks<<endl;
}
float student::get_marks(){
    return marks;
}
ifstream& student::read_from_file(ifstream& fin){
    fin>>roll_no;
    fin>>name;
    fin>>marks;
    return fin;
}
int main(){
    ifstream fin("students.txt");
    if(!fin){
        cerr<<"Could not open file."<<endl;
        exit(0);
    }
    student st;
    float total_marks=0;
    float average_marks=0;
    int n_students=0;
    while(st.read_from_file(fin)){
        st.print();
        total_marks=total_marks+st.get_marks();
        n_students++;
    }
    average_marks=total_marks/n_students;
    cout<<"Average marks of students = "<<average_marks<<endl;
    fin.close();
    return 0;


}

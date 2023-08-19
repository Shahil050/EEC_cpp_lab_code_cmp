/*
5. Suppose you are developing a software that
helps tourists to navigate in the Kathmandu

valley. Your software would provide informa-
tion about different spots in the valley where

tourists may be interested. Spots could be
temples, monasteries, traditional market places,
restaurants, and so on. Declare a C++ class to

represent tourist spots and attempt the follow-
ing problems.

(a) Add member functions to read and print
the class objects.
(b) Add an attribute “rating” to the class (if
you haven’t). Rating here is a number
to capture the average perception of the
tourists. Then, add a member function to
change the rating of a tourist spot.
*/

#include<iostream>
using namespace std;
class Tourist_Spot_Finder{
    private:
        int rating = 0;
        string name;
        string location;
        string type;

    public:
        Tourist_Spot_Finder(string,string,int,string);
        void read(string,string,int,string);
        void print();
        void set_rating(int);
        int get_rating();

};
int Tourist_Spot_Finder::get_rating(){
    return rating;
}
Tourist_Spot_Finder::Tourist_Spot_Finder(string place_name,string place_location,int rating1,string type1){
    name=place_name;
    location=place_location;
    rating = rating1;
    type = type1;
}
void Tourist_Spot_Finder::read(string place_name,string place_location,int place_rating,string type1){
    name=place_name;
    location = place_location;
    rating=place_rating;
    type=type1;
}
void Tourist_Spot_Finder::print(){
    cout<<"Name of the spot: "<<name<<endl;
    cout<<"Location of the spot: "<<location<<endl;
    cout<<"Rating: "<<rating<<endl;
    cout<<name<<" is a "<<type;
    cout<<endl;
}
void Tourist_Spot_Finder::set_rating(int rating1){
    rating=rating1;
}
int main(){
    Tourist_Spot_Finder A("Patan_Darbar","Patan",4,"traditional place");
    A.print();
    cout<<"Give the rating from 1-5:"<<endl;
    int rating;
    cin>>rating;
    A.set_rating(rating);
    cout<<"You have rated ";
    int r=A.get_rating();
    cout<<r<<endl;
    return 0;
}
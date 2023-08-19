#include<iostream>
using namespace std;

int floorSearch(int arr[],int low,int high,int x){
    if(x<=arr[low]){
        return low;
    }
    else{
        for(int i=low;i<high;i++){
            if(arr[i]==x)
            return i;
            
            if(arr[i]<x && arr[i+1]>=x)
            return i;
        }
    }
    return -1;
}
int main(){
    int num;
    cout<<"Enter number of array:";
    cin>>num;
    cout<<"Enter "<<num<<" elements"<<endl;
    int *arr=new int[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"You have entered:"<<endl;
    for(int i=0;i<num;i++){
        cout<<arr[i];
        cout<<"\t";
    }
    cout<<endl;
    int x=3;
    int index=floorSearch(arr,0,num-1,x);
    if(index==-1){
        cout<<"floor of "<<x<<" doesn`t exixt in your array"<<endl;
    }
    else{
        cout<<"floor of "<<x<<" is "<<arr[index];
        return 0;
    }
}



// int ceilSearch(int arr[],int low,int high,int x){
//     if(x<=arr[low]){
//         return low;
//     }
//     else{
//         for(int i=low;i<high;i++){
//             if(arr[i]==x)
//             return i;
            
//             if(arr[i]<x && arr[i+1]>=x)
//             return i+1;
//         }
//     }
//     return -1;
// }


// int main(){
//     int num;
//     cout<<"Enter number of array:";
//     cin>>num;
//     cout<<"Enter "<<num<<" elements"<<endl;
//     int *arr=new int[num];
//     for(int i=0;i<num;i++){
//         cin>>arr[i];
//     }
//     cout<<endl;
//     cout<<"You have entered:"<<endl;
//     for(int i=0;i<num;i++){
//         cout<<arr[i];
//         cout<<"\t";
//     }
//     cout<<endl;
//     int x=3;
//     int index=ceilSearch(arr,0,num-1,x);
//     if(index==-1){
//         cout<<"floor of "<<x<<" doesn`t exixt in your array"<<endl;
//     }
//     else{
//         cout<<"floor of "<<x<<" is "<<arr[index];
//         return 0;
//     }
// }
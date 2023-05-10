#include <iostream>
using namespace std;

struct array{
    int *p;  //dynamic memory allocation using pointer 
    int size;
    int length;
};

void display(struct array arr){
    int i;
    cout<< "elements are \n";
    for(i=0;i<arr.length;i++){
        cout<<arr.p[i] <<" ";
    }
}

int main(){
    struct array arr;
    int n,i;
    cout<<"Enter size of an array"<<endl;
    cin>>arr.size;
    cout<<endl;
    
    arr.p = new int(arr.size);   
    arr.length = 0;
    
    cout<<"enter number of numbers"<<endl;
    cin>>n;
    
    cout<<"enter all elements \n";
    for(i=0;i<n;i++){
        cin>>arr.p[i];
    }
    
    arr.length=n;
    
    display(arr);
    
    return 0;
}

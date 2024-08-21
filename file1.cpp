#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Input dimensions of matrix"<<endl;
    cin>>a>>b;
    cout<<"Enter entries row wise"<<endl;
    int array[a][b];


    for(int j=0;j<a;j++)
    {
        for(int i=0;i<b;i++){
        cin>>array[j][i];
    }
    }
    cout<<"Your given matrix is "<<endl;
     for(int j=0;j<a;j++){
        for(int i=0;i<b;i++){
        cout<<array[j][i];
        cout<<"   ";
    }
    cout<<""<<endl;
    }
    return 0;
}
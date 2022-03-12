#include <iostream>
using namespace std;
int main(){
	int size;
    cout<<"sheiyvanet gverdis sigrdze"<<endl;

    cin>>size;

    for(int i=1; i<=size;i++){
        for(int b=size; b>i; b--){

            cout<<" ";

        }

        for(int k=1;k<=i;k++){
            
            cout<<"* ";
            
        }
        cout<<endl;
    }
    for(int i=0;i<size-2;i++){
        for(int b=0;b<size;b++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=size; i>=0; i--){
        for(int b=size; b>i; b--){
            cout<<" ";
        }

         for(int k=1;k<=i;k++){
            cout<<"* ";
            
        }
        cout<<endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n , j;
    cout<<"enter number of row";
    cin>>n;
    int a=1 ; 
         ;
    for(int i = n ; i>=1 ; i--){
        
        for( j  =1 ; j<=i-1 ; j++){
            cout<<" ";
        }
        for(int k = 1 ; k <= a ; k++ ){
            cout<<k<<" ";
        }
            cout<<endl;
            a++;
        
    cout<<"\n";
    }
}
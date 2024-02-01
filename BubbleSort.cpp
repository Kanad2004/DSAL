#include<iostream>
using namespace std;

void input(int A[],int n){
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
}

void bubble(int A[],int n){
    bool flag =false;
    for(int i=1;i<n;i++){
        //for round 1 to n-1

        for(int j=0;j<n-i;j++){
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
                flag=true;
            }
            
        }
        if(flag==false){
            break;
        }

    }

}
int main(){
    int n;
    cin>>n;
    int A[n];
    input(A,n);
    bubble(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
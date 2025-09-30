//EXPERIMENT-15
//NAME:GANDLURI SAI TEJAS
//PRN:24070123045
//ENTC A2

#include <iostream>
using namespace std;
int main() {
    float n1,n2,ans;
    cout<<"Enter values of numbers 1 and 2:";
    cin>>n1>>n2;
     try{
       if(n2==0){
           throw n2;
       } else{
           ans=n1/n2;
           cout<<"Answer = "<<ans<<endl;
       } 
     }
catch(float num){
    cout<<"\nERROR: Division by "<<num<<endl;
}
    return 0;
}


/*
Output:-
Enter values of numbers 1 and 2:2, 0

ERROR: Division by 0
*/

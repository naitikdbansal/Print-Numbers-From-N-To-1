#include <iostream>;
using namespace std;

int main(){
int n;

cout<<"Enter Your number : ";
cin>>n;

if(n>0){
for(int x=n ; x>=1 ; x--){
    cout<<x<<" ";
}
}
else{

for(int x=n ; x<=1 ; x++){
    cout<<x<<" ";

}

}


return 0;

}

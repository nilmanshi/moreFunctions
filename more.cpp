#include<iostream>
using namespace std;

bool checkprime(int n){
  for (int i=2  ;i <n; i++ ){
    if(n%i==0){
      return false;
    }
  }
  return true;
}




int main(){
 bool prime = checkprime(7);
  if (prime ){
    cout<<"it is a prime number ";
  }
  else{
    cout<<"it is not a prime number ";
  }
}
#include <iostream>
#include <string>
using namespace std;

int main(){
    string arr[]={"vivek","vikas","pranshu"};
for(int i=0;i<sizeof(arr);i++){
    cout<< i <<" position name is : "<<arr[i]<<endl;
}
}
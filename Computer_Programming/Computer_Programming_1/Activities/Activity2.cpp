#include <iostream>
using namespace std;

int main(){
    int elementLenght;
    cout<<"Enter The Number Of Elements: ";
        cin>>elementLenght;
    int array[elementLenght];
    for(int i = 0; i < elementLenght; i++){
        cout<<"Enter Element Number " << i+1 << ": ";
        cin>>array[i];
    }
    for(int i = 0; i < elementLenght; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
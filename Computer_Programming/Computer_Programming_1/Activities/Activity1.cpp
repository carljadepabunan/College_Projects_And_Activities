#include <iostream>
using namespace std;

int main(){
    string studentName;
    char gradeInput;
    cout<<"Input Your Surname : ";
        cin>>studentName;
    cout<<"Input Your Grade : ";
        cin>>gradeInput;
    if(gradeInput == 'A' || gradeInput == 'a'){
        cout<<"Hello "<<studentName<<"! Your Grade Is 91 - 100.";
    }else if(gradeInput == 'B' || gradeInput == 'b'){
        cout<<"Hello "<<studentName<<"! Your Grade Is 81 - 90.";
    }else if(gradeInput == 'C' || gradeInput == 'c'){
        cout<<"Hello "<<studentName<<"! Your Grade Is 71 - 80.";
    }else if(gradeInput == 'F' || gradeInput == 'f'){
        cout<<"Hello "<<studentName<<"! Your Grade Is 0 - 70 And You Failed.";
    }else{
        cout<<"Hello "<<studentName<<"! Not Applicable Please Input Letter A,B,C,F.";
    }
    return 0;
}
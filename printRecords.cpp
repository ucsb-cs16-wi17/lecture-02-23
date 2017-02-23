#include <iostream>
using namespace std;

#define NUMGPA 4
struct UndergradStudents{
    string firstName;
    string lastName;
    string major;
    double gpa[NUMGPA];
};
void printRecords(UndergradStudents records [], int numRecords);
int main(){
    UndergradStudents ug[3];
    ug[0]={"Joe","Shmoe","EE",{3.8,3.3,3.4,3.9}};
    ug[1]={"Macy","Chen","CS",{3.9,3.9,4.0,4.0}};
    ug[2]={"Peter","Patrick","ME",{3.8,3.0,2.4,1.9}};
    printRecords(ug, 3);

}
void printRecords(UndergradStudents records [], int numRecords){
    double avgGPA;
    for(int i=0; i< numRecords; i++){
        avgGPA=0;
        for(int j=0; j< NUMGPA; j++){
            avgGPA+=records[i].gpa[j]/NUMGPA;
        }
        cout<<"ID#"<<i<<", "<<records[i].lastName
            <<", "<<records[i].firstName<<" Avg GPA:"<<avgGPA<<endl;
    }
}

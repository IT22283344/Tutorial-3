#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  
 cout << "No" <<"\t\t\t"<< "Name" <<"\t\t\t\t"<< "Marks" << endl;
  
  for (int r = 0; r < 5; r++) {
 cout <<setw(2)<< setiosflags(ios::fixed)<< r+1<<"\t"
 <<setw(14)<< setiosflags(ios::fixed)<<names[r]<<"\t\t"
 << setw(15)<< setiosflags(ios::fixed)<<marks[r] << endl;
 }

}
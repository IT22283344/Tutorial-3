/*
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
*/

/*
#include <iostream>
using namespace std;
int volume(int height, int width, int length);
int main() {
 int box1Height, box1Width, box1Length;
 int box2Height, box2Width, box2Length;
 int totalVolume, totalSurface;

 cout << "Enter Box 1 Height : ";
 cin >> box1Height;
 cout << "Enter Box 1 Width : ";
 cin >> box1Width;
 cout << "Enter Box 1 Length : ";
 cin >> box1Length;

 cout << "Enter Box 2 Height : ";
 cin >> box2Height;
 cout << "Enter Box 2 Width : ";
 cin >> box2Width;
 cout << "Enter Box 2 Length : ";
 cin >> box2Length;

 totalVolume = volume(box1Height, box1Width, box1Length)+ volume(box2Height, box2Width, box2Length);

 cout << "Volume of Box is " << totalVolume << endl;
 
}
 int volume(int height, int width, int length)
 	{
 		int vol;
 		vol=height*width*length;
 		return vol;
	 }
*/

/*
#include <iostream>
using namespace std;
int volume(int height, int width, int length);

struct box{
	int height;
	int width;
	int length;
}box1,box2;

int main() {

 int totalVolume, totalSurface;

 cout << "Enter Box 1 Height : ";
 cin >> box1.height;
 cout << "Enter Box 1 Width : ";
 cin >> box1.length;
 cout << "Enter Box 1 Length : ";
 cin >> box1.width;

 cout << "Enter Box 2 Height : ";
 cin >> box2.height;
 cout << "Enter Box 2 Width : ";
 cin >> box2.length;
 cout << "Enter Box 2 Length : ";
 cin >> box2.width;

 totalVolume = volume(box1.height, box1.length, box1.width)+ volume(box2.height, box2.length, box2.width);

 cout << "Volume of Box is " << totalVolume << endl;
 
}
 int volume(int height, int width, int length)
 	{
 		int vol;
 		vol=height*width*length;
 		return vol;
	 }
*/


#include <iostream>
using namespace std;
void print(int len, int wth);
void input(int &len, int &wth);
// Do not change the main() function
int main() {
 int length = 10, width = 5;
 input(length, width);
 print(length, width);
 return 0;
}
// Do not change the print() function
void print(int len, int wth) {
 cout << "Length : " << len<< ", Width : " << wth << endl;
}

void input(int &len, int &wth){
	cout<<"Enter length :";
	cin>>len;
  cout<<"Enter Width :";
	cin>>wth;

}
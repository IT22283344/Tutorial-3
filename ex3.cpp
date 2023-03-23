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

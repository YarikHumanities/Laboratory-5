#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define rad = 6367444.65;
class Location {
public:
	double latitude;
	double longitude;
	string type;
	string subtype;
	string name;
	string address;
	Location(double latitude, double longitude, string type, string subtype, string name, string address) :
		latitude(latitude), longitude(longitude), type(type), subtype(subtype), name(name), address(address){}
};
class Rectangle {
public:
	Location up_left;
	Location down_left;
	Location up_right;
	Location dowm_right;
	Rectangle(Location leftDown, Location leftUp, Location rightDown, Location rightUp) : 
		up_left(leftUp), dowm_right(rightDown), up_right(rightUp), down_left(leftDown) {}

	double lenght(double longitude1, double latitude1, double longitude2, double latitude2) {
		double x1= (longitude1*2*acos(0.0))/180;
		double y1= (latitude1*2*acos(0.0))/180;
		double x2= (longitude2*2*acos(0.0))/180;
		double y2= (latitude2*2*acos(0.0))/180;
		
		double result = 2 * asin(sqrt(pow(sin((x2 - x1) / 2), 2) + cos(x2) * cos(x1) * pow(sin((y2 - y1) / 2), 2)));
	}
};
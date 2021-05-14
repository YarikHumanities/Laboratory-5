#include <iostream>
#include <string>
using namespace std;
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

};
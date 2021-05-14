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
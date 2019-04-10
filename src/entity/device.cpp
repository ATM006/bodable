#include "device.h"
#include <iostream>

using namespace std;

bool device::set_id(int id)
{
	cout<<"bool device::set_id(int id)"<<endl;
	_id = id;
	return _id;
}

bool device::set_name(char* name)
{
	return true;
}
bool device::set_token(char* token)
{
	return true;
}
bool device::set_site_name(char* site_name)
{
	return true;
}
bool device::set_site_token(char* site_token){return true;}

int device::get_id()
{ 
	return _id; 
}
//char* device::get_name(){return "xxx";}
//char* device::get_token(){return "xxx";}
//char* device::get_site_name(){return "xxx";}
//char* device::get_site_token(){return "xxx";}

int main()
{
	int id = 123;
	char* name = "xyz";
	char* token = "token";
	device dev(id, name, token);
	dev.set_id(1000);
	int new_id = dev.get_id();
	cout<<"new_id:"<<new_id<<endl;

}



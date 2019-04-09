#ifndef _DEVICE_H_
#define _DEVICE_H_
#include <string>

class device
{
	private:
	    device(int id, string name, string token);
		device(int id, string name, string token, string site_name, string site_token);
		~device();

	public:
		bool set_id(int id);
		bool set_name(string name);
		bool set_token(string token);
		bool set_site_name(string site_name);
		bool set_site_token(string site_token);

		int get_id();
		string get_name();
		string get_token();
		string get_site_name();
		string get_site_token();

	private:
		int _id;
		string _name;
		string _token;
		//Location _location;
		string _site_name;
		string _site_token;
		//DevData _dev_data;
		

	public:
		#todo
}


#endif

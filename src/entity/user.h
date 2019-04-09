#ifndef _USER_H_
#define _USER_H_
#include <string>

class user
{
	private:
		user(int id, string name, string token);
		#user(int id, string name, string token, string site_name, string site_token);
		~user();

	public:
		bool set_id(int id);
		bool set_name(string name);
		bool set_token(string token);
		bool set_site_list(int* site_list);

		int get_id();
		string get_name();
		string get_token();
		int* get_site_list();

	private:
		int _id;
		string _name;
		string _token;
		int* _site_list;

	public:
		#todo

}


#endif

#ifndef _DEVICE_H_
#define _DEVICE_H_

class device
{
	public:
		device(int id, char* name, char* token)
		{
			_id = id;
			_name = name;
			_token = token;
		}
		//device(int id, char* name, char* token, char* site_name, char* site_token);
		~device(){}

	public:
		bool set_id(int id);
		bool set_name(char* name);
		bool set_token(char* token);
		bool set_site_name(char* site_name);
		bool set_site_token(char* site_token);

		int get_id();
		//char* get_name();
		//char* get_token();
		//char* get_site_name();
		//char* get_site_token();

	private:
		int _id;
		char* _name;
		char* _token;
		//Location _location;
		char* _site_name;
		char* _site_token;
		//DevData _dev_data;


}


#endif

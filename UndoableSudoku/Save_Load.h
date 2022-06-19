#pragma once
#include "Board.h"

class Save_Load
{
private:
	string const path = "save_load/";
	vector <string> file;
public:
	Save_Load();
	void Save(Board*, string);
	void Load(Board*, string);
	void show_save_list();
};
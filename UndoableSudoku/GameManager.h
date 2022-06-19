#pragma once
#include "Invoker.h"
#include "Player.h"
#include "Save_Load.h"
using namespace std;

class GameManager
{
private:
	Board* board;
	Player* player;
	Invoker undo;
	Invoker redo;
public:
	GameManager(Board*, Player*);
	void Check_Cell();
	void Undo();
	void Redo();
	void Fill_Cell(int, int, int);
	void Delete_Cell(int, int);
	void Play();
	void Continue_Game();
	void Save_File();
	void Load_File();
};
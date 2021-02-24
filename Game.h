#pragma once
#include "Window.h"
class Game
{
public:
	Game();
	~Game();
	void HandleInput();
	void Update();
	void Render();
	Window* GetWindow();
private:
	void MoveCharacter();
	Window m_window;
};


#include "pch.h"
#include "Game.h"

#pragma region gameFunctions											
void Start()
{

}

void Draw()
{
	ClearBackground();
	DrawRectangles();
}

void Update(float elapsedSec)
{
	
}

void End()
{

}
#pragma endregion gameFunctions

#pragma region inputHandling											
void OnKeyDownEvent(SDL_Keycode key)
{

}

void OnKeyUpEvent(SDL_Keycode key)
{
	
}

void OnMouseMotionEvent(const SDL_MouseMotionEvent& e)
{
	
}

void OnMouseDownEvent(const SDL_MouseButtonEvent& e)
{

}

void OnMouseUpEvent(const SDL_MouseButtonEvent& e)
{

}
#pragma endregion inputHandling

#pragma region ownDefinitions
void DrawRectangles()
{
	for (int i = 0; i < 100; i++)
	{
		Rectf rect{ GenerateRandomRectf(g_WindowWidth, g_WindowHeight, 10.0f, 10.0f, 10.0f) };
		SetColor(GenerateRandomColor4f());
		FillRect(rect);
		SetColor(0.0f, 0.0f, 0.0f);
		DrawRect(rect);
		Sleep(1);
	}
}
#pragma endregion ownDefinitions
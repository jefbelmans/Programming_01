#include "pch.h"
#include "Game.h"
#include <iostream>

//Basic game functions
#pragma region gameFunctions											
void Start()
{

}

void Draw()
{
	ClearBackground(0.0f, 0.0f, 0.0f);

	DrawYellowBar();
	DrawRedBar();
}

void Update(float elapsedSec)
{
	UpdateFrameCount();
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
void DrawRedBar()
{
	float barProgress{ static_cast<float>((g_NrFrames / 30 * pixelStep) % static_cast<int>(g_BarDimensions.x)) };
	// float redValue{ (120.0f + static_cast<float>((g_NrFrames / 30 * static_cast<int>(colorStep)) % 135 - static_cast<int>(colorStep))) / 255.0f };
	// std::cout << redValue << std::endl;

	Point2f p1
	(
		g_Padding,
		g_Padding
	);

	// Draw border
	SetColor(1.0f, 1.0f, 1.0f);
	DrawRect(p1, g_BarDimensions.x, g_BarDimensions.y, 2.0f);
	
	SetColor(1.0f, 0.0f, 0.0f);
	FillRect(p1, barProgress, g_BarDimensions.y);
}

void DrawYellowBar()
{
	Point2f p1
	(
		g_Padding,
		g_Padding + (2.0f * g_BarDimensions.y)

	);

	// Draw border
	SetColor(1.0f, 1.0f, 1.0f);
	DrawRect(p1, g_BarDimensions.x, g_BarDimensions.y, 2.0f);

	SetColor(1.0f, 1.0f, 0.0f);
	FillRect(p1, static_cast<float>(g_NrFrames % static_cast<int>(g_BarDimensions.x)), g_BarDimensions.y);
}

void UpdateFrameCount()
{
	++g_NrFrames;
}
#pragma endregion ownDefinitions
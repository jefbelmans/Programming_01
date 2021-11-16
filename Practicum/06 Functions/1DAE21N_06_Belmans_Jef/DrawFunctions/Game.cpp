#include "pch.h"
#include "Game.h"

#pragma region gameFunctions											
void Start()
{

}

void Draw()
{
	ClearBackground();

	#pragma region Squares
	DrawSquares(Point2f(10.0f, g_WindowHeight - 110.0f), 100.0f, 10);
	DrawSquares(Point2f(120.0f, g_WindowHeight - 110.0f), 80.0f, 5);
	DrawSquares(Point2f(210.0f, g_WindowHeight - 110.0f), 60.0f, 3);
	#pragma endregion

	#pragma region Triangles
	SetColor(1.0f, 0.2f, 0.2f);
	DrawEquilateralTriangle(Point2f((g_WindowWidth / 2.0f ) + 20.0f, g_WindowHeight - 90.0f), 80.0f, true);
	SetColor(0.2f, 1.0f, 0.2f);
	DrawEquilateralTriangle(Point2f((g_WindowWidth / 2.0f) + 30.0f, g_WindowHeight - 82.5f), 60.0f, true);
	SetColor(0.2f, 0.2f, 1.0f);
	DrawEquilateralTriangle(Point2f((g_WindowWidth / 2.0f) + 40.0f, g_WindowHeight - 75.0f), 40.0f, true);
	SetColor(0.0f, 1.0f, 1.0f);
	DrawEquilateralTriangle(Point2f((g_WindowWidth / 2.0f) + 110.0f, g_WindowHeight - 90.0f), 40.0f, true);
	SetColor(1.0f, 0.0f, 1.0f);
	DrawEquilateralTriangle(Point2f((g_WindowWidth / 2.0f) + 130.0f, g_WindowHeight - 55.0f), 40.0f, true);
	SetColor(1.0f, 1.0f, 0.0f);
	DrawEquilateralTriangle(Point2f((g_WindowWidth / 2.0f) + 150.0f, g_WindowHeight - 90.0f), 40.0f, true);
	#pragma endregion

	#pragma region Pentagrams
	SetColor(1.0f, 0.2f, 0.2f);
	DrawPentagram(Point2f((g_WindowWidth / 2.0f) + 60.0f, g_WindowHeight - 160.0f), 80.0f);
	SetColor(0.2f, 0.2f, 1.0f);
	DrawPentagram(Point2f((g_WindowWidth / 2.0f) + 150.0f, g_WindowHeight - 160.0f), 60.0f);
	#pragma endregion

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
void DrawSquares(const Point2f& pos, const float size, const int numSquares)
{
	const float deltaSize{ (size / numSquares) / 2.0f };
	
	SetColor(0.0f, 0.0f, 0.0f);
	for (int i = 0; i <= numSquares; i++)
	{
		const float sizeDifference{ (i * deltaSize) };
		const Rectf rect
		{
			pos.x + sizeDifference,
			pos.y + sizeDifference,
			size - sizeDifference * 2.0f,
			size - sizeDifference * 2.0f
		};

		DrawRect(rect);
	}
}
#pragma endregion ownDefinitions
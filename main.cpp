/*
*	MAIN ENTRY POINT
*	
*	Sets up environment and gets raylib going
*/

#include "raylib.h"

int main()
{
	// Some settings (move somewhere nicer?)
	const int WindowWidth = 800;
	const int WindowHeight = 800;

	const int TargetFPS = 60;

	InitWindow(WindowWidth, WindowHeight, "ld46");

	SetTargetFPS(TargetFPS);

	// Load


	while(!WindowShouldClose())
	{
		// Input

		// Update

		// Draw
		BeginDrawing();
			ClearBackground(RAYWHITE);
			DrawFPS(10, 100);
		EndDrawing();
	}

	// Destroy
	CloseWindow();

	return 0;
}
#pragma once
//class Ball; class forward declaration only possible for pointers
#include"Ball.h"
class Game
{
public:
	Game( const Window& window );
	~Game();

	void Update( float elapsedSec );
	void Draw( );

	// Event handling
	void ProcessKeyDownEvent( const SDL_KeyboardEvent& e );
	void ProcessKeyUpEvent( const SDL_KeyboardEvent& e );
	void ProcessMouseMotionEvent( const SDL_MouseMotionEvent& e );
	void ProcessMouseDownEvent( const SDL_MouseButtonEvent& e );
	void ProcessMouseUpEvent( const SDL_MouseButtonEvent& e );

private:
	// DATA MEMBERS
	Window m_Window;
	Ball *m_pBall{ nullptr };
	Ball m_Ball{ Point2f{ 150.0f,150.f }, Vector2f{ 100.0f,150.0f }, Color4f{ 1.0f,1.0f,0.0f,1.0f },20.0f };
	// FUNCTIONS
	void Initialize( );
	void Cleanup( );
	void ClearBackground( );
};
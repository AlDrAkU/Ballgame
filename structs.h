#pragma once
#include <string>

struct Window
{
	Window( const std::string& title = "Title", float width = 320.0f, 
		float height = 180.0f, bool isVSyncOn = true );

	std::string title;
	float width;
	float height;
	bool isVSyncOn;
};
struct Point2f
{
	Point2f( );
	Point2f( float x, float y );
	Point2f( const Point2f& other );

	float x;
	float y;
};

struct Rectf
{
	Rectf( );
	Rectf( float left, float bottom, float width, float height );
	Rectf( const Rectf& other );

	float left;
	float bottom;
	float width;
	float height;
};


struct Color4f
{
	Color4f( );
	Color4f( float r, float g, float b, float a );
	Color4f( const Color4f& other );
	
	float r;
	float g;
	float b;
	float a;
};

struct Circlef
{
	Circlef( );
	Circlef( const Point2f& center, float radius );
	Circlef( float centerX, float centerY, float radius );
	Circlef( const Circlef& other );

	Point2f center;
	float radius;
};

struct Vector2f
{
	Vector2f( );
	Vector2f(float x, float y );
	Vector2f( const Point2f& fromPoint, const Point2f& tillPoint );
	Vector2f( const Vector2f& other );

	float x;
	float y;
};

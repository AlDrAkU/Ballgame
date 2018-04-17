#include "stdafx.h"
#include "structs.h"

//-----------------------------------------------------------------
// Window Constructors
//-----------------------------------------------------------------
Window::Window( const std::string& title , float width , float height , bool isVSyncOn )
	:title{ title }
	,width{ width }
	,height{ height }
	,isVSyncOn{ isVSyncOn }
{
}

//-----------------------------------------------------------------
// Point2f Constructors
//-----------------------------------------------------------------
Point2f::Point2f( )
	:Point2f{ 0.0f, 0.0f }
{
}
Point2f::Point2f( float x, float y )
	:x{ x }, y{ y }
{
}

Point2f::Point2f( const Point2f& other )
	:Point2f{ other.x, other.y }
{
}

//-----------------------------------------------------------------
// Rectf Constructors
//-----------------------------------------------------------------
Rectf::Rectf( )
	:Rectf{ 0.0f, 0.0f, 0.0f, 0.0f }
{
}

Rectf::Rectf( float left, float bottom, float width, float height )
	:left{ left }
	,bottom{ bottom }
	,width{ width }
	,height{ height }
{
}

Rectf::Rectf( const Rectf& other )
	:Rectf{ other.left, other.bottom, other.width, other.height }
{
}

//-----------------------------------------------------------------
// Color4f Constructors
//-----------------------------------------------------------------
Color4f::Color4f( )
	:Color4f{ 0.0f, 0.0f, 0.0f, 1.0f }
{
}

Color4f::Color4f( float r, float g, float b, float a )
	:r{ r }
	,g{ g }
	,b{ b }
	,a{ a }
{
}

Color4f::Color4f( const Color4f& other )
	:Color4f{ other.r, other.g, other.b, other.a }
{
}

//-----------------------------------------------------------------
// Circlef Constructors
//-----------------------------------------------------------------
Circlef::Circlef( )
	:Circlef{ 0.0f, 0.0f, 0.0f }
{
}

Circlef::Circlef( float centerX, float centerY, float radius )
	:Circlef{ Point2f{ centerX, centerY }, radius }
{
}

Circlef::Circlef( const Point2f& center, float radius )
	:center{ center }
	,radius{ radius }
{
}

Circlef::Circlef( const Circlef& other )
	: Circlef{ other.center, other.radius }
{
}

//-----------------------------------------------------------------
// Vector2f Constructors
//-----------------------------------------------------------------
Vector2f::Vector2f( )
	:Vector2f{ 0.0f, 0.0f }
{
}

Vector2f::Vector2f( float x, float y )
	:x{ x }
	,y{ y }
{
}

Vector2f::Vector2f( const Point2f& fromPoint, const Point2f& tillPoint )
	:Vector2f{ tillPoint.x - fromPoint.x, tillPoint.y - fromPoint.y }
{
}

Vector2f::Vector2f( const Vector2f& other )
	:Vector2f{ other.x, other.y }
{
}

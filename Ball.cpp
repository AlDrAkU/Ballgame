#include "stdafx.h"
#include "Ball.h"
#include <cmath>
#include<iostream>



Ball::Ball(const Point2f& position, const Vector2f& velocity, const Color4f& color, float radius)
	:m_Position{ position }, m_Velocity{ velocity }, m_Color{ color }, m_Radius{ radius }
{
}
Ball::~Ball() {

	std::cout << "Ball destructor called\n";
}
void Ball::Update(float elapsedSeconds, const Rectf& r)
{
	
	float left = r.left;
	float bottom = r.bottom;
	float right = r.left + r.width;
	float top = r.bottom + r.height;

	m_Position.x += m_Velocity.x * elapsedSeconds;
	m_Position.y += m_Velocity.y * elapsedSeconds;

	if (m_Position.x + m_Radius > right && m_Velocity.x > 0) 
	{
		m_Velocity.x *= -1; 
		GenerateColor();
	}
	if (m_Position.y + m_Radius > top && m_Velocity.y > 0)
	{ 
		m_Velocity.y *= -1; 
		GenerateColor();
	}
	if (m_Position.x - m_Radius < left && m_Velocity.x < 0)
	{ 
		m_Velocity.x *= -1; 
		GenerateColor();
	}
	if (m_Position.y - m_Radius < bottom && m_Velocity.y < 0)
	{ 
		m_Velocity.y *= -1; 
		GenerateColor();
	}

}

void Ball::Draw()
{
	FillCircle(m_Position, m_Radius, m_Color);
}

void Ball::FillCircle(const Point2f & center, float radius, const Color4f & color)
{
	const float pi{ 3.141592f };
	int numSegments{ int(radius * 2) };
	const float deltaAngle{ 2 * pi / numSegments };
	glColor4f(color.r, color.g, color.b, color.a);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(center.x, center.y);
	for (float angle{ 0.0f }; angle < 2 * pi + deltaAngle; angle += deltaAngle)
	{
		//std::cout << angle << std::endl;
		// angle , radius => cart coordinates
		glVertex2f(center.x + radius * cosf(angle),
			center.y + radius * sinf(angle));
	}
	glEnd();
}

void Ball::GenerateColor()
{
	m_Color = { rand() % 256 / 255.0f, rand() % 256 / 255.0f, rand() % 256 / 255.0f, 1.0f };
}

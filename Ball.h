#pragma once

class Ball
{
public:
	Ball(const Point2f& position, const Vector2f& velocity, const Color4f& color, float radius);
	~Ball();
	void Update(float elapsedSeconds, const Rectf& r);
	void Draw();

private:
	void FillCircle(const Point2f & center, float radius, const Color4f & color);
	void GenerateColor();

	Point2f m_Position;
	Vector2f m_Velocity;
	Color4f m_Color;
	float m_Radius;
};


#pragma once
struct Point2f
{
	float x;
	float y;
};

struct Rectf
{
	float left;
	float bottom;
	float width;
	float height;
};

struct Color4f
{
	float r;
	float g;
	float b;
	float a;
};


struct Block
{
	float x, y{};
	bool isFilled;
	bool isMoving;
};
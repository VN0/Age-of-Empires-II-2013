#pragma once

#include <vector>

class Vector2;
class ConvexHull
{
public:
	std::vector<Vector2> convexHull(Vector2 points[], int n);
};
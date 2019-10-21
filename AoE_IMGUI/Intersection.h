#pragma once
#include <vector>


class Segment;
class IntersectionPoint;
class Vector2;
class Intersection
{
public:
	std::vector<Vector2> FindIntersection(Segment segments[], int segmentCount);
};
#pragma once


struct Vector2
{
	float x;
	float y;
};

struct Segment
{
	Vector2 start;
	Vector2 end;
};

struct IntersectionPoint
{
	Vector2 intersection;
	Segment segments[2];
};

struct EventQueueEntry
{
	Vector2 point;
	Segment* segment; //only for endpoints

	EventQueueEntry()
	{

	}

	EventQueueEntry(Vector2 _point, Segment* _segment)
	{
		point = _point;
		segment = _segment;
	}
};
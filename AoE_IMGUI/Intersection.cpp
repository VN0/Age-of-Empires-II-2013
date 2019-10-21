#include "Intersection.h"

#include "RedBlackTree.h"
#include "EventQueueEntry.h"
#include <queue>




//http://geomalgorithms.com/a09-_intersect-3.html


bool sortByXthenY(EventQueueEntry first, EventQueueEntry second)
{
	if (first.point.x >= second.point.x)
	{
		if (first.point.y < second.point.y)
		{
			return false;
		}
	}
	return true;
}

std::vector<Vector2> Intersection::FindIntersection(Segment segments[], int segmentCount)
{
	std::vector<EventQueueEntry> eventQueue;

	//1.Initialize an empty event queue Q. Insert the segment
	//	endpoints into Q; when an upper endpoint is inserted,
	//	the corresponding segment should be stored with it
	for (int i = 0; i < segmentCount; i++)
	{
		eventQueue.push_back(EventQueueEntry(segments[i].start, &segments[i]));
		eventQueue.push_back(EventQueueEntry(segments[i].end, nullptr));
	}

	std::queue<EventQueueEntry> sortedEventQueue;
	std::sort(eventQueue.begin(), eventQueue.end(), sortByXthenY);

	for (int i = 0; i < eventQueue.size(); i++)
	{
		sortedEventQueue.push(eventQueue[i]);
	}

	RBTree sweepLine;

	std::vector<Vector2> intersectionPoints;

	//3.while Q is not empty
	while (!sortedEventQueue.empty())
	{
		EventQueueEntry currentEvent = sortedEventQueue.back();
		

		//if E is left endpoint
		if (true)
		{
			Segment* segE = currentEvent.segment;
			sweepLine.insert(segE);
			//Segment* segA = 
			//Segment* segB =
			/*
			 If (I = Intersect( segE with segA) exists)
                Insert I into EQ;
            If (I = Intersect( segE with segB) exists)
                Insert I into EQ;
			*/
		}

		//if E is right endpoint
		if (true)
		{
			Segment* segE = currentEvent.segment;
			/*
			 Let segA = the segment Above segE in SL;
            Let segB = the segment Below segE in SL;
            Delete segE from SL;
            If (I = Intersect( segA with segB) exists)
                If (I is not in EQ already)
                    Insert I into EQ;
			
			*/
		}

		//if E is intersection event
		if (true)
		{
			/*
			
			Add E’s intersect point to the output list IL;
            Let segE1 above segE2 be E's intersecting segments in SL;
            Swap their positions so that segE2 is now above segE1;
            Let segA = the segment above segE2 in SL;
            Let segB = the segment below segE1 in SL;
            If (I = Intersect(segE2 with segA) exists)
                If (I is not in EQ already)
                    Insert I into EQ;
            If (I = Intersect(segE1 with segB) exists)
                If (I is not in EQ already)
                    Insert I into EQ;
			
			
			*/
		}
		sortedEventQueue.pop();
	}
	return intersectionPoints;
}

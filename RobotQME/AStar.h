#pragma once
#include "Map.h"
#include "Point.h"
using namespace std;
class AStar{
public:
	AStar(void);
	~AStar(void);
private:
	Map* m_map;
	PointList openlist;	//��̽���б�
	PointList closelist;	//��̽���б�
	Point* currentPoint;
public:
	PointList* result;		
	PointList* GetResultList();//���ؽ������
	void Init(Map* map);
	void Calculate(bool isIgnoreCornor);
private:
	Point* isInList(PointList& list,Point *point);	//�ж�list���Ƿ���ĳ��
	Point* FindMinF(PointList& list);
	std::vector<Point *> getSurroundPoints(Point *point,bool isIgnoreCorner);
	bool isReachable(Point* p1, Point* p2, bool isIgnoreCornor);

	int CalF(Point* p);
	int CalG(Point* p1, Point* p2);
	int CalH(Point* p);
};


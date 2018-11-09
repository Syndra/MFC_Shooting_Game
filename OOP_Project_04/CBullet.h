#ifndef _CBULLET_H_
#define _CBULLET_H_

#include <windows.h>
#include <vector>
#include <iostream>

/* REFACT
#include "header/CRenderer/CBulletRenderer.h"
#include "header/CRenderer/CBulletUpdate.h"
*/
using namespace std;

//R
#define BULLET_SPEED 6
#define BULLET_WIDTH 5
#define BULLET_HEIGHT 10

class CBulletBody {

	//T
	int X, Y;
	//R
	HBRUSH hBrush;
	HBRUSH hEnemyBrush;
	HPEN hPen;
	//U
	BOOL bEnemy;

	void MoveBody();
public:
	CBulletBody(int,int,BOOL);
	~CBulletBody();

	int GetX();
	int GetY();

	void Update();
	void Render(HDC);
};

class CBullet {
	/* REFACT
	class CBullet : public CGameObject {

	*/
	vector<CBulletBody*> Body;
	int Delay;
	BOOL IsBulletOn;
	BOOL bEnemy;

	void DrawBody(HDC);
public:
	CBullet(BOOL);
	~CBullet();

	void PushBody(int PosX, int PosY, int Combo);
	void PopBody();

	BOOL GetBulletMode();

	void Update();
	void Render(HDC);

	BOOL CheckHit(int,int,int);
};

#endif

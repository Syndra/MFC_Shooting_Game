#include "CCombo.h"

CCombo::CCombo() {
	nCombo = 0;
	int color = 0;
	for(int i=0;i<MAX_COMBO_COLOR;i++) {
		ComboColor[i] = RGB(255,color,color);
		color += 256/MAX_COMBO_COLOR;
	}
	hComboFont = CreateFont(30,0,0,0,1000,1,0,0,HANGEUL_CHARSET,0,0,0,VARIABLE_PITCH | FF_ROMAN,TEXT("���� ���"));
}

CCombo::~CCombo() {
	DeleteObject(hComboFont);
}

void CCombo::Update() {
}

void CCombo::Render(HDC hdc) {
	TCHAR szComboString[32];

	if(nCombo>1) {
		wsprintf(szComboString,TEXT("%-3d COMBO!"),nCombo);
		HFONT OldFont = (HFONT)SelectObject(hdc,hComboFont);
		SetBkMode(hdc,TRANSPARENT);
		for(int i=MAX_COMBO_COLOR-1;i>=0;i--) {
			SetTextColor(hdc,ComboColor[i]);
			TextOut(hdc,430+i,420+i,szComboString,lstrlen(szComboString));
		}
		SelectObject(hdc,OldFont);
	}
}

void CCombo::InitCombo() {
	nCombo = 0;
}

void CCombo::IncCombo() {
	nCombo++;
}

int CCombo::GetCombo() {
	return nCombo;
}

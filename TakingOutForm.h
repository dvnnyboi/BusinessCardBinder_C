//TakingOutForm.h
/************************************************************************************************
파일명칭: TakingOutForm.h
기    능: 명함철 빼기 윈도우 자료형 및 함수 선언
작 성 자: 임다니엘
작성일자: 2022/05/30
*************************************************************************************************/
#ifndef _TAKINGOUTFORM_H
#define _TAKINGOUTFORM_H
#include<Windows.h>

BOOL CALLBACK TakingOutFormProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
BOOL TakingOutForm_OnInitDialog(HWND hWnd, WPARAM wParam, LPARAM lParam);
BOOL TakingOutForm_OnClose(HWND hWnd, WPARAM wParam, LPARAM lParam);

#endif //_TAKINGOUTFORM_H
// Tic.cpp : Defines the entry point for the application.
//
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "windows.h" 
#include "framework.h"
#include "Tic.h"
#include "cstdlib"
#include <algorithm>
#include <iterator>
#include<time.h>
#include<iostream>
#include <stdio.h>
#include<string.h>

int Blah[4] = { 155, 207, 475, 441 };
int Blahh[4] = { 249, 372, 639, 423 };
int Blahhh[4] = { 206, 177, 10, 27 };
int Blahhhh[4] = { 191, 155, 497, 126 };
int Blahhhhh[4] = { 55, 93, 285, 331 };
int Blahhhhhh[4] = { 260, 435, 932, 554 };
int Blahhhhhhh[4] = { 173, 183, 153, 158 };
int final[32] = { 201, 225, 289, 361, 26, 13, 161, 127, 7, 9, 343, 278, 185, 184, 349, 134, 140, 223, 353, 179, -8, -17, 359, 128, 23, -10, 281, 121, 132, 130, 102, 154 };



#define MAX_LOADSTRING 100


enum {BUTTON_ID0=10, BUTTON_ID1, BUTTON_ID2, BUTTON_ID3, BUTTON_ID4, BUTTON_ID5,BUTTON_ID6, BUTTON_ID7, BUTTON_ID8, BUTTON_ID9, BUTTON_ID10, BUTTON_ID11, BUTTON_ID12, BUTTON_ID13, BUTTON_ID14, BUTTON_ID15, BUTTON_ID16, BUTTON_ID17, BUTTON_ID18, BUTTON_ID19, BUTTON_ID20, BUTTON_ID21, BUTTON_ID22, BUTTON_ID23, BUTTON_ID24, BUTTON_ID25, BUTTON_ID26, BUTTON_ID27, BUTTON_ID28, BUTTON_ID29, BUTTON_ID30, BUTTON_ID31};
int Bot_playing();
void check_user(int a[]);
void check_bot(int a[]);
void BBlaaah();
void winner_Bot();
void winner_User();
void BBlaaah2(int a[]);
void BBlaaah01();

// Global Variables:
static HWND hButton0, hButton1, hButton2, hButton3, hButton4, hButton5, hButton6, hButton7, hButton8, hButton9, hButton10, hButton11, hButton12, hButton13, hButton14, hButton15, hButton16, hButton17, hButton18, hButton19, hButton20, hButton21, hButton22, hButton23, hButton24, hButton25, hButton26, hButton27, hButton28, hButton29, hButton30, hButton31;
HINSTANCE hInst;                                // current instance
WCHAR szTitle[MAX_LOADSTRING];                  // The title bar text
WCHAR szWindowClass[MAX_LOADSTRING];   
int A0o0aa[16];
int i = 0;

// the main window class name
HWND  edit;

// Forward declarations of functions included in this code module:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Place code here.

    // Initialize global strings
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_TIC, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Perform application initialization:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_TIC));

    MSG msg;

    // Main message loop:
	
	while (GetMessage(&msg, nullptr, 0, 0))
	{
			if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg)) {
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
	}
    return (int) msg.wParam;
	}

//bot will send the signal that its the computers turn and the rand function will send the needed value
int Bot_playing(){
	bool exists=FALSE;
	bool exists2 = FALSE;
	int c;
	srand(time(0));
	while (!exists || !exists2) {
		c = std::rand() % 16;
		exists = std::find(std::begin(A0o0aa), std::end(A0o0aa), c+10) == std::end(A0o0aa);
		exists2 = std::find(std::begin(A0o0aa), std::end(A0o0aa), c+26) == std::end(A0o0aa);
	}
	//SendMessage(hWnd, 0x0111, wParam, lParam);
	// (std::find(std::begin(A0o0aa), std::end(A0o0aa), ) != std::end(A0o0aa))
	c = c + 26;
	return c;
}
void check_user(int a[]) {
	int flag = 0;
	int k = 0;
	int i = 0;
	int temp[8];
	while (i < 16) {
		temp[k] = a[i];
		k = k + 1;
		i = i + 2;
	}
	
		if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 10 ) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa),11 ) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa),12 ) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 13 ) != std::end(A0o0aa))) {
			flag = 1;
		}
		else if((std::find(std::begin(A0o0aa), std::end(A0o0aa), 14) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 15) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 16) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 17) != std::end(A0o0aa))){
			flag = 1;
		}
		else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 18) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 19) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 20) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 21) != std::end(A0o0aa))) {
			flag = 1;
		}
		else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 22) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 23) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 24) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 25) != std::end(A0o0aa))) {
			flag = 1;
		}
		else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 10) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 14) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 18) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 22) != std::end(A0o0aa))) {
			flag = 1;
		}
		else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 11) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 15) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 19) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 23) != std::end(A0o0aa))) {
			flag = 1;
		}
		else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 12) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 16) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 20) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 24) != std::end(A0o0aa))) {
			flag = 1;
		}
		else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 13) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 17) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 21) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 25) != std::end(A0o0aa))) {
			flag = 1;
		}
		else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 10) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 15) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 20) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 25) != std::end(A0o0aa))) {
			flag = 1;
		}
		else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 13) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 16) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 19) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 22) != std::end(A0o0aa))) {
			flag = 1;
		}
		if (flag == 1) {
			winner_User();
		}
	}


void check_bot(int a[]) {
	int flag = 0;
	int k = 0;
	int i = 1;
	int temp[8];
	while (i < 16) {
		temp[k] = a[i];
		k = k + 1;
		i = i + 2;
	}
		
	if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 26) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 27) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 28) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 29) != std::end(A0o0aa))) {
		flag = 1;
	}
	else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 30) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 31) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 32) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 33) != std::end(A0o0aa))) {
		flag = 1;
	}
	else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 34) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa),35) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 36) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 37) != std::end(A0o0aa))) {
		flag = 1;
	}
	else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 38) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 39) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 40) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 41) != std::end(A0o0aa))) {
		flag = 1;
	}
	else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 26) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 30) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 34) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 38) != std::end(A0o0aa))) {
		flag = 1;
	}
	else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 27) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 31) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 35) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 39) != std::end(A0o0aa))) {
		flag = 1;
	}
	else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 28) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 32) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 36) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 40) != std::end(A0o0aa))) {
		flag = 1;
	}
	else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 29) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 33) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 37) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 41) != std::end(A0o0aa))) {
		flag = 1;
	}
	else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 26) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 31) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 36) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 41) != std::end(A0o0aa))) {
		flag = 1;
	}
	else if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), 29) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 32) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 35) != std::end(A0o0aa)) && (std::find(std::begin(A0o0aa), std::end(A0o0aa), 38) != std::end(A0o0aa))) {
		flag = 1;
	}
		if (flag == 1) {
			winner_Bot();
		}
		




}

void winner_User() {
	MessageBox(NULL, (LPCWSTR)L"hmmm...So you w0n?? ", (LPCWSTR)L"Dig Depper",MB_ICONERROR);
	exit(0);
}
void winner_Bot() {
	MessageBox(NULL, (LPCWSTR)L"I WON....Its n0t right ", (LPCWSTR)L"OH NO....",MB_ICONERROR);
	exit(0);
}

void BBlaaah() {
	int l=std::count(A0o0aa, A0o0aa + 16, 0);
	if (l == 0) {
		MessageBox(NULL, (LPCWSTR)L"Yeah well ...lets see ", (LPCWSTR)L"OH NO.... draw", MB_ICONERROR);
		BBlaaah2(A0o0aa);
		exit(0);
	}
	return;

}

void BBlaaah01() {
		exit(0);
	return;

}


//  FUNCTION: MyRegisterClass()
//  PURPOSE: Registers the window class.

ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_TIC));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_TIC);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   FUNCTION: InitInstance(HINSTANCE, int)
//
//   PURPOSE: Saves instance handle and creates main window
//
//   COMMENTS:
//
//        In this function, we save the instance handle in a global variable and
//        create and display the main program window.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Store instance handle in our global variable

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, 415, 458, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE: Processes messages for the main window.
//
//  WM_COMMAND  - process the application menu
//  WM_PAINT    - Paint the main window
//  WM_DESTROY  - post a quit message and return
//

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	//PAINTSTRUCT ps;
	//HDC hdc;
	TCHAR g[] = _T("hello");
	
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
			int dummy = wParam + 16;
			if ((std::find(std::begin(A0o0aa), std::end(A0o0aa), wParam) != std::end(A0o0aa)) || (std::find(std::begin(A0o0aa), std::end(A0o0aa), (dummy)) != std::end(A0o0aa))) {
			 MessageBox(NULL,(LPCWSTR)L"Invalid", (LPCWSTR)L"Error",
					MB_ICONERROR);
				exit(0);
			
			}
				A0o0aa[i] = wParam;
				i++;
				Sleep(2);
				int pass = Bot_playing();
				A0o0aa[i] = pass;
				i++;
				Sleep(2);
				
			//sizeof(A0o0aa)
			for (int k=0; k< i ;k++){

				switch (A0o0aa[k])
				{
				case BUTTON_ID0:
					hButton0 = CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 0, 0, 100, 100, hWnd, (HMENU)BUTTON_ID0, hInst, NULL);
					check_user(A0o0aa);
			
					break;
				case BUTTON_ID1:
					hButton1 = CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 100, 0, 100, 100, hWnd, (HMENU)BUTTON_ID1, hInst, NULL);
					check_user(A0o0aa);
					
					break;
				case BUTTON_ID2:
					hButton2 = CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 200, 0, 100, 100, hWnd, (HMENU)BUTTON_ID2, hInst, NULL);
					check_user(A0o0aa);
					
					break;
				case BUTTON_ID3:
					hButton3 = CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 300, 0, 100, 100, hWnd, (HMENU)BUTTON_ID3, hInst, NULL);
					check_user(A0o0aa);
					
					break;
				case BUTTON_ID4:
					hButton4 = CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 0, 100, 100, 100, hWnd, (HMENU)BUTTON_ID4, hInst, NULL);
					check_user(A0o0aa);
					
					break;
				case BUTTON_ID5:
					hButton5 = CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 100, 100, 100, 100, hWnd, (HMENU)BUTTON_ID5, hInst, NULL);
					check_user(A0o0aa);
					
					break;
				case BUTTON_ID6:
					hButton6 = CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 200, 100, 100, 100, hWnd, (HMENU)BUTTON_ID6, hInst, NULL);
					check_user(A0o0aa);
					
					break;
				case BUTTON_ID7:
					hButton7 = CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 300, 100, 100, 100, hWnd, (HMENU)BUTTON_ID7, hInst, NULL);
					check_user(A0o0aa);
					
					break;
				case BUTTON_ID8:
					hButton8 = CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 0, 200, 100, 100, hWnd, (HMENU)BUTTON_ID8, hInst, NULL);
					check_user(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID9:
					hButton9 = CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 100, 200, 100, 100, hWnd, (HMENU)BUTTON_ID9, hInst, NULL);
					check_user(A0o0aa);
					
					break;
				case  BUTTON_ID10:
					hButton10 = CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 200, 200, 100, 100, hWnd, (HMENU)BUTTON_ID10, hInst, NULL);
					check_user(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID11:
					hButton11= CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 300, 200, 100, 100, hWnd, (HMENU)BUTTON_ID11, hInst, NULL);
					check_user(A0o0aa);
					
					break;
				case  BUTTON_ID12:
					hButton12= CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 0, 300, 100, 100, hWnd, (HMENU)BUTTON_ID12, hInst, NULL);
					check_user(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID13:
					hButton13= CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 100, 300, 100, 100, hWnd, (HMENU)BUTTON_ID13, hInst, NULL);
					check_user(A0o0aa);
					
					break;
				case  BUTTON_ID14:
					hButton14= CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 200, 300, 100, 100, hWnd, (HMENU)BUTTON_ID14, hInst, NULL);
					check_user(A0o0aa);
					
					break;
				case  BUTTON_ID15:
					hButton15= CreateWindow(L"button", L"X", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 300, 300, 100, 100, hWnd, (HMENU)BUTTON_ID15, hInst, NULL);
					check_user(A0o0aa);
				
					break;
				//BOT
				case  BUTTON_ID16:
					hButton16= CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 0, 0, 100, 100, hWnd, (HMENU)BUTTON_ID16, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID17:
					hButton17 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 100, 0, 100, 100, hWnd, (HMENU)BUTTON_ID17, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID18:
					hButton18 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 200, 0, 100, 100, hWnd, (HMENU)BUTTON_ID18, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID19:
					hButton19 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 300, 0, 100, 100, hWnd, (HMENU)BUTTON_ID19, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID20:
					hButton20 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 0, 100, 100, 100, hWnd, (HMENU)BUTTON_ID20, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID21:
					hButton21 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 100, 100, 100, 100, hWnd, (HMENU)BUTTON_ID21, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID22:
					hButton22 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 200, 100, 100, 100, hWnd, (HMENU)BUTTON_ID22, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID23:
					hButton23 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 300, 100, 100, 100, hWnd, (HMENU)BUTTON_ID23, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID24:
					hButton24 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 0, 200, 100, 100, hWnd, (HMENU)BUTTON_ID24, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID25:
					hButton25 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 100, 200, 100, 100, hWnd, (HMENU)BUTTON_ID25, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID26:
					hButton26 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 200, 200, 100, 100, hWnd, (HMENU)BUTTON_ID26, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID27:
					hButton27 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 300, 200, 100, 100, hWnd, (HMENU)BUTTON_ID27, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID28:
					hButton28 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 0, 300, 100, 100, hWnd, (HMENU)BUTTON_ID28, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID29:
					hButton29 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 100, 300, 100, 100, hWnd, (HMENU)BUTTON_ID29, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID30:
					hButton30 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 200, 300, 100, 100, hWnd, (HMENU)BUTTON_ID30, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				case  BUTTON_ID31:
					hButton31 = CreateWindow(L"button", L"O", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 300, 300, 100, 100, hWnd, (HMENU)BUTTON_ID31, hInst, NULL);
					check_bot(A0o0aa);
					BBlaaah();
					break;
				}

			}
			
            // Parse the menu selections:
			switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;

	case WM_CREATE:

		
		hButton0 = CreateWindow(L"button", L"1", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 0, 0, 100, 100, hWnd, (HMENU)BUTTON_ID0, hInst, NULL);
		hButton1 = CreateWindow(L"button", L"2", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON,100, 0, 100, 100, hWnd, (HMENU)BUTTON_ID1, hInst, NULL);
		hButton2 = CreateWindow(L"button", L"3", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 200,0, 100, 100, hWnd, (HMENU)BUTTON_ID2, hInst, NULL);
		hButton3 = CreateWindow(L"button", L"4", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 300,0, 100, 100, hWnd, (HMENU)BUTTON_ID3, hInst, NULL);
		hButton4 = CreateWindow(L"button", L"5", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 0, 100, 100, 100, hWnd, (HMENU)BUTTON_ID4, hInst, NULL);
		hButton5 = CreateWindow(L"button", L"6", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON,100, 100, 100, 100, hWnd, (HMENU)BUTTON_ID5, hInst, NULL);
		hButton6 = CreateWindow(L"button", L"7", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 200, 100, 100, 100, hWnd, (HMENU)BUTTON_ID6, hInst, NULL);
		hButton7 = CreateWindow(L"button", L"8", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 300,100, 100, 100, hWnd, (HMENU)BUTTON_ID7, hInst, NULL);
		hButton8 = CreateWindow(L"button", L"9", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 0, 200, 100, 100, hWnd, (HMENU)BUTTON_ID8, hInst, NULL);
		hButton9 = CreateWindow(L"button", L"10", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 100, 200, 100, 100, hWnd, (HMENU)BUTTON_ID9, hInst, NULL);
		hButton10 = CreateWindow(L"button", L"11", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 200, 200, 100, 100, hWnd, (HMENU)BUTTON_ID10, hInst, NULL);
		hButton11= CreateWindow(L"button", L"12", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 300, 200, 100, 100, hWnd, (HMENU)BUTTON_ID11, hInst, NULL);
		hButton12 = CreateWindow(L"button", L"13", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 0, 300, 100, 100, hWnd, (HMENU)BUTTON_ID12, hInst, NULL);
		hButton13 = CreateWindow(L"button", L"14", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 100, 300, 100, 100, hWnd, (HMENU)BUTTON_ID13, hInst, NULL);
		hButton14 = CreateWindow(L"button", L"15", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 200, 300, 100, 100, hWnd, (HMENU)BUTTON_ID14, hInst, NULL);
		hButton15 = CreateWindow(L"button", L"16", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 300, 300, 100, 100, hWnd, (HMENU)BUTTON_ID15, hInst, NULL);
		
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
        }
		break;

    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    default:
		return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

void BBlaaah2(int array[]) {
	int i = 0;
	int a1[4];
	int a2[4];
	int a3[4];
	int a4[4];
	int a5[4];
	int a6[4];
	int a7[4];
	int a8[4];
	int Aa0OA[4];
	int AaaO0A[4];
	int AaaO0oA[4];
	int AaaO0oAA[4];
	int Aa0OA_8[4];
	int AaaO0A_6[4];
	int Aa0OA_3[4];


	char lol[32] = { '!','@','#','s','b','j','h','d','n','5','z','6','s','f','5','g','q','c','7','k','c','d','5','m','c','k','7','l','d','=','&','6' };


	int dummy[32];
	int dummy2[32];
	i = 0;
	int k = 0;
	while (k < 16) {
		dummy2[i] = array[k] * 8;
		dummy2[i + 1] = array[k] * 7;
		i = i + 2;
		k++;
	}

	for (i = 0; i < 32; i++) {
		if (dummy2[i] > 400) {
			BBlaaah01();
		}
		else {

		}
	}
	int t = 0;

	for (i = 0; i < 32; i++) {
		dummy[i] = dummy2[i] ^ lol[i];
	}

	for (i = 0; i < 4; i++) {
		a1[i] = dummy[i];
	}

	for (i = 0; i < 4; i++) {
		a2[i] = dummy[i + 4];
	}

	for (i = 0; i < 4; i++) {
		a3[i] = dummy[i + 8];
	}

	for (i = 0; i < 4; i++) {
		a4[i] = dummy[i + 12];
	}

	for (i = 0; i < 4; i++) {
		a5[i] = dummy[i + 16];
	}

	for (i = 0; i < 4; i++) {
		a6[i] = dummy[i + 20];
	}

	for (i = 0; i < 4; i++) {
		a7[i] = dummy[i + 24];
	}


	for (i = 0; i < 4; i++) {
		a8[i] = dummy[i + 28];
	}


	for (i = 0; i < 4; i++) {
		Aa0OA[i] = a1[i] ^ a2[i];
		if (Aa0OA[i] != Blah[i]) {
			BBlaaah01();
		}
		else {
			t++;
		}
	}


	for (i = 0; i < 4; i++) {
		AaaO0A[i] = a3[i] + a4[i];
		if (Blahh[i] != AaaO0A[i]) {
			BBlaaah01();
		}
		else {
			t++;
		}
	}

	for (i = 0; i < 4; i++) {
		AaaO0oA[i] = a5[i] - a6[i];
		if (Blahhh[i] != AaaO0oA[i]) {
			BBlaaah01();
		}
		else {
			t++;
		}
	}


	for (i = 0; i < 4; i++) {
		AaaO0oAA[i] = a7[i] ^ a8[i];
		if (Blahhhh[i] != AaaO0oAA[i]) {
			BBlaaah01();
		}
		else {
			t++;
		}
	}

	for (i = 0; i < 4; i++) {
		Aa0OA_8[i] = a1[i] ^ a2[i] ^ a8[i];
		if (Blahhhhh[i] != Aa0OA_8[i]) {
			BBlaaah01();
		}
		else {
			t++;
		}
	}

	for (i = 0; i < 4; i++) {
		AaaO0A_6[i] = a3[i] + a4[i] + a6[i];
		if (Blahhhhhh[i] != AaaO0A_6[i]) {
			BBlaaah01();
		}
		else {
			t++;
		}
	}

	for (i = 0; i < 4; i++) {
		Aa0OA_3[i] = a1[i] ^ a2[i] ^ a3[i];
		if (Blahhhhhhh[i] != Aa0OA_3[i]) {
			BBlaaah01();
		}
		else {
			t++;
		}
	}


	if (t == 28) {
		char BBlah[32];
		for (i = 0; i < 32; i++) {
			BBlah[i] = dummy2[i] ^ (final[i] + i);
		}
		wchar_t wtext[33];

		std::mbstowcs(wtext, BBlah, strlen(BBlah) + 1);
		wtext[32] = 0;
		LPWSTR ptr = wtext;
		MessageBox(NULL, ptr, L"YO", MB_ICONEXCLAMATION);
	}
	else {
		BBlaaah01();
	}


	return ;
}



// Message handler for about box.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		break;
	}
	return (INT_PTR)FALSE;

}
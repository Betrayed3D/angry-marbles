#include "stdafx.h"
#include "MyGame.h"

CMyGame game;
CGameApp app;

int main(int argc, char* argv[])
{
	app.OpenWindow(1200, 600, "Angry Birds!");
	//app.OpenFullScreen(800, 600, 24);
	app.SetClearColor(CColor::White());
	app.Run(&game);
	return(0);
}

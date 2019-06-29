#include "stdafx.h"
#include "Opening.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ArcadeMenu::Opening aMainMenu;
	Application::Run(%aMainMenu);

}
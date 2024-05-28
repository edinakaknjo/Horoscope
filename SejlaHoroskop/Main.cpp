#include "MainForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Kreiraj i pokreni glavni formular
    SejlaHoroskop::MainForm MainForm;
    Application::Run(% MainForm);
    return 0;
}
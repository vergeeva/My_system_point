#include "MyForm.h" 	// Имя h-файла формы.
using namespace Project1; // Имя проекта.
[STAThreadAttribute]
int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm()); // Имя формы.
	return 0;
}


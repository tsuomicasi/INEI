#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
/// атрибут для запуска в отельном потоке
[STAThreadAttribute]
int main(array<String^>^ args )// ^ автоматическая отчистка памяти
{
	Application::SetCompatibleTextRenderingDefault(false);//для обработки текста
	Application::EnableVisualStyles();// подключаем стили
	Project1::MyForm form;// создаем объект, через который будет запускаться форма
	Application::Run(% form);
}


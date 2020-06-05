#include "Hotel Reservation.h"

#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	HotelReserveApp::HotelReservation form;
	Application::Run(% form);
}

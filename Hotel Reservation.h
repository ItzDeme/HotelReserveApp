#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>

int roomSize;
int addedPrice;
bool discountYN = false;
int amountOfNights;
double totalAmount;
namespace HotelReserveApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	
	/// <summary>
	/// Summary for HotelReservation
	/// </summary>
	public ref class HotelReservation : public System::Windows::Forms::Form
	{
	public:
		HotelReservation(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HotelReservation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelName;
	protected:

	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::Button^ reserveButt;

	private: System::Windows::Forms::Label^ labelAmountOfGuest;
	private: System::Windows::Forms::ComboBox^ comboBoxNumberOfGuest;
	private: System::Windows::Forms::Label^ labelDatesOfReservation;
	private: System::Windows::Forms::DateTimePicker^ dateStart;
	private: System::Windows::Forms::DateTimePicker^ dateEnd;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelEnd;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelSizeRoom;
	private: System::Windows::Forms::ComboBox^ comboBoxRoomSize;
	private: System::Windows::Forms::Label^ labelSizeOfRoom;
	private: System::Windows::Forms::Label^ labelTooManyGuest;
	private: System::Windows::Forms::Button^ calculateButt;
	private: System::Windows::Forms::Label^ labelCalculate;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->reserveButt = (gcnew System::Windows::Forms::Button());
			this->labelAmountOfGuest = (gcnew System::Windows::Forms::Label());
			this->comboBoxNumberOfGuest = (gcnew System::Windows::Forms::ComboBox());
			this->labelDatesOfReservation = (gcnew System::Windows::Forms::Label());
			this->dateStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelEnd = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelSizeRoom = (gcnew System::Windows::Forms::Label());
			this->comboBoxRoomSize = (gcnew System::Windows::Forms::ComboBox());
			this->labelSizeOfRoom = (gcnew System::Windows::Forms::Label());
			this->labelTooManyGuest = (gcnew System::Windows::Forms::Label());
			this->calculateButt = (gcnew System::Windows::Forms::Button());
			this->labelCalculate = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelName->Location = System::Drawing::Point(12, 9);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(149, 20);
			this->labelName->TabIndex = 0;
			this->labelName->Text = L"What is your name\?";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(16, 32);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(100, 20);
			this->textBoxName->TabIndex = 2;
			// 
			// reserveButt
			// 
			this->reserveButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reserveButt->Location = System::Drawing::Point(214, 214);
			this->reserveButt->Name = L"reserveButt";
			this->reserveButt->Size = System::Drawing::Size(99, 32);
			this->reserveButt->TabIndex = 3;
			this->reserveButt->Text = L"Reserve!";
			this->reserveButt->UseVisualStyleBackColor = true;
			this->reserveButt->Click += gcnew System::EventHandler(this, &HotelReservation::button1_Click);
			// 
			// labelAmountOfGuest
			// 
			this->labelAmountOfGuest->AutoSize = true;
			this->labelAmountOfGuest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAmountOfGuest->Location = System::Drawing::Point(12, 55);
			this->labelAmountOfGuest->Name = L"labelAmountOfGuest";
			this->labelAmountOfGuest->Size = System::Drawing::Size(236, 20);
			this->labelAmountOfGuest->TabIndex = 4;
			this->labelAmountOfGuest->Text = L"How many guest will be staying\?";
			// 
			// comboBoxNumberOfGuest
			// 
			this->comboBoxNumberOfGuest->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxNumberOfGuest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBoxNumberOfGuest->FormattingEnabled = true;
			this->comboBoxNumberOfGuest->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8"
			});
			this->comboBoxNumberOfGuest->Location = System::Drawing::Point(16, 79);
			this->comboBoxNumberOfGuest->Name = L"comboBoxNumberOfGuest";
			this->comboBoxNumberOfGuest->Size = System::Drawing::Size(45, 24);
			this->comboBoxNumberOfGuest->TabIndex = 5;
			this->comboBoxNumberOfGuest->SelectedIndexChanged += gcnew System::EventHandler(this, &HotelReservation::comboBoxNumberOfGuest_SelectedIndexChanged);
			// 
			// labelDatesOfReservation
			// 
			this->labelDatesOfReservation->AutoSize = true;
			this->labelDatesOfReservation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDatesOfReservation->Location = System::Drawing::Point(12, 106);
			this->labelDatesOfReservation->Name = L"labelDatesOfReservation";
			this->labelDatesOfReservation->Size = System::Drawing::Size(275, 20);
			this->labelDatesOfReservation->TabIndex = 6;
			this->labelDatesOfReservation->Text = L"Start and End of Reservation wanted.";
			// 
			// dateStart
			// 
			this->dateStart->CustomFormat = L" ";
			this->dateStart->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateStart->Location = System::Drawing::Point(56, 129);
			this->dateStart->Name = L"dateStart";
			this->dateStart->Size = System::Drawing::Size(91, 20);
			this->dateStart->TabIndex = 7;
			this->dateStart->ValueChanged += gcnew System::EventHandler(this, &HotelReservation::dateStart_ValueChanged);
			// 
			// dateEnd
			// 
			this->dateEnd->CustomFormat = L" ";
			this->dateEnd->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateEnd->Location = System::Drawing::Point(196, 129);
			this->dateEnd->Name = L"dateEnd";
			this->dateEnd->Size = System::Drawing::Size(91, 20);
			this->dateEnd->TabIndex = 8;
			this->dateEnd->ValueChanged += gcnew System::EventHandler(this, &HotelReservation::dateEnd_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Start:";
			// 
			// labelEnd
			// 
			this->labelEnd->AutoSize = true;
			this->labelEnd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEnd->Location = System::Drawing::Point(153, 129);
			this->labelEnd->Name = L"labelEnd";
			this->labelEnd->Size = System::Drawing::Size(37, 17);
			this->labelEnd->TabIndex = 10;
			this->labelEnd->Text = L"End:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(293, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 11;
			// 
			// labelSizeRoom
			// 
			this->labelSizeRoom->AutoSize = true;
			this->labelSizeRoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSizeRoom->Location = System::Drawing::Point(12, 152);
			this->labelSizeRoom->Name = L"labelSizeRoom";
			this->labelSizeRoom->Size = System::Drawing::Size(145, 20);
			this->labelSizeRoom->TabIndex = 12;
			this->labelSizeRoom->Text = L"Desired room size\?";
			// 
			// comboBoxRoomSize
			// 
			this->comboBoxRoomSize->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxRoomSize->FormattingEnabled = true;
			this->comboBoxRoomSize->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Queen", L"King", L"Double Full" });
			this->comboBoxRoomSize->Location = System::Drawing::Point(16, 176);
			this->comboBoxRoomSize->Name = L"comboBoxRoomSize";
			this->comboBoxRoomSize->Size = System::Drawing::Size(121, 21);
			this->comboBoxRoomSize->TabIndex = 13;
			this->comboBoxRoomSize->SelectedIndexChanged += gcnew System::EventHandler(this, &HotelReservation::comboBoxRoomSize_SelectedIndexChanged);
			// 
			// labelSizeOfRoom
			// 
			this->labelSizeOfRoom->AutoSize = true;
			this->labelSizeOfRoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSizeOfRoom->Location = System::Drawing::Point(147, 176);
			this->labelSizeOfRoom->Name = L"labelSizeOfRoom";
			this->labelSizeOfRoom->Size = System::Drawing::Size(0, 17);
			this->labelSizeOfRoom->TabIndex = 14;
			// 
			// labelTooManyGuest
			// 
			this->labelTooManyGuest->AutoSize = true;
			this->labelTooManyGuest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTooManyGuest->Location = System::Drawing::Point(67, 82);
			this->labelTooManyGuest->Name = L"labelTooManyGuest";
			this->labelTooManyGuest->Size = System::Drawing::Size(0, 17);
			this->labelTooManyGuest->TabIndex = 15;
			// 
			// calculateButt
			// 
			this->calculateButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculateButt->Location = System::Drawing::Point(16, 214);
			this->calculateButt->Name = L"calculateButt";
			this->calculateButt->Size = System::Drawing::Size(100, 29);
			this->calculateButt->TabIndex = 16;
			this->calculateButt->Text = L"Calculate";
			this->calculateButt->UseVisualStyleBackColor = true;
			this->calculateButt->Click += gcnew System::EventHandler(this, &HotelReservation::calculateButt_Click);
			// 
			// labelCalculate
			// 
			this->labelCalculate->AutoSize = true;
			this->labelCalculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCalculate->Location = System::Drawing::Point(122, 211);
			this->labelCalculate->Name = L"labelCalculate";
			this->labelCalculate->Size = System::Drawing::Size(0, 37);
			this->labelCalculate->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(278, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// HotelReservation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 255);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->labelCalculate);
			this->Controls->Add(this->calculateButt);
			this->Controls->Add(this->labelTooManyGuest);
			this->Controls->Add(this->labelSizeOfRoom);
			this->Controls->Add(this->comboBoxRoomSize);
			this->Controls->Add(this->labelSizeRoom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateEnd);
			this->Controls->Add(this->dateStart);
			this->Controls->Add(this->labelDatesOfReservation);
			this->Controls->Add(this->comboBoxNumberOfGuest);
			this->Controls->Add(this->labelAmountOfGuest);
			this->Controls->Add(this->reserveButt);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelEnd);
			this->Name = L"HotelReservation";
			this->Text = L"HotelReservation";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//add user input values into strings
		String^ userName = textBoxName->Text;
		String^ numberGueststr = comboBoxNumberOfGuest->Text;
		String^ dateBegin = dateStart->Text;
		String^ dateFinish = dateEnd->Text;
		String^ roomSizestr = comboBoxRoomSize->Text;

		//write the information to a text file
		StreamWriter^ outFile = gcnew StreamWriter("Hotel Reservations.txt");
		outFile->Write("Full Name: " + userName + "\r\n");
		outFile->Write("Number of Guest: " + numberGueststr + "\r\n");
		outFile->Write("Beginning Date: " + dateBegin + "\r\n");
		outFile->Write("Ending Date: " + dateFinish + "\r\n");
		outFile->Write("Room Size: " + roomSizestr + "\r\n");
		outFile->Write("Total Amount: " + totalAmount + "\r\n");
		outFile->Close();

		
	}
private: System::Void dateStart_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	
	this->dateStart->CustomFormat = "MM/dd/yyyy";
		//calc the amount of nights 
			DateTime startDate = dateStart->Value;

			DateTime endDate = dateEnd->Value;

			TimeSpan ts = endDate.Subtract(startDate);

			int amountOfNights = ts.Days;

			

			if (amountOfNights >= 10) {
				this->label2->Visible = true;
				this->label2->Text = "5% off";
					discountYN = true;
			}
			else {
				this->label2 -> Visible = false;
				this->label2->Text = Convert::ToString(amountOfNights);
				discountYN = false;
			}
			//test if number of days work
			this->label3->Text = Convert::ToString(amountOfNights);
}
private: System::Void dateEnd_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	this->dateEnd->CustomFormat = "MM/dd/yyyy";
	
		//calc the amount of nights 
			DateTime startDate = dateStart->Value;

			DateTime endDate = dateEnd->Value;

			TimeSpan ts = endDate.Subtract(startDate);

			amountOfNights = ts.Days;



			if (amountOfNights >= 10) {
				this->label2->Visible = true;
				this->label2->Text = "5% off";
				discountYN = true;
			}
			else {
				this->label2->Visible = false;
				this->label2->Text = Convert::ToString(amountOfNights);
				discountYN = false;
			}
			//test if number of days work
			this->label3->Text = Convert::ToString(amountOfNights);
}
private: System::Void comboBoxRoomSize_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//create an int value to act as the base for total amount
		
		//puts up a price per room
		String^ sizeOfRoom = comboBoxRoomSize->Text;

		if (sizeOfRoom == "Queen") {
			this->labelSizeOfRoom->Text = "$65/Night";

			roomSize = 65;
		}else if(sizeOfRoom == "King") {
			this->labelSizeOfRoom->Text = "$70/Night";
			roomSize = 70;
		}
		else {
			this->labelSizeOfRoom->Text = "$60/Night";
			roomSize = 60;
		}




}
private: System::Void comboBoxNumberOfGuest_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//create an int value to use as an added amount due to many people staying
			String^ tooManyPeople;
			

			//take value from comboboxnumberofguest and store into an interger
			tooManyPeople = comboBoxNumberOfGuest->Text;
			int toManyPeople = Convert::ToInt16(tooManyPeople);

			if (toManyPeople >= 6) {
				this->labelTooManyGuest->Visible = true;
				this->labelTooManyGuest->Text = "$30 fee will be added.";
				addedPrice = 30;
			}
			else {
				this -> labelTooManyGuest->Visible = false;
				addedPrice = 0;
			}
}
private: System::Void calculateButt_Click(System::Object^ sender, System::EventArgs^ e) {
			//create calculations for reservations
	
			if (discountYN == false) {
		totalAmount = round((roomSize * amountOfNights) + addedPrice);
		this->labelCalculate->Text = Convert::ToString(totalAmount);
			}
			if (discountYN == true) {
				double discountedCalc = roomSize - (roomSize * .05);
				totalAmount = (round(discountedCalc * amountOfNights * 100)/100) + addedPrice;
				this->labelCalculate->Text = Convert::ToString(totalAmount);
	}
}
};
}

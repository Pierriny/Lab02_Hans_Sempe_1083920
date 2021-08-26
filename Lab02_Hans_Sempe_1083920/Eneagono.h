#pragma once
#include "Figuras.h"

namespace Lab02HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Eneagono
	/// </summary>
	public ref class Eneagono : public System::Windows::Forms::Form
	{
	public:
		Eneagono(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Eneagono()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label22;
	protected:
	private: System::Windows::Forms::TextBox^ Eh8;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ LadoE8;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ Eh7;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ LadoE7;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ Eh6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ LadoE6;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ Epentagono;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ Eh5;
	private: System::Windows::Forms::TextBox^ Eh4;
	private: System::Windows::Forms::TextBox^ Eh3;
	private: System::Windows::Forms::TextBox^ Eh2;
	private: System::Windows::Forms::TextBox^ Eh1;
	private: System::Windows::Forms::TextBox^ area7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ perimetro7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ LadoE5;
	private: System::Windows::Forms::TextBox^ LadoE4;
	private: System::Windows::Forms::TextBox^ LadoE3;
	private: System::Windows::Forms::TextBox^ LadoE2;
	private: System::Windows::Forms::TextBox^ LadoE1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ LadoE9;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ Eh9;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Eh8 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->LadoE8 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->Eh7 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->LadoE7 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Eh6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->LadoE6 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Epentagono = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Eh5 = (gcnew System::Windows::Forms::TextBox());
			this->Eh4 = (gcnew System::Windows::Forms::TextBox());
			this->Eh3 = (gcnew System::Windows::Forms::TextBox());
			this->Eh2 = (gcnew System::Windows::Forms::TextBox());
			this->Eh1 = (gcnew System::Windows::Forms::TextBox());
			this->area7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->perimetro7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LadoE5 = (gcnew System::Windows::Forms::TextBox());
			this->LadoE4 = (gcnew System::Windows::Forms::TextBox());
			this->LadoE3 = (gcnew System::Windows::Forms::TextBox());
			this->LadoE2 = (gcnew System::Windows::Forms::TextBox());
			this->LadoE1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->LadoE9 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->Eh9 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(502, 355);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(31, 16);
			this->label22->TabIndex = 200;
			this->label22->Text = L"h 8:";
			// 
			// Eh8
			// 
			this->Eh8->Location = System::Drawing::Point(465, 332);
			this->Eh8->Name = L"Eh8";
			this->Eh8->Size = System::Drawing::Size(100, 20);
			this->Eh8->TabIndex = 199;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(356, 160);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(55, 16);
			this->label21->TabIndex = 198;
			this->label21->Text = L"Lado 8:";
			// 
			// LadoE8
			// 
			this->LadoE8->Location = System::Drawing::Point(330, 137);
			this->LadoE8->Name = L"LadoE8";
			this->LadoE8->Size = System::Drawing::Size(100, 20);
			this->LadoE8->TabIndex = 197;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(396, 355);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(31, 16);
			this->label20->TabIndex = 196;
			this->label20->Text = L"h 7:";
			// 
			// Eh7
			// 
			this->Eh7->Location = System::Drawing::Point(359, 332);
			this->Eh7->Name = L"Eh7";
			this->Eh7->Size = System::Drawing::Size(100, 20);
			this->Eh7->TabIndex = 195;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(250, 160);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(55, 16);
			this->label19->TabIndex = 194;
			this->label19->Text = L"Lado 7:";
			// 
			// LadoE7
			// 
			this->LadoE7->Location = System::Drawing::Point(224, 137);
			this->LadoE7->Name = L"LadoE7";
			this->LadoE7->Size = System::Drawing::Size(100, 20);
			this->LadoE7->TabIndex = 193;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(290, 355);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 16);
			this->label18->TabIndex = 192;
			this->label18->Text = L"h 6:";
			// 
			// Eh6
			// 
			this->Eh6->Location = System::Drawing::Point(253, 332);
			this->Eh6->Name = L"Eh6";
			this->Eh6->Size = System::Drawing::Size(100, 20);
			this->Eh6->TabIndex = 191;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(144, 160);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 16);
			this->label17->TabIndex = 190;
			this->label17->Text = L"Lado 6:";
			// 
			// LadoE6
			// 
			this->LadoE6->Location = System::Drawing::Point(118, 137);
			this->LadoE6->Name = L"LadoE6";
			this->LadoE6->Size = System::Drawing::Size(100, 20);
			this->LadoE6->TabIndex = 189;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(253, 217);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(304, 16);
			this->label16->TabIndex = 188;
			this->label16->Text = L"Apotema (colocar cero si la figura es irregular)";
			// 
			// Epentagono
			// 
			this->Epentagono->Location = System::Drawing::Point(349, 194);
			this->Epentagono->Name = L"Epentagono";
			this->Epentagono->Size = System::Drawing::Size(100, 20);
			this->Epentagono->TabIndex = 187;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(88, 255);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(594, 16);
			this->label15->TabIndex = 186;
			this->label15->Text = L"(Si la figura es irregular, agregar los siguientes datos, de lo contrario coloque"
				L" cero en todas)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(184, 355);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 16);
			this->label10->TabIndex = 185;
			this->label10->Text = L"h 5:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(501, 297);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 16);
			this->label11->TabIndex = 184;
			this->label11->Text = L"h 4:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(396, 297);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 16);
			this->label12->TabIndex = 183;
			this->label12->Text = L"h 3:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(293, 297);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 16);
			this->label13->TabIndex = 182;
			this->label13->Text = L"h 2:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(186, 297);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 16);
			this->label14->TabIndex = 181;
			this->label14->Text = L"h 1:";
			// 
			// Eh5
			// 
			this->Eh5->Location = System::Drawing::Point(147, 332);
			this->Eh5->Name = L"Eh5";
			this->Eh5->Size = System::Drawing::Size(100, 20);
			this->Eh5->TabIndex = 180;
			// 
			// Eh4
			// 
			this->Eh4->Location = System::Drawing::Point(465, 274);
			this->Eh4->Name = L"Eh4";
			this->Eh4->Size = System::Drawing::Size(100, 20);
			this->Eh4->TabIndex = 179;
			// 
			// Eh3
			// 
			this->Eh3->Location = System::Drawing::Point(359, 274);
			this->Eh3->Name = L"Eh3";
			this->Eh3->Size = System::Drawing::Size(100, 20);
			this->Eh3->TabIndex = 178;
			// 
			// Eh2
			// 
			this->Eh2->Location = System::Drawing::Point(253, 274);
			this->Eh2->Name = L"Eh2";
			this->Eh2->Size = System::Drawing::Size(100, 20);
			this->Eh2->TabIndex = 177;
			// 
			// Eh1
			// 
			this->Eh1->Location = System::Drawing::Point(147, 274);
			this->Eh1->Name = L"Eh1";
			this->Eh1->Size = System::Drawing::Size(100, 20);
			this->Eh1->TabIndex = 176;
			// 
			// area7
			// 
			this->area7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->area7->Location = System::Drawing::Point(692, 121);
			this->area7->Name = L"area7";
			this->area7->Size = System::Drawing::Size(100, 22);
			this->area7->TabIndex = 175;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(585, 152);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 16);
			this->label8->TabIndex = 174;
			this->label8->Text = L"Resultado P:";
			// 
			// perimetro7
			// 
			this->perimetro7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perimetro7->Location = System::Drawing::Point(692, 149);
			this->perimetro7->Name = L"perimetro7";
			this->perimetro7->Size = System::Drawing::Size(100, 22);
			this->perimetro7->TabIndex = 173;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(585, 125);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 16);
			this->label9->TabIndex = 172;
			this->label9->Text = L"Resultado A:";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(630, 67);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 35);
			this->button7->TabIndex = 171;
			this->button7->Text = L"Calcular";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Eneagono::button7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(38, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 170;
			this->label5->Text = L"Lado 5:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(357, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 16);
			this->label4->TabIndex = 169;
			this->label4->Text = L"Lado 4:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(252, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 16);
			this->label3->TabIndex = 168;
			this->label3->Text = L"Lado 3:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(146, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 16);
			this->label2->TabIndex = 167;
			this->label2->Text = L"Lado 2:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 166;
			this->label1->Text = L"Lado 1:";
			// 
			// LadoE5
			// 
			this->LadoE5->Location = System::Drawing::Point(12, 137);
			this->LadoE5->Name = L"LadoE5";
			this->LadoE5->Size = System::Drawing::Size(100, 20);
			this->LadoE5->TabIndex = 165;
			// 
			// LadoE4
			// 
			this->LadoE4->Location = System::Drawing::Point(330, 82);
			this->LadoE4->Name = L"LadoE4";
			this->LadoE4->Size = System::Drawing::Size(100, 20);
			this->LadoE4->TabIndex = 164;
			// 
			// LadoE3
			// 
			this->LadoE3->Location = System::Drawing::Point(224, 82);
			this->LadoE3->Name = L"LadoE3";
			this->LadoE3->Size = System::Drawing::Size(100, 20);
			this->LadoE3->TabIndex = 163;
			// 
			// LadoE2
			// 
			this->LadoE2->Location = System::Drawing::Point(118, 82);
			this->LadoE2->Name = L"LadoE2";
			this->LadoE2->Size = System::Drawing::Size(100, 20);
			this->LadoE2->TabIndex = 162;
			// 
			// LadoE1
			// 
			this->LadoE1->Location = System::Drawing::Point(12, 82);
			this->LadoE1->Name = L"LadoE1";
			this->LadoE1->Size = System::Drawing::Size(100, 20);
			this->LadoE1->TabIndex = 161;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(365, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 27);
			this->label7->TabIndex = 160;
			this->label7->Text = L"Eneagono";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(325, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 27);
			this->label6->TabIndex = 159;
			this->label6->Text = L"Perimetro y Area";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(471, 138);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(55, 16);
			this->label23->TabIndex = 202;
			this->label23->Text = L"Lado 9:";
			// 
			// LadoE9
			// 
			this->LadoE9->Location = System::Drawing::Point(445, 115);
			this->LadoE9->Name = L"LadoE9";
			this->LadoE9->Size = System::Drawing::Size(100, 20);
			this->LadoE9->TabIndex = 201;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(617, 330);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(31, 16);
			this->label24->TabIndex = 204;
			this->label24->Text = L"h 9:";
			// 
			// Eh9
			// 
			this->Eh9->Location = System::Drawing::Point(580, 307);
			this->Eh9->Name = L"Eh9";
			this->Eh9->Size = System::Drawing::Size(100, 20);
			this->Eh9->TabIndex = 203;
			// 
			// Eneagono
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 383);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->Eh9);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->LadoE9);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->Eh8);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->LadoE8);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->Eh7);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->LadoE7);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->Eh6);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->LadoE6);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->Epentagono);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Eh5);
			this->Controls->Add(this->Eh4);
			this->Controls->Add(this->Eh3);
			this->Controls->Add(this->Eh2);
			this->Controls->Add(this->Eh1);
			this->Controls->Add(this->area7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->perimetro7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LadoE5);
			this->Controls->Add(this->LadoE4);
			this->Controls->Add(this->LadoE3);
			this->Controls->Add(this->LadoE2);
			this->Controls->Add(this->LadoE1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Name = L"Eneagono";
			this->Text = L"Eneagono";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: System::Void calcularEneagono() {
			Figura Eneagono = Figura();
			Eneagono.lado1 = Convert::ToDouble(this->LadoE1->Text);
			Eneagono.lado2 = Convert::ToDouble(this->LadoE2->Text);
			Eneagono.lado3 = Convert::ToDouble(this->LadoE3->Text);
			Eneagono.lado4 = Convert::ToDouble(this->LadoE4->Text);
			Eneagono.lado5 = Convert::ToDouble(this->LadoE5->Text);
			Eneagono.lado6 = Convert::ToDouble(this->LadoE6->Text);
			Eneagono.lado7 = Convert::ToDouble(this->LadoE7->Text);
			Eneagono.lado8 = Convert::ToDouble(this->LadoE8->Text);
			Eneagono.lado9 = Convert::ToDouble(this->LadoE9->Text);

			Eneagono.ap = Convert::ToDouble(this->Epentagono->Text);

			Eneagono.h1 = Convert::ToDouble(this->Eh1->Text);
			Eneagono.h2 = Convert::ToDouble(this->Eh2->Text);
			Eneagono.h3 = Convert::ToDouble(this->Eh3->Text);
			Eneagono.h4 = Convert::ToDouble(this->Eh4->Text);
			Eneagono.h5 = Convert::ToDouble(this->Eh5->Text);
			Eneagono.h6 = Convert::ToDouble(this->Eh6->Text);
			Eneagono.h7 = Convert::ToDouble(this->Eh7->Text);
			Eneagono.h8 = Convert::ToDouble(this->Eh8->Text);
			Eneagono.h9 = Convert::ToDouble(this->Eh9->Text);

			perimetro7->Text = Eneagono.perimetroPentagono().ToString();
			area7->Text = Eneagono.areapentagono().ToString();
		}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		this->calcularEneagono();

	}
};
}

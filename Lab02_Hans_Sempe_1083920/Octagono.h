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
	/// Resumen de Octagono
	/// </summary>
	public ref class Octagono : public System::Windows::Forms::Form
	{
	public:
		Octagono(void)
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
		~Octagono()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label20;
	protected:
	private: System::Windows::Forms::TextBox^ Oh7;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ LadoO7;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ Oh6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ LadoO6;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ Opentagono;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ Oh5;
	private: System::Windows::Forms::TextBox^ Oh4;
	private: System::Windows::Forms::TextBox^ Oh3;
	private: System::Windows::Forms::TextBox^ Oh2;
	private: System::Windows::Forms::TextBox^ Oh1;
	private: System::Windows::Forms::TextBox^ area6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ perimetro6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ LadoO5;
	private: System::Windows::Forms::TextBox^ LadoO4;
	private: System::Windows::Forms::TextBox^ LadoO3;
	private: System::Windows::Forms::TextBox^ LadoO2;
	private: System::Windows::Forms::TextBox^ LadoO1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ LadoO8;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ Oh8;

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
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->Oh7 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->LadoO7 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Oh6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->LadoO6 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Opentagono = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Oh5 = (gcnew System::Windows::Forms::TextBox());
			this->Oh4 = (gcnew System::Windows::Forms::TextBox());
			this->Oh3 = (gcnew System::Windows::Forms::TextBox());
			this->Oh2 = (gcnew System::Windows::Forms::TextBox());
			this->Oh1 = (gcnew System::Windows::Forms::TextBox());
			this->area6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->perimetro6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LadoO5 = (gcnew System::Windows::Forms::TextBox());
			this->LadoO4 = (gcnew System::Windows::Forms::TextBox());
			this->LadoO3 = (gcnew System::Windows::Forms::TextBox());
			this->LadoO2 = (gcnew System::Windows::Forms::TextBox());
			this->LadoO1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->LadoO8 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Oh8 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(378, 374);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(31, 16);
			this->label20->TabIndex = 154;
			this->label20->Text = L"h 7:";
			// 
			// Oh7
			// 
			this->Oh7->Location = System::Drawing::Point(341, 351);
			this->Oh7->Name = L"Oh7";
			this->Oh7->Size = System::Drawing::Size(100, 20);
			this->Oh7->TabIndex = 153;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(261, 160);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(55, 16);
			this->label19->TabIndex = 152;
			this->label19->Text = L"Lado 7:";
			// 
			// LadoO7
			// 
			this->LadoO7->Location = System::Drawing::Point(235, 137);
			this->LadoO7->Name = L"LadoO7";
			this->LadoO7->Size = System::Drawing::Size(100, 20);
			this->LadoO7->TabIndex = 151;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(272, 374);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 16);
			this->label18->TabIndex = 150;
			this->label18->Text = L"h 6:";
			// 
			// Oh6
			// 
			this->Oh6->Location = System::Drawing::Point(235, 351);
			this->Oh6->Name = L"Oh6";
			this->Oh6->Size = System::Drawing::Size(100, 20);
			this->Oh6->TabIndex = 149;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(155, 160);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 16);
			this->label17->TabIndex = 148;
			this->label17->Text = L"Lado 6:";
			// 
			// LadoO6
			// 
			this->LadoO6->Location = System::Drawing::Point(129, 137);
			this->LadoO6->Name = L"LadoO6";
			this->LadoO6->Size = System::Drawing::Size(100, 20);
			this->LadoO6->TabIndex = 147;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(212, 223);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(304, 16);
			this->label16->TabIndex = 146;
			this->label16->Text = L"Apotema (colocar cero si la figura es irregular)";
			// 
			// Opentagono
			// 
			this->Opentagono->Location = System::Drawing::Point(308, 200);
			this->Opentagono->Name = L"Opentagono";
			this->Opentagono->Size = System::Drawing::Size(100, 20);
			this->Opentagono->TabIndex = 145;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(47, 261);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(594, 16);
			this->label15->TabIndex = 144;
			this->label15->Text = L"(Si la figura es irregular, agregar los siguientes datos, de lo contrario coloque"
				L" cero en todas)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(166, 374);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 16);
			this->label10->TabIndex = 143;
			this->label10->Text = L"h 5:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(483, 316);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 16);
			this->label11->TabIndex = 142;
			this->label11->Text = L"h 4:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(378, 316);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 16);
			this->label12->TabIndex = 141;
			this->label12->Text = L"h 3:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(275, 316);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 16);
			this->label13->TabIndex = 140;
			this->label13->Text = L"h 2:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(168, 316);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 16);
			this->label14->TabIndex = 139;
			this->label14->Text = L"h 1:";
			// 
			// Oh5
			// 
			this->Oh5->Location = System::Drawing::Point(129, 351);
			this->Oh5->Name = L"Oh5";
			this->Oh5->Size = System::Drawing::Size(100, 20);
			this->Oh5->TabIndex = 138;
			// 
			// Oh4
			// 
			this->Oh4->Location = System::Drawing::Point(447, 293);
			this->Oh4->Name = L"Oh4";
			this->Oh4->Size = System::Drawing::Size(100, 20);
			this->Oh4->TabIndex = 137;
			// 
			// Oh3
			// 
			this->Oh3->Location = System::Drawing::Point(341, 293);
			this->Oh3->Name = L"Oh3";
			this->Oh3->Size = System::Drawing::Size(100, 20);
			this->Oh3->TabIndex = 136;
			// 
			// Oh2
			// 
			this->Oh2->Location = System::Drawing::Point(235, 293);
			this->Oh2->Name = L"Oh2";
			this->Oh2->Size = System::Drawing::Size(100, 20);
			this->Oh2->TabIndex = 135;
			// 
			// Oh1
			// 
			this->Oh1->Location = System::Drawing::Point(129, 293);
			this->Oh1->Name = L"Oh1";
			this->Oh1->Size = System::Drawing::Size(100, 20);
			this->Oh1->TabIndex = 134;
			// 
			// area6
			// 
			this->area6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->area6->Location = System::Drawing::Point(576, 111);
			this->area6->Name = L"area6";
			this->area6->Size = System::Drawing::Size(100, 22);
			this->area6->TabIndex = 133;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(469, 142);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 16);
			this->label8->TabIndex = 132;
			this->label8->Text = L"Resultado P:";
			// 
			// perimetro6
			// 
			this->perimetro6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perimetro6->Location = System::Drawing::Point(576, 139);
			this->perimetro6->Name = L"perimetro6";
			this->perimetro6->Size = System::Drawing::Size(100, 22);
			this->perimetro6->TabIndex = 131;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(469, 115);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 16);
			this->label9->TabIndex = 130;
			this->label9->Text = L"Resultado A:";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(514, 57);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 35);
			this->button6->TabIndex = 129;
			this->button6->Text = L"Calcular";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Octagono::button6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(49, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 128;
			this->label5->Text = L"Lado 5:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(368, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 16);
			this->label4->TabIndex = 127;
			this->label4->Text = L"Lado 4:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(263, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 16);
			this->label3->TabIndex = 126;
			this->label3->Text = L"Lado 3:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(157, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 16);
			this->label2->TabIndex = 125;
			this->label2->Text = L"Lado 2:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 124;
			this->label1->Text = L"Lado 1:";
			// 
			// LadoO5
			// 
			this->LadoO5->Location = System::Drawing::Point(23, 137);
			this->LadoO5->Name = L"LadoO5";
			this->LadoO5->Size = System::Drawing::Size(100, 20);
			this->LadoO5->TabIndex = 123;
			// 
			// LadoO4
			// 
			this->LadoO4->Location = System::Drawing::Point(341, 82);
			this->LadoO4->Name = L"LadoO4";
			this->LadoO4->Size = System::Drawing::Size(100, 20);
			this->LadoO4->TabIndex = 122;
			// 
			// LadoO3
			// 
			this->LadoO3->Location = System::Drawing::Point(235, 82);
			this->LadoO3->Name = L"LadoO3";
			this->LadoO3->Size = System::Drawing::Size(100, 20);
			this->LadoO3->TabIndex = 121;
			// 
			// LadoO2
			// 
			this->LadoO2->Location = System::Drawing::Point(129, 82);
			this->LadoO2->Name = L"LadoO2";
			this->LadoO2->Size = System::Drawing::Size(100, 20);
			this->LadoO2->TabIndex = 120;
			// 
			// LadoO1
			// 
			this->LadoO1->Location = System::Drawing::Point(23, 82);
			this->LadoO1->Name = L"LadoO1";
			this->LadoO1->Size = System::Drawing::Size(100, 20);
			this->LadoO1->TabIndex = 119;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(294, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 27);
			this->label7->TabIndex = 118;
			this->label7->Text = L"Heptagono";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(254, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 27);
			this->label6->TabIndex = 117;
			this->label6->Text = L"Perimetro y Area";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(367, 160);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(55, 16);
			this->label21->TabIndex = 156;
			this->label21->Text = L"Lado 8:";
			// 
			// LadoO8
			// 
			this->LadoO8->Location = System::Drawing::Point(341, 137);
			this->LadoO8->Name = L"LadoO8";
			this->LadoO8->Size = System::Drawing::Size(100, 20);
			this->LadoO8->TabIndex = 155;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(484, 374);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(31, 16);
			this->label22->TabIndex = 158;
			this->label22->Text = L"h 8:";
			// 
			// Oh8
			// 
			this->Oh8->Location = System::Drawing::Point(447, 351);
			this->Oh8->Name = L"Oh8";
			this->Oh8->Size = System::Drawing::Size(100, 20);
			this->Oh8->TabIndex = 157;
			// 
			// Octagono
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 404);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->Oh8);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->LadoO8);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->Oh7);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->LadoO7);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->Oh6);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->LadoO6);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->Opentagono);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Oh5);
			this->Controls->Add(this->Oh4);
			this->Controls->Add(this->Oh3);
			this->Controls->Add(this->Oh2);
			this->Controls->Add(this->Oh1);
			this->Controls->Add(this->area6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->perimetro6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LadoO5);
			this->Controls->Add(this->LadoO4);
			this->Controls->Add(this->LadoO3);
			this->Controls->Add(this->LadoO2);
			this->Controls->Add(this->LadoO1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Name = L"Octagono";
			this->Text = L"Octagono";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: System::Void calcularOctagono() {
			Figura Octagono = Figura();
			Octagono.lado1 = Convert::ToDouble(this->LadoO1->Text);
			Octagono.lado2 = Convert::ToDouble(this->LadoO2->Text);
			Octagono.lado3 = Convert::ToDouble(this->LadoO3->Text);
			Octagono.lado4 = Convert::ToDouble(this->LadoO4->Text);
			Octagono.lado5 = Convert::ToDouble(this->LadoO5->Text);
			Octagono.lado6 = Convert::ToDouble(this->LadoO6->Text);
			Octagono.lado7 = Convert::ToDouble(this->LadoO7->Text);
			Octagono.lado8 = Convert::ToDouble(this->LadoO8->Text);

			Octagono.ap = Convert::ToDouble(this->Opentagono->Text);

			Octagono.h1 = Convert::ToDouble(this->Oh1->Text);
			Octagono.h2 = Convert::ToDouble(this->Oh2->Text);
			Octagono.h3 = Convert::ToDouble(this->Oh3->Text);
			Octagono.h4 = Convert::ToDouble(this->Oh4->Text);
			Octagono.h5 = Convert::ToDouble(this->Oh5->Text);
			Octagono.h6 = Convert::ToDouble(this->Oh6->Text);
			Octagono.h7 = Convert::ToDouble(this->Oh7->Text);
			Octagono.h8 = Convert::ToDouble(this->Oh8->Text);

			perimetro6->Text = Octagono.perimetroPentagono().ToString();
			area6->Text = Octagono.areapentagono().ToString();
		}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		this->calcularOctagono();

	}
};
}

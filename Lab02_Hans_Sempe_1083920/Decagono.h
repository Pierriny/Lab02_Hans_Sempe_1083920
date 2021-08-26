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
	/// Resumen de Decagono
	/// </summary>
	public ref class Decagono : public System::Windows::Forms::Form
	{
	public:
		Decagono(void)
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
		~Decagono()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label24;
	protected:
	private: System::Windows::Forms::TextBox^ Dh9;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ LadoD9;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ Dh8;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ LadoD8;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ Dh7;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ LadoD7;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ Dh6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ LadoD6;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ Dpentagono;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ Dh5;
	private: System::Windows::Forms::TextBox^ Dh4;
	private: System::Windows::Forms::TextBox^ Dh3;
	private: System::Windows::Forms::TextBox^ Dh2;
	private: System::Windows::Forms::TextBox^ Dh1;
	private: System::Windows::Forms::TextBox^ area8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ perimetro8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ LadoD5;
	private: System::Windows::Forms::TextBox^ LadoD4;
	private: System::Windows::Forms::TextBox^ LadoD3;
	private: System::Windows::Forms::TextBox^ LadoD2;
	private: System::Windows::Forms::TextBox^ LadoD1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ Dh10;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ LadoD10;

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
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->Dh9 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->LadoD9 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Dh8 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->LadoD8 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->Dh7 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->LadoD7 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Dh6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->LadoD6 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Dpentagono = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Dh5 = (gcnew System::Windows::Forms::TextBox());
			this->Dh4 = (gcnew System::Windows::Forms::TextBox());
			this->Dh3 = (gcnew System::Windows::Forms::TextBox());
			this->Dh2 = (gcnew System::Windows::Forms::TextBox());
			this->Dh1 = (gcnew System::Windows::Forms::TextBox());
			this->area8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->perimetro8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LadoD5 = (gcnew System::Windows::Forms::TextBox());
			this->LadoD4 = (gcnew System::Windows::Forms::TextBox());
			this->LadoD3 = (gcnew System::Windows::Forms::TextBox());
			this->LadoD2 = (gcnew System::Windows::Forms::TextBox());
			this->LadoD1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->Dh10 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->LadoD10 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(612, 303);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(31, 16);
			this->label24->TabIndex = 250;
			this->label24->Text = L"h 9:";
			// 
			// Dh9
			// 
			this->Dh9->Location = System::Drawing::Point(575, 280);
			this->Dh9->Name = L"Dh9";
			this->Dh9->Size = System::Drawing::Size(100, 20);
			this->Dh9->TabIndex = 249;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(464, 111);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(55, 16);
			this->label23->TabIndex = 248;
			this->label23->Text = L"Lado 9:";
			// 
			// LadoD9
			// 
			this->LadoD9->Location = System::Drawing::Point(438, 88);
			this->LadoD9->Name = L"LadoD9";
			this->LadoD9->Size = System::Drawing::Size(100, 20);
			this->LadoD9->TabIndex = 247;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(504, 361);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(31, 16);
			this->label22->TabIndex = 246;
			this->label22->Text = L"h 8:";
			// 
			// Dh8
			// 
			this->Dh8->Location = System::Drawing::Point(467, 338);
			this->Dh8->Name = L"Dh8";
			this->Dh8->Size = System::Drawing::Size(100, 20);
			this->Dh8->TabIndex = 245;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(358, 166);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(55, 16);
			this->label21->TabIndex = 244;
			this->label21->Text = L"Lado 8:";
			// 
			// LadoD8
			// 
			this->LadoD8->Location = System::Drawing::Point(332, 143);
			this->LadoD8->Name = L"LadoD8";
			this->LadoD8->Size = System::Drawing::Size(100, 20);
			this->LadoD8->TabIndex = 243;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(398, 361);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(31, 16);
			this->label20->TabIndex = 242;
			this->label20->Text = L"h 7:";
			// 
			// Dh7
			// 
			this->Dh7->Location = System::Drawing::Point(361, 338);
			this->Dh7->Name = L"Dh7";
			this->Dh7->Size = System::Drawing::Size(100, 20);
			this->Dh7->TabIndex = 241;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(252, 166);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(55, 16);
			this->label19->TabIndex = 240;
			this->label19->Text = L"Lado 7:";
			// 
			// LadoD7
			// 
			this->LadoD7->Location = System::Drawing::Point(226, 143);
			this->LadoD7->Name = L"LadoD7";
			this->LadoD7->Size = System::Drawing::Size(100, 20);
			this->LadoD7->TabIndex = 239;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(292, 361);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 16);
			this->label18->TabIndex = 238;
			this->label18->Text = L"h 6:";
			// 
			// Dh6
			// 
			this->Dh6->Location = System::Drawing::Point(255, 338);
			this->Dh6->Name = L"Dh6";
			this->Dh6->Size = System::Drawing::Size(100, 20);
			this->Dh6->TabIndex = 237;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(146, 166);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 16);
			this->label17->TabIndex = 236;
			this->label17->Text = L"Lado 6:";
			// 
			// LadoD6
			// 
			this->LadoD6->Location = System::Drawing::Point(120, 143);
			this->LadoD6->Name = L"LadoD6";
			this->LadoD6->Size = System::Drawing::Size(100, 20);
			this->LadoD6->TabIndex = 235;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(234, 223);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(304, 16);
			this->label16->TabIndex = 234;
			this->label16->Text = L"Apotema (colocar cero si la figura es irregular)";
			// 
			// Dpentagono
			// 
			this->Dpentagono->Location = System::Drawing::Point(351, 200);
			this->Dpentagono->Name = L"Dpentagono";
			this->Dpentagono->Size = System::Drawing::Size(100, 20);
			this->Dpentagono->TabIndex = 233;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(90, 261);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(594, 16);
			this->label15->TabIndex = 232;
			this->label15->Text = L"(Si la figura es irregular, agregar los siguientes datos, de lo contrario coloque"
				L" cero en todas)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(186, 361);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 16);
			this->label10->TabIndex = 231;
			this->label10->Text = L"h 5:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(503, 303);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 16);
			this->label11->TabIndex = 230;
			this->label11->Text = L"h 4:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(398, 303);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 16);
			this->label12->TabIndex = 229;
			this->label12->Text = L"h 3:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(295, 303);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 16);
			this->label13->TabIndex = 228;
			this->label13->Text = L"h 2:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(188, 303);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 16);
			this->label14->TabIndex = 227;
			this->label14->Text = L"h 1:";
			// 
			// Dh5
			// 
			this->Dh5->Location = System::Drawing::Point(149, 338);
			this->Dh5->Name = L"Dh5";
			this->Dh5->Size = System::Drawing::Size(100, 20);
			this->Dh5->TabIndex = 226;
			// 
			// Dh4
			// 
			this->Dh4->Location = System::Drawing::Point(467, 280);
			this->Dh4->Name = L"Dh4";
			this->Dh4->Size = System::Drawing::Size(100, 20);
			this->Dh4->TabIndex = 225;
			// 
			// Dh3
			// 
			this->Dh3->Location = System::Drawing::Point(361, 280);
			this->Dh3->Name = L"Dh3";
			this->Dh3->Size = System::Drawing::Size(100, 20);
			this->Dh3->TabIndex = 224;
			// 
			// Dh2
			// 
			this->Dh2->Location = System::Drawing::Point(255, 280);
			this->Dh2->Name = L"Dh2";
			this->Dh2->Size = System::Drawing::Size(100, 20);
			this->Dh2->TabIndex = 223;
			// 
			// Dh1
			// 
			this->Dh1->Location = System::Drawing::Point(149, 280);
			this->Dh1->Name = L"Dh1";
			this->Dh1->Size = System::Drawing::Size(100, 20);
			this->Dh1->TabIndex = 222;
			// 
			// area8
			// 
			this->area8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->area8->Location = System::Drawing::Point(694, 127);
			this->area8->Name = L"area8";
			this->area8->Size = System::Drawing::Size(100, 22);
			this->area8->TabIndex = 221;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(587, 158);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 16);
			this->label8->TabIndex = 220;
			this->label8->Text = L"Resultado P:";
			// 
			// perimetro8
			// 
			this->perimetro8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perimetro8->Location = System::Drawing::Point(694, 155);
			this->perimetro8->Name = L"perimetro8";
			this->perimetro8->Size = System::Drawing::Size(100, 22);
			this->perimetro8->TabIndex = 219;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(587, 131);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 16);
			this->label9->TabIndex = 218;
			this->label9->Text = L"Resultado A:";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(632, 73);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 35);
			this->button8->TabIndex = 217;
			this->button8->Text = L"Calcular";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Decagono::button8_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(40, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 216;
			this->label5->Text = L"Lado 5:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(359, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 16);
			this->label4->TabIndex = 215;
			this->label4->Text = L"Lado 4:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(254, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 16);
			this->label3->TabIndex = 214;
			this->label3->Text = L"Lado 3:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(148, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 16);
			this->label2->TabIndex = 213;
			this->label2->Text = L"Lado 2:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 212;
			this->label1->Text = L"Lado 1:";
			// 
			// LadoD5
			// 
			this->LadoD5->Location = System::Drawing::Point(14, 143);
			this->LadoD5->Name = L"LadoD5";
			this->LadoD5->Size = System::Drawing::Size(100, 20);
			this->LadoD5->TabIndex = 211;
			// 
			// LadoD4
			// 
			this->LadoD4->Location = System::Drawing::Point(332, 88);
			this->LadoD4->Name = L"LadoD4";
			this->LadoD4->Size = System::Drawing::Size(100, 20);
			this->LadoD4->TabIndex = 210;
			// 
			// LadoD3
			// 
			this->LadoD3->Location = System::Drawing::Point(226, 88);
			this->LadoD3->Name = L"LadoD3";
			this->LadoD3->Size = System::Drawing::Size(100, 20);
			this->LadoD3->TabIndex = 209;
			// 
			// LadoD2
			// 
			this->LadoD2->Location = System::Drawing::Point(120, 88);
			this->LadoD2->Name = L"LadoD2";
			this->LadoD2->Size = System::Drawing::Size(100, 20);
			this->LadoD2->TabIndex = 208;
			// 
			// LadoD1
			// 
			this->LadoD1->Location = System::Drawing::Point(14, 88);
			this->LadoD1->Name = L"LadoD1";
			this->LadoD1->Size = System::Drawing::Size(100, 20);
			this->LadoD1->TabIndex = 207;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(367, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 27);
			this->label7->TabIndex = 206;
			this->label7->Text = L"Decagono";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(327, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 27);
			this->label6->TabIndex = 205;
			this->label6->Text = L"Perimetro y Area";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(610, 361);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(38, 16);
			this->label25->TabIndex = 252;
			this->label25->Text = L"h 10:";
			// 
			// Dh10
			// 
			this->Dh10->Location = System::Drawing::Point(573, 338);
			this->Dh10->Name = L"Dh10";
			this->Dh10->Size = System::Drawing::Size(100, 20);
			this->Dh10->TabIndex = 251;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(464, 166);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(62, 16);
			this->label26->TabIndex = 254;
			this->label26->Text = L"Lado 10:";
			// 
			// LadoD10
			// 
			this->LadoD10->Location = System::Drawing::Point(438, 143);
			this->LadoD10->Name = L"LadoD10";
			this->LadoD10->Size = System::Drawing::Size(100, 20);
			this->LadoD10->TabIndex = 253;
			// 
			// Decagono
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 392);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->LadoD10);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->Dh10);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->Dh9);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->LadoD9);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->Dh8);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->LadoD8);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->Dh7);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->LadoD7);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->Dh6);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->LadoD6);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->Dpentagono);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Dh5);
			this->Controls->Add(this->Dh4);
			this->Controls->Add(this->Dh3);
			this->Controls->Add(this->Dh2);
			this->Controls->Add(this->Dh1);
			this->Controls->Add(this->area8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->perimetro8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LadoD5);
			this->Controls->Add(this->LadoD4);
			this->Controls->Add(this->LadoD3);
			this->Controls->Add(this->LadoD2);
			this->Controls->Add(this->LadoD1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Name = L"Decagono";
			this->Text = L"Decagono";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: System::Void calcularDecagono() {
			Figura Decagono = Figura();
			Decagono.lado1 = Convert::ToDouble(this->LadoD1->Text);
			Decagono.lado2 = Convert::ToDouble(this->LadoD2->Text);
			Decagono.lado3 = Convert::ToDouble(this->LadoD3->Text);
			Decagono.lado4 = Convert::ToDouble(this->LadoD4->Text);
			Decagono.lado5 = Convert::ToDouble(this->LadoD5->Text);
			Decagono.lado6 = Convert::ToDouble(this->LadoD6->Text);
			Decagono.lado7 = Convert::ToDouble(this->LadoD7->Text);
			Decagono.lado8 = Convert::ToDouble(this->LadoD8->Text);
			Decagono.lado9 = Convert::ToDouble(this->LadoD9->Text);
			Decagono.lado10 = Convert::ToDouble(this->LadoD10->Text);

			Decagono.ap = Convert::ToDouble(this->Dpentagono->Text);

			Decagono.h1 = Convert::ToDouble(this->Dh1->Text);
			Decagono.h2 = Convert::ToDouble(this->Dh2->Text);
			Decagono.h3 = Convert::ToDouble(this->Dh3->Text);
			Decagono.h4 = Convert::ToDouble(this->Dh4->Text);
			Decagono.h5 = Convert::ToDouble(this->Dh5->Text);
			Decagono.h6 = Convert::ToDouble(this->Dh6->Text);
			Decagono.h7 = Convert::ToDouble(this->Dh7->Text);
			Decagono.h8 = Convert::ToDouble(this->Dh8->Text);
			Decagono.h9 = Convert::ToDouble(this->Dh9->Text);
			Decagono.h10 = Convert::ToDouble(this->Dh10->Text);

			perimetro8->Text = Decagono.perimetroPentagono().ToString();
			area8->Text = Decagono.areapentagono().ToString();
		}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		this->calcularDecagono();

	}
};
}

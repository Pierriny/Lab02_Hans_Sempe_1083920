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
	/// Resumen de Hexagono
	/// </summary>
	public ref class Hexagono : public System::Windows::Forms::Form
	{
	public:
		Hexagono(void)
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
		~Hexagono()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ HXpentagono;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ HXh5;

	private: System::Windows::Forms::TextBox^ HXh4;

	private: System::Windows::Forms::TextBox^ HXh3;

	private: System::Windows::Forms::TextBox^ HXh2;

	private: System::Windows::Forms::TextBox^ HXh1;
	private: System::Windows::Forms::TextBox^ area4;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ perimetro4;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ LadoHX5;
	private: System::Windows::Forms::TextBox^ LadoHX4;
	private: System::Windows::Forms::TextBox^ LadoHX3;
	private: System::Windows::Forms::TextBox^ LadoHX2;
	private: System::Windows::Forms::TextBox^ LadoHX1;





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ LadoHX6;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ HXh6;


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
			this->HXpentagono = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->HXh5 = (gcnew System::Windows::Forms::TextBox());
			this->HXh4 = (gcnew System::Windows::Forms::TextBox());
			this->HXh3 = (gcnew System::Windows::Forms::TextBox());
			this->HXh2 = (gcnew System::Windows::Forms::TextBox());
			this->HXh1 = (gcnew System::Windows::Forms::TextBox());
			this->area4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->perimetro4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LadoHX5 = (gcnew System::Windows::Forms::TextBox());
			this->LadoHX4 = (gcnew System::Windows::Forms::TextBox());
			this->LadoHX3 = (gcnew System::Windows::Forms::TextBox());
			this->LadoHX2 = (gcnew System::Windows::Forms::TextBox());
			this->LadoHX1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->LadoHX6 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->HXh6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// HXpentagono
			// 
			this->HXpentagono->Location = System::Drawing::Point(315, 144);
			this->HXpentagono->Name = L"HXpentagono";
			this->HXpentagono->Size = System::Drawing::Size(100, 20);
			this->HXpentagono->TabIndex = 72;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(64, 204);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(594, 16);
			this->label15->TabIndex = 71;
			this->label15->Text = L"(Si la figura es irregular, agregar los siguientes datos, de lo contrario coloque"
				L" cero en todas)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(504, 246);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 16);
			this->label10->TabIndex = 70;
			this->label10->Text = L"h 5:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(397, 246);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 16);
			this->label11->TabIndex = 69;
			this->label11->Text = L"h 4:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(292, 246);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 16);
			this->label12->TabIndex = 68;
			this->label12->Text = L"h 3:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(189, 246);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 16);
			this->label13->TabIndex = 67;
			this->label13->Text = L"h 2:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(82, 246);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 16);
			this->label14->TabIndex = 66;
			this->label14->Text = L"h 1:";
			// 
			// HXh5
			// 
			this->HXh5->Location = System::Drawing::Point(467, 223);
			this->HXh5->Name = L"HXh5";
			this->HXh5->Size = System::Drawing::Size(100, 20);
			this->HXh5->TabIndex = 65;
			// 
			// HXh4
			// 
			this->HXh4->Location = System::Drawing::Point(361, 223);
			this->HXh4->Name = L"HXh4";
			this->HXh4->Size = System::Drawing::Size(100, 20);
			this->HXh4->TabIndex = 64;
			// 
			// HXh3
			// 
			this->HXh3->Location = System::Drawing::Point(255, 223);
			this->HXh3->Name = L"HXh3";
			this->HXh3->Size = System::Drawing::Size(100, 20);
			this->HXh3->TabIndex = 63;
			// 
			// HXh2
			// 
			this->HXh2->Location = System::Drawing::Point(149, 223);
			this->HXh2->Name = L"HXh2";
			this->HXh2->Size = System::Drawing::Size(100, 20);
			this->HXh2->TabIndex = 62;
			// 
			// HXh1
			// 
			this->HXh1->Location = System::Drawing::Point(43, 223);
			this->HXh1->Name = L"HXh1";
			this->HXh1->Size = System::Drawing::Size(100, 20);
			this->HXh1->TabIndex = 61;
			// 
			// area4
			// 
			this->area4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->area4->Location = System::Drawing::Point(377, 347);
			this->area4->Name = L"area4";
			this->area4->Size = System::Drawing::Size(100, 22);
			this->area4->TabIndex = 60;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(270, 378);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 16);
			this->label8->TabIndex = 59;
			this->label8->Text = L"Resultado P:";
			// 
			// perimetro4
			// 
			this->perimetro4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perimetro4->Location = System::Drawing::Point(377, 375);
			this->perimetro4->Name = L"perimetro4";
			this->perimetro4->Size = System::Drawing::Size(100, 22);
			this->perimetro4->TabIndex = 58;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(270, 351);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 16);
			this->label9->TabIndex = 57;
			this->label9->Text = L"Resultado A:";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(315, 293);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 35);
			this->button4->TabIndex = 56;
			this->button4->Text = L"Calcular";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Hexagono::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(497, 112);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 55;
			this->label5->Text = L"Lado 5:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(392, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 16);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Lado 4:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(287, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 16);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Lado 3:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(181, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 16);
			this->label2->TabIndex = 52;
			this->label2->Text = L"Lado 2:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(71, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Lado 1:";
			// 
			// LadoHX5
			// 
			this->LadoHX5->Location = System::Drawing::Point(471, 89);
			this->LadoHX5->Name = L"LadoHX5";
			this->LadoHX5->Size = System::Drawing::Size(100, 20);
			this->LadoHX5->TabIndex = 50;
			// 
			// LadoHX4
			// 
			this->LadoHX4->Location = System::Drawing::Point(365, 89);
			this->LadoHX4->Name = L"LadoHX4";
			this->LadoHX4->Size = System::Drawing::Size(100, 20);
			this->LadoHX4->TabIndex = 49;
			// 
			// LadoHX3
			// 
			this->LadoHX3->Location = System::Drawing::Point(259, 89);
			this->LadoHX3->Name = L"LadoHX3";
			this->LadoHX3->Size = System::Drawing::Size(100, 20);
			this->LadoHX3->TabIndex = 48;
			// 
			// LadoHX2
			// 
			this->LadoHX2->Location = System::Drawing::Point(153, 89);
			this->LadoHX2->Name = L"LadoHX2";
			this->LadoHX2->Size = System::Drawing::Size(100, 20);
			this->LadoHX2->TabIndex = 47;
			// 
			// LadoHX1
			// 
			this->LadoHX1->Location = System::Drawing::Point(47, 89);
			this->LadoHX1->Name = L"LadoHX1";
			this->LadoHX1->Size = System::Drawing::Size(100, 20);
			this->LadoHX1->TabIndex = 46;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(310, 49);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 27);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Hexagono";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(278, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 27);
			this->label6->TabIndex = 44;
			this->label6->Text = L"Perimetro y Area";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(219, 167);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(304, 16);
			this->label16->TabIndex = 74;
			this->label16->Text = L"Apotema (colocar cero si la figura es irregular)";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(603, 112);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 16);
			this->label17->TabIndex = 76;
			this->label17->Text = L"Lado 6:";
			// 
			// LadoHX6
			// 
			this->LadoHX6->Location = System::Drawing::Point(577, 89);
			this->LadoHX6->Name = L"LadoHX6";
			this->LadoHX6->Size = System::Drawing::Size(100, 20);
			this->LadoHX6->TabIndex = 75;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(610, 246);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 16);
			this->label18->TabIndex = 78;
			this->label18->Text = L"h 6:";
			// 
			// HXh6
			// 
			this->HXh6->Location = System::Drawing::Point(573, 223);
			this->HXh6->Name = L"HXh6";
			this->HXh6->Size = System::Drawing::Size(100, 20);
			this->HXh6->TabIndex = 77;
			// 
			// Hexagono
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 417);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->HXh6);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->LadoHX6);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->HXpentagono);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->HXh5);
			this->Controls->Add(this->HXh4);
			this->Controls->Add(this->HXh3);
			this->Controls->Add(this->HXh2);
			this->Controls->Add(this->HXh1);
			this->Controls->Add(this->area4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->perimetro4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LadoHX5);
			this->Controls->Add(this->LadoHX4);
			this->Controls->Add(this->LadoHX3);
			this->Controls->Add(this->LadoHX2);
			this->Controls->Add(this->LadoHX1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Name = L"Hexagono";
			this->Text = L"Hexagono";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: System::Void calcularHexagono() {
			Figura Hexagono = Figura();
			Hexagono.lado1 = Convert::ToDouble(this->LadoHX1->Text);
			Hexagono.lado2 = Convert::ToDouble(this->LadoHX2->Text);
			Hexagono.lado3 = Convert::ToDouble(this->LadoHX3->Text);
			Hexagono.lado4 = Convert::ToDouble(this->LadoHX4->Text);
			Hexagono.lado5 = Convert::ToDouble(this->LadoHX5->Text);
			Hexagono.lado6 = Convert::ToDouble(this->LadoHX6->Text);

			Hexagono.ap = Convert::ToDouble(this->HXpentagono->Text);

			Hexagono.h1 = Convert::ToDouble(this->HXh1->Text);
			Hexagono.h2 = Convert::ToDouble(this->HXh2->Text);
			Hexagono.h3 = Convert::ToDouble(this->HXh3->Text);
			Hexagono.h4 = Convert::ToDouble(this->HXh4->Text);
			Hexagono.h5 = Convert::ToDouble(this->HXh5->Text);
			Hexagono.h6 = Convert::ToDouble(this->HXh6->Text);

			perimetro4->Text = Hexagono.perimetroPentagono().ToString();
			area4->Text = Hexagono.areapentagono().ToString();
		}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		this->calcularHexagono();

	}
};
}

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
	/// Resumen de Pentagono
	/// </summary>
	public ref class Pentagono : public System::Windows::Forms::Form
	{
	public:
		Pentagono(void)
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
		~Pentagono()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label7;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ LadoP1;
	private: System::Windows::Forms::TextBox^ LadoP2;
	private: System::Windows::Forms::TextBox^ LadoP3;
	private: System::Windows::Forms::TextBox^ LadoP4;
	private: System::Windows::Forms::TextBox^ LadoP5;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ area3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ perimetro3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ ph5;
	private: System::Windows::Forms::TextBox^ ph4;
	private: System::Windows::Forms::TextBox^ ph3;
	private: System::Windows::Forms::TextBox^ ph2;
	private: System::Windows::Forms::TextBox^ ph1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ labelxd;
	private: System::Windows::Forms::TextBox^ Apentagono;


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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->LadoP1 = (gcnew System::Windows::Forms::TextBox());
			this->LadoP2 = (gcnew System::Windows::Forms::TextBox());
			this->LadoP3 = (gcnew System::Windows::Forms::TextBox());
			this->LadoP4 = (gcnew System::Windows::Forms::TextBox());
			this->LadoP5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->area3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->perimetro3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->ph5 = (gcnew System::Windows::Forms::TextBox());
			this->ph4 = (gcnew System::Windows::Forms::TextBox());
			this->ph3 = (gcnew System::Windows::Forms::TextBox());
			this->ph2 = (gcnew System::Windows::Forms::TextBox());
			this->ph1 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->labelxd = (gcnew System::Windows::Forms::Label());
			this->Apentagono = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(236, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 27);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Pentagono";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(204, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 27);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Perimetro y Area";
			// 
			// LadoP1
			// 
			this->LadoP1->Location = System::Drawing::Point(39, 76);
			this->LadoP1->Name = L"LadoP1";
			this->LadoP1->Size = System::Drawing::Size(100, 20);
			this->LadoP1->TabIndex = 16;
			// 
			// LadoP2
			// 
			this->LadoP2->Location = System::Drawing::Point(145, 76);
			this->LadoP2->Name = L"LadoP2";
			this->LadoP2->Size = System::Drawing::Size(100, 20);
			this->LadoP2->TabIndex = 17;
			// 
			// LadoP3
			// 
			this->LadoP3->Location = System::Drawing::Point(251, 76);
			this->LadoP3->Name = L"LadoP3";
			this->LadoP3->Size = System::Drawing::Size(100, 20);
			this->LadoP3->TabIndex = 18;
			// 
			// LadoP4
			// 
			this->LadoP4->Location = System::Drawing::Point(357, 76);
			this->LadoP4->Name = L"LadoP4";
			this->LadoP4->Size = System::Drawing::Size(100, 20);
			this->LadoP4->TabIndex = 19;
			// 
			// LadoP5
			// 
			this->LadoP5->Location = System::Drawing::Point(463, 76);
			this->LadoP5->Name = L"LadoP5";
			this->LadoP5->Size = System::Drawing::Size(100, 20);
			this->LadoP5->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(63, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Lado 1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(173, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 16);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Lado 2:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(279, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 16);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Lado 3:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(384, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 16);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Lado 4:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(489, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Lado 5:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(251, 280);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 35);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Calcular";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Pentagono::button3_Click);
			// 
			// area3
			// 
			this->area3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->area3->Location = System::Drawing::Point(313, 334);
			this->area3->Name = L"area3";
			this->area3->Size = System::Drawing::Size(100, 22);
			this->area3->TabIndex = 30;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(206, 365);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 16);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Resultado P:";
			// 
			// perimetro3
			// 
			this->perimetro3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perimetro3->Location = System::Drawing::Point(313, 362);
			this->perimetro3->Name = L"perimetro3";
			this->perimetro3->Size = System::Drawing::Size(100, 22);
			this->perimetro3->TabIndex = 28;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(206, 338);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 16);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Resultado A:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(500, 232);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 16);
			this->label10->TabIndex = 40;
			this->label10->Text = L"h 5:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(393, 232);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 16);
			this->label11->TabIndex = 39;
			this->label11->Text = L"h 4:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(288, 232);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 16);
			this->label12->TabIndex = 38;
			this->label12->Text = L"h 3:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(185, 232);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 16);
			this->label13->TabIndex = 37;
			this->label13->Text = L"h 2:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(78, 232);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 16);
			this->label14->TabIndex = 36;
			this->label14->Text = L"h 1:";
			// 
			// ph5
			// 
			this->ph5->Location = System::Drawing::Point(463, 209);
			this->ph5->Name = L"ph5";
			this->ph5->Size = System::Drawing::Size(100, 20);
			this->ph5->TabIndex = 35;
			// 
			// ph4
			// 
			this->ph4->Location = System::Drawing::Point(357, 209);
			this->ph4->Name = L"ph4";
			this->ph4->Size = System::Drawing::Size(100, 20);
			this->ph4->TabIndex = 34;
			// 
			// ph3
			// 
			this->ph3->Location = System::Drawing::Point(251, 209);
			this->ph3->Name = L"ph3";
			this->ph3->Size = System::Drawing::Size(100, 20);
			this->ph3->TabIndex = 33;
			// 
			// ph2
			// 
			this->ph2->Location = System::Drawing::Point(145, 209);
			this->ph2->Name = L"ph2";
			this->ph2->Size = System::Drawing::Size(100, 20);
			this->ph2->TabIndex = 32;
			// 
			// ph1
			// 
			this->ph1->Location = System::Drawing::Point(39, 209);
			this->ph1->Name = L"ph1";
			this->ph1->Size = System::Drawing::Size(100, 20);
			this->ph1->TabIndex = 31;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(8, 190);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(594, 16);
			this->label15->TabIndex = 41;
			this->label15->Text = L"(Si la figura es irregular, agregar los siguientes datos, de lo contrario coloque"
				L" cero en todas)";
			// 
			// labelxd
			// 
			this->labelxd->AutoSize = true;
			this->labelxd->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelxd->Location = System::Drawing::Point(149, 152);
			this->labelxd->Name = L"labelxd";
			this->labelxd->Size = System::Drawing::Size(308, 16);
			this->labelxd->TabIndex = 43;
			this->labelxd->Text = L"Apotema ( colocar cero si la figura es irregular)";
			// 
			// Apentagono
			// 
			this->Apentagono->Location = System::Drawing::Point(251, 129);
			this->Apentagono->Name = L"Apentagono";
			this->Apentagono->Size = System::Drawing::Size(100, 20);
			this->Apentagono->TabIndex = 42;
			// 
			// Pentagono
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 401);
			this->Controls->Add(this->labelxd);
			this->Controls->Add(this->Apentagono);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->ph5);
			this->Controls->Add(this->ph4);
			this->Controls->Add(this->ph3);
			this->Controls->Add(this->ph2);
			this->Controls->Add(this->ph1);
			this->Controls->Add(this->area3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->perimetro3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LadoP5);
			this->Controls->Add(this->LadoP4);
			this->Controls->Add(this->LadoP3);
			this->Controls->Add(this->LadoP2);
			this->Controls->Add(this->LadoP1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Name = L"Pentagono";
			this->Text = L"Pentagono";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: System::Void calcularPentagono() {
			Figura pentagono = Figura();
			pentagono.lado1 = Convert::ToDouble(this->LadoP1->Text);
			pentagono.lado2 = Convert::ToDouble(this->LadoP2->Text);
			pentagono.lado3 = Convert::ToDouble(this->LadoP3->Text);
			pentagono.lado4 = Convert::ToDouble(this->LadoP4->Text);
			pentagono.lado5 = Convert::ToDouble(this->LadoP5->Text);

			pentagono.ap = Convert::ToDouble(this->Apentagono->Text);

			pentagono.h1 = Convert::ToDouble(this->ph1->Text);
			pentagono.h2 = Convert::ToDouble(this->ph2->Text);
			pentagono.h3 = Convert::ToDouble(this->ph3->Text);
			pentagono.h4 = Convert::ToDouble(this->ph4->Text);
			pentagono.h5 = Convert::ToDouble(this->ph5->Text);

			perimetro3->Text = pentagono.perimetroPentagono().ToString();
			area3->Text = pentagono.areapentagono().ToString();
		}



	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		this->calcularPentagono();

	}



};
}

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
	/// Resumen de Triangulo
	/// </summary>
	public ref class Triangulo1 : public System::Windows::Forms::Form
	{
	public:
		Triangulo1(void)
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
		~Triangulo1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ LadoT1;
	protected:
	private: System::Windows::Forms::TextBox^ LadoT2;
	private: System::Windows::Forms::TextBox^ LadoT3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ perimetro1;
	private: System::Windows::Forms::TextBox^ tipo1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ area1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ altura1;

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
			this->LadoT1 = (gcnew System::Windows::Forms::TextBox());
			this->LadoT2 = (gcnew System::Windows::Forms::TextBox());
			this->LadoT3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->perimetro1 = (gcnew System::Windows::Forms::TextBox());
			this->tipo1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->area1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->altura1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// LadoT1
			// 
			this->LadoT1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LadoT1->Location = System::Drawing::Point(160, 82);
			this->LadoT1->Name = L"LadoT1";
			this->LadoT1->Size = System::Drawing::Size(100, 22);
			this->LadoT1->TabIndex = 0;
			// 
			// LadoT2
			// 
			this->LadoT2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LadoT2->Location = System::Drawing::Point(160, 108);
			this->LadoT2->Name = L"LadoT2";
			this->LadoT2->Size = System::Drawing::Size(100, 22);
			this->LadoT2->TabIndex = 1;
			// 
			// LadoT3
			// 
			this->LadoT3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LadoT3->Location = System::Drawing::Point(160, 134);
			this->LadoT3->Name = L"LadoT3";
			this->LadoT3->Size = System::Drawing::Size(100, 22);
			this->LadoT3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(53, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"base";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(53, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"primer lado";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(50, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Segundo lado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(53, 272);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Resultado A:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 331);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(188, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"tipo de figura (Segun lados):";
			// 
			// perimetro1
			// 
			this->perimetro1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perimetro1->Location = System::Drawing::Point(160, 296);
			this->perimetro1->Name = L"perimetro1";
			this->perimetro1->Size = System::Drawing::Size(100, 22);
			this->perimetro1->TabIndex = 8;
			// 
			// tipo1
			// 
			this->tipo1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tipo1->Location = System::Drawing::Point(206, 328);
			this->tipo1->Name = L"tipo1";
			this->tipo1->Size = System::Drawing::Size(100, 22);
			this->tipo1->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(63, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 27);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Perimetro y Area";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(95, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 27);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Triangulo";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(81, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 46);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Triangulo1::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(53, 299);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Resultado P:";
			// 
			// area1
			// 
			this->area1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->area1->Location = System::Drawing::Point(160, 268);
			this->area1->Name = L"area1";
			this->area1->Size = System::Drawing::Size(100, 22);
			this->area1->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(50, 165);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Altura";
			// 
			// altura1
			// 
			this->altura1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->altura1->Location = System::Drawing::Point(160, 162);
			this->altura1->Name = L"altura1";
			this->altura1->Size = System::Drawing::Size(100, 22);
			this->altura1->TabIndex = 16;
			// 
			// Triangulo1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(318, 361);
			this->Controls->Add(this->altura1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->area1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tipo1);
			this->Controls->Add(this->perimetro1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LadoT3);
			this->Controls->Add(this->LadoT2);
			this->Controls->Add(this->LadoT1);
			this->Name = L"Triangulo1";
			this->Text = L"Triangulo1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Void calcularTriangulo() {
		Figura triangulo = Figura();
		triangulo.lado1 = Convert::ToDouble(this->LadoT1->Text);
		triangulo.lado2 = Convert::ToDouble(this->LadoT2->Text);
		triangulo.lado3 = Convert::ToDouble(this->LadoT3->Text);
		triangulo.altura = Convert::ToDouble(this->altura1->Text);

		perimetro1->Text = triangulo.perimetroTriangulo().ToString();
		area1->Text = triangulo.areatriangulo().ToString();

		if (Convert::ToDouble(this->LadoT1->Text) == Convert::ToDouble(this->LadoT2->Text) && Convert::ToDouble(this->LadoT1->Text) == Convert::ToDouble(this->LadoT3->Text)) {
			tipo1->Text = "equilatero";
		}
		else if (Convert::ToDouble(this->LadoT2->Text) == Convert::ToDouble(this->LadoT3->Text)) {
			tipo1->Text = "Isoceles";
		}
		else {
			tipo1->Text = "Escaleno";
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->calcularTriangulo();

	}
};
}

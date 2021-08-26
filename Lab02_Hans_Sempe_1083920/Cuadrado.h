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
	/// Resumen de Cuadrado
	/// </summary>
	public ref class Cuadrado : public System::Windows::Forms::Form
	{
	public:
		Cuadrado(void)
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
		~Cuadrado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::TextBox^ area2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ perimetro2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ LadosC;

	protected:

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->area2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->perimetro2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LadosC = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(70, 138);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 42);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Calcular";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Cuadrado::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(77, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 27);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Cuadrado";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(45, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 27);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Perimetro y Area";
			// 
			// area2
			// 
			this->area2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->area2->Location = System::Drawing::Point(142, 196);
			this->area2->Name = L"area2";
			this->area2->Size = System::Drawing::Size(100, 22);
			this->area2->TabIndex = 18;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(35, 227);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 16);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Resultado P:";
			// 
			// perimetro2
			// 
			this->perimetro2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perimetro2->Location = System::Drawing::Point(142, 224);
			this->perimetro2->Name = L"perimetro2";
			this->perimetro2->Size = System::Drawing::Size(100, 22);
			this->perimetro2->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(35, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Resultado A:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 16);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Lados:";
			// 
			// LadosC
			// 
			this->LadosC->Location = System::Drawing::Point(142, 96);
			this->LadosC->Name = L"LadosC";
			this->LadosC->Size = System::Drawing::Size(100, 20);
			this->LadosC->TabIndex = 20;
			// 
			// Cuadrado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->LadosC);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->area2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->perimetro2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Name = L"Cuadrado";
			this->Text = L"Cuadrado";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: System::Void calcularCuadrado() {
			Figura cuadrado = Figura();
			cuadrado.lado1 = Convert::ToDouble(this->LadosC->Text);

			perimetro2->Text = cuadrado.perimetroCuadrilatero().ToString();
			area2->Text = cuadrado.areacuadrado().ToString();	
		}



	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->calcularCuadrado();


	}
};
}

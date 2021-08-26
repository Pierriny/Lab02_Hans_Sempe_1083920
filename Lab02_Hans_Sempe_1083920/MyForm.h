#include "Triangulo1.h"
#include "Cuadrado.h"
#include "Pentagono.h"
#include "Hexagono.h"
#include "Heptagono.h"
#include "Octagono.h"
#include "Eneagono.h"
#include "Decagono.h"
#include "Figuras.h"
#pragma once


namespace Lab02HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(27, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Triangulo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(27, 85);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 24);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cuadrilatero";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(27, 114);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 24);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Pentagono";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(27, 143);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 24);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Hexagono";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(143, 56);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 24);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Heptagono";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(143, 85);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 24);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Octagono";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(143, 114);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 24);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Eneagono";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(143, 143);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(101, 24);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Decagono";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(63, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 19);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Seleccione figura";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(264, 191);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Triangulo1^ ventana1 = gcnew Triangulo1();
		this->Visible = false;
		ventana1->ShowDialog();
		this->Visible = true;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Cuadrado^ ventana2 = gcnew Cuadrado();
		this->Visible = false;
		ventana2->ShowDialog();
		this->Visible = true;
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Pentagono^ ventana3 = gcnew Pentagono();
		this->Visible = false;
		ventana3->ShowDialog();
		this->Visible = true;
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Hexagono^ ventana4 = gcnew Hexagono();
		this->Visible = false;
		ventana4->ShowDialog();
		this->Visible = true;
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Heptagono^ ventana5 = gcnew Heptagono();
		this->Visible = false;
		ventana5->ShowDialog();
		this->Visible = true;
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Octagono^ ventana6 = gcnew Octagono();
		this->Visible = false;
		ventana6->ShowDialog();
		this->Visible = true;
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		Eneagono^ ventana7 = gcnew Eneagono();
		this->Visible = false;
		ventana7->ShowDialog();
		this->Visible = true;
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		Decagono^ ventana8 = gcnew Decagono();
		this->Visible = false;
		ventana8->ShowDialog();
		this->Visible = true;
	}
};
}

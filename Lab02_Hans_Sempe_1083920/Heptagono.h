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
	/// Resumen de Heptagono
	/// </summary>
	public ref class Heptagono : public System::Windows::Forms::Form
	{
	public:
		Heptagono(void)
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
		~Heptagono()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label18;
	protected:
	private: System::Windows::Forms::TextBox^ HPh6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ LadoHP6;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ HPpentagono;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ HPh5;
	private: System::Windows::Forms::TextBox^ HPh4;
	private: System::Windows::Forms::TextBox^ HPh3;
	private: System::Windows::Forms::TextBox^ HPh2;
	private: System::Windows::Forms::TextBox^ HPh1;
	private: System::Windows::Forms::TextBox^ area5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ perimetro5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ LadoHP5;
	private: System::Windows::Forms::TextBox^ LadoHP4;
	private: System::Windows::Forms::TextBox^ LadoHP3;
	private: System::Windows::Forms::TextBox^ LadoHP2;
	private: System::Windows::Forms::TextBox^ LadoHP1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ LadoHP7;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ HPh7;

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
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->HPh6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->LadoHP6 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->HPpentagono = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->HPh5 = (gcnew System::Windows::Forms::TextBox());
			this->HPh4 = (gcnew System::Windows::Forms::TextBox());
			this->HPh3 = (gcnew System::Windows::Forms::TextBox());
			this->HPh2 = (gcnew System::Windows::Forms::TextBox());
			this->HPh1 = (gcnew System::Windows::Forms::TextBox());
			this->area5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->perimetro5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LadoHP5 = (gcnew System::Windows::Forms::TextBox());
			this->LadoHP4 = (gcnew System::Windows::Forms::TextBox());
			this->LadoHP3 = (gcnew System::Windows::Forms::TextBox());
			this->LadoHP2 = (gcnew System::Windows::Forms::TextBox());
			this->LadoHP1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->LadoHP7 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->HPh7 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(626, 266);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 16);
			this->label18->TabIndex = 112;
			this->label18->Text = L"h 6:";
			// 
			// HPh6
			// 
			this->HPh6->Location = System::Drawing::Point(589, 243);
			this->HPh6->Name = L"HPh6";
			this->HPh6->Size = System::Drawing::Size(100, 20);
			this->HPh6->TabIndex = 111;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(615, 127);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 16);
			this->label17->TabIndex = 110;
			this->label17->Text = L"Lado 6:";
			// 
			// LadoHP6
			// 
			this->LadoHP6->Location = System::Drawing::Point(589, 104);
			this->LadoHP6->Name = L"LadoHP6";
			this->LadoHP6->Size = System::Drawing::Size(100, 20);
			this->LadoHP6->TabIndex = 109;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(288, 181);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(304, 16);
			this->label16->TabIndex = 108;
			this->label16->Text = L"Apotema (colocar cero si la figura es irregular)";
			// 
			// HPpentagono
			// 
			this->HPpentagono->Location = System::Drawing::Point(384, 158);
			this->HPpentagono->Name = L"HPpentagono";
			this->HPpentagono->Size = System::Drawing::Size(100, 20);
			this->HPpentagono->TabIndex = 107;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(133, 224);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(594, 16);
			this->label15->TabIndex = 106;
			this->label15->Text = L"(Si la figura es irregular, agregar los siguientes datos, de lo contrario coloque"
				L" cero en todas)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(520, 266);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 16);
			this->label10->TabIndex = 105;
			this->label10->Text = L"h 5:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(413, 266);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 16);
			this->label11->TabIndex = 104;
			this->label11->Text = L"h 4:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(308, 266);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 16);
			this->label12->TabIndex = 103;
			this->label12->Text = L"h 3:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(205, 266);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 16);
			this->label13->TabIndex = 102;
			this->label13->Text = L"h 2:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(98, 266);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 16);
			this->label14->TabIndex = 101;
			this->label14->Text = L"h 1:";
			// 
			// HPh5
			// 
			this->HPh5->Location = System::Drawing::Point(483, 243);
			this->HPh5->Name = L"HPh5";
			this->HPh5->Size = System::Drawing::Size(100, 20);
			this->HPh5->TabIndex = 100;
			// 
			// HPh4
			// 
			this->HPh4->Location = System::Drawing::Point(377, 243);
			this->HPh4->Name = L"HPh4";
			this->HPh4->Size = System::Drawing::Size(100, 20);
			this->HPh4->TabIndex = 99;
			// 
			// HPh3
			// 
			this->HPh3->Location = System::Drawing::Point(271, 243);
			this->HPh3->Name = L"HPh3";
			this->HPh3->Size = System::Drawing::Size(100, 20);
			this->HPh3->TabIndex = 98;
			// 
			// HPh2
			// 
			this->HPh2->Location = System::Drawing::Point(165, 243);
			this->HPh2->Name = L"HPh2";
			this->HPh2->Size = System::Drawing::Size(100, 20);
			this->HPh2->TabIndex = 97;
			// 
			// HPh1
			// 
			this->HPh1->Location = System::Drawing::Point(59, 243);
			this->HPh1->Name = L"HPh1";
			this->HPh1->Size = System::Drawing::Size(100, 20);
			this->HPh1->TabIndex = 96;
			// 
			// area5
			// 
			this->area5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->area5->Location = System::Drawing::Point(446, 361);
			this->area5->Name = L"area5";
			this->area5->Size = System::Drawing::Size(100, 22);
			this->area5->TabIndex = 95;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(339, 392);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 16);
			this->label8->TabIndex = 94;
			this->label8->Text = L"Resultado P:";
			// 
			// perimetro5
			// 
			this->perimetro5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perimetro5->Location = System::Drawing::Point(446, 389);
			this->perimetro5->Name = L"perimetro5";
			this->perimetro5->Size = System::Drawing::Size(100, 22);
			this->perimetro5->TabIndex = 93;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(339, 365);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 16);
			this->label9->TabIndex = 92;
			this->label9->Text = L"Resultado A:";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(384, 307);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 35);
			this->button5->TabIndex = 91;
			this->button5->Text = L"Calcular";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Heptagono::button5_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(509, 127);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 90;
			this->label5->Text = L"Lado 5:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(404, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 16);
			this->label4->TabIndex = 89;
			this->label4->Text = L"Lado 4:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(299, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 16);
			this->label3->TabIndex = 88;
			this->label3->Text = L"Lado 3:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(193, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 16);
			this->label2->TabIndex = 87;
			this->label2->Text = L"Lado 2:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(83, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 86;
			this->label1->Text = L"Lado 1:";
			// 
			// LadoHP5
			// 
			this->LadoHP5->Location = System::Drawing::Point(483, 104);
			this->LadoHP5->Name = L"LadoHP5";
			this->LadoHP5->Size = System::Drawing::Size(100, 20);
			this->LadoHP5->TabIndex = 85;
			// 
			// LadoHP4
			// 
			this->LadoHP4->Location = System::Drawing::Point(377, 104);
			this->LadoHP4->Name = L"LadoHP4";
			this->LadoHP4->Size = System::Drawing::Size(100, 20);
			this->LadoHP4->TabIndex = 84;
			// 
			// LadoHP3
			// 
			this->LadoHP3->Location = System::Drawing::Point(271, 104);
			this->LadoHP3->Name = L"LadoHP3";
			this->LadoHP3->Size = System::Drawing::Size(100, 20);
			this->LadoHP3->TabIndex = 83;
			// 
			// LadoHP2
			// 
			this->LadoHP2->Location = System::Drawing::Point(165, 104);
			this->LadoHP2->Name = L"LadoHP2";
			this->LadoHP2->Size = System::Drawing::Size(100, 20);
			this->LadoHP2->TabIndex = 82;
			// 
			// LadoHP1
			// 
			this->LadoHP1->Location = System::Drawing::Point(59, 104);
			this->LadoHP1->Name = L"LadoHP1";
			this->LadoHP1->Size = System::Drawing::Size(100, 20);
			this->LadoHP1->TabIndex = 81;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(379, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 27);
			this->label7->TabIndex = 80;
			this->label7->Text = L"Heptagono";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(347, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 27);
			this->label6->TabIndex = 79;
			this->label6->Text = L"Perimetro y Area";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(721, 127);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(55, 16);
			this->label19->TabIndex = 114;
			this->label19->Text = L"Lado 7:";
			// 
			// LadoHP7
			// 
			this->LadoHP7->Location = System::Drawing::Point(695, 104);
			this->LadoHP7->Name = L"LadoHP7";
			this->LadoHP7->Size = System::Drawing::Size(100, 20);
			this->LadoHP7->TabIndex = 113;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(732, 266);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(31, 16);
			this->label20->TabIndex = 116;
			this->label20->Text = L"h 7:";
			// 
			// HPh7
			// 
			this->HPh7->Location = System::Drawing::Point(695, 243);
			this->HPh7->Name = L"HPh7";
			this->HPh7->Size = System::Drawing::Size(100, 20);
			this->HPh7->TabIndex = 115;
			// 
			// Heptagono
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(859, 446);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->HPh7);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->LadoHP7);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->HPh6);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->LadoHP6);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->HPpentagono);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->HPh5);
			this->Controls->Add(this->HPh4);
			this->Controls->Add(this->HPh3);
			this->Controls->Add(this->HPh2);
			this->Controls->Add(this->HPh1);
			this->Controls->Add(this->area5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->perimetro5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LadoHP5);
			this->Controls->Add(this->LadoHP4);
			this->Controls->Add(this->LadoHP3);
			this->Controls->Add(this->LadoHP2);
			this->Controls->Add(this->LadoHP1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Name = L"Heptagono";
			this->Text = L"Heptagono";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: System::Void calcularHeptagono() {
			Figura Heptagono = Figura();
			Heptagono.lado1 = Convert::ToDouble(this->LadoHP1->Text);
			Heptagono.lado2 = Convert::ToDouble(this->LadoHP2->Text);
			Heptagono.lado3 = Convert::ToDouble(this->LadoHP3->Text);
			Heptagono.lado4 = Convert::ToDouble(this->LadoHP4->Text);
			Heptagono.lado5 = Convert::ToDouble(this->LadoHP5->Text);
			Heptagono.lado6 = Convert::ToDouble(this->LadoHP6->Text);
			Heptagono.lado7 = Convert::ToDouble(this->LadoHP7->Text);

			Heptagono.ap = Convert::ToDouble(this->HPpentagono->Text);

			Heptagono.h1 = Convert::ToDouble(this->HPh1->Text);
			Heptagono.h2 = Convert::ToDouble(this->HPh2->Text);
			Heptagono.h3 = Convert::ToDouble(this->HPh3->Text);
			Heptagono.h4 = Convert::ToDouble(this->HPh4->Text);
			Heptagono.h5 = Convert::ToDouble(this->HPh5->Text);
			Heptagono.h6 = Convert::ToDouble(this->HPh6->Text);
			Heptagono.h7 = Convert::ToDouble(this->HPh7->Text);

			perimetro5->Text = Heptagono.perimetroPentagono().ToString();
			area5->Text = Heptagono.areapentagono().ToString();
		}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		this->calcularHeptagono();

	}

};
}

#pragma once

namespace MMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Start;
	private: System::Windows::Forms::RadioButton^  Sinus;
	private: System::Windows::Forms::RadioButton^  Triangle;
	private: System::Windows::Forms::RadioButton^  Rectangel;
	private: System::Windows::Forms::Label^  Tytu³;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  Ampituda;
	private: System::Windows::Forms::Label^  Okres;
	private: System::Windows::Forms::Label^  A1;
	private: System::Windows::Forms::Label^  A2;






	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Start = (gcnew System::Windows::Forms::Button());
			this->Sinus = (gcnew System::Windows::Forms::RadioButton());
			this->Triangle = (gcnew System::Windows::Forms::RadioButton());
			this->Rectangel = (gcnew System::Windows::Forms::RadioButton());
			this->Tytu³ = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->Ampituda = (gcnew System::Windows::Forms::Label());
			this->Okres = (gcnew System::Windows::Forms::Label());
			this->A1 = (gcnew System::Windows::Forms::Label());
			this->A2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Start
			// 
			this->Start->BackColor = System::Drawing::SystemColors::Highlight;
			this->Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Start->Location = System::Drawing::Point(1128, 580);
			this->Start->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(107, 40);
			this->Start->TabIndex = 0;
			this->Start->Text = L"Start";
			this->Start->UseVisualStyleBackColor = false;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::Start_Click);
			// 
			// Sinus
			// 
			this->Sinus->AutoSize = true;
			this->Sinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Sinus->Location = System::Drawing::Point(47, 105);
			this->Sinus->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Sinus->Name = L"Sinus";
			this->Sinus->Size = System::Drawing::Size(292, 24);
			this->Sinus->TabIndex = 1;
			this->Sinus->TabStop = true;
			this->Sinus->Text = L"Pobudzenie Sygna³em Sinusoidalnym";
			this->Sinus->UseVisualStyleBackColor = true;
			// 
			// Triangle
			// 
			this->Triangle->AutoSize = true;
			this->Triangle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Triangle->Location = System::Drawing::Point(47, 128);
			this->Triangle->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Triangle->Name = L"Triangle";
			this->Triangle->Size = System::Drawing::Size(278, 24);
			this->Triangle->TabIndex = 2;
			this->Triangle->TabStop = true;
			this->Triangle->Text = L"Pobudzwenie Sygna³em Trójk¹tnym";
			this->Triangle->UseVisualStyleBackColor = true;
			// 
			// Rectangel
			// 
			this->Rectangel->AutoSize = true;
			this->Rectangel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Rectangel->Location = System::Drawing::Point(47, 151);
			this->Rectangel->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Rectangel->Name = L"Rectangel";
			this->Rectangel->Size = System::Drawing::Size(287, 24);
			this->Rectangel->TabIndex = 3;
			this->Rectangel->TabStop = true;
			this->Rectangel->Text = L"Pobudzenie Sygna³em Prostok¹tnym";
			this->Rectangel->UseVisualStyleBackColor = true;
			// 
			// Tytu³
			// 
			this->Tytu³->AutoSize = true;
			this->Tytu³->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Tytu³->Location = System::Drawing::Point(283, 31);
			this->Tytu³->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Tytu³->Name = L"Tytu³";
			this->Tytu³->Size = System::Drawing::Size(736, 39);
			this->Tytu³->TabIndex = 4;
			this->Tytu³->Text = L"Metody Modelowania Matematycznego Projekt";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(430, 134);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(642, 134);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(860, 134);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1063, 134);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// Ampituda
			// 
			this->Ampituda->AutoSize = true;
			this->Ampituda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Ampituda->Location = System::Drawing::Point(418, 111);
			this->Ampituda->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Ampituda->Name = L"Ampituda";
			this->Ampituda->Size = System::Drawing::Size(125, 18);
			this->Ampituda->TabIndex = 9;
			this->Ampituda->Text = L"Ampituda Sygna³u";
			// 
			// Okres
			// 
			this->Okres->AutoSize = true;
			this->Okres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Okres->Location = System::Drawing::Point(638, 111);
			this->Okres->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Okres->Name = L"Okres";
			this->Okres->Size = System::Drawing::Size(105, 18);
			this->Okres->TabIndex = 10;
			this->Okres->Text = L"Okres Sygna³u";
			// 
			// A1
			// 
			this->A1->AutoSize = true;
			this->A1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->A1->Location = System::Drawing::Point(868, 111);
			this->A1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(81, 18);
			this->A1->TabIndex = 11;
			this->A1->Text = L"Zwê¿ka A1";
			// 
			// A2
			// 
			this->A2->AutoSize = true;
			this->A2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->A2->Location = System::Drawing::Point(1070, 111);
			this->A2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(81, 18);
			this->A2->TabIndex = 12;
			this->A2->Text = L"Zwê¿ka A2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1283, 633);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->Okres);
			this->Controls->Add(this->Ampituda);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Tytu³);
			this->Controls->Add(this->Rectangel);
			this->Controls->Add(this->Triangle);
			this->Controls->Add(this->Sinus);
			this->Controls->Add(this->Start);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Name = L"MyForm";
			this->Text = L"MMM";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}

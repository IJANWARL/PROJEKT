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
			this->SuspendLayout();
			// 
			// Start
			// 
			this->Start->BackColor = System::Drawing::SystemColors::Highlight;
			this->Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Start->Location = System::Drawing::Point(1128, 580);
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
			this->Tytu³->Name = L"Tytu³";
			this->Tytu³->Size = System::Drawing::Size(736, 39);
			this->Tytu³->TabIndex = 4;
			this->Tytu³->Text = L"Metody Modelowania Matematycznego Projekt";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1284, 641);
			this->Controls->Add(this->Tytu³);
			this->Controls->Add(this->Rectangel);
			this->Controls->Add(this->Triangle);
			this->Controls->Add(this->Sinus);
			this->Controls->Add(this->Start);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}

#pragma once
#include <iostream>
#include <cstdlib>

namespace MMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::TextBox^  Ampityda_T;
	private: System::Windows::Forms::TextBox^  Okres_T;
	private: System::Windows::Forms::TextBox^  A1_T;
	private: System::Windows::Forms::TextBox^  A2_T;




	private: System::Windows::Forms::Label^  Ampituda;
	private: System::Windows::Forms::Label^  Okres;
	private: System::Windows::Forms::Label^  A1;
	private: System::Windows::Forms::Label^  A2;
	private: System::Windows::Forms::TextBox^  Pocz;
	private: System::Windows::Forms::TextBox^  Kon;
	private: System::Windows::Forms::TextBox^  Wyn;
	private: System::Windows::Forms::TextBox^  Wys;
	private: System::Windows::Forms::Label^  Pocz_L;
	private: System::Windows::Forms::Label^  Kon_L;
	private: System::Windows::Forms::Label^  Wys_L;
	private: System::Windows::Forms::Label^  Wyn_L;
	private: System::Windows::Forms::Label^  Opis_Test;






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
			this->Ampityda_T = (gcnew System::Windows::Forms::TextBox());
			this->Okres_T = (gcnew System::Windows::Forms::TextBox());
			this->A1_T = (gcnew System::Windows::Forms::TextBox());
			this->A2_T = (gcnew System::Windows::Forms::TextBox());
			this->Ampituda = (gcnew System::Windows::Forms::Label());
			this->Okres = (gcnew System::Windows::Forms::Label());
			this->A1 = (gcnew System::Windows::Forms::Label());
			this->A2 = (gcnew System::Windows::Forms::Label());
			this->Pocz = (gcnew System::Windows::Forms::TextBox());
			this->Kon = (gcnew System::Windows::Forms::TextBox());
			this->Wyn = (gcnew System::Windows::Forms::TextBox());
			this->Wys = (gcnew System::Windows::Forms::TextBox());
			this->Pocz_L = (gcnew System::Windows::Forms::Label());
			this->Kon_L = (gcnew System::Windows::Forms::Label());
			this->Wys_L = (gcnew System::Windows::Forms::Label());
			this->Wyn_L = (gcnew System::Windows::Forms::Label());
			this->Opis_Test = (gcnew System::Windows::Forms::Label());
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
			this->Triangle->Size = System::Drawing::Size(267, 24);
			this->Triangle->TabIndex = 2;
			this->Triangle->TabStop = true;
			this->Triangle->Text = L"Pobudzenie Sygna³em Trójk¹tnym";
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
			// Ampityda_T
			// 
			this->Ampityda_T->Location = System::Drawing::Point(430, 134);
			this->Ampityda_T->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Ampityda_T->Name = L"Ampityda_T";
			this->Ampityda_T->Size = System::Drawing::Size(100, 20);
			this->Ampityda_T->TabIndex = 5;
			// 
			// Okres_T
			// 
			this->Okres_T->Location = System::Drawing::Point(642, 134);
			this->Okres_T->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Okres_T->Name = L"Okres_T";
			this->Okres_T->Size = System::Drawing::Size(100, 20);
			this->Okres_T->TabIndex = 6;
			// 
			// A1_T
			// 
			this->A1_T->Location = System::Drawing::Point(860, 134);
			this->A1_T->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->A1_T->Name = L"A1_T";
			this->A1_T->Size = System::Drawing::Size(100, 20);
			this->A1_T->TabIndex = 7;
			// 
			// A2_T
			// 
			this->A2_T->Location = System::Drawing::Point(1063, 134);
			this->A2_T->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->A2_T->Name = L"A2_T";
			this->A2_T->Size = System::Drawing::Size(100, 20);
			this->A2_T->TabIndex = 8;
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
			// Pocz
			// 
			this->Pocz->Location = System::Drawing::Point(65, 413);
			this->Pocz->Name = L"Pocz";
			this->Pocz->Size = System::Drawing::Size(100, 20);
			this->Pocz->TabIndex = 13;
			// 
			// Kon
			// 
			this->Kon->Location = System::Drawing::Point(214, 413);
			this->Kon->Name = L"Kon";
			this->Kon->Size = System::Drawing::Size(100, 20);
			this->Kon->TabIndex = 14;
			// 
			// Wyn
			// 
			this->Wyn->Location = System::Drawing::Point(65, 529);
			this->Wyn->Name = L"Wyn";
			this->Wyn->Size = System::Drawing::Size(407, 20);
			this->Wyn->TabIndex = 15;
			// 
			// Wys
			// 
			this->Wys->Location = System::Drawing::Point(372, 413);
			this->Wys->Name = L"Wys";
			this->Wys->Size = System::Drawing::Size(100, 20);
			this->Wys->TabIndex = 16;
			// 
			// Pocz_L
			// 
			this->Pocz_L->AutoSize = true;
			this->Pocz_L->Location = System::Drawing::Point(62, 388);
			this->Pocz_L->Name = L"Pocz_L";
			this->Pocz_L->Size = System::Drawing::Size(105, 13);
			this->Pocz_L->TabIndex = 17;
			this->Pocz_L->Text = L"Pocz¹tek Przedzia³u";
			// 
			// Kon_L
			// 
			this->Kon_L->AutoSize = true;
			this->Kon_L->Location = System::Drawing::Point(221, 388);
			this->Kon_L->Name = L"Kon_L";
			this->Kon_L->Size = System::Drawing::Size(93, 13);
			this->Kon_L->TabIndex = 18;
			this->Kon_L->Text = L"Koniec Przedzia³u";
			// 
			// Wys_L
			// 
			this->Wys_L->AutoSize = true;
			this->Wys_L->Location = System::Drawing::Point(386, 388);
			this->Wys_L->Name = L"Wys_L";
			this->Wys_L->Size = System::Drawing::Size(57, 13);
			this->Wys_L->TabIndex = 19;
			this->Wys_L->Text = L"Wysokoœæ";
			// 
			// Wyn_L
			// 
			this->Wyn_L->AutoSize = true;
			this->Wyn_L->Location = System::Drawing::Point(217, 513);
			this->Wyn_L->Name = L"Wyn_L";
			this->Wyn_L->Size = System::Drawing::Size(97, 13);
			this->Wyn_L->TabIndex = 20;
			this->Wyn_L->Text = L"Wynik Ca³kowania";
			// 
			// Opis_Test
			// 
			this->Opis_Test->AutoSize = true;
			this->Opis_Test->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Opis_Test->Location = System::Drawing::Point(12, 341);
			this->Opis_Test->Name = L"Opis_Test";
			this->Opis_Test->Size = System::Drawing::Size(581, 20);
			this->Opis_Test->TabIndex = 21;
			this->Opis_Test->Text = L"Testowe ca³kowanie dla prostok¹ta (w liczbach nie ca³kowitych u¿ywaæ przecinka)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1283, 633);
			this->Controls->Add(this->Opis_Test);
			this->Controls->Add(this->Wyn_L);
			this->Controls->Add(this->Wys_L);
			this->Controls->Add(this->Kon_L);
			this->Controls->Add(this->Pocz_L);
			this->Controls->Add(this->Wys);
			this->Controls->Add(this->Wyn);
			this->Controls->Add(this->Kon);
			this->Controls->Add(this->Pocz);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->Okres);
			this->Controls->Add(this->Ampituda);
			this->Controls->Add(this->A2_T);
			this->Controls->Add(this->A1_T);
			this->Controls->Add(this->Okres_T);
			this->Controls->Add(this->Ampityda_T);
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
#pragma endregion,
	
	

	private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			double pocz = Convert::ToDouble(Pocz->Text); 
			double kon = Convert::ToDouble(Kon->Text);
			Calkowanie(pocz, kon);
		}

	private:	 double f(double x) 
		{
			double funkcja = Convert::ToDouble(Wys->Text);
			return funkcja;
		}


	private:	 void Calkowanie(double pocz, double kon)
		{
		
			double h, calka;
			int n;
				
				n = 1000;  // im wieksze n tym wieksza dokladnoœc
 
				h = (kon - pocz) / (float)n;
 
				cout << "krok: h=" << h << endl;
 
				calka = 0;
				for (int i=1; i<n; i++)
				{
					calka += f(pocz + i * h);
				}
				calka += f(pocz) / 2;
				calka += f(kon) / 2;
				calka *= h;
				Wyn->Text = Convert::ToString(calka);
			//calka to wynik ca³kowania
 
		}




};
}

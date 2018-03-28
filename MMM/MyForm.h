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
	private: System::Windows::Forms::TextBox^  Amplituda_T;

	private: System::Windows::Forms::TextBox^  Okres_T;
	private: System::Windows::Forms::TextBox^  A1_T;
	private: System::Windows::Forms::TextBox^  A2_T;
	private: System::Windows::Forms::Label^  Amplituda;





	private: System::Windows::Forms::Label^  Okres;
	private: System::Windows::Forms::Label^  A1;
	private: System::Windows::Forms::Label^  A2;


	private: System::Windows::Forms::TextBox^  Wyn;




	private: System::Windows::Forms::Label^  Wyn_L;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^  Wykres2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  Wykres1;
	private: System::Windows::Forms::Label^  H1;
	private: System::Windows::Forms::Label^  H2;
	private: System::Windows::Forms::TextBox^  H1_T;
	private: System::Windows::Forms::TextBox^  H2_T;
	private: System::Windows::Forms::Label^  Czas;
	private: System::Windows::Forms::TextBox^  Czas_T;
	private: System::Windows::Forms::TextBox^  Dok_T;
	private: System::Windows::Forms::Label^  Dokladnosc;







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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^  title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^  title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^  title5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^  title6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Start = (gcnew System::Windows::Forms::Button());
			this->Sinus = (gcnew System::Windows::Forms::RadioButton());
			this->Triangle = (gcnew System::Windows::Forms::RadioButton());
			this->Rectangel = (gcnew System::Windows::Forms::RadioButton());
			this->Tytu³ = (gcnew System::Windows::Forms::Label());
			this->Amplituda_T = (gcnew System::Windows::Forms::TextBox());
			this->Okres_T = (gcnew System::Windows::Forms::TextBox());
			this->A1_T = (gcnew System::Windows::Forms::TextBox());
			this->A2_T = (gcnew System::Windows::Forms::TextBox());
			this->Amplituda = (gcnew System::Windows::Forms::Label());
			this->Okres = (gcnew System::Windows::Forms::Label());
			this->A1 = (gcnew System::Windows::Forms::Label());
			this->A2 = (gcnew System::Windows::Forms::Label());
			this->Wyn = (gcnew System::Windows::Forms::TextBox());
			this->Wyn_L = (gcnew System::Windows::Forms::Label());
			this->Wykres2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Wykres1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->H1 = (gcnew System::Windows::Forms::Label());
			this->H2 = (gcnew System::Windows::Forms::Label());
			this->H1_T = (gcnew System::Windows::Forms::TextBox());
			this->H2_T = (gcnew System::Windows::Forms::TextBox());
			this->Czas = (gcnew System::Windows::Forms::Label());
			this->Czas_T = (gcnew System::Windows::Forms::TextBox());
			this->Dok_T = (gcnew System::Windows::Forms::TextBox());
			this->Dokladnosc = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wykres2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wykres1))->BeginInit();
			this->SuspendLayout();
			// 
			// Start
			// 
			this->Start->BackColor = System::Drawing::Color::SteelBlue;
			this->Start->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Start->Location = System::Drawing::Point(77, 559);
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
			this->Sinus->Location = System::Drawing::Point(42, 62);
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
			this->Triangle->Location = System::Drawing::Point(42, 94);
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
			this->Rectangel->Location = System::Drawing::Point(42, 126);
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
			this->Tytu³->Location = System::Drawing::Point(279, 9);
			this->Tytu³->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Tytu³->Name = L"Tytu³";
			this->Tytu³->Size = System::Drawing::Size(736, 39);
			this->Tytu³->TabIndex = 4;
			this->Tytu³->Text = L"Metody Modelowania Matematycznego Projekt";
			// 
			// Amplituda_T
			// 
			this->Amplituda_T->Location = System::Drawing::Point(478, 69);
			this->Amplituda_T->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Amplituda_T->Name = L"Amplituda_T";
			this->Amplituda_T->Size = System::Drawing::Size(100, 20);
			this->Amplituda_T->TabIndex = 5;
			// 
			// Okres_T
			// 
			this->Okres_T->Location = System::Drawing::Point(478, 101);
			this->Okres_T->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Okres_T->Name = L"Okres_T";
			this->Okres_T->Size = System::Drawing::Size(100, 20);
			this->Okres_T->TabIndex = 6;
			// 
			// A1_T
			// 
			this->A1_T->Location = System::Drawing::Point(729, 69);
			this->A1_T->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->A1_T->Name = L"A1_T";
			this->A1_T->Size = System::Drawing::Size(100, 20);
			this->A1_T->TabIndex = 7;
			// 
			// A2_T
			// 
			this->A2_T->Location = System::Drawing::Point(729, 101);
			this->A2_T->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->A2_T->Name = L"A2_T";
			this->A2_T->Size = System::Drawing::Size(100, 20);
			this->A2_T->TabIndex = 8;
			// 
			// Amplituda
			// 
			this->Amplituda->AutoSize = true;
			this->Amplituda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Amplituda->Location = System::Drawing::Point(346, 68);
			this->Amplituda->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Amplituda->Name = L"Amplituda";
			this->Amplituda->Size = System::Drawing::Size(128, 18);
			this->Amplituda->TabIndex = 9;
			this->Amplituda->Text = L"Amplituda Sygna³u";
			// 
			// Okres
			// 
			this->Okres->AutoSize = true;
			this->Okres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Okres->Location = System::Drawing::Point(346, 100);
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
			this->A1->Location = System::Drawing::Point(644, 68);
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
			this->A2->Location = System::Drawing::Point(644, 100);
			this->A2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(81, 18);
			this->A2->TabIndex = 12;
			this->A2->Text = L"Zwê¿ka A2";
			// 
			// Wyn
			// 
			this->Wyn->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Wyn->Cursor = System::Windows::Forms::Cursors::Default;
			this->Wyn->Location = System::Drawing::Point(93, 420);
			this->Wyn->Margin = System::Windows::Forms::Padding(0);
			this->Wyn->Name = L"Wyn";
			this->Wyn->Size = System::Drawing::Size(91, 20);
			this->Wyn->TabIndex = 15;
			// 
			// Wyn_L
			// 
			this->Wyn_L->AutoSize = true;
			this->Wyn_L->Location = System::Drawing::Point(87, 388);
			this->Wyn_L->Name = L"Wyn_L";
			this->Wyn_L->Size = System::Drawing::Size(97, 13);
			this->Wyn_L->TabIndex = 20;
			this->Wyn_L->Text = L"Wynik Ca³kowania";
			// 
			// Wykres2
			// 
			this->Wykres2->BackColor = System::Drawing::Color::LightBlue;
			chartArea1->Name = L"ChartArea1";
			this->Wykres2->ChartAreas->Add(chartArea1);
			this->Wykres2->Location = System::Drawing::Point(781, 173);
			this->Wykres2->Name = L"Wykres2";
			this->Wykres2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Name = L"H2(t)";
			this->Wykres2->Series->Add(series1);
			this->Wykres2->Size = System::Drawing::Size(487, 426);
			this->Wykres2->TabIndex = 23;
			this->Wykres2->Text = L"Zbiornik 2";
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			title1->Name = L"Title1";
			title1->Text = L"Wysokoœæ s³upa wody w zbiorniku 2";
			title2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title2->Name = L"Title2";
			title2->Text = L"Czas [s]";
			title3->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
			title3->Name = L"Title3";
			title3->Text = L"Wysokoœæ [cm]";
			this->Wykres2->Titles->Add(title1);
			this->Wykres2->Titles->Add(title2);
			this->Wykres2->Titles->Add(title3);
			// 
			// Wykres1
			// 
			this->Wykres1->BackColor = System::Drawing::Color::LightBlue;
			chartArea2->Name = L"ChartArea1";
			this->Wykres1->ChartAreas->Add(chartArea2);
			this->Wykres1->Location = System::Drawing::Point(286, 173);
			this->Wykres1->Name = L"Wykres1";
			this->Wykres1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			this->Wykres1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->MarkerStep = 2;
			series2->Name = L"H1(t)";
			this->Wykres1->Series->Add(series2);
			this->Wykres1->Size = System::Drawing::Size(487, 426);
			this->Wykres1->TabIndex = 22;
			this->Wykres1->Text = L"Zbiprnik 1";
			title4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			title4->Name = L"Title1";
			title4->Text = L"Wysokoœæ s³upa wody w zbiorniku 1";
			title5->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title5->Name = L"Title2";
			title5->Text = L"Czas [s]";
			title6->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
			title6->Name = L"Title3";
			title6->Text = L"Wysokoœæ [cm]";
			this->Wykres1->Titles->Add(title4);
			this->Wykres1->Titles->Add(title5);
			this->Wykres1->Titles->Add(title6);
			// 
			// H1
			// 
			this->H1->AutoSize = true;
			this->H1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->H1->Location = System::Drawing::Point(860, 100);
			this->H1->Name = L"H1";
			this->H1->Size = System::Drawing::Size(103, 18);
			this->H1->TabIndex = 24;
			this->H1->Text = L"Wysokoœæ H1";
			// 
			// H2
			// 
			this->H2->AutoSize = true;
			this->H2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->H2->Location = System::Drawing::Point(860, 68);
			this->H2->Name = L"H2";
			this->H2->Size = System::Drawing::Size(103, 18);
			this->H2->TabIndex = 25;
			this->H2->Text = L"Wysokoœæ H2";
			// 
			// H1_T
			// 
			this->H1_T->Location = System::Drawing::Point(969, 101);
			this->H1_T->Name = L"H1_T";
			this->H1_T->Size = System::Drawing::Size(100, 20);
			this->H1_T->TabIndex = 26;
			// 
			// H2_T
			// 
			this->H2_T->Location = System::Drawing::Point(969, 69);
			this->H2_T->Name = L"H2_T";
			this->H2_T->Size = System::Drawing::Size(100, 20);
			this->H2_T->TabIndex = 27;
			// 
			// Czas
			// 
			this->Czas->AutoSize = true;
			this->Czas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Czas->Location = System::Drawing::Point(11, 173);
			this->Czas->Name = L"Czas";
			this->Czas->Size = System::Drawing::Size(265, 18);
			this->Czas->TabIndex = 28;
			this->Czas->Text = L"Zakres Osi Czasu (zakres ca³kowania)";
			// 
			// Czas_T
			// 
			this->Czas_T->Location = System::Drawing::Point(84, 216);
			this->Czas_T->Name = L"Czas_T";
			this->Czas_T->Size = System::Drawing::Size(100, 20);
			this->Czas_T->TabIndex = 29;
			// 
			// Dok_T
			// 
			this->Dok_T->Location = System::Drawing::Point(84, 313);
			this->Dok_T->Name = L"Dok_T";
			this->Dok_T->Size = System::Drawing::Size(100, 20);
			this->Dok_T->TabIndex = 30;
			// 
			// Dokladnosc
			// 
			this->Dokladnosc->AutoSize = true;
			this->Dokladnosc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Dokladnosc->Location = System::Drawing::Point(12, 272);
			this->Dokladnosc->Name = L"Dokladnosc";
			this->Dokladnosc->Size = System::Drawing::Size(264, 18);
			this->Dokladnosc->TabIndex = 31;
			this->Dokladnosc->Text = L"Dok³adnoœæ (100=ma³a, 100000=du¿a)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1283, 635);
			this->Controls->Add(this->Dokladnosc);
			this->Controls->Add(this->Dok_T);
			this->Controls->Add(this->Czas_T);
			this->Controls->Add(this->Czas);
			this->Controls->Add(this->H2_T);
			this->Controls->Add(this->H1_T);
			this->Controls->Add(this->H2);
			this->Controls->Add(this->H1);
			this->Controls->Add(this->Wykres2);
			this->Controls->Add(this->Wykres1);
			this->Controls->Add(this->Wyn_L);
			this->Controls->Add(this->Wyn);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->Okres);
			this->Controls->Add(this->Amplituda);
			this->Controls->Add(this->A2_T);
			this->Controls->Add(this->A1_T);
			this->Controls->Add(this->Okres_T);
			this->Controls->Add(this->Amplituda_T);
			this->Controls->Add(this->Tytu³);
			this->Controls->Add(this->Rectangel);
			this->Controls->Add(this->Triangle);
			this->Controls->Add(this->Sinus);
			this->Controls->Add(this->Start);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Name = L"MyForm";
			this->Text = L"MMM";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wykres2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wykres1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion,
	
	private: void dod_pkt1 (double x, double y)
		{
			Wykres1->Series[0]->Points->AddXY(x, y);;
		}

	private: void dod_pkt2(double x, double y)
		{
			Wykres2->Series[0]->Points->AddXY(x, y);;
		}

	private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			dod_pkt1(0, 0);
			dod_pkt2(0, 0);
		
			if (Amplituda_T->Text == "" || Okres_T->Text == "" || A1_T->Text == "" || A2_T->Text == "" || H1_T->Text == "" || H2_T->Text == "" || Czas_T->Text == "" || Dok_T->Text == "")
			{
				MessageBox::Show("Pola Ampituda, Okres, A1, A2, H1, H2, Zakres i Dok³adnoœæ nie mog¹ zostaæ puste!", "UWAGA!", MessageBoxButtons::OK , MessageBoxIcon::Information);
				return;
			}

			
			calkowanie();
		}

	private:	 double funkcja (double x) 
		{
			double funkcja = x;
			return funkcja;
		}


	private:	 void calkowanie()
		{
			double czas = Convert::ToInt32(Czas_T->Text), h, calka,p;
			int n;
				
				n = Convert::ToInt32(Dok_T->Text); 
 
				h = czas / (float)n;
				p = n / czas;

				for (int i=0; i<n; i++)
				{
					calka += (funkcja(i * h)+funkcja((i+1)*h))*h/2;
					dod_pkt1(((float)i+1)/p, calka);
				}
				Wyn->Text = Convert::ToString(calka);
 
		}



};
}

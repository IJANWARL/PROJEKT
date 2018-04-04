#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdlib>
#include <cmath>

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
		private: System::Windows::Forms::Button^  clear1;
		private: System::Windows::Forms::Button^  clear2;
		private: System::Windows::Forms::DataVisualization::Charting::Chart^  Wykres3;
		private: System::Windows::Forms::Button^  clear3;
		private: System::Windows::Forms::Button^  clear4;
		
		static int p = 1;
		static double PI = M_PI;
		static double g = 9.80665;
		
	
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
			/// Wyczyść wszystkie używane zasoby.
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
		private: System::Windows::Forms::Label^  Tytuł;
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


		private:
			/// <summary>
			/// Wymagana zmienna projektanta.
			/// </summary>
			System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
			/// <summary>
			/// Wymagana metoda obsługi projektanta — nie należy modyfikować 
			/// zawartość tej metody z edytorem kodu.
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
				System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
				System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
				System::Windows::Forms::DataVisualization::Charting::Title^  title7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
				System::Windows::Forms::DataVisualization::Charting::Title^  title8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
				this->Start = (gcnew System::Windows::Forms::Button());
				this->Sinus = (gcnew System::Windows::Forms::RadioButton());
				this->Triangle = (gcnew System::Windows::Forms::RadioButton());
				this->Rectangel = (gcnew System::Windows::Forms::RadioButton());
				this->Tytuł = (gcnew System::Windows::Forms::Label());
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
				this->clear1 = (gcnew System::Windows::Forms::Button());
				this->clear2 = (gcnew System::Windows::Forms::Button());
				this->Wykres3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
				this->clear3 = (gcnew System::Windows::Forms::Button());
				this->clear4 = (gcnew System::Windows::Forms::Button());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wykres2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wykres1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wykres3))->BeginInit();
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
				this->Sinus->Text = L"Pobudzenie Sygnałem Sinusoidalnym";
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
				this->Triangle->Text = L"Pobudzenie Sygnałem Trójkątnym";
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
				this->Rectangel->Text = L"Pobudzenie Sygnałem Prostokątnym";
				this->Rectangel->UseVisualStyleBackColor = true;
				// 
				// Tytuł
				// 
				this->Tytuł->AutoSize = true;
				this->Tytuł->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(238)));
				this->Tytuł->Location = System::Drawing::Point(279, 9);
				this->Tytuł->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->Tytuł->Name = L"Tytuł";
				this->Tytuł->Size = System::Drawing::Size(736, 39);
				this->Tytuł->TabIndex = 4;
				this->Tytuł->Text = L"Metody Modelowania Matematycznego Projekt";
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
				this->Amplituda->Text = L"Amplituda Sygnału";
				// 
				// Okres
				// 
				this->Okres->AutoSize = true;
				this->Okres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(238)));
				this->Okres->Location = System::Drawing::Point(346, 100);
				this->Okres->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->Okres->Name = L"Okres";
				this->Okres->Size = System::Drawing::Size(125, 18);
				this->Okres->TabIndex = 10;
				this->Okres->Text = L"Okres Sygnału [s]";
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
				this->A1->Text = L"Zwężka A1";
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
				this->A2->Text = L"Zwężka A2";
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
				this->Wyn_L->Text = L"Wynik Całkowania";
				// 
				// Wykres2
				// 
				this->Wykres2->BackColor = System::Drawing::Color::LightBlue;
				chartArea1->Name = L"ChartArea1";
				this->Wykres2->ChartAreas->Add(chartArea1);
				this->Wykres2->Location = System::Drawing::Point(975, 157);
				this->Wykres2->Name = L"Wykres2";
				this->Wykres2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
				series1->BorderWidth = 2;
				series1->ChartArea = L"ChartArea1";
				series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
				series1->Color = System::Drawing::Color::Red;
				series1->Name = L"H2(t)";
				this->Wykres2->Series->Add(series1);
				this->Wykres2->Size = System::Drawing::Size(365, 307);
				this->Wykres2->TabIndex = 23;
				this->Wykres2->Text = L"Zbiornik 2";
				title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(238)));
				title1->Name = L"Title1";
				title1->Text = L"Wysokość słupa wody w zbiorniku 2 h2(t)";
				title2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
				title2->Name = L"Title2";
				title2->Text = L"Czas";
				title3->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
				title3->Name = L"Title3";
				title3->Text = L"Wysokość";
				this->Wykres2->Titles->Add(title1);
				this->Wykres2->Titles->Add(title2);
				this->Wykres2->Titles->Add(title3);
				// 
				// Wykres1
				// 
				this->Wykres1->BackColor = System::Drawing::Color::LightBlue;
				chartArea2->Name = L"ChartArea1";
				this->Wykres1->ChartAreas->Add(chartArea2);
				this->Wykres1->Location = System::Drawing::Point(604, 157);
				this->Wykres1->Name = L"Wykres1";
				this->Wykres1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
				this->Wykres1->RightToLeft = System::Windows::Forms::RightToLeft::No;
				series2->BorderWidth = 2;
				series2->ChartArea = L"ChartArea1";
				series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
				series2->Color = System::Drawing::Color::Red;
				series2->MarkerStep = 2;
				series2->Name = L"H1(t)";
				this->Wykres1->Series->Add(series2);
				this->Wykres1->Size = System::Drawing::Size(365, 307);
				this->Wykres1->TabIndex = 22;
				this->Wykres1->Text = L"Zbiornik 1";
				title4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(238)));
				title4->Name = L"Title1";
				title4->Text = L"Wysokość słupa wody w zbiorniku 1 h1(t)";
				title5->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
				title5->Name = L"Title2";
				title5->Text = L"Czas";
				title6->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
				title6->Name = L"Title3";
				title6->Text = L"Wysokość";
				this->Wykres1->Titles->Add(title4);
				this->Wykres1->Titles->Add(title5);
				this->Wykres1->Titles->Add(title6);
				// 
				// H1
				// 
				this->H1->AutoSize = true;
				this->H1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(238)));
				this->H1->Location = System::Drawing::Point(866, 71);
				this->H1->Name = L"H1";
				this->H1->Size = System::Drawing::Size(103, 18);
				this->H1->TabIndex = 24;
				this->H1->Text = L"Wysokość H1";
				// 
				// H2
				// 
				this->H2->AutoSize = true;
				this->H2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(238)));
				this->H2->Location = System::Drawing::Point(866, 103);
				this->H2->Name = L"H2";
				this->H2->Size = System::Drawing::Size(103, 18);
				this->H2->TabIndex = 25;
				this->H2->Text = L"Wysokość H2";
				// 
				// H1_T
				// 
				this->H1_T->Location = System::Drawing::Point(984, 72);
				this->H1_T->Name = L"H1_T";
				this->H1_T->Size = System::Drawing::Size(100, 20);
				this->H1_T->TabIndex = 26;
				// 
				// H2_T
				// 
				this->H2_T->Location = System::Drawing::Point(984, 104);
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
				this->Czas->Text = L"Zakres Osi Czasu (zakres całkowania)";
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
				this->Dokladnosc->Text = L"Dokładność (100=mała, 100000=duża)";
				// 
				// clear1
				// 
				this->clear1->BackColor = System::Drawing::Color::SteelBlue;
				this->clear1->Cursor = System::Windows::Forms::Cursors::Hand;
				this->clear1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(238)));
				this->clear1->Location = System::Drawing::Point(603, 424);
				this->clear1->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
				this->clear1->Name = L"clear1";
				this->clear1->Size = System::Drawing::Size(90, 40);
				this->clear1->TabIndex = 32;
				this->clear1->Text = L"Clear";
				this->clear1->UseVisualStyleBackColor = false;
				this->clear1->Click += gcnew System::EventHandler(this, &MyForm::clear1_Click);
				// 
				// clear2
				// 
				this->clear2->BackColor = System::Drawing::Color::SteelBlue;
				this->clear2->Cursor = System::Windows::Forms::Cursors::Hand;
				this->clear2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(238)));
				this->clear2->Location = System::Drawing::Point(975, 424);
				this->clear2->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
				this->clear2->Name = L"clear2";
				this->clear2->Size = System::Drawing::Size(90, 40);
				this->clear2->TabIndex = 33;
				this->clear2->Text = L"Clear";
				this->clear2->UseVisualStyleBackColor = false;
				this->clear2->Click += gcnew System::EventHandler(this, &MyForm::clear2_Click_1);
				// 
				// Wykres3
				// 
				this->Wykres3->BackColor = System::Drawing::Color::LightBlue;
				chartArea3->Name = L"ChartArea1";
				this->Wykres3->ChartAreas->Add(chartArea3);
				this->Wykres3->Location = System::Drawing::Point(282, 157);
				this->Wykres3->Name = L"Wykres3";
				this->Wykres3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
				series3->BorderWidth = 2;
				series3->ChartArea = L"ChartArea1";
				series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StepLine;
				series3->Color = System::Drawing::Color::Red;
				series3->Name = L"H2(t) sinus";
				this->Wykres3->Series->Add(series3);
				this->Wykres3->Size = System::Drawing::Size(316, 307);
				this->Wykres3->TabIndex = 34;
				this->Wykres3->Text = L"Pobudzenie";
				title7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(238)));
				title7->Name = L"Title1";
				title7->Text = L"Pobudzenie u(t)";
				title8->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
				title8->Name = L"Title2";
				title8->Text = L"Czas [s]";
				this->Wykres3->Titles->Add(title7);
				this->Wykres3->Titles->Add(title8);
				// 
				// clear3
				// 
				this->clear3->BackColor = System::Drawing::Color::SteelBlue;
				this->clear3->Cursor = System::Windows::Forms::Cursors::Hand;
				this->clear3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(238)));
				this->clear3->Location = System::Drawing::Point(282, 424);
				this->clear3->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
				this->clear3->Name = L"clear3";
				this->clear3->Size = System::Drawing::Size(90, 40);
				this->clear3->TabIndex = 35;
				this->clear3->Text = L"Clear";
				this->clear3->UseVisualStyleBackColor = false;
				this->clear3->Click += gcnew System::EventHandler(this, &MyForm::clear3_Click);
				// 
				// clear4
				// 
				this->clear4->BackColor = System::Drawing::Color::SteelBlue;
				this->clear4->Cursor = System::Windows::Forms::Cursors::Hand;
				this->clear4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(238)));
				this->clear4->Location = System::Drawing::Point(685, 536);
				this->clear4->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
				this->clear4->Name = L"clear4";
				this->clear4->Size = System::Drawing::Size(217, 40);
				this->clear4->TabIndex = 36;
				this->clear4->Text = L"Clear all";
				this->clear4->UseVisualStyleBackColor = false;
				this->clear4->Click += gcnew System::EventHandler(this, &MyForm::clear4_Click);
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::SystemColors::AppWorkspace;
				this->ClientSize = System::Drawing::Size(1343, 635);
				this->Controls->Add(this->clear4);
				this->Controls->Add(this->clear3);
				this->Controls->Add(this->Wykres3);
				this->Controls->Add(this->clear2);
				this->Controls->Add(this->clear1);
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
				this->Controls->Add(this->Tytuł);
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
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wykres3))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		#pragma endregion,

		private: void dod_pkt1(double x, double y)
		{
			Wykres1->Series[0]->Points->AddXY(x, y);;
		}


		private: void dod_pkt2(double x, double y)
		{
			Wykres2->Series[0]->Points->AddXY(x, y);;
		}


		private: void dod_pkt3(double x, double y)
		{
			Wykres3->Series[0]->Points->AddXY(x, y);;
		}
		

		private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e)
		{
			dod_pkt1(0, 0);
			dod_pkt2(0, 0);
			dod_pkt3(0, 0);

			if (Amplituda_T->Text == "" || Okres_T->Text == "" || A1_T->Text == "" || A2_T->Text == "" || H1_T->Text == "" || H2_T->Text == "" || Czas_T->Text == "" || Dok_T->Text == "")
			{
				MessageBox::Show("Pola Ampituda, Okres, A1, A2, H1, H2, Zakres i Dokładność nie mogą zostać puste!", "UWAGA!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			if (Convert::ToDouble(A1_T->Text) <= (Convert::ToDouble(A2_T->Text))) 
			{
				MessageBox::Show("Zwężka A1 musi byc wieksza od zwężki A2", "Błąd", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;

			}

			if (Convert::ToDouble(H1_T->Text) <= (Convert::ToDouble(H2_T->Text))) 
			{
				MessageBox::Show("Pierwszy zbiornik musi być powyżej drugiego", "Błąd", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;

			}

			if (Sinus->Checked || Triangle->Checked || Rectangel->Checked) 
			{ 
				calkowanie();
			}

			else
			{
				MessageBox::Show("Podaj rodzaj sygnału", "Błąd", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}
		}


		private:	 double funkcja(double x, int zbiornik)
		{
			double h1 = Convert::ToDouble(H1_T->Text);
			double h2 = Convert::ToDouble(H2_T->Text);
			double A1 = Convert::ToDouble(A1_T->Text);
			double A2 = Convert::ToDouble(A2_T->Text);
			double okres = (Convert::ToDouble(Okres_T->Text));
			double omega = (2 * PI / (Convert::ToDouble(Okres_T->Text)));
			double amplituda = Convert::ToDouble(Amplituda_T->Text);
			double funkcja = 1;

			if (Sinus->Checked)
			{
	
				Wykres3->Series[0]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;

				switch (zbiornik)
				{
					case 0:
						funkcja = ((amplituda*sin(omega*x)) + amplituda);
						break;

					case 1:
						funkcja = ((((amplituda*sin(omega*x)) + amplituda) - (A1*sqrt(2 * g*h1))) / (PI*h1));
						break;

					case 2:
						funkcja = (((A1*sqrt(2 * g*h1)) - (A2*sqrt(2 * g*h2))) / (PI*h2));
						break;

					case 3:
						funkcja = ((((amplituda*sin(omega*x)) + amplituda) - (A2*sqrt(2 * g*h1))) / (PI*h1));
						break;
					
					default:
						MessageBox::Show("Coś się nie zgadza w funkcji :/", "Błąd", MessageBoxButtons::OK, MessageBoxIcon::Information);
						return 1;
						break;
				}			
			}
				
			if (Triangle->Checked)
			{
				okres = okres / 2;

				Wykres3->Series[0]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
				
				switch (zbiornik)
				{
					case 0:
						funkcja = (amplituda / okres) * (okres - abs(fmod(x, (2 * okres)) - okres));
						break;

					case 1:
						funkcja = ((amplituda / okres) * (okres - abs(fmod(x, (2 * okres)) - okres)) - (A1*sqrt(2 * g*h1))) / (PI*h1);
						break;

					case 2:
						funkcja = (((A1*sqrt(2 * g*h1)) - (A2*sqrt(2 * g*h2))) / (PI*h2));
						break;
					
					case 3:
						funkcja = ((amplituda / okres) * (okres - abs(fmod(x, (2 * okres)) - okres)) - (A2*sqrt(2 * g*h1))) / (PI*h1);
						break;

					default:
						MessageBox::Show("Coś się nie zgadza w funkcji :/", "Błąd", MessageBoxButtons::OK, MessageBoxIcon::Information);
						return 1;
						break;
				}		
			}

			if (Rectangel->Checked) 
			{
				Wykres3->Series[0]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StepLine;

				if (fmod(x, okres) >= (okres / 2))
				{
					amplituda = 0;
				}

				switch (zbiornik)
				{
					case 0:
						funkcja = amplituda;
						break;

					case 1:
						funkcja = ((amplituda)-(A1*sqrt(2 * g*h1))) / (PI*h1);
						break;

					case 2:
						funkcja = (((A1*sqrt(2 * g*h1)) - (A2*sqrt(2 * g*h2))) / (PI*h2));
						break;

					case 3:
						funkcja = ((amplituda)-(A2*sqrt(2 * g*h1))) / (PI*h1);
						break;

					default:
						MessageBox::Show("Coś się nie zgadza w funkcji :/", "Błąd", MessageBoxButtons::OK, MessageBoxIcon::Information);
						return 1;
						break;
				}				
			}

			return funkcja;
		}


		private:	 void calkowanie()
		{
			int	dokladnosc = Convert::ToInt32(Dok_T->Text);   
			double czas = Convert::ToInt32(Czas_T->Text);
			double calka = 0;
			double h = czas / dokladnosc;
			double p = dokladnosc / czas;
			double temp = 0;
			double calka2 = 0;
			double okres = (Convert::ToDouble(Okres_T->Text));
			double pom = 3*okres / dokladnosc;

				for (int i=0; i<dokladnosc; i++)
				{
					calka += (funkcja(i*h, 1)+funkcja((i+1)*h, 1))*h/2;
										
					if (calka < 0)
					{
						calka2 += (funkcja(i * h, 3) + funkcja((i + 1)*h, 3))*h/2;
					}
					
					else
					{
						calka2 += (funkcja(calka * h, 2) + funkcja((calka + 1)*h, 2))*h / 2;
					}

					if (calka2 < 0)
					{
						calka2 = 0;
					}

					if (calka < 0)
					{
						calka = 0;
					}

					dod_pkt1((i+1)/p, calka);
					dod_pkt2((i+1)/p, calka2);					
					dod_pkt3((i + 1) * pom, funkcja(i*pom, 0));
					
				}

				Wyn->Text = Convert::ToString(calka); 
		}


		private: System::Void clear1_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			Wykres1->Series[0]->Points->Clear();
		}


		private: System::Void clear2_Click_1(System::Object^  sender, System::EventArgs^  e)
		{
			Wykres2->Series[0]->Points->Clear();
		}


		private: System::Void clear3_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			Wykres3->Series[0]->Points->Clear();
		}

		
		private: System::Void clear4_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			Wykres1->Series[0]->Points->Clear();
			Wykres2->Series[0]->Points->Clear();
			Wykres3->Series[0]->Points->Clear();
		}
	};
}

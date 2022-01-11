#pragma once

#include <array>
#include <algorithm>
#include <random>
#include <string>
#include <numeric>

#include "Gamers.h"
//#include <vector>

// = { { {"1","1","1","1","1","1","1","1","1"}, {1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1} } };
constexpr int MAX_NUMBER = 90;
constexpr int ROWS = 3;
constexpr int COLS = 9;

namespace Vadila {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	std::array<std::array<std::string, COLS>, ROWS> arr;
	std::array<int, MAX_NUMBER> numbers_t;
	std::array<int, MAX_NUMBER>::iterator next;
	std::array<unsigned, 6> winning;

	/// <summary>
	/// Ñâîäêà äëÿ LotoUI
	/// </summary>
	public ref class LotoUI : public System::Windows::Forms::Form
	{
	private: array<bool>^ valid;
	private: array<String^>^ nicks;
	private: array<unsigned>^ kvs = gcnew array<unsigned>(6);

	private: void reshuffle() {
		numbers_t.fill(0);
		std::mt19937 gen(std::random_device{}());
		std::iota(numbers_t.begin(), numbers_t.end(), 1);
		std::shuffle(numbers_t.begin(), numbers_t.end(), gen);
		next = numbers_t.begin();
	}
	public:
		LotoUI(void)
		{
			/*std::mt19937 gen(std::random_device{}());
			std::iota(numbers_t.begin(), numbers_t.end(), 1);
			std::shuffle(numbers_t.begin(), numbers_t.end(), gen);
			next = numbers_t.begin();*/
			reshuffle();
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~LotoUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ íîâàÿÈãðàToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn27;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn28;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn30;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn31;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn32;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn33;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn34;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn35;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn36;
	private: System::Windows::Forms::DataGridView^ dataGridView6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn37;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn38;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn39;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn40;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn41;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn42;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn43;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn44;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn45;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Timer^ timer2;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;


private: System::ComponentModel::IContainer^ components;




	//private: System::ComponentModel::IContainer^ components;



		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->íîâàÿÈãðàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn38 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn39 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn41 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn42 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn43 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn44 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn45 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->íîâàÿÈãðàToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(874, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// íîâàÿÈãðàToolStripMenuItem
			// 
			this->íîâàÿÈãðàToolStripMenuItem->Name = L"íîâàÿÈãðàToolStripMenuItem";
			this->íîâàÿÈãðàToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->íîâàÿÈãðàToolStripMenuItem->Text = L"Íîâàÿ Èãðà";
			this->íîâàÿÈãðàToolStripMenuItem->Click += gcnew System::EventHandler(this, &LotoUI::íîâàÿÈãðàToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &LotoUI::âûõîäToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView1->Location = System::Drawing::Point(111, 123);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(190, 66);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &LotoUI::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 21;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 21;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 21;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column4->HeaderText = L"Column4";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 21;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->HeaderText = L"Column5";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 21;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column6->HeaderText = L"Column6";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 21;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column7->HeaderText = L"Column7";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 21;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column8->HeaderText = L"Column8";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 21;
			// 
			// Column9
			// 
			this->Column9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column9->HeaderText = L"Column9";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 21;
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			this->dataGridView2->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView2->Location = System::Drawing::Point(22, 234);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView2->Size = System::Drawing::Size(190, 66);
			this->dataGridView2->TabIndex = 7;
			this->dataGridView2->Visible = false;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &LotoUI::dataGridView2_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Column1";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 21;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Column2";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 21;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Column3";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 21;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Column4";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 21;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Column5";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 21;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn6->HeaderText = L"Column6";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 21;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn7->HeaderText = L"Column7";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 21;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn8->HeaderText = L"Column8";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 21;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn9->HeaderText = L"Column9";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 21;
			// 
			// dataGridView3
			// 
			this->dataGridView3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14,
					this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18
			});
			this->dataGridView3->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView3->Location = System::Drawing::Point(111, 339);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView3->Size = System::Drawing::Size(190, 66);
			this->dataGridView3->TabIndex = 8;
			this->dataGridView3->Visible = false;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &LotoUI::dataGridView3_CellContentClick);
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn10->HeaderText = L"Column1";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 21;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn11->HeaderText = L"Column2";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 21;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn12->HeaderText = L"Column3";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 21;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn13->HeaderText = L"Column4";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 21;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn14->HeaderText = L"Column5";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 21;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn15->HeaderText = L"Column6";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->Width = 21;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn16->HeaderText = L"Column7";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->Width = 21;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn17->HeaderText = L"Column8";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->Width = 21;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn18->HeaderText = L"Column9";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->Width = 21;
			// 
			// dataGridView4
			// 
			this->dataGridView4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView4->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->ColumnHeadersVisible = false;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn19,
					this->dataGridViewTextBoxColumn20, this->dataGridViewTextBoxColumn21, this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23,
					this->dataGridViewTextBoxColumn24, this->dataGridViewTextBoxColumn25, this->dataGridViewTextBoxColumn26, this->dataGridViewTextBoxColumn27
			});
			this->dataGridView4->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView4->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView4->Location = System::Drawing::Point(542, 339);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView4->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView4->Size = System::Drawing::Size(190, 66);
			this->dataGridView4->TabIndex = 9;
			this->dataGridView4->Visible = false;
			this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &LotoUI::dataGridView4_CellContentClick);
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn19->HeaderText = L"Column1";
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			this->dataGridViewTextBoxColumn19->Width = 21;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn20->HeaderText = L"Column2";
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			this->dataGridViewTextBoxColumn20->Width = 21;
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn21->HeaderText = L"Column3";
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			this->dataGridViewTextBoxColumn21->Width = 21;
			// 
			// dataGridViewTextBoxColumn22
			// 
			this->dataGridViewTextBoxColumn22->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn22->HeaderText = L"Column4";
			this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
			this->dataGridViewTextBoxColumn22->Width = 21;
			// 
			// dataGridViewTextBoxColumn23
			// 
			this->dataGridViewTextBoxColumn23->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn23->HeaderText = L"Column5";
			this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
			this->dataGridViewTextBoxColumn23->Width = 21;
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn24->HeaderText = L"Column6";
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
			this->dataGridViewTextBoxColumn24->Width = 21;
			// 
			// dataGridViewTextBoxColumn25
			// 
			this->dataGridViewTextBoxColumn25->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn25->HeaderText = L"Column7";
			this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
			this->dataGridViewTextBoxColumn25->Width = 21;
			// 
			// dataGridViewTextBoxColumn26
			// 
			this->dataGridViewTextBoxColumn26->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn26->HeaderText = L"Column8";
			this->dataGridViewTextBoxColumn26->Name = L"dataGridViewTextBoxColumn26";
			this->dataGridViewTextBoxColumn26->Width = 21;
			// 
			// dataGridViewTextBoxColumn27
			// 
			this->dataGridViewTextBoxColumn27->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn27->HeaderText = L"Column9";
			this->dataGridViewTextBoxColumn27->Name = L"dataGridViewTextBoxColumn27";
			this->dataGridViewTextBoxColumn27->Width = 21;
			// 
			// dataGridView5
			// 
			this->dataGridView5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView5->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->ColumnHeadersVisible = false;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn28,
					this->dataGridViewTextBoxColumn29, this->dataGridViewTextBoxColumn30, this->dataGridViewTextBoxColumn31, this->dataGridViewTextBoxColumn32,
					this->dataGridViewTextBoxColumn33, this->dataGridViewTextBoxColumn34, this->dataGridViewTextBoxColumn35, this->dataGridViewTextBoxColumn36
			});
			this->dataGridView5->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView5->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView5->Location = System::Drawing::Point(634, 234);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView5->RowHeadersVisible = false;
			this->dataGridView5->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView5->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView5->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView5->Size = System::Drawing::Size(190, 66);
			this->dataGridView5->TabIndex = 10;
			this->dataGridView5->Visible = false;
			this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &LotoUI::dataGridView5_CellContentClick);
			// 
			// dataGridViewTextBoxColumn28
			// 
			this->dataGridViewTextBoxColumn28->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn28->HeaderText = L"Column1";
			this->dataGridViewTextBoxColumn28->Name = L"dataGridViewTextBoxColumn28";
			this->dataGridViewTextBoxColumn28->Width = 21;
			// 
			// dataGridViewTextBoxColumn29
			// 
			this->dataGridViewTextBoxColumn29->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn29->HeaderText = L"Column2";
			this->dataGridViewTextBoxColumn29->Name = L"dataGridViewTextBoxColumn29";
			this->dataGridViewTextBoxColumn29->Width = 21;
			// 
			// dataGridViewTextBoxColumn30
			// 
			this->dataGridViewTextBoxColumn30->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn30->HeaderText = L"Column3";
			this->dataGridViewTextBoxColumn30->Name = L"dataGridViewTextBoxColumn30";
			this->dataGridViewTextBoxColumn30->Width = 21;
			// 
			// dataGridViewTextBoxColumn31
			// 
			this->dataGridViewTextBoxColumn31->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn31->HeaderText = L"Column4";
			this->dataGridViewTextBoxColumn31->Name = L"dataGridViewTextBoxColumn31";
			this->dataGridViewTextBoxColumn31->Width = 21;
			// 
			// dataGridViewTextBoxColumn32
			// 
			this->dataGridViewTextBoxColumn32->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn32->HeaderText = L"Column5";
			this->dataGridViewTextBoxColumn32->Name = L"dataGridViewTextBoxColumn32";
			this->dataGridViewTextBoxColumn32->Width = 21;
			// 
			// dataGridViewTextBoxColumn33
			// 
			this->dataGridViewTextBoxColumn33->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn33->HeaderText = L"Column6";
			this->dataGridViewTextBoxColumn33->Name = L"dataGridViewTextBoxColumn33";
			this->dataGridViewTextBoxColumn33->Width = 21;
			// 
			// dataGridViewTextBoxColumn34
			// 
			this->dataGridViewTextBoxColumn34->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn34->HeaderText = L"Column7";
			this->dataGridViewTextBoxColumn34->Name = L"dataGridViewTextBoxColumn34";
			this->dataGridViewTextBoxColumn34->Width = 21;
			// 
			// dataGridViewTextBoxColumn35
			// 
			this->dataGridViewTextBoxColumn35->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn35->HeaderText = L"Column8";
			this->dataGridViewTextBoxColumn35->Name = L"dataGridViewTextBoxColumn35";
			this->dataGridViewTextBoxColumn35->Width = 21;
			// 
			// dataGridViewTextBoxColumn36
			// 
			this->dataGridViewTextBoxColumn36->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn36->HeaderText = L"Column9";
			this->dataGridViewTextBoxColumn36->Name = L"dataGridViewTextBoxColumn36";
			this->dataGridViewTextBoxColumn36->Width = 21;
			// 
			// dataGridView6
			// 
			this->dataGridView6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView6->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->ColumnHeadersVisible = false;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn37,
					this->dataGridViewTextBoxColumn38, this->dataGridViewTextBoxColumn39, this->dataGridViewTextBoxColumn40, this->dataGridViewTextBoxColumn41,
					this->dataGridViewTextBoxColumn42, this->dataGridViewTextBoxColumn43, this->dataGridViewTextBoxColumn44, this->dataGridViewTextBoxColumn45
			});
			this->dataGridView6->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView6->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView6->Location = System::Drawing::Point(542, 123);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView6->RowHeadersVisible = false;
			this->dataGridView6->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView6->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView6->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView6->Size = System::Drawing::Size(190, 66);
			this->dataGridView6->TabIndex = 11;
			this->dataGridView6->Visible = false;
			this->dataGridView6->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &LotoUI::dataGridView6_CellContentClick);
			// 
			// dataGridViewTextBoxColumn37
			// 
			this->dataGridViewTextBoxColumn37->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn37->HeaderText = L"Column1";
			this->dataGridViewTextBoxColumn37->Name = L"dataGridViewTextBoxColumn37";
			this->dataGridViewTextBoxColumn37->Width = 21;
			// 
			// dataGridViewTextBoxColumn38
			// 
			this->dataGridViewTextBoxColumn38->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn38->HeaderText = L"Column2";
			this->dataGridViewTextBoxColumn38->Name = L"dataGridViewTextBoxColumn38";
			this->dataGridViewTextBoxColumn38->Width = 21;
			// 
			// dataGridViewTextBoxColumn39
			// 
			this->dataGridViewTextBoxColumn39->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn39->HeaderText = L"Column3";
			this->dataGridViewTextBoxColumn39->Name = L"dataGridViewTextBoxColumn39";
			this->dataGridViewTextBoxColumn39->Width = 21;
			// 
			// dataGridViewTextBoxColumn40
			// 
			this->dataGridViewTextBoxColumn40->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn40->HeaderText = L"Column4";
			this->dataGridViewTextBoxColumn40->Name = L"dataGridViewTextBoxColumn40";
			this->dataGridViewTextBoxColumn40->Width = 21;
			// 
			// dataGridViewTextBoxColumn41
			// 
			this->dataGridViewTextBoxColumn41->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn41->HeaderText = L"Column5";
			this->dataGridViewTextBoxColumn41->Name = L"dataGridViewTextBoxColumn41";
			this->dataGridViewTextBoxColumn41->Width = 21;
			// 
			// dataGridViewTextBoxColumn42
			// 
			this->dataGridViewTextBoxColumn42->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn42->HeaderText = L"Column6";
			this->dataGridViewTextBoxColumn42->Name = L"dataGridViewTextBoxColumn42";
			this->dataGridViewTextBoxColumn42->Width = 21;
			// 
			// dataGridViewTextBoxColumn43
			// 
			this->dataGridViewTextBoxColumn43->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn43->HeaderText = L"Column7";
			this->dataGridViewTextBoxColumn43->Name = L"dataGridViewTextBoxColumn43";
			this->dataGridViewTextBoxColumn43->Width = 21;
			// 
			// dataGridViewTextBoxColumn44
			// 
			this->dataGridViewTextBoxColumn44->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn44->HeaderText = L"Column8";
			this->dataGridViewTextBoxColumn44->Name = L"dataGridViewTextBoxColumn44";
			this->dataGridViewTextBoxColumn44->Width = 21;
			// 
			// dataGridViewTextBoxColumn45
			// 
			this->dataGridViewTextBoxColumn45->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn45->HeaderText = L"Column9";
			this->dataGridViewTextBoxColumn45->Name = L"dataGridViewTextBoxColumn45";
			this->dataGridViewTextBoxColumn45->Width = 21;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(371, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 63);
			this->label1->TabIndex = 12;
			this->label1->Text = L"1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Green;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(370, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 31);
			this->label2->TabIndex = 13;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(108, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 25);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Èãðîê 1";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(38, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 25);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Èãðîê 2";
			this->label4->Visible = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(367, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Îòìå÷åíî!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &LotoUI::button1_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(106, 311);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 25);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Èãðîê 3";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(649, 311);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 25);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Èãðîê 4";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(741, 206);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 25);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Èãðîê 5";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(649, 95);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 25);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Èãðîê 6";
			this->label8->Visible = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 500;
			this->timer2->Tick += gcnew System::EventHandler(this, &LotoUI::timer2_Tick);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(12, 27);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(152, 28);
			this->checkBox1->TabIndex = 21;
			this->checkBox1->Text = L"Áûñòðàÿ èãðà";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &LotoUI::checkBox1_CheckedChanged);
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Green;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(339, 461);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(141, 31);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Êâàðòèðà";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(279, 234);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 31);
			this->label10->TabIndex = 23;
			this->label10->Text = L"label10";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(458, 234);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 31);
			this->label11->TabIndex = 24;
			this->label11->Text = L"label11";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Visible = false;
			// 
			// LotoUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Green;
			this->ClientSize = System::Drawing::Size(874, 575);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView6);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"LotoUI";
			this->Text = L"LotoUI";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &LotoUI::LotoUI_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LotoUI_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	

	private: void generate_ticket() {
		std::mt19937 gen(std::random_device{}());

		arr[0] = arr[1] = arr[2] = { "1", "1", "1", "1", "1", " ", " ", " ", " "};

		std::shuffle(arr[0].begin(), arr[0].end(), gen);
		std::shuffle(arr[1].begin(), arr[1].end(), gen);
		std::shuffle(arr[2].begin(), arr[2].end(), gen);
		for (unsigned c = 0; c < COLS; ++c)
		{
			std::array<unsigned, 11> column{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			auto beg = column.begin();
			auto end = column.end();
			if (c == 0)
				++beg;
			if (c != COLS - 1)
				--end;
			std::shuffle(beg, end, gen);
			unsigned base = c * 10;
			for (unsigned r = 0; r < ROWS; ++r)
			{
				auto& cell = arr[r][c];
				if (cell != " ") cell = std::to_string(base + *beg++);
			}
		}
	}
    private: void fill_ticket(System::Windows::Forms::DataGridView^ table) {
		table->Rows->Clear();
		generate_ticket();

		table->Rows->Add();
		table->Rows->Add();
		int i = table->Rows->Add();
		int c = 0;
		for(int i_ = 0; i_ < COLS; ++i_)
		{
			table->Rows[i]->Cells[c]->Value = gcnew String(arr[2][i_].data());
			table->Rows[i - 1]->Cells[c]->Value = gcnew String(arr[1][i_].data());
			table->Rows[i - 2]->Cells[c]->Value = gcnew String(arr[0][i_].data());
			c++;
		}	
    }
	private: void hide_ticket(System::Windows::Forms::DataGridView^ table) {
		table->Rows->Clear();
		table->Visible = false;
	}
	private: void show_ticket(System::Windows::Forms::DataGridView^ table) {
		fill_ticket(table);
		table->Visible = true;
	}
    private: System::Void íîâàÿÈãðàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Gamers^ gamers = gcnew Gamers();
		gamers->ShowDialog();
		this->Show();

		for each (unsigned v in kvs) {
			v = 0;
		}

		nicks = gamers->players_names();
		valid = gamers->valid_players();
		

		nums_in_viewved();
		reshuffle();
		//label1->Text =  gcnew String(std::to_string(*next++).data());
			next++;
		valid[0] == true ? show_ticket(dataGridView1) : hide_ticket(dataGridView1);
		valid[1] == true ? show_ticket(dataGridView2) : hide_ticket(dataGridView2);
		valid[2] == true ? show_ticket(dataGridView3) : hide_ticket(dataGridView3);
		valid[3] == true ? show_ticket(dataGridView4) : hide_ticket(dataGridView4);
		valid[4] == true ? show_ticket(dataGridView5) : hide_ticket(dataGridView5);
		valid[5] == true ? show_ticket(dataGridView6) : hide_ticket(dataGridView6);

		winning.fill({ 0 });

		checkBox1->Visible = true;

		label1->Visible = true;
		//label2->Visible = true;
		label3->Visible = true;
		label3->Text = nicks[0];
		label4->Visible = true;
		label4->Text = nicks[1];
		label5->Visible = true;
		label5->Text = nicks[2];
		label6->Visible = true;
		label6->Text = nicks[3];
		label7->Visible = true;
		label7->Text = nicks[4];
		label8->Visible = true;
		label8->Text = nicks[5];
		label9->Visible = false;
		label10->Visible = true;
		label10->Text = "";
		label11->Visible = true;
		label10->Text = "";
		//dataGridView1->Visible = true;
		//dataGridView2->Visible = true;
		//dataGridView3->Visible = true;
		//dataGridView4->Visible = true;
		//dataGridView5->Visible = true;
		//dataGridView6->Visible = true;
		button1->Visible = true;
    }
	private: bool check_number(System::Windows::Forms::DataGridView^ table, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		return table->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString() == label1->Text;
	}

	private: void remove_cell(System::Windows::Forms::DataGridView^ table, System::Windows::Forms::DataGridViewCellEventArgs^ e, unsigned player) {
		table->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = " ";

		if (++winning[player - 1] == 15) {
			button1->Visible = false;
			label2->Visible = true;
			label2->Text = gcnew String("Èãðîê " + nicks[player - 1] + " ïîáåäèë!!!");
		}

		unsigned count = 0;
		for each (DataGridViewCell ^ cell in table->Rows[e->RowIndex]->Cells)
		{
			if (cell->Value->ToString() == " ") ++count;
			else break;
		}

		if (count == COLS) {
			label9->Visible = true;
			label9->Text = gcnew String("Èãðîê " + nicks[player - 1] + " : " + (kvs[player - 1] == 2 ? "Äâîéíàÿ Ê" : "ê") + "âàðòèðà");
		}
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (!check_number(dataGridView1, e))
			return;
		remove_cell(dataGridView1, e, 1);
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (!check_number(dataGridView2, e))
			return;
		remove_cell(dataGridView2, e, 2);
	}
	private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (!check_number(dataGridView3, e))
			return;
		remove_cell(dataGridView3, e, 3);
	}
	private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (!check_number(dataGridView4, e))
			return;
		remove_cell(dataGridView4, e, 4);
	}
	private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (!check_number(dataGridView5, e))
			return;
		remove_cell(dataGridView5, e, 5);
	}
	private: System::Void dataGridView6_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (!check_number(dataGridView6, e))
			return;
		remove_cell(dataGridView6, e, 6);
	}

	
	private: std::string get_substr(std::array<int, 5>::iterator it_begin, std::array<int, 5>::iterator it_end) {
		std::string str_t;
		while (it_begin != it_end) {
			*it_begin == 0 ? str_t += "   " : str_t += std::to_string(*it_begin) + " ";
			it_begin++;
		}

		return str_t;
	}
	private: void nums_in_viewved() {
		std::string str_t;

		std::ptrdiff_t diff = next - numbers_t.begin();
		std::ptrdiff_t diff_end = numbers_t.end() - next;
		std::array<int, 5> nums = { 0 };

		if (diff < 2) {
			std::copy(next, next + 3 + diff, nums.begin() + (2 - diff));
		}
		else if (diff_end < 3) {
			std::copy(next, next + 3 + (3 - diff), nums.begin());
		}
		else {
			std::copy(next, next + 5, nums.begin());
		}	

		/*for (auto v : nums) {
			v == 0 ? str_t += "   " : str_t += std::to_string(v) + " ";
		}*/

		label10->Text = gcnew String(get_substr(nums.begin(), nums.begin() + 2).data());
		label11->Text = gcnew String(get_substr(nums.begin() + 3, nums.end()).data());
		label1->Text = gcnew String(std::to_string(nums[2]).data());

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//label1->Text = gcnew String(std::to_string(*next).data());
		nums_in_viewved();
		if (next != (numbers_t.end() - 1)) {
			next++;
		}
		else {
			label2->Visible = true;
			label2->Text = "ÍÈ×Üß";
			button1->Visible = false;
		}
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			button1->Visible = false;
			timer2->Start();
		}
		else {
			button1->Visible = true;
			timer2->Stop();
		}
	}

	private: void remove_auto(System::Windows::Forms::DataGridView^ table, int player) {
		int a = System::Convert::ToInt32(label1->Text);
		a = a == 90 ? 8 : a / 10;

		for (int i = 0; i < 3; ++i) {
			if (table->Rows[i]->Cells[a]->Value->ToString() == label1->Text) {
				table->Rows[i]->Cells[a]->Value = " ";

				table->ClearSelection();
				table->Rows[i]->Cells[a]->Selected = true;

				

				if (++winning[player - 1] == 15) {
					button1->Visible = false;
					label2->Visible = true;
					label2->Text = gcnew String("Èãðîê " + nicks[player - 1] + " ïîáåäèë!!!");
					timer2->Stop();
					checkBox1->Checked = false;
				}

				unsigned count = 0;
				for each (DataGridViewCell^ cell in table->Rows[i]->Cells)
				{
					if (cell->Value->ToString() == " ") ++count;
					else break;
				}

				if (count == COLS) {
					kvs[player - 1]++;
					if (kvs[player - 1] == 3) break;
					label9->Visible = true;
					label9->Text = gcnew String("Èãðîê " + nicks[player - 1] + " : " + (kvs[player - 1] == 2 ? "Äâîéíàÿ ê" : "Ê") + "âàðòèðà");
				}

				break;

			}
		}

	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		//label1->Text = gcnew String(std::to_string(*next).data());

		nums_in_viewved();

		/*std::ptrdiff_t diff = next - numbers_t.begin();
		std::ptrdiff_t diff_end = numbers_t.end() - next;
		std::array<int, 5> nums = {0};

		if (diff < 2) {
			std::copy(next, next + 3 + diff, nums.begin() + (2 - diff));
		}
		else if (diff_end < 3) {
			std::copy(next, next + 3 + (3 - diff), nums.begin());
		}
		else {
			std::copy(next, next + 5, nums.begin());
		}*/

		
		

		if (valid[0] == true) remove_auto(dataGridView1, 1);
		if (valid[1] == true) remove_auto(dataGridView2, 2);
		if (valid[2] == true) remove_auto(dataGridView3, 3);
		if (valid[3] == true) remove_auto(dataGridView4, 4);
		if (valid[4] == true) remove_auto(dataGridView5, 5);
		if (valid[5] == true) remove_auto(dataGridView6, 6);
		
		if (next != (numbers_t.end() - 1)) {
			next++;
		}
		else {
			label2->Visible = true;
			label2->Text = "ÍÈ×Üß";
			button1->Visible = false;
		}
	}
};
}

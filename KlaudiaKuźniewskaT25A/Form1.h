#pragma once
#include "Onas.h"


namespace KlaudiaKuüniewskaT25A {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	
	bool turn = true; //true = X turn, false = Y turn
            int turn_count = 0;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nowaGraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kontaktToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wyjúcieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  coúOMnieToolStripMenuItem1;



	private: System::Windows::Forms::Button^  B1;
	private: System::Windows::Forms::Button^  B2;



	private: System::Windows::Forms::Button^  C1;
	private: System::Windows::Forms::Button^  C2;
	private: System::Windows::Forms::Button^  C3;
	


	private: System::Windows::Forms::Button^  A1;
	private: System::Windows::Forms::Button^  A2;
	private: System::Windows::Forms::Button^  A3;
	private: System::Windows::Forms::Button^  B3;
	private: System::Windows::Forms::Button^  START;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;












	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nowaGraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kontaktToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyjúcieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->coúOMnieToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::Button());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->C3 = (gcnew System::Windows::Forms::Button());
			this->A1 = (gcnew System::Windows::Forms::Button());
			this->A2 = (gcnew System::Windows::Forms::Button());
			this->A3 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->START = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->menuToolStripMenuItem, 
				this->coúOMnieToolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(662, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->nowaGraToolStripMenuItem, 
				this->kontaktToolStripMenuItem, this->wyjúcieToolStripMenuItem});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// nowaGraToolStripMenuItem
			// 
			this->nowaGraToolStripMenuItem->Name = L"nowaGraToolStripMenuItem";
			this->nowaGraToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->nowaGraToolStripMenuItem->Text = L"Nowa gra";
			this->nowaGraToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::nowaGraToolStripMenuItem_Click);
			// 
			// kontaktToolStripMenuItem
			// 
			this->kontaktToolStripMenuItem->Name = L"kontaktToolStripMenuItem";
			this->kontaktToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->kontaktToolStripMenuItem->Text = L"Kontakt";
			this->kontaktToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::kontaktToolStripMenuItem_Click);
			// 
			// wyjúcieToolStripMenuItem
			// 
			this->wyjúcieToolStripMenuItem->Name = L"wyjúcieToolStripMenuItem";
			this->wyjúcieToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->wyjúcieToolStripMenuItem->Text = L"Wyjúcie";
			this->wyjúcieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wyjúcieToolStripMenuItem_Click);
			// 
			// coúOMnieToolStripMenuItem1
			// 
			this->coúOMnieToolStripMenuItem1->Name = L"coúOMnieToolStripMenuItem1";
			this->coúOMnieToolStripMenuItem1->Size = System::Drawing::Size(80, 20);
			this->coúOMnieToolStripMenuItem1->Text = L"Coú o nas :)";
			this->coúOMnieToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::coúOMnieToolStripMenuItem1_Click);
			// 
			// B1
			// 
			this->B1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(64, 259);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(96, 95);
			this->B1->TabIndex = 4;
			this->B1->Text = L" ";
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// B2
			// 
			this->B2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(200, 259);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(96, 95);
			this->B2->TabIndex = 5;
			this->B2->Text = L" ";
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// C1
			// 
			this->C1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(64, 376);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(96, 95);
			this->C1->TabIndex = 7;
			this->C1->Text = L" ";
			this->C1->UseVisualStyleBackColor = true;
			this->C1->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// C2
			// 
			this->C2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(199, 376);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(96, 95);
			this->C2->TabIndex = 8;
			this->C2->Text = L" ";
			this->C2->UseVisualStyleBackColor = true;
			this->C2->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// C3
			// 
			this->C3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(338, 376);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(96, 95);
			this->C3->TabIndex = 9;
			this->C3->Text = L" ";
			this->C3->UseVisualStyleBackColor = true;
			this->C3->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// A1
			// 
			this->A1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(64, 142);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(96, 95);
			this->A1->TabIndex = 1;
			this->A1->Text = L" ";
			this->A1->UseVisualStyleBackColor = true;
			this->A1->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// A2
			// 
			this->A2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(201, 142);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(95, 95);
			this->A2->TabIndex = 2;
			this->A2->Text = L" ";
			this->A2->UseVisualStyleBackColor = true;
			this->A2->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// A3
			// 
			this->A3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(338, 142);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(94, 95);
			this->A3->TabIndex = 3;
			this->A3->Text = L" ";
			this->A3->UseVisualStyleBackColor = true;
			this->A3->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// B3
			// 
			this->B3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(338, 259);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(95, 95);
			this->B3->TabIndex = 6;
			this->B3->Text = L" ";
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// START
			// 
			this->START->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"START.BackgroundImage")));
			this->START->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->START->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->START->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"START.Image")));
			this->START->Location = System::Drawing::Point(153, 34);
			this->START->Name = L"START";
			this->START->Size = System::Drawing::Size(176, 95);
			this->START->TabIndex = 10;
			this->START->Text = L"NOWA GRA";
			this->START->UseVisualStyleBackColor = true;
			this->START->Click += gcnew System::EventHandler(this, &Form1::START_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(613, 454);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(460, 451);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 20);
			this->textBox1->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(224, 474);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(480, 435);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Wprowadü swoje imiÍ:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(662, 511);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->START);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Projekt Zaliczeniowy";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			
			 }
private: System::Void button_click(System::Object^  sender, System::EventArgs^  e) {
			 Button ^b = safe_cast<Button^>(sender);
if (turn)
{
b->Text = "X";
}
else
{
b->Text = "O";
}
turn = !turn;
b->Enabled = false;
turn_count++;

checkForWinner();

		 }
private: System::Void checkForWinner() {
			 for each (Control ^c in Controls);
			 bool there_is_a_winner = false;
//horizontal checks
			 
			if ((A1->Text == A2->Text) && (A2->Text == A3->Text) && (!A1->Enabled))
			{
			there_is_a_winner = true;
			}
			 else if((B1->Text == B2->Text) && (B2->Text == B3->Text) && (!B1->Enabled))
				  { 
			there_is_a_winner = true;	
				  } 
			 else if ((C1->Text == C2->Text) && (C2->Text == C3->Text) && (!C1->Enabled))
			{  
			there_is_a_winner = true;	
			}
//vertical checks
			 
			else if ((A1->Text == B1->Text) && (B1->Text == C1->Text) && (!A1->Enabled))
			{
			there_is_a_winner = true;
			}
			 else if((A2->Text == B2->Text) && (B2->Text == C2->Text) && (!A2->Enabled))
				  { 
			there_is_a_winner = true;	
				  } 
			 else if ((A3->Text == B3->Text) && (B3->Text == C3->Text) && (!A3->Enabled))
			{  
			there_is_a_winner = true;	
			}
//diagonal checks
			 
			else if ((A1->Text == B2->Text) && (B2->Text == C3->Text) && (!A1->Enabled))
			{
			there_is_a_winner = true;
			}
			else if((A3->Text == B2->Text) && (B2->Text == C1->Text) && (!C1->Enabled))
				  { 
			there_is_a_winner = true;	
				  } 
			
			 			 			 
			 
			  if (there_is_a_winner)
			  {
				  

 String ^winner = "";
 
if (turn)

				  
{
winner = "KÛ≥ko ";
}
else
{
winner = "Krzyøyk ";
}
MessageBox::Show(winner + "Wygrywa!", "Wynik");
			

} //end if
			  else
			  {
			  
if (turn_count == 9)
{
MessageBox::Show("Remis");
}

			  
		 }//end checkForWinner
		 }
		 
		 private: System::Void disableButtons(System::Object ^ c, System::EventArgs^ e) {
				  }
private: System::Void nowaGraToolStripMenuItem_Click(System::Object^  c, System::EventArgs^  e) {
Application::Restart();
		 }
private: System::Void kontaktToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Adres email: kuzklaud125@student.polsl.pl & sangrza432@student.polsl.pl");
		 }
		 
private: System::Void START_Click(System::Object^  c, System::EventArgs^  e) {
			Application::Restart();

		 }
private: System::Void coúOMnieToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Onas^ Form1 = gcnew Onas;
Form1->ShowDialog();
			 
		 }
private: System::Void wyjúcieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->Close();
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  label1->Text = textBox1->Text;
		 }
};
}


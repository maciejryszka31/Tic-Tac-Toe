#pragma once


namespace KlaudiaKuüniewskaT25A {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Onas
	/// </summary>
	public ref class Onas : public System::Windows::Forms::Form
	{
	public:
		Onas(void)
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
		~Onas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Onas::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(114, 80);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(208, 260);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Onas::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(345, 80);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(208, 260);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Onas::pictureBox2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(165, 343);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Klaudia Kuüniewska";
			this->label1->Click += gcnew System::EventHandler(this, &Onas::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(410, 410);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Dπbrowa GÛrnicza";
			this->label2->Click += gcnew System::EventHandler(this, &Onas::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 453);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Uczelnia";
			this->label3->Click += gcnew System::EventHandler(this, &Onas::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(261, 449);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Politechnika ålπska";
			this->label4->Click += gcnew System::EventHandler(this, &Onas::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 494);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Grupa";
			this->label5->Click += gcnew System::EventHandler(this, &Onas::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(315, 489);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 18);
			this->label6->TabIndex = 7;
			this->label6->Text = L"T25A";
			this->label6->Click += gcnew System::EventHandler(this, &Onas::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 536);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Zainteresowania";
			this->label7->Click += gcnew System::EventHandler(this, &Onas::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(160, 536);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(128, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Si≥ownia, muzyka, ksiπzki";
			this->label8->Click += gcnew System::EventHandler(this, &Onas::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(398, 536);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(164, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Rower, muzyka, jazda na rolkach";
			this->label9->Click += gcnew System::EventHandler(this, &Onas::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(11, 410);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(112, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Miejsce zamieszkania:";
			this->label10->Click += gcnew System::EventHandler(this, &Onas::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(192, 410);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 13);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Sosnowiec";
			this->label11->Click += gcnew System::EventHandler(this, &Onas::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(415, 343);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 13);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Sandra Grzanka";
			this->label12->Click += gcnew System::EventHandler(this, &Onas::label12_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(382, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 62);
			this->button1->TabIndex = 14;
			this->button1->Text = L"PowrÛt do gry";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Onas::button1_Click);
			// 
			// Onas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(636, 571);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Onas";
			this->Text = L"Onas";
			this->Load += gcnew System::EventHandler(this, &Onas::Onas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Onas_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

#pragma once

namespace KlaudiaKu�niewskaT25A {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Co�onas
	/// </summary>
	public ref class Co�onas : public System::Windows::Forms::Form
	{
	public:
		Co�onas(void)
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
		~Co�onas()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// Co�onas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"Co�onas";
			this->Text = L"Co� o nas";
			this->Load += gcnew System::EventHandler(this, &Co�onas::Co�onas_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Co�onas_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}

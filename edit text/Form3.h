#pragma once

namespace edittext {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Collections::Specialized;

	/** 
	* Summary: This form is basically for decrypting the encrypted text of the present file.
	*/
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		/**
		*Initializing the components of Form3
		*/
		Form3(void)
		{
			InitializeComponent();
			
		}

	protected:
		/**
		 *Destructor to destroy the components and to clean up any resources being used.
		 */
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
		/**
		*password is the string of characters that the user enters for decrypting the file.
		*/
	private:String^ password;
			/**
			*Returns the password for comparison.
			*/
	public:	   String^ dMessage()
		   {
			   password=textBox1->Text;
			   return password;
		   }
			   

	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::TextBox^  textBox1;
	private: 
	private: System::Windows::Forms::Button^  button1;
	public: 
	protected: 

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
		/**
		 *Initializes the components for the form of decryption.
		 */
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			/** 
			* label1
			*/ 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the password to Decrypt";
			this->label1->Click += gcnew System::EventHandler(this, &Form3::label1_Click);
			/** 
			* textBox1
			*/ 
			this->textBox1->Location = System::Drawing::Point(42, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->UseSystemPasswordChar = true;
			/** 
			* button1
			*/ 
			this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button1->Location = System::Drawing::Point(110, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Decrypt";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			/** 
			* Form3
			*/ 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ClientSize = System::Drawing::Size(309, 139);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form3";
			this->Opacity = 0.8;
			this->Text = L"++Decrypt";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	/**
	*Decrypt Button Event Handler
	*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
};
}

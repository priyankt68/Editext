#pragma once

namespace edittext {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Specialized;
    /**
	*Summary: This form is basically for encrypting the text in the present file.
	*/
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		/**
			*Constructor to intialize the components of Form2.
			*/	
		Form2(void)
		{
			InitializeComponent();
			flag=1;
		}

	protected:
         /**
		 *Destructor to destroy the components and to clean up any resources being used.
		 */
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected: 
		/**
		*password: the string of characters which is the code to enter while encrypting
		*flag: set to 1 when the password is set.
		*/
	private:String^ password;
			int flag; 
	public:/**
			*This function returns a password once it's entered. Sets the password of the file
			*/
		  String^ Message()
		   {
			   
			  password=textBox1->Text; 
			   return password;
			  }
		
		  /**
			 *returns the flag status of the password.
			 */
		  int rflag()
			{
				return flag;
			}
			  
		   
	private: System::Windows::Forms::Label^  label1;
	protected: 
	public: System::Windows::Forms::TextBox^  textBox1;
	private: 
	private: System::Windows::Forms::Button^  button1;
	public: 

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
		 *Initializing components for the form for encryption.
		 */
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			/** 
			* label1
			*/ 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the password to Encrypt the File:";
			/** 
			* textBox1
			*/ 
			this->textBox1->Location = System::Drawing::Point(12, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(283, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->UseSystemPasswordChar = true;
			/** 
			* button1
			*/ 
			this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button1->Location = System::Drawing::Point(117, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Encrypt";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			/** 
			* button2
			*/
			this->button2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button2->Location = System::Drawing::Point(210, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			/** 
			* Form2
			*/ 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ClientSize = System::Drawing::Size(309, 139);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form2";
			this->Opacity = 0.8;
			this->Text = L"++Encrypt";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
/**
*Encrypt Button Event Handler
*/
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }

/**
*Cancel Button Event Handler
*/
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 flag=0;
			 this->Close();
		 }
};
}

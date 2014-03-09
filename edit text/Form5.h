#pragma once

namespace edittext {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/** 
	* Summary:This form is basically for replacing a word within the file with another user entered word.
	*/
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		/**
		*Initializes the components of Form5
		*/
		Form5(void)
		{
			InitializeComponent();
			
		}

	protected:
		/**
		* Clean up any resources being used.
		*/
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}

		/**
		*replace: the string which takes in the word to be replaced.
		*replacewith: the string which takes in the word that will replace the string assigned to replace.
		*/
		private: String^ replace;
			 String^ replacewith;
	public: 
		/**
		*Returns the word which is to be replaced
		*/
		    String^ rreplace()
				{   replace=textBox1->Text; 
					return replace;
			    }
		/**
			*Returns the word which will replace the word entered in replace.
			*/	
			String^ rreplacewith()
			{ replacewith=textBox2->Text;
				return replacewith;
			}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::TextBox^  textBox1;
	private: 
	public: System::Windows::Forms::TextBox^  textBox2;
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
		 *Initializes the components for replace with.
		 */
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form5::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			/** 
			* label1
			*/ 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Replace:";
			/** 
			* label2
			*/ 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Replace With:";
			/** 
			* textBox1
			*/ 
			this->textBox1->Location = System::Drawing::Point(129, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(249, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form5::textBox1_TextChanged);
			/* 
			* textBox2
			*/ 
			this->textBox2->Location = System::Drawing::Point(129, 93);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(249, 20);
			this->textBox2->TabIndex = 3;
			/* 
			* button1
			*/ 
			this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button1->Location = System::Drawing::Point(303, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Replace";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form5::button1_Click);
			/** 
			* Form5
			*/ 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ClientSize = System::Drawing::Size(390, 171);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form5";
			this->Opacity = 0.8;
			this->Text = L"++Replace";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form5::Form5_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form5_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }

/**
*Replace Button Event Handler
*/
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }

/**
*Form5_FormClosing Event Handler
*/
private: System::Void Form5_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 e->Cancel=false;
		 }
};
}

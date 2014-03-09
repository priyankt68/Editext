/**
*@++EditText
*@author Abhinandan Patni 10bce1003,Priyank Trivedi 10bce1073,Tejaswi Agarwal 10bce1105,Zeon Trevor Fernando 10bce113
*@version 1.0.3
*@section DESCRIPTION Single Document Interface Text Editor
*/
#pragma once

#include"Form2.h"
#include"Form3.h"
#include"Form4.h"
#include"Form5.h"
namespace edittext {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	/**
	*The class Form1 represents the main interface.
	*
	*/
	public ref class Form1 : public System::Windows::Forms::Form
	{
		/**
		*These are the private data members.
		*filename1:Stores the current filename.
		*n:Stores the data of the file once the file is saved
		*flagsave:A flag variable to indicate the save status of file.
		*flagmenuexit:A flag variable to indicate the exit status from menustrip.
		*flagexit:A flag variable to indicate the exit status 
		*/
	  String^ filename1;
	  String^ n;
	  String^ newpath;
	  int flagsave;
	  int flagmenuexit;
	  int flagexit;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  printToolStripMenuItem;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  replaceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
			  
	public:
		/**
		*Constructor to initialise the private data members and components of Form1
		*/
		Form1(void)
		{
			InitializeComponent();
			
			flagsave=0;
			flagmenuexit=0;
			flagexit=0;
		}

	protected:
		/**
		*Destructor of Form1 to clean up any resources being used
		*/
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
    /**
	*password: public variable to store the encrypt password
	*/
	public: String^ password;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox;
	private: System::Windows::Forms::ToolStripMenuItem^  cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pasteToolStripMenuItem;

	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  openExeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  encryptToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  undoToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  llToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fontToolStripMenuItem1;

	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  colourToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  selectToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  backgroundColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  lolToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  upperCaseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lowerCaseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  decryptToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  runToolStripMenuItem;
	public: 
	private: System::Windows::Forms::ToolStripMenuItem^  launchInBrowserToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem1;
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
		{System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
		this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
		this->encryptToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->decryptToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
		this->openExeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->llToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripSeparator());
		this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
		this->selectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->replaceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->fontToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->colourToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->backgroundColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->lolToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripSeparator());
		this->upperCaseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->lowerCaseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->runToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->launchInBrowserToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->textBox = (gcnew System::Windows::Forms::TextBox());
		this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
		this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
		this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
		this->menuStrip1->SuspendLayout();
		this->SuspendLayout();
		// 
		// menuStrip1
		// 
		this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->fileToolStripMenuItem, 
			this->editToolStripMenuItem, this->aboutToolStripMenuItem, this->runToolStripMenuItem, this->aboutToolStripMenuItem1});
		this->menuStrip1->Location = System::Drawing::Point(0, 0);
		this->menuStrip1->Name = L"menuStrip1";
		this->menuStrip1->Size = System::Drawing::Size(474, 24);
		this->menuStrip1->TabIndex = 0;
		this->menuStrip1->Text = L"menuStrip1";
		// 
		// fileToolStripMenuItem
		// 
		this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->newToolStripMenuItem, 
			this->saveToolStripMenuItem, this->openToolStripMenuItem, this->toolStripSeparator1, this->encryptToolStripMenuItem, this->decryptToolStripMenuItem, 
			this->toolStripSeparator2, this->openExeToolStripMenuItem, this->printToolStripMenuItem, this->exitToolStripMenuItem});
		this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
		this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
		this->fileToolStripMenuItem->Text = L"&File";
		// 
		// newToolStripMenuItem
		// 
		this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
		this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
		this->newToolStripMenuItem->Size = System::Drawing::Size(159, 22);
		this->newToolStripMenuItem->Text = L"&New ";
		this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newToolStripMenuItem_Click);
		// 
		// saveToolStripMenuItem
		// 
		this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
		this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
		this->saveToolStripMenuItem->Size = System::Drawing::Size(159, 22);
		this->saveToolStripMenuItem->Text = L"&Save";
		this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
		// 
		// openToolStripMenuItem
		// 
		this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
		this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
		this->openToolStripMenuItem->Size = System::Drawing::Size(159, 22);
		this->openToolStripMenuItem->Text = L"&Open ";
		this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
		// 
		// toolStripSeparator1
		// 
		this->toolStripSeparator1->Name = L"toolStripSeparator1";
		this->toolStripSeparator1->Size = System::Drawing::Size(156, 6);
		// 
		// encryptToolStripMenuItem
		// 
		this->encryptToolStripMenuItem->Name = L"encryptToolStripMenuItem";
		this->encryptToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
		this->encryptToolStripMenuItem->Size = System::Drawing::Size(159, 22);
		this->encryptToolStripMenuItem->Text = L"Encrypt";
		this->encryptToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::encryptToolStripMenuItem_Click);
		// 
		// decryptToolStripMenuItem
		// 
		this->decryptToolStripMenuItem->Name = L"decryptToolStripMenuItem";
		this->decryptToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
		this->decryptToolStripMenuItem->Size = System::Drawing::Size(159, 22);
		this->decryptToolStripMenuItem->Text = L"Decrypt";
		this->decryptToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::decryptToolStripMenuItem_Click);
		// 
		// toolStripSeparator2
		// 
		this->toolStripSeparator2->Name = L"toolStripSeparator2";
		this->toolStripSeparator2->Size = System::Drawing::Size(156, 6);
		// 
		// openExeToolStripMenuItem
		// 
		this->openExeToolStripMenuItem->Name = L"openExeToolStripMenuItem";
		this->openExeToolStripMenuItem->Size = System::Drawing::Size(159, 22);
		this->openExeToolStripMenuItem->Text = L"Parent &Directory";
		this->openExeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openExeToolStripMenuItem_Click);
		// 
		// printToolStripMenuItem
		// 
		this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
		this->printToolStripMenuItem->Size = System::Drawing::Size(159, 22);
		this->printToolStripMenuItem->Text = L"Print";
		this->printToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::printToolStripMenuItem_Click);
		// 
		// exitToolStripMenuItem
		// 
		this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
		this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::X));
		this->exitToolStripMenuItem->Size = System::Drawing::Size(159, 22);
		this->exitToolStripMenuItem->Text = L"E&xit";
		this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
		// 
		// editToolStripMenuItem
		// 
		this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->undoToolStripMenuItem, 
			this->llToolStripMenuItem, this->cutToolStripMenuItem, this->copyToolStripMenuItem, this->pasteToolStripMenuItem, this->toolStripSeparator3, 
			this->selectToolStripMenuItem, this->replaceToolStripMenuItem});
		this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
		this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
		this->editToolStripMenuItem->Text = L"&Edit";
		this->editToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::editToolStripMenuItem_Click);
		// 
		// undoToolStripMenuItem
		// 
		this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
		this->undoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
		this->undoToolStripMenuItem->Size = System::Drawing::Size(164, 22);
		this->undoToolStripMenuItem->Text = L"&Undo";
		this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::undoToolStripMenuItem_Click);
		// 
		// llToolStripMenuItem
		// 
		this->llToolStripMenuItem->Name = L"llToolStripMenuItem";
		this->llToolStripMenuItem->Size = System::Drawing::Size(161, 6);
		// 
		// cutToolStripMenuItem
		// 
		this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
		this->cutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
		this->cutToolStripMenuItem->Size = System::Drawing::Size(164, 22);
		this->cutToolStripMenuItem->Text = L"Cu&t";
		this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cutToolStripMenuItem_Click);
		// 
		// copyToolStripMenuItem
		// 
		this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
		this->copyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
		this->copyToolStripMenuItem->Size = System::Drawing::Size(164, 22);
		this->copyToolStripMenuItem->Text = L"&Copy";
		this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::copyToolStripMenuItem_Click);
		// 
		// pasteToolStripMenuItem
		// 
		this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
		this->pasteToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
		this->pasteToolStripMenuItem->Size = System::Drawing::Size(164, 22);
		this->pasteToolStripMenuItem->Text = L"&Paste    ";
		this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pasteToolStripMenuItem_Click);
		// 
		// toolStripSeparator3
		// 
		this->toolStripSeparator3->Name = L"toolStripSeparator3";
		this->toolStripSeparator3->Size = System::Drawing::Size(161, 6);
		// 
		// selectToolStripMenuItem
		// 
		this->selectToolStripMenuItem->Name = L"selectToolStripMenuItem";
		this->selectToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
		this->selectToolStripMenuItem->Size = System::Drawing::Size(164, 22);
		this->selectToolStripMenuItem->Text = L"Select &All";
		this->selectToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::selectToolStripMenuItem_Click);
		// 
		// replaceToolStripMenuItem
		// 
		this->replaceToolStripMenuItem->Name = L"replaceToolStripMenuItem";
		this->replaceToolStripMenuItem->Size = System::Drawing::Size(164, 22);
		this->replaceToolStripMenuItem->Text = L"&Replace";
		this->replaceToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::replaceToolStripMenuItem_Click);
		// 
		// aboutToolStripMenuItem
		// 
		this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->fontToolStripMenuItem1, 
			this->colourToolStripMenuItem, this->backgroundColorToolStripMenuItem, this->lolToolStripMenuItem, this->upperCaseToolStripMenuItem, 
			this->lowerCaseToolStripMenuItem});
		this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
		this->aboutToolStripMenuItem->Size = System::Drawing::Size(57, 20);
		this->aboutToolStripMenuItem->Text = L"F&ormat";
		// 
		// fontToolStripMenuItem1
		// 
		this->fontToolStripMenuItem1->Name = L"fontToolStripMenuItem1";
		this->fontToolStripMenuItem1->Size = System::Drawing::Size(170, 22);
		this->fontToolStripMenuItem1->Text = L"&Font";
		this->fontToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::fontToolStripMenuItem1_Click);
		// 
		// colourToolStripMenuItem
		// 
		this->colourToolStripMenuItem->Name = L"colourToolStripMenuItem";
		this->colourToolStripMenuItem->Size = System::Drawing::Size(170, 22);
		this->colourToolStripMenuItem->Text = L"Font &Colour";
		this->colourToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::colourToolStripMenuItem_Click);
		// 
		// backgroundColorToolStripMenuItem
		// 
		this->backgroundColorToolStripMenuItem->Name = L"backgroundColorToolStripMenuItem";
		this->backgroundColorToolStripMenuItem->Size = System::Drawing::Size(170, 22);
		this->backgroundColorToolStripMenuItem->Text = L"&Background Color";
		this->backgroundColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::backgroundColorToolStripMenuItem_Click);
		// 
		// lolToolStripMenuItem
		// 
		this->lolToolStripMenuItem->Name = L"lolToolStripMenuItem";
		this->lolToolStripMenuItem->Size = System::Drawing::Size(167, 6);
		// 
		// upperCaseToolStripMenuItem
		// 
		this->upperCaseToolStripMenuItem->Name = L"upperCaseToolStripMenuItem";
		this->upperCaseToolStripMenuItem->Size = System::Drawing::Size(170, 22);
		this->upperCaseToolStripMenuItem->Text = L"&UpperCase";
		this->upperCaseToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::upperCaseToolStripMenuItem_Click);
		// 
		// lowerCaseToolStripMenuItem
		// 
		this->lowerCaseToolStripMenuItem->Name = L"lowerCaseToolStripMenuItem";
		this->lowerCaseToolStripMenuItem->Size = System::Drawing::Size(170, 22);
		this->lowerCaseToolStripMenuItem->Text = L"&LowerCase";
		this->lowerCaseToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::lowerCaseToolStripMenuItem_Click);
		// 
		// runToolStripMenuItem
		// 
		this->runToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->launchInBrowserToolStripMenuItem});
		this->runToolStripMenuItem->Name = L"runToolStripMenuItem";
		this->runToolStripMenuItem->Size = System::Drawing::Size(40, 20);
		this->runToolStripMenuItem->Text = L"Run";
		// 
		// launchInBrowserToolStripMenuItem
		// 
		this->launchInBrowserToolStripMenuItem->Name = L"launchInBrowserToolStripMenuItem";
		this->launchInBrowserToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
		this->launchInBrowserToolStripMenuItem->Size = System::Drawing::Size(212, 22);
		this->launchInBrowserToolStripMenuItem->Text = L"Launch in Browser";
		this->launchInBrowserToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::launchInBrowserToolStripMenuItem_Click);
		// 
		// aboutToolStripMenuItem1
		// 
		this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
		this->aboutToolStripMenuItem1->Size = System::Drawing::Size(52, 20);
		this->aboutToolStripMenuItem1->Text = L"About";
		this->aboutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem1_Click_1);
		// 
		// textBox
		// 
		this->textBox->AcceptsTab = true;
		this->textBox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(7) {L"Monday", L"Tuesday", L"Wednesday", 
			L"Thursday", L"Friday", L"Saturday", L"Sunday"});
		this->textBox->BackColor = System::Drawing::SystemColors::Window;
		this->textBox->Dock = System::Windows::Forms::DockStyle::Fill;
		this->textBox->Location = System::Drawing::Point(0, 24);
		this->textBox->Multiline = true;
		this->textBox->Name = L"textBox";
		this->textBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
		this->textBox->Size = System::Drawing::Size(474, 247);
		this->textBox->TabIndex = 1;
		// 
		// fontDialog1
		// 
		this->fontDialog1->Apply += gcnew System::EventHandler(this, &Form1::fontDialog1_Apply);
		// 
		// printDialog1
		// 
		this->printDialog1->UseEXDialog = true;
		// 
		// Form1
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(474, 271);
		this->Controls->Add(this->textBox);
		this->Controls->Add(this->menuStrip1);
		this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
		this->MainMenuStrip = this->menuStrip1;
		this->Name = L"Form1";
		this->Text = L"++EditText";
		this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
		this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
		this->menuStrip1->ResumeLayout(false);
		this->menuStrip1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();

		}
#pragma endregion
/**
*saveToolStripMenuItem Event Handler
*/
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if(flagsave==0)
			{try{ File::Delete(newpath);
				 SaveFileDialog^ Dlg= gcnew SaveFileDialog();
			     Dlg->Filter="Text Files|*.txt|HTML Files|.html|All Files|*.*";
				 if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
				 {  filename1=Dlg->FileName;
					System::IO::File::WriteAllText(Dlg->FileName,textBox->Text);
                    String^ result=Path::GetFileNameWithoutExtension(filename1);
				    this->Text=result+L" - ++EditText";  				
				         
					String^ path=Path::GetFullPath(filename1);
					n=IO::File::ReadAllText(path); 
				    flagsave=1; }
				 else
				flagsave=0;
			}
			catch(ArgumentException^)
			{
				 SaveFileDialog^ Dlg= gcnew SaveFileDialog();
			     Dlg->Filter="Text Files|*.txt|HTML Files|.html|All Files|*.*";
				 if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
				 {  filename1=Dlg->FileName;
					System::IO::File::WriteAllText(Dlg->FileName,textBox->Text);
                    String^ result=Path::GetFileNameWithoutExtension(filename1);
				    this->Text=result+L" - ++EditText";  				
				         
					String^ path=Path::GetFullPath(filename1);
					n=IO::File::ReadAllText(path); 
				    flagsave=1; }
				 else 
				 flagsave=0;
			}
		}
		else
		{try
		{			File::Delete(newpath);
			     	System::IO::File::WriteAllText(filename1,textBox->Text);
                    
					String^ result=Path::GetFileNameWithoutExtension(filename1);
				    this->Text=result+L" - ++EditText";  				
				         
					String^ path=Path::GetFullPath(filename1);
					n=IO::File::ReadAllText(path); 
				 }
			
			catch(ArgumentException^)
			{       String^ path=Path::GetFullPath(filename1);
					System::IO::File::WriteAllText(filename1,textBox->Text);
                    String^ result=Path::GetFileNameWithoutExtension(filename1);
				    this->Text=result+L" - ++EditText";  				
				     
					
					n=IO::File::ReadAllText(path); 
				 }
			}
			}

/**
*openToolStripMenuItem Event Handler
*/
private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if(!flagsave)
			{
             	String^ message = "Do you want to save this file?";
				String^ caption = "Save Prompt";
				MessageBoxButtons buttons = MessageBoxButtons::YesNo; 
				System::Windows::Forms::DialogResult result;
				result= MessageBox::Show(this,message,caption,buttons,MessageBoxIcon::Information);
				if (result == Windows::Forms::DialogResult::Yes) 
					{
						   SaveFileDialog^ Dlg= gcnew SaveFileDialog();
						   Dlg->Filter="Text Files|*.txt|HTML Files|*.html|All Files|*.*";
						   if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
						   { filename1=Dlg->FileName;
							 System::IO::File::WriteAllText(Dlg->FileName,textBox->Text);
							 flagsave=1;
						   } 
						   else
						   {flagsave=0;
						   }
				}
			  else if(result == Windows::Forms::DialogResult::No)
			  {  filename1="";
				this->textBox->Clear();  
							this->textBox->BackColor = System::Drawing::SystemColors::Window;
			                this->textBox->ForeColor=System::Drawing::SystemColors::WindowText;
					        this->Text=L"++EditText";
					         	
				}
			      
			 
			 OpenFileDialog^ Dlg=gcnew OpenFileDialog();
			 Dlg->Filter="Text Files |*.txt|Html files|.html|All Files|*.*";
			 if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
			 {   filename1=Dlg->FileName;
				 if(Dlg->FileName=="")
				 {
			         if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
					 { filename1=Dlg->FileName;
					   textBox->Text = IO::File::ReadAllText(Dlg->FileName);
				       String^ result=Path::GetFileNameWithoutExtension(filename1);
				       this->Text=result+L" - ++Edittext";
					   String^ path=Path::GetFullPath(filename1);
					   n=IO::File::ReadAllText(path);
					   flagsave=1;
					 }
					 

				 }
				 else
				 {  try{ 
					 textBox->Text = IO::File::ReadAllText(Dlg->FileName);
				     String^ result=Path::GetFileNameWithoutExtension(Dlg->FileName);
				     this->Text=result+L" - ++Edittext";
			         String^ path=Path::GetFullPath(Dlg->FileName);
					 n=IO::File::ReadAllText(path);
				     flagsave=1;
				 }
				 catch(ArgumentException^){
					 filename1="";
					 this->textBox->Clear();
					 this->textBox->BackColor = System::Drawing::SystemColors::Window;
			         this->textBox->ForeColor=System::Drawing::SystemColors::WindowText;
					 this->Text=L"++EditText";
					 flagsave=0;
				 }
				}
			 }
	     	}
		else
		{
			
			String^ currenttext=textBox->Text;
			String^ path=Path::GetFullPath(filename1);
			n=IO::File::ReadAllText(path);
			if(currenttext->Equals(n))
			{
			 
			}
			else
			{
			String^ message = "Do you want to save the changes made to the file?";
            String^ caption = "Save Prompt";
            MessageBoxButtons buttons = MessageBoxButtons::YesNo; 
			System::Windows::Forms::DialogResult result;
			result= MessageBox::Show(this,message,caption,buttons,MessageBoxIcon::Question);
			if (result == Windows::Forms::DialogResult::Yes) 
                {
					 
					  System::IO::File::WriteAllText(filename1,textBox->Text);
				      flagsave=1;
			}
		  else if(result == Windows::Forms::DialogResult::No)
	      {this->textBox->Clear();
			filename1="";
			this->Text=L"++EditText";
			this->textBox->BackColor = System::Drawing::SystemColors::Window;
			this->textBox->ForeColor=System::Drawing::SystemColors::WindowText;
			n="";
			flagsave=0;
			}
		  
			}

			 OpenFileDialog^ Dlg=gcnew OpenFileDialog();
			 Dlg->Filter="Text Files |*.txt|Html files|.html|All Files|*.*";
			 if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
			 {   filename1=Dlg->FileName;
				 if(Dlg->FileName=="")
				 {
			         if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
					 { filename1=Dlg->FileName;
					   textBox->Text = IO::File::ReadAllText(Dlg->FileName);
				       String^ result=Path::GetFileNameWithoutExtension(filename1);
				       this->Text=result+L" - ++Edittext";
					   String^ path=Path::GetFullPath(filename1);
					   n=IO::File::ReadAllText(path);
					   flagsave=1;
					 }

				 }
				 else
				 {
					 textBox->Text = IO::File::ReadAllText(filename1);
				     String^ result=Path::GetFileNameWithoutExtension(filename1);
				     this->Text=result+L" - ++Edittext";
			         String^ path=Path::GetFullPath(filename1);
					 n=IO::File::ReadAllText(path);
				     flagsave=1;
				 }
			 }
			}
		 }

/**
*exitToolStripMenuItem Event Handler
*/
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		 if(!String::IsNullOrEmpty(n))
		{
	    	String^ currenttext=textBox->Text;
			int curlength=currenttext->Length;
			int length=n->Length;
			bool changetext=currenttext->Equals(n);
		    if(curlength>length)
			{ 
				flagmenuexit=1;
				
			}
			else if(!changetext)
			{
			flagmenuexit=1;
			}
			if(flagmenuexit)
			{   
			    String^ message=" Do you want to save the contents of ";
			    String^ completemessage=String::Concat(message,filename1);
				String^ caption = "Save Prompt";
				MessageBoxButtons buttons = MessageBoxButtons::YesNoCancel; 
				System::Windows::Forms::DialogResult result;
				result= MessageBox::Show(this,completemessage,caption,buttons,MessageBoxIcon::Question);
				if (result == Windows::Forms::DialogResult::Yes) 
					{   
						File::WriteAllText(filename1,currenttext);
				        
						this->Close();
				}
			    else if(result == Windows::Forms::DialogResult::No)
			    {   
					MessageBox::Show("+-+");
					this->Close();
				}
			    else
			    {
			    flagmenuexit=0; 
			    }
			
			}
			else
			{   
			 	this->Close();
			}
		}
		else
		{
			    String^ message = "Do you want to save this file?";
				String^ caption = "Save Prompt";
				MessageBoxButtons buttons = MessageBoxButtons::YesNoCancel; 
				System::Windows::Forms::DialogResult result;
				result= MessageBox::Show(this,message,caption,buttons,MessageBoxIcon::Information);
				if (result == Windows::Forms::DialogResult::Yes) 
					{
						SaveFileDialog^ Dlg= gcnew SaveFileDialog();
						   Dlg->Filter="Text Files|*.txt|HTML Files|*.html|All Files|*.*";
						   if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
						   {
							 System::IO::File::WriteAllText(Dlg->FileName,textBox->Text);
							 flagmenuexit=1;
				            this->Close();
							
						   } 
						   else
						   {
							  
					      
						   }
				}
			  else if(result == Windows::Forms::DialogResult::No)
			  {   flagmenuexit=1;
				  this->Close();
				}
			  else
			  {
			   flagmenuexit=0;
			  }
		}

 }

/**
*pasteToolStripMenuItem Event Handler
*/
private: System::Void pasteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textBox->Paste();
		 }

/**
*copyToolStripMenuItem Event Handler
*/
private: System::Void copyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textBox->Copy();

		 }

/**
*cutToolStripMenuItem Event Handler
*/
private: System::Void cutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textBox->Cut();
		 }
private: System::Void fontDialog1_Apply(System::Object^  sender, System::EventArgs^  e) {
		 }

/**
*Parent Directory ToolStripMenuItem Event Handler
*/
private: System::Void openExeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	        String^ directoryname;
			 try{String^ path=Path::GetFullPath(filename1);
			 
			 directoryname=Path::GetDirectoryName(path);
			 System::Diagnostics::Process::Start(directoryname);
			 }
			 catch(ArgumentException^ )  //Parent Directory Exception Handled
			 { MessageBox::Show("There was no path,please save the file first!","Parent Directory Error",MessageBoxButtons::OK,MessageBoxIcon::Warning);
				} 
		 }

/**
*encryptToolStripMenuItem Event Handler
*/
private: System::Void encryptToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				  String^ path=Path::GetFullPath(filename1);
				  String^ textm=File::ReadAllText(path);

			   Form2^  myform= gcnew Form2();
		       myform->ShowDialog();		
		     if(myform->rflag())
			 {
				 password=myform->Message();
				 if(password=="")
				 {
					 MessageBox::Show("Please enter the password first");
					 myform->ShowDialog();
					 password=myform->Message();
				 }
				 else
				 {
					
					 
						 String^ textn=String::Concat(textm,password);
			 
						 String^ text1= textn->Replace("a","Þ");
						 String^ text2=text1->Replace("d","Ü");
						 String^ text3=text2->Replace("e","®");
						 String^ text4=text3->Replace("h","Ð");
						 String^ text5=text4->Replace("i","¬");
						 String^ text6=text5->Replace("l","È");
						 String^ text7=text6->Replace("o","¡");
						 String^ text8=text7->Replace("r","™");
						 String^ text9=text8->Replace("s","€");
						 String^ text10=text9->Replace("u","¢");
						 String^ text11=text10->Replace("w","¥");
						 String^ text12=text11->Replace("y","Ø");
						 String^ text13=text12->Replace("1","§");
						 String^ text14=text13->Replace("2","ž");
						 String^ text15=text14->Replace("3","œ");
						 String^ text16=text15->Replace("4","µ");
						 String^ text17=text16->Replace("5","Ý");
						 String^ text18=text17->Replace("6","¶");
						 String^ text19=text18->Replace("7","£");
						 String^ text20=text19->Replace("8","×");
						 String^ text21=text20->Replace("9","á");
						 String^ text22=text21->Replace("0","æ");
						 File::WriteAllText(path,text22);
						 textBox->Text=IO::File::ReadAllText(path);
				 }
			  }
			 }			 
			 catch(ArgumentException^)
			 {   String^ message = "Please save this file!!";
                 String^ caption = "Save Prompt";
				 MessageBoxButtons buttons = MessageBoxButtons::OKCancel;
                 System::Windows::Forms::DialogResult result;
			     result= MessageBox::Show(this,message,caption,buttons,MessageBoxIcon::Information);
			     if (result == Windows::Forms::DialogResult::OK) 
                    {
				       SaveFileDialog^ Dlg= gcnew SaveFileDialog();
			           Dlg->Filter="Text Files|*.txt|Html Files|*.html|All Files|*.*";
				       if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
				       { filename1=Dlg->FileName;
					     System::IO::File::WriteAllText(filename1,textBox->Text);
 				         
					   } 
					   Form2^ myform=gcnew Form2();
					   myform->ShowDialog();
				       password=myform->Message();
						 if(password=="")
						 {
							 MessageBox::Show("Please enter the password");
							 myform->ShowDialog();
						 password=myform->Message();
						 String^ path=Path::GetFullPath(filename1);
							 String^ textm=File::ReadAllText(path);
							 String^ textn=String::Concat(textm,password);
			 
							 String^ text1= textn->Replace("a","Þ");
							 String^ text2=text1->Replace("d","Ü");
							 String^ text3=text2->Replace("e","®");
							 String^ text4=text3->Replace("h","Ð");
							 String^ text5=text4->Replace("i","¬");
							 String^ text6=text5->Replace("l","È");
							 String^ text7=text6->Replace("o","¡");
							 String^ text8=text7->Replace("r","™");
							 String^ text9=text8->Replace("s","€");
							 String^ text10=text9->Replace("u","¢");
							 String^ text11=text10->Replace("w","¥");
							 String^ text12=text11->Replace("y","Ø");
							 String^ text13=text12->Replace("1","§");
							 String^ text14=text13->Replace("2","ž");
							 String^ text15=text14->Replace("3","œ");
							 String^ text16=text15->Replace("4","µ");
							 String^ text17=text16->Replace("5","Ý");
							 String^ text18=text17->Replace("6","¶");
							 String^ text19=text18->Replace("7","£");
							 String^ text20=text19->Replace("8","×");
							 String^ text21=text20->Replace("9","á");
							 String^ text22=text21->Replace("0","æ");
							 File::WriteAllText(path,text22);
							 textBox->Text=IO::File::ReadAllText(path);
				 }
			 
				 else
				 {

				     String^ path=Path::GetFullPath(filename1);
					 String^ textm=File::ReadAllText(path);
					 String^ textn=String::Concat(textm,password);
			 
					 String^ text1= textn->Replace("a","Þ");
					 String^ text2=text1->Replace("d","Ü");
					 String^ text3=text2->Replace("e","®");
					 String^ text4=text3->Replace("h","Ð");
					 String^ text5=text4->Replace("i","¬");
					 String^ text6=text5->Replace("l","È");
					 String^ text7=text6->Replace("o","¡");
					 String^ text8=text7->Replace("r","™");
					 String^ text9=text8->Replace("s","€");
					 String^ text10=text9->Replace("u","¢");
					 String^ text11=text10->Replace("w","¥");
					 String^ text12=text11->Replace("y","Ø");
					 String^ text13=text12->Replace("1","§");
					 String^ text14=text13->Replace("2","ž");
					 String^ text15=text14->Replace("3","œ");
					 String^ text16=text15->Replace("4","µ");
					 String^ text17=text16->Replace("5","Ý");
					 String^ text18=text17->Replace("6","¶");
					 String^ text19=text18->Replace("7","£");
					 String^ text20=text19->Replace("8","×");
					 String^ text21=text20->Replace("9","á");
					 String^ text22=text21->Replace("0","æ");
					 File::WriteAllText(path,text22);
					 textBox->Text=IO::File::ReadAllText(path);
 			 }
		} 
				 else
				 {}
			 }

		 }

/**
*undoToolStripMenuItem Event Handler
*/
private: System::Void undoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textBox->Undo();
			 textBox->CharacterCasing=CharacterCasing::Normal;
		 }

/**
*fontToolStripMenuItem Event Handler
*/
private: System::Void fontToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->fontDialog1->ShowDialog();
		     this->textBox->Font=fontDialog1->Font;
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
         
		 }

/**
*newToolStripMenuItem Event Handler
*/
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	    if(!flagsave)
		{
			 
			 try
			 {   File::Delete(newpath);
				 String^ message = "Do you want to save this file?";
            String^ caption = "Save Prompt";
            MessageBoxButtons buttons = MessageBoxButtons::YesNoCancel; 
			System::Windows::Forms::DialogResult result;
			 result= MessageBox::Show(this,message,caption,buttons,MessageBoxIcon::Information);
			if (result == Windows::Forms::DialogResult::Yes) 
                {
					SaveFileDialog^ Dlg= gcnew SaveFileDialog();
			        Dlg->Filter="Text Files|*.txt|Html Files|*.html|All Files|*.*";
				       if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
				       { filename1=Dlg->FileName;
					     System::IO::File::WriteAllText(Dlg->FileName,textBox->Text);
				         this->textBox->BackColor = System::Drawing::SystemColors::Window;
					     this->textBox->ForeColor=System::Drawing::SystemColors::WindowText;
					     this->textBox->Clear();
						 this->textBox->BackColor = System::Drawing::SystemColors::Window;
			             this->textBox->ForeColor=System::Drawing::SystemColors::WindowText;
						 flagsave=1;
					   }
			}
		  else if(result == Windows::Forms::DialogResult::No)
	      {this->textBox->Clear();
			filename1="";
			this->Text=L"++EditText";
			this->textBox->BackColor = System::Drawing::SystemColors::Window;
			this->textBox->ForeColor=System::Drawing::SystemColors::WindowText;
			
			flagsave=0;
			}
		  else
		  {flagsave=0; 
		  }
		 }
		 catch(ArgumentException^ )
		 {  String^ message = "Do you want to save this file?";
            String^ caption = "Save Prompt";
            MessageBoxButtons buttons = MessageBoxButtons::YesNoCancel; 
			System::Windows::Forms::DialogResult result;
			 result= MessageBox::Show(this,message,caption,buttons,MessageBoxIcon::Information);
			if (result == Windows::Forms::DialogResult::Yes) 
                {
					SaveFileDialog^ Dlg= gcnew SaveFileDialog();
			        Dlg->Filter="Text Files|*.txt|Html Files|*.html|All Files|*.*";
				       if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
				       { 
					     System::IO::File::WriteAllText(Dlg->FileName,textBox->Text);
				         this->textBox->BackColor = System::Drawing::SystemColors::Window;
					  this->textBox->ForeColor=System::Drawing::SystemColors::WindowText;
					  //String^ filname=Path::GetFileNameWithoutExtension(Dlg->FileName);
					  //this->Text=filname+L" - ++Edittext"; 
					  this->textBox->Clear();
					  n="";
					  flagsave=0;
					   }
			}
		  else if(result == Windows::Forms::DialogResult::No)
	      { this->textBox->Clear();
			filename1="";
			this->Text=L"++EditText";
			this->textBox->BackColor = System::Drawing::SystemColors::Window;
			this->textBox->ForeColor=System::Drawing::SystemColors::WindowText;
			n="";
			flagsave=0;
			}
		  else
		  { flagsave=0;}
		    }
		 } 
		else
		{  try{
			String^ path=Path::GetFullPath(filename1);
			String^ currenttext=textBox->Text;
			if(currenttext->Equals(n))
			{
			this->textBox->Clear();
			filename1="";
			this->Text=L"++Edittext";
		    flagsave=0;
		    n=""; 
			}
			else
			{
				 String^ message = "Do you want to save the changes made to the file?";
            String^ caption = "Save Prompt";
            MessageBoxButtons buttons = MessageBoxButtons::YesNo; 
			System::Windows::Forms::DialogResult result;
			 result= MessageBox::Show(this,message,caption,buttons,MessageBoxIcon::Question);
			if (result == Windows::Forms::DialogResult::Yes) 
                {
					 
					  System::IO::File::WriteAllText(filename1,textBox->Text);
				      this->textBox->BackColor = System::Drawing::SystemColors::Window;
					  this->textBox->ForeColor=System::Drawing::SystemColors::WindowText;
					   
					  this->textBox->Clear();
					  n="";
					  flagsave=1;
					  this->Text=L"++Edittext";
					  
			}
		  else if(result == Windows::Forms::DialogResult::No)
	      {this->textBox->Clear();
			filename1="";
			this->Text=L"++EditText";
			this->textBox->BackColor = System::Drawing::SystemColors::Window;
			this->textBox->ForeColor=System::Drawing::SystemColors::WindowText;
			n="";
			flagsave=0;
			}
		  
			}
        }
		catch(ArgumentException^)
		{ 
		}
			}
		}

		 	
/*private: System::Void aboutToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			  String^ message = "++EditText \n Version 1.0.3 \n sCriptoKnights Inc.";
            String^ caption = "About";
            MessageBoxButtons buttons = MessageBoxButtons::OK; 
			
		 MessageBox::Show(this,message,caption,buttons,MessageBoxIcon::Information);
			
		 }*/

/**
*colourToolStripMenuItem Event Handler
*/
private: System::Void colourToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->colorDialog1->ShowDialog();
		     this->textBox->ForeColor=colorDialog1->Color; 
 	        	 
		 }

/**
*selectToolStripMenuItem Event Handler
*/
private: System::Void selectToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textBox->SelectAll();
		 }

/**
*findToolStripMenuItem Event Handler
*/
/*private: System::Void findToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ path=Path::GetFullPath(filename1);
			 String^ filetext=File::ReadAllText(path);
			 int filelength=filetext->Length;

			 Form4^ myform=gcnew Form4();
			 myform->ShowDialog();
			 String^ find=myform->mfind();
			 int loc=filetext->IndexOf(find);
			 int findlength=find->Length;
			 
			 if(myform->rflagf())
			 {
				 textBox->SelectionStart=loc;
			     textBox->SelectionLength=findlength;
		     }
			 
			 while(myform->rflagfn())
			 {   if(loc+findlength<=filelength)
				 {
					 String^ newfiletext=filetext->Remove(0,loc+findlength);
					 find=myform->mfind();
					 findlength=find->Length;
					 loc=filetext->IndexOf(newfiletext);
					 textBox->SelectionStart=loc;
					 textBox->SelectionLength=findlength;
					 myform->setflagfn();
					  }
			 }
		 }
*/
/**
*backgroundColorToolStripMenuItem Event Handler
*/
private: System::Void backgroundColorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 this->colorDialog1->ShowDialog();
		 this->textBox->BackColor=colorDialog1->Color;
		 }

/**
*upperCaseToolStripMenuItem Event Handler
*/
private: System::Void upperCaseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox->CharacterCasing=CharacterCasing::Upper;

		 }

/**
*lowerCaseToolStripMenuItem Event Handler
*/
private: System::Void lowerCaseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox->CharacterCasing=CharacterCasing::Lower;
		 }

/**
*Form1_FormClosing Event Handler
*/
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if(!flagmenuexit)
       { 

		   if(!String::IsNullOrEmpty(n))
		{
	    	
			
			String^ currenttext=textBox->Text;
			int curlength=currenttext->Length;
			int length=n->Length;
			bool changetext=currenttext->Equals(n);
		    if(curlength>length)
			{ 
				flagexit=1;
				
			}
			else if(!changetext)
			{
			flagexit=1;
			}
			if(flagexit)
			{   
				String^ message=" Do you want to save the contents of ";
			    String^ completemessage=String::Concat(message,filename1);
				String^ caption = "Save Prompt";
				MessageBoxButtons buttons = MessageBoxButtons::YesNoCancel; 
				System::Windows::Forms::DialogResult result;
				result= MessageBox::Show(this,completemessage,caption,buttons,MessageBoxIcon::Question);
				if (result == Windows::Forms::DialogResult::Yes) 
					{
						File::WriteAllText(filename1,currenttext);}
			    else if(result == Windows::Forms::DialogResult::No)
			    { }
			    else
			    {
			     e->Cancel=true;
			    }
			
			}
			else
			{
			 	
			}
		}
		else
		{      
			    String^ message = "Do you want to save this file?";
				String^ caption = "Save Prompt";
				MessageBoxButtons buttons = MessageBoxButtons::YesNoCancel; 
				System::Windows::Forms::DialogResult result;
				result= MessageBox::Show(this,message,caption,buttons,MessageBoxIcon::Information);
				if (result == Windows::Forms::DialogResult::Yes) 
					{
						SaveFileDialog^ Dlg= gcnew SaveFileDialog();
						   Dlg->Filter="Text Files|*.txt|HTML Files|*.html|All Files|*.*";
						   if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
						   {
							 System::IO::File::WriteAllText(Dlg->FileName,textBox->Text);
				         
						   } 
						   else
						   {
							   e->Cancel=true;
					      
						   }
				}
			  else if(result == Windows::Forms::DialogResult::No)
			  { }
			  else
			  {
			   e->Cancel=true;
			  }
			}
		}
		 }

/**
*decryptToolStripMenuItem Event Handler
*/
private: System::Void decryptToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		  try{  
			 Form3^ myform =gcnew Form3();
	    	 myform->ShowDialog();
			 String^ path=Path::GetFullPath(filename1);
			 String^ textm=File::ReadAllText(path);
	         String^ m,^n;
	try{    
			 int originallength=textm->Length;
			
			if(!String::IsNullOrEmpty(password))
			{
			 int passwordlength=password->Length;
			 int length=(originallength-passwordlength);	
			 n=textm->Remove(0,length);
			 
			 //Decryting the password first
			
			 String^ text1= n->Replace("Þ","a");
			 String^ text2=text1->Replace("Ü","d");
			 String^ text3=text2->Replace("®","e");
			 String^ text4=text3->Replace("Ð","h");
			 String^ text5=text4->Replace("¬","i");
			 String^ text6=text5->Replace("È","l");
			 String^ text7=text6->Replace("¡","o");
			 String^ text8=text7->Replace("™","r");
			 String^ text9=text8->Replace("€","s");
			 String^ text10=text9->Replace("¢","u");
			 String^ text11=text10->Replace("¥","w");
			 String^ text12=text11->Replace("Ø","y");
			 String^ text13=text12->Replace("§","1");
			 String^ text14=text13->Replace("ž","2");
			 String^ text15=text14->Replace("œ","3");
			 String^ text16=text15->Replace("µ","4");
			 String^ text17=text16->Replace("Ý","5");
			 String^ text18=text17->Replace("¶","6");
			 String^ text19=text18->Replace("£","7");
			 String^ text20=text19->Replace("×","8");
			 String^ text21=text20->Replace("á","9");
			 String^ text22=text21->Replace("æ","0");
			 
			 String^ dpassword=myform->dMessage();
		if(dpassword=="")
		 {   textBox->Text=IO::File::ReadAllText(path);
			 textBox->ReadOnly=true;
		 }
		else
		{	 if(dpassword->Equals(text22))
			 {  
			 String^ text1= textm->Replace("Þ","a");
			 String^ text2=text1->Replace("Ü","d");
			 String^ text3=text2->Replace("®","e");
			 String^ text4=text3->Replace("Ð","h");
			 String^ text5=text4->Replace("¬","i");
			 String^ text6=text5->Replace("È","l");
			 String^ text7=text6->Replace("¡","o");
			 String^ text8=text7->Replace("™","r");
			 String^ text9=text8->Replace("€","s");
			 String^ text10=text9->Replace("¢","u");
			 String^ text11=text10->Replace("¥","w");
			 String^ text12=text11->Replace("Ø","y");
			 String^ text13=text12->Replace("§","1");
			 String^ text14=text13->Replace("ž","2");
			 String^ text15=text14->Replace("œ","3");
			 String^ text16=text15->Replace("µ","4");
			 String^ text17=text16->Replace("Ý","5");
			 String^ text18=text17->Replace("¶","6");
			 String^ text19=text18->Replace("£","7");
			 String^ text20=text19->Replace("×","8");
			 String^ text21=text20->Replace("á","9");
			 String^ text22=text21->Replace("æ","0");
			 m=text22->Remove(length);
			 File::WriteAllText(path,m);
			 textBox->Text=IO::File::ReadAllText(path);
			 textBox->ReadOnly=false;
			 }
			 else
			 {
				 textBox->Text=IO::File::ReadAllText(path);
			     textBox->ReadOnly=true;
			 }
		}	
	}	
	}
	catch(ArgumentException^)
	{ MessageBox::Show("Exception Handled"); 
	}
	}
		  catch(ArgumentException^)
		  {
			  String^ message = "Do you want to save this file?";
				String^ caption = "Save Prompt";
				MessageBoxButtons buttons = MessageBoxButtons::YesNoCancel; 
				System::Windows::Forms::DialogResult result;
				 result= MessageBox::Show(this,message,caption,buttons,MessageBoxIcon::Information);
				if (result == Windows::Forms::DialogResult::Yes) 
					{
						SaveFileDialog^ Dlg= gcnew SaveFileDialog();
						   Dlg->Filter="Text Files|*.txt";
						   if(Dlg->ShowDialog()==Windows::Forms::DialogResult::OK)
						   {
							 System::IO::File::WriteAllText(Dlg->FileName,textBox->Text);
				         
						   } 
						   else
						   { // Dlg->Cancel=false;
							   //e->Cancel=true;
					      
						   }
				}
			  else if(result == Windows::Forms::DialogResult::No)
			  { }
			  else
			  {
			   //e->Cancel=true;
			  }
		  }
}

/**
*launchInBrowserToolStripMenuItem Event Handler
*/
private: System::Void launchInBrowserToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 try{
				  String^ path=Path::GetFullPath(filename1);
				  String^ textm=File::ReadAllText(path);
				  String^ justfilename=Path::GetFileName(filename1);
				  String^ newfilename=String::Concat(justfilename,".html");
				  newpath=path->Replace(justfilename,newfilename);
				  File::WriteAllText(newpath,textm);
				  System::Diagnostics::Process::Start(newpath);
				  
			    }
			 catch(ArgumentException^ )  //Launch in Browser Exception Handled
			 { MessageBox::Show("There was no path,please save the file first!","Launch in Browser Error",MessageBoxButtons::OK,MessageBoxIcon::Warning);
				} 
		 
	  }

/**
*printToolStripMenuItem Event Handler
*/
private: System::Void printToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->printDialog1->ShowDialog();
		 }
private: System::Void editToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

/**
*replaceToolStripMenuItem Event Handler
*/
private: System::Void replaceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
			Form5^ myform=gcnew Form5();
			myform->ShowDialog();
			
			String^ replace=myform->rreplace();
			String^ replacewith=myform->rreplacewith();
			if((!String::IsNullOrEmpty(replace))&&(!String::IsNullOrEmpty(replacewith)))
			{String^ path=Path::GetFullPath(filename1);
			String^ textm=File::ReadAllText(path);
			String^ newtextm=textm->Replace(replace,replacewith);
			File::WriteAllText(path,newtextm);

			textBox->Text=IO::File::ReadAllText(path);
			}	}
		catch(ArgumentException^)
		{ MessageBox::Show("Please Save the File before you replace");
		}
		 }

/**
*aboutToolStripMenuItem Event Handler
*/
private: System::Void aboutToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			  String^ message = "++EditText \n Version 1.0.3 \n\n sCriptoKnights Inc.";
            String^ caption = "About";
            MessageBoxButtons buttons = MessageBoxButtons::OK; 
			
		 MessageBox::Show(this,message,caption,buttons,MessageBoxIcon::Information);
		 }
};
}


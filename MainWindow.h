#pragma once

#include "TranslateInterface.h"
#include <thread>

namespace PWTranslator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			this->translator = nullptr;
			this->applyVisualStyle();
		}

	protected:
		/// <summary>
		/// Release all used resources?
		/// </summary>
		~MainWindow()
		{
			if (this->translator != nullptr)
			{
				delete this->translator;
				this->translator = nullptr;
			}

			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;






	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: TranslateInterface* translator;
	internal: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ labelCredits;
	private: System::Windows::Forms::LinkLabel^ linkGitHub;

	internal:





	private:
	protected:

	private:
		/// <summary>
		/// Mandatory variable? designer.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required?methods?to support?the constructor?cannot be changed?
		/// the contents of this?method?help?code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelCredits = (gcnew System::Windows::Forms::Label());
			this->linkGitHub = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(759, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 20);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Selecionar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(404, 8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(349, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(273, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"1) Pasta dos arquivos originais";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label2->Location = System::Drawing::Point(12, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(326, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"2) Pasta dos arquivos traduzidos (base)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(404, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(349, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(760, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 20);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Selecionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(760, 73);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(78, 20);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Selecionar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(404, 73);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(349, 20);
			this->textBox5->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label5->Location = System::Drawing::Point(12, 74);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(210, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"3) Pasta para salvar o resultado";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(206, 106);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(346, 33);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Iniciar traducao";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainWindow::button7_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(15, 175);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(823, 33);
			this->progressBar1->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 145);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 18);
			this->label7->TabIndex = 21;
			// 
			// labelCredits
			// 
			this->labelCredits->AutoSize = true;
			this->labelCredits->Location = System::Drawing::Point(12, 221);
			this->labelCredits->Name = L"labelCredits";
			this->labelCredits->Size = System::Drawing::Size(122, 16);
			this->labelCredits->TabIndex = 22;
			this->labelCredits->Text = L"Creditos: master9028";
			// 
			// linkGitHub
			// 
			this->linkGitHub->AutoSize = true;
			this->linkGitHub->Location = System::Drawing::Point(225, 221);
			this->linkGitHub->Name = L"linkGitHub";
			this->linkGitHub->Size = System::Drawing::Size(165, 16);
			this->linkGitHub->TabIndex = 23;
			this->linkGitHub->TabStop = true;
			this->linkGitHub->Tag = L"https://github.com/Mastersymnet/PWT";
			this->linkGitHub->Text = L"github.com/Mastersymnet/PWT";
			this->linkGitHub->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainWindow::linkGitHub_LinkClicked);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 252);
			this->Controls->Add(this->linkGitHub);
			this->Controls->Add(this->labelCredits);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tradutor PW - Interface";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void applyVisualStyle() {
		this->DoubleBuffered = true;
		this->BackColor = Color::FromArgb(11, 19, 37);
		this->ForeColor = Color::FromArgb(238, 248, 255);
		this->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 9.75F, System::Drawing::FontStyle::Regular));
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->MaximizeBox = false;
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;

		this->label1->BackColor = Color::Transparent;
		this->label2->BackColor = Color::Transparent;
		this->label5->BackColor = Color::Transparent;
		this->label7->BackColor = Color::Transparent;
		this->labelCredits->BackColor = Color::Transparent;

		this->label1->ForeColor = Color::FromArgb(143, 238, 255);
		this->label2->ForeColor = Color::FromArgb(143, 238, 255);
		this->label5->ForeColor = Color::FromArgb(143, 238, 255);
		this->label7->ForeColor = Color::FromArgb(255, 214, 102);
		this->labelCredits->ForeColor = Color::FromArgb(186, 223, 255);
		this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 11.0F, System::Drawing::FontStyle::Bold));
		this->labelCredits->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 9.25F, System::Drawing::FontStyle::Regular));
		this->label7->Text = L"Tudo pronto. Escolha as pastas e clique em Iniciar traducao.";
		this->labelCredits->Text = L"Creditos: master9028 | GitHub:";

		this->linkGitHub->LinkColor = Color::FromArgb(122, 248, 255);
		this->linkGitHub->VisitedLinkColor = Color::FromArgb(255, 175, 130);
		this->linkGitHub->ActiveLinkColor = Color::FromArgb(255, 255, 255);
		this->linkGitHub->Font = (gcnew System::Drawing::Font(L"Consolas", 9.0F, System::Drawing::FontStyle::Bold));
		this->linkGitHub->Text = L"Mastersymnet/PWT";

		this->textBox1->BackColor = Color::FromArgb(17, 33, 62);
		this->textBox2->BackColor = Color::FromArgb(17, 33, 62);
		this->textBox5->BackColor = Color::FromArgb(17, 33, 62);
		this->textBox1->ForeColor = Color::FromArgb(231, 247, 255);
		this->textBox2->ForeColor = Color::FromArgb(231, 247, 255);
		this->textBox5->ForeColor = Color::FromArgb(231, 247, 255);
		this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.25F));
		this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.25F));
		this->textBox5->Font = (gcnew System::Drawing::Font(L"Consolas", 9.25F));

		this->button1->UseVisualStyleBackColor = false;
		this->button2->UseVisualStyleBackColor = false;
		this->button5->UseVisualStyleBackColor = false;
		this->button7->UseVisualStyleBackColor = false;

		this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;

		this->button1->Cursor = Cursors::Hand;
		this->button2->Cursor = Cursors::Hand;
		this->button5->Cursor = Cursors::Hand;
		this->button7->Cursor = Cursors::Hand;

		this->button1->BackColor = Color::FromArgb(0, 119, 182);
		this->button2->BackColor = Color::FromArgb(0, 119, 182);
		this->button5->BackColor = Color::FromArgb(0, 119, 182);
		this->button1->ForeColor = Color::White;
		this->button2->ForeColor = Color::White;
		this->button5->ForeColor = Color::White;

		this->button1->FlatAppearance->BorderColor = Color::FromArgb(144, 224, 239);
		this->button2->FlatAppearance->BorderColor = Color::FromArgb(144, 224, 239);
		this->button5->FlatAppearance->BorderColor = Color::FromArgb(144, 224, 239);
		this->button1->FlatAppearance->BorderSize = 1;
		this->button2->FlatAppearance->BorderSize = 1;
		this->button5->FlatAppearance->BorderSize = 1;

		this->button7->BackColor = Color::FromArgb(255, 96, 55);
		this->button7->ForeColor = Color::FromArgb(255, 247, 230);
		this->button7->FlatAppearance->BorderColor = Color::FromArgb(255, 175, 130);
		this->button7->FlatAppearance->BorderSize = 2;
		this->button7->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 11.25F, System::Drawing::FontStyle::Bold));

		this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
	}
	private: bool validatePaths() {
		if (String::IsNullOrWhiteSpace(this->textBox1->Text) ||
			String::IsNullOrWhiteSpace(this->textBox2->Text) ||
			String::IsNullOrWhiteSpace(this->textBox5->Text))
		{
			MessageBox::Show(
				L"Preencha as 3 pastas para continuar.",
				L"PW Tradutor",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return false;
		}

		if (!Directory::Exists(this->textBox1->Text))
		{
			MessageBox::Show(
				L"A pasta dos arquivos originais nao existe.",
				L"PW Tradutor",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return false;
		}

		if (!Directory::Exists(this->textBox2->Text))
		{
			MessageBox::Show(
				L"A pasta base de traducao nao existe.",
				L"PW Tradutor",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return false;
		}

		try
		{
			Directory::CreateDirectory(this->textBox5->Text);
		}
		catch (Exception^)
		{
			MessageBox::Show(
				L"Nao foi possivel criar ou acessar a pasta de saida.",
				L"PW Tradutor",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return false;
		}

		return true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = folderBrowserDialog1->SelectedPath;
			textBox1->Text = fileName;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = folderBrowserDialog1->SelectedPath;
			textBox2->Text = fileName;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = folderBrowserDialog1->SelectedPath;
			textBox5->Text = fileName;
		}
	}
	private: System::Void linkGitHub_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		try
		{
			this->linkGitHub->LinkVisited = true;
			System::Diagnostics::ProcessStartInfo^ processInfo = gcnew System::Diagnostics::ProcessStartInfo();
			processInfo->FileName = this->linkGitHub->Tag->ToString();
			processInfo->UseShellExecute = true;
			System::Diagnostics::Process::Start(processInfo);
		}
		catch (Exception^)
		{
			MessageBox::Show(
				L"Nao foi possivel abrir o GitHub agora.",
				L"PW Tradutor",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->validatePaths())
		{
			return;
		}

		this->button7->Enabled = false;
		this->progressBar1->Minimum = 0;
		this->progressBar1->Value = 0;

		if (this->translator != nullptr)
		{
			delete this->translator;
			this->translator = nullptr;
		}

		try
		{
			this->translator = new TranslateInterface(this->textBox1->Text, this->textBox2->Text, this->textBox5->Text);
			vector<wstring> files = this->translator->getAllFiles();
			wstring progress = L"Traduzindo XML: 0/" + to_wstring(files.size());
			this->label7->Text = gcnew String(progress.c_str());

			if (files.empty())
			{
				this->label7->Text = L"Nenhum arquivo XML foi encontrado na pasta original.";
				this->button7->Enabled = true;
				return;
			}

			this->progressBar1->Maximum = static_cast<int>(files.size());
			for (int index = 0; index < files.size(); index++)
			{
				this->translator->translateFile(files[index]);
				progress = L"Traduzindo XML: " + to_wstring(index + 1) + L"/" + to_wstring(files.size());
				this->label7->Text = gcnew String(progress.c_str());
				this->label7->Update();
				this->progressBar1->Increment(1);
			}

			progress = L"Traducao concluida: " + to_wstring(files.size()) + L"/" + to_wstring(files.size()) + L" arquivos XML.";
			this->label7->Text = gcnew String(progress.c_str());
			this->label7->Update();
		}
		catch (const std::exception&)
		{
			this->label7->Text = L"Ocorreu um erro durante a traducao. Confira as pastas e tente novamente.";
		}

		this->button7->Enabled = true;
		/*this->label7->Text = gcnew String(progress.c_str()); 
		this->progressBar1->Increment(1);

		this->progressBar1->Value = 0;
		files = this->translator->getAllFilesSTF();
		progress = L"Translated STF files. Progress: 0/" + to_wstring(files.size());
		this->label7->Text = gcnew String(progress.c_str());
		this->progressBar1->Maximum = files.size();
		for (int index = 0; index < files.size(); index++)
		{
			this->translator->translateFileSTF(files[index]);
			progress = L"Translated STF files. Progress: " + to_wstring(index) + L"/" + to_wstring(files.size());
			this->label7->Text = gcnew String(progress.c_str());
			this->label7->Update();
			this->progressBar1->Increment(1);
		}
		progress = L"Translated STF files. Progress: " + to_wstring(files.size()) + L"/" + to_wstring(files.size()) + L"  Completed!";
		this->label7->Text = gcnew String(progress.c_str());
		this->progressBar1->Increment(1);*/
	}
	};
}

#pragma once

#include "TranslateInterface.h"
#include <thread>
#include <shobjidl.h>
#include <vcclr.h>

#pragma comment(lib, "Ole32.lib")
#pragma comment(lib, "Shell32.lib")

namespace PWTranslator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text::RegularExpressions;

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
			this->button1->Location = System::Drawing::Point(796, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Abrir Explorer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(22, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(760, 23);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label1->Location = System::Drawing::Point(22, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"1) Pasta do jogo (XML original a traduzir)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label2->Location = System::Drawing::Point(22, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(247, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"2) Pasta de referencia (XML ja traduzido)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(22, 116);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(760, 23);
			this->textBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(796, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 32);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Abrir Explorer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(796, 182);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 32);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Abrir Explorer";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(22, 182);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(760, 23);
			this->textBox5->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label5->Location = System::Drawing::Point(22, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"3) Pasta de saida (onde salvar o resultado)";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(22, 226);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(924, 44);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Gerar XML traduzido";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainWindow::button7_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(22, 304);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(924, 20);
			this->progressBar1->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(22, 278);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 18);
			this->label7->TabIndex = 21;
			// 
			// labelCredits
			// 
			this->labelCredits->AutoSize = true;
			this->labelCredits->Location = System::Drawing::Point(22, 330);
			this->labelCredits->Name = L"labelCredits";
			this->labelCredits->Size = System::Drawing::Size(122, 16);
			this->labelCredits->TabIndex = 22;
			this->labelCredits->Text = L"Creditos: master9028";
			// 
			// linkGitHub
			// 
			this->linkGitHub->AutoSize = true;
			this->linkGitHub->Location = System::Drawing::Point(246, 330);
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
			this->ClientSize = System::Drawing::Size(970, 360);
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
		this->BackColor = Color::FromArgb(9, 9, 12);
		this->ForeColor = Color::FromArgb(232, 236, 245);
		this->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 10.0F, System::Drawing::FontStyle::Regular));
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->MaximizeBox = false;
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->MinimumSize = System::Drawing::Size(986, 399);

		this->label1->BackColor = Color::Transparent;
		this->label2->BackColor = Color::Transparent;
		this->label5->BackColor = Color::Transparent;
		this->label7->BackColor = Color::Transparent;
		this->labelCredits->BackColor = Color::Transparent;

		this->label1->ForeColor = Color::FromArgb(178, 185, 206);
		this->label2->ForeColor = Color::FromArgb(178, 185, 206);
		this->label5->ForeColor = Color::FromArgb(178, 185, 206);
		this->label7->ForeColor = Color::FromArgb(121, 255, 214);
		this->labelCredits->ForeColor = Color::FromArgb(130, 139, 168);
		this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.75F, System::Drawing::FontStyle::Bold));
		this->labelCredits->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 9.25F, System::Drawing::FontStyle::Regular));
		this->label7->Text = L"Preencha os 3 passos: jogo original, referencia traduzida e pasta de saida.";
		this->labelCredits->Text = L"Creditos: master9028 | Projeto:";

		this->linkGitHub->LinkColor = Color::FromArgb(92, 170, 255);
		this->linkGitHub->VisitedLinkColor = Color::FromArgb(177, 132, 255);
		this->linkGitHub->ActiveLinkColor = Color::FromArgb(255, 255, 255);
		this->linkGitHub->Font = (gcnew System::Drawing::Font(L"Consolas", 9.25F, System::Drawing::FontStyle::Bold));
		this->linkGitHub->Text = L"Mastersymnet/PWT";

		this->textBox1->BackColor = Color::FromArgb(17, 17, 23);
		this->textBox2->BackColor = Color::FromArgb(17, 17, 23);
		this->textBox5->BackColor = Color::FromArgb(17, 17, 23);
		this->textBox1->ForeColor = Color::FromArgb(241, 246, 255);
		this->textBox2->ForeColor = Color::FromArgb(241, 246, 255);
		this->textBox5->ForeColor = Color::FromArgb(241, 246, 255);
		this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F));
		this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F));
		this->textBox5->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F));

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

		this->button1->BackColor = Color::FromArgb(28, 28, 36);
		this->button2->BackColor = Color::FromArgb(28, 28, 36);
		this->button5->BackColor = Color::FromArgb(28, 28, 36);
		this->button1->ForeColor = Color::FromArgb(222, 232, 255);
		this->button2->ForeColor = Color::FromArgb(222, 232, 255);
		this->button5->ForeColor = Color::FromArgb(222, 232, 255);

		this->button1->FlatAppearance->BorderColor = Color::FromArgb(60, 71, 97);
		this->button2->FlatAppearance->BorderColor = Color::FromArgb(60, 71, 97);
		this->button5->FlatAppearance->BorderColor = Color::FromArgb(60, 71, 97);
		this->button1->FlatAppearance->BorderSize = 1;
		this->button2->FlatAppearance->BorderSize = 1;
		this->button5->FlatAppearance->BorderSize = 1;
		this->button1->FlatAppearance->MouseOverBackColor = Color::FromArgb(41, 41, 52);
		this->button2->FlatAppearance->MouseOverBackColor = Color::FromArgb(41, 41, 52);
		this->button5->FlatAppearance->MouseOverBackColor = Color::FromArgb(41, 41, 52);
		this->button1->FlatAppearance->MouseDownBackColor = Color::FromArgb(20, 20, 28);
		this->button2->FlatAppearance->MouseDownBackColor = Color::FromArgb(20, 20, 28);
		this->button5->FlatAppearance->MouseDownBackColor = Color::FromArgb(20, 20, 28);

		this->button7->BackColor = Color::FromArgb(32, 122, 244);
		this->button7->ForeColor = Color::FromArgb(245, 249, 255);
		this->button7->FlatAppearance->BorderColor = Color::FromArgb(92, 170, 255);
		this->button7->FlatAppearance->BorderSize = 1;
		this->button7->FlatAppearance->MouseOverBackColor = Color::FromArgb(46, 136, 255);
		this->button7->FlatAppearance->MouseDownBackColor = Color::FromArgb(24, 104, 217);
		this->button7->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 12.0F, System::Drawing::FontStyle::Bold));

		this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
		this->progressBar1->BackColor = Color::FromArgb(22, 22, 30);
	}
	private: String^ selectFolderWithExplorer(String^ dialogTitle, String^ initialPath, bool% dialogUnavailable) {
		dialogUnavailable = false;
		IFileOpenDialog* fileDialog = nullptr;
		HRESULT hr = CoCreateInstance(CLSID_FileOpenDialog, nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&fileDialog));
		if (FAILED(hr) || fileDialog == nullptr)
		{
			dialogUnavailable = true;
			return nullptr;
		}

		DWORD options = 0;
		if (SUCCEEDED(fileDialog->GetOptions(&options)))
		{
			fileDialog->SetOptions(options | FOS_PICKFOLDERS | FOS_FORCEFILESYSTEM | FOS_PATHMUSTEXIST);
		}

		if (!String::IsNullOrWhiteSpace(dialogTitle))
		{
			pin_ptr<const wchar_t> titlePtr = PtrToStringChars(dialogTitle);
			fileDialog->SetTitle(titlePtr);
		}

		if (!String::IsNullOrWhiteSpace(initialPath) && Directory::Exists(initialPath))
		{
			IShellItem* initialFolder = nullptr;
			pin_ptr<const wchar_t> initialPathPtr = PtrToStringChars(initialPath);
			if (SUCCEEDED(SHCreateItemFromParsingName(initialPathPtr, nullptr, IID_PPV_ARGS(&initialFolder))) && initialFolder != nullptr)
			{
				fileDialog->SetDefaultFolder(initialFolder);
				fileDialog->SetFolder(initialFolder);
				initialFolder->Release();
			}
		}

		hr = fileDialog->Show((HWND)this->Handle.ToPointer());
		if (hr == HRESULT_FROM_WIN32(ERROR_CANCELLED))
		{
			fileDialog->Release();
			return nullptr;
		}
		if (FAILED(hr))
		{
			dialogUnavailable = true;
			fileDialog->Release();
			return nullptr;
		}

		IShellItem* selectedItem = nullptr;
		hr = fileDialog->GetResult(&selectedItem);
		if (FAILED(hr) || selectedItem == nullptr)
		{
			dialogUnavailable = true;
			fileDialog->Release();
			return nullptr;
		}

		PWSTR selectedPath = nullptr;
		hr = selectedItem->GetDisplayName(SIGDN_FILESYSPATH, &selectedPath);
		String^ selectedFolder = nullptr;
		if (SUCCEEDED(hr) && selectedPath != nullptr)
		{
			selectedFolder = gcnew String(selectedPath);
		}
		else
		{
			dialogUnavailable = true;
		}

		if (selectedPath != nullptr)
		{
			CoTaskMemFree(selectedPath);
		}

		selectedItem->Release();
		fileDialog->Release();
		return selectedFolder;
	}
	private: void chooseFolderForTextBox(TextBox^ targetBox, String^ dialogTitle) {
		bool dialogUnavailable = false;
		String^ selectedFolder = this->selectFolderWithExplorer(dialogTitle, targetBox->Text, dialogUnavailable);
		if (!String::IsNullOrWhiteSpace(selectedFolder))
		{
			targetBox->Text = selectedFolder;
			return;
		}

		if (dialogUnavailable && folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			targetBox->Text = folderBrowserDialog1->SelectedPath;
		}
	}
	private: String^ readFileContentAutoEncoding(String^ filePath) {
		try
		{
			StreamReader^ reader = gcnew StreamReader(filePath, true);
			String^ content = reader->ReadToEnd();
			reader->Close();
			return content;
		}
		catch (Exception^)
		{
			return String::Empty;
		}
	}
	private: List<String^>^ extractStringValuesFromXml(String^ xmlContent) {
		List<String^>^ values = gcnew List<String^>();
		if (String::IsNullOrEmpty(xmlContent))
		{
			return values;
		}

		Regex^ regex = gcnew Regex("String\\s*=\\s*\"([^\"]*)\"", RegexOptions::IgnoreCase);
		MatchCollection^ matches = regex->Matches(xmlContent);
		for each (Match ^ match in matches)
		{
			if (match->Groups->Count > 1)
			{
				values->Add(match->Groups[1]->Value);
			}
		}

		return values;
	}
	private: void collectFileStringChanges(String^ relativeFile, List<array<String^>^>^ allChanges) {
		if (String::IsNullOrWhiteSpace(relativeFile))
		{
			return;
		}

		String^ sourceFile = Path::Combine(this->textBox1->Text, relativeFile);
		String^ outputFile = Path::Combine(this->textBox5->Text, relativeFile);
		if (!File::Exists(sourceFile) || !File::Exists(outputFile))
		{
			return;
		}

		List<String^>^ sourceValues = this->extractStringValuesFromXml(this->readFileContentAutoEncoding(sourceFile));
		List<String^>^ outputValues = this->extractStringValuesFromXml(this->readFileContentAutoEncoding(outputFile));
		int maxCount = Math::Max(sourceValues->Count, outputValues->Count);

		for (int i = 0; i < maxCount; i++)
		{
			String^ beforeValue = i < sourceValues->Count ? sourceValues[i] : L"(sem valor)";
			String^ afterValue = i < outputValues->Count ? outputValues[i] : L"(sem valor)";

			if (!String::Equals(beforeValue, afterValue, StringComparison::Ordinal))
			{
				array<String^>^ row = gcnew array<String^>(4);
				row[0] = relativeFile;
				row[1] = (i + 1).ToString();
				row[2] = beforeValue;
				row[3] = afterValue;
				allChanges->Add(row);
			}
		}
	}
	private: void showTranslationComparisonWindow(List<array<String^>^>^ allChanges) {
		Form^ compareForm = gcnew Form();
		compareForm->Text = L"Comparacao de traducao";
		compareForm->StartPosition = FormStartPosition::CenterParent;
		compareForm->Size = System::Drawing::Size(1220, 720);
		compareForm->MinimumSize = System::Drawing::Size(900, 560);
		compareForm->BackColor = Color::FromArgb(9, 9, 12);
		compareForm->ForeColor = Color::FromArgb(232, 236, 245);
		compareForm->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 9.75F));

		Label^ title = gcnew Label();
		title->Dock = DockStyle::Top;
		title->Height = 42;
		title->Padding = System::Windows::Forms::Padding(12, 10, 0, 0);
		title->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 12.0F, FontStyle::Bold));
		title->ForeColor = Color::FromArgb(121, 255, 214);
		title->Text = L"Comparacao de String: antes x depois";

		Label^ subtitle = gcnew Label();
		subtitle->Dock = DockStyle::Top;
		subtitle->Height = 30;
		subtitle->Padding = System::Windows::Forms::Padding(12, 6, 0, 0);
		subtitle->ForeColor = Color::FromArgb(178, 185, 206);
		subtitle->Text = L"Total de alteracoes encontradas: " + allChanges->Count.ToString();

		DataGridView^ grid = gcnew DataGridView();
		grid->Dock = DockStyle::Fill;
		grid->AllowUserToAddRows = false;
		grid->AllowUserToDeleteRows = false;
		grid->ReadOnly = true;
		grid->RowHeadersVisible = false;
		grid->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::DisplayedCells;
		grid->DefaultCellStyle->WrapMode = DataGridViewTriState::True;
		grid->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		grid->MultiSelect = false;
		grid->BackgroundColor = Color::FromArgb(14, 14, 19);
		grid->BorderStyle = BorderStyle::None;
		grid->GridColor = Color::FromArgb(35, 40, 56);
		grid->EnableHeadersVisualStyles = false;
		grid->ColumnHeadersDefaultCellStyle->BackColor = Color::FromArgb(20, 24, 35);
		grid->ColumnHeadersDefaultCellStyle->ForeColor = Color::FromArgb(224, 232, 249);
		grid->DefaultCellStyle->BackColor = Color::FromArgb(13, 13, 18);
		grid->DefaultCellStyle->ForeColor = Color::FromArgb(240, 244, 255);
		grid->DefaultCellStyle->SelectionBackColor = Color::FromArgb(32, 62, 110);
		grid->DefaultCellStyle->SelectionForeColor = Color::White;

		grid->Columns->Add(L"file", L"Arquivo");
		grid->Columns->Add(L"index", L"String #");
		grid->Columns->Add(L"before", L"Antes");
		grid->Columns->Add(L"after", L"Depois");
		grid->Columns[0]->Width = 260;
		grid->Columns[1]->Width = 70;
		grid->Columns[2]->Width = 410;
		grid->Columns[3]->Width = 410;

		for each (array<String^> ^ row in allChanges)
		{
			grid->Rows->Add(row);
		}

		Button^ closeButton = gcnew Button();
		closeButton->Text = L"Fechar";
		closeButton->Height = 36;
		closeButton->Dock = DockStyle::Bottom;
		closeButton->FlatStyle = FlatStyle::Flat;
		closeButton->FlatAppearance->BorderColor = Color::FromArgb(60, 71, 97);
		closeButton->FlatAppearance->BorderSize = 1;
		closeButton->BackColor = Color::FromArgb(28, 28, 36);
		closeButton->ForeColor = Color::FromArgb(222, 232, 255);
		closeButton->Cursor = Cursors::Hand;
		closeButton->Click += gcnew EventHandler(compareForm, &Form::Close);

		compareForm->Controls->Add(grid);
		compareForm->Controls->Add(closeButton);
		compareForm->Controls->Add(subtitle);
		compareForm->Controls->Add(title);
		compareForm->ShowDialog(this);
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
		this->chooseFolderForTextBox(this->textBox1, L"Passo 1: Selecione a pasta do jogo (XML original)");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->chooseFolderForTextBox(this->textBox2, L"Passo 2: Selecione a pasta de referencia (XML traduzido)");
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->chooseFolderForTextBox(this->textBox5, L"Passo 3: Selecione a pasta de saida");
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
			List<array<String^>^>^ allChanges = gcnew List<array<String^>^>();
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
				String^ relativeFile = gcnew String(files[index].c_str());
				this->collectFileStringChanges(relativeFile, allChanges);
				progress = L"Traduzindo XML: " + to_wstring(index + 1) + L"/" + to_wstring(files.size());
				this->label7->Text = gcnew String(progress.c_str());
				this->label7->Update();
				this->progressBar1->Increment(1);
			}

			progress = L"Traducao concluida: " + to_wstring(files.size()) + L"/" + to_wstring(files.size()) + L" arquivos XML.";
			this->label7->Text = gcnew String(progress.c_str());
			this->label7->Update();
			this->showTranslationComparisonWindow(allChanges);
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

#pragma once
#include <ctype.h>
#include <iostream>
#include <string.h>





namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::IO;
	using namespace System::Text::RegularExpressions;
	
	//using namespace cli;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		String^ connString = "Data Source=DESKTOP-AMR7CFJ;Initial Catalog=admin;Integrated Security=True";
		
		//calculation
		double total = 0;
		//Check condition
		int condition = 0;
		
		//items
		double cappucino = 0;
		double latte = 0;
		//cost
		float Cappucinocost = 0;
		double Lattecost = 0;
		//size
		String^ cappucinosize;
		String^ lattesize;

	private: System::Windows::Forms::TextBox^ totalBox;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ Pay;







	private: System::Windows::Forms::Button^ Receipt;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ nameBox;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ genderBox;


	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ phoneBox;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ warning2;
	private: System::Windows::Forms::Label^ warning1;

	private: System::Windows::Forms::Label^ genderWarning;
	private: System::Windows::Forms::Label^ nameWarning;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ removeCarts;




	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Label^ staffName;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::Panel^ panel3;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ editBtn;







	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ closeBtn;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ editPnl;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ addDataBtn;
	private: System::Windows::Forms::TextBox^ inputData1;

	private: System::Windows::Forms::TextBox^ inputData3;
	private: System::Windows::Forms::TextBox^ inputData2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::BindingNavigator^ bindingNavigator1;
private: System::Windows::Forms::ToolStripButton^ bindingNavigatorAddNewItem;
private: System::Windows::Forms::ToolStripLabel^ bindingNavigatorCountItem;
private: System::Windows::Forms::ToolStripButton^ bindingNavigatorDeleteItem;
private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveFirstItem;
private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMovePreviousItem;
private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator;
private: System::Windows::Forms::ToolStripTextBox^ bindingNavigatorPositionItem;
private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator1;
private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveNextItem;
private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveLastItem;
private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator2;

private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::Button^ update;
private: System::Windows::Forms::TextBox^ inputData4;

private: System::Windows::Forms::Label^ label19;

private: System::Windows::Forms::Button^ deletebtn;
private: System::Windows::Forms::TextBox^ deleteInput;
private: System::Windows::Forms::Label^ label21;

private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::ComboBox^ discountBox;

private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ payBox;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Button^ button1;




























	private: System::Windows::Forms::Button^ Reset;

		   
	public:
		MyForm2(void)
		{
			InitializeComponent();
			
		
			
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(String^data)
		{
			InitializeComponent();
			
			/*SqlConnection^ sqlCon = gcnew SqlConnection(connString);
			sqlCon->Open();
			SqlDataAdapter^ sqlDa = gcnew SqlDataAdapter("SELECT * FROM items", sqlCon);
			DataTable^ dtble = gcnew DataTable();
			sqlDa->Fill(dtble);
			dataGridView1->DataSource = dtble;
			dataGridView2->DataSource = dtble;*/

			
			staffName->Text = data;
			editPnl->Hide();
			
			

			//
			//TODO: Add the constructor code here
			//
		}
		//DataTable^ table = gcnew DataTable();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	protected:

















	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
















	private: System::Windows::Forms::Label^ label8;
	private: System::ComponentModel::IContainer^ components;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->payBox = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->discountBox = (gcnew System::Windows::Forms::ComboBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->removeCarts = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Receipt = (gcnew System::Windows::Forms::Button());
			this->Pay = (gcnew System::Windows::Forms::Button());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->totalBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->staffName = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->genderWarning = (gcnew System::Windows::Forms::Label());
			this->nameWarning = (gcnew System::Windows::Forms::Label());
			this->phoneBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->genderBox = (gcnew System::Windows::Forms::ComboBox());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->editPnl = (gcnew System::Windows::Forms::Panel());
			this->deletebtn = (gcnew System::Windows::Forms::Button());
			this->deleteInput = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->inputData4 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->update = (gcnew System::Windows::Forms::Button());
			this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
			this->bindingNavigatorAddNewItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorCountItem = (gcnew System::Windows::Forms::ToolStripLabel());
			this->bindingNavigatorDeleteItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveFirstItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMovePreviousItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorMoveNextItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveLastItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->inputData3 = (gcnew System::Windows::Forms::TextBox());
			this->inputData2 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->addDataBtn = (gcnew System::Windows::Forms::Button());
			this->inputData1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->warning2 = (gcnew System::Windows::Forms::Label());
			this->warning1 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel2->SuspendLayout();
			this->editPnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Tan;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->payBox);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->discountBox);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->removeCarts);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->Receipt);
			this->panel1->Controls->Add(this->Pay);
			this->panel1->Controls->Add(this->Reset);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->totalBox);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(1155, 136);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(385, 694);
			this->panel1->TabIndex = 9;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::panel1_Paint);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label26->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label26->Location = System::Drawing::Point(107, 602);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(23, 25);
			this->label26->TabIndex = 26;
			this->label26->Text = L"$";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// payBox
			// 
			this->payBox->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->payBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payBox->Location = System::Drawing::Point(132, 600);
			this->payBox->Name = L"payBox";
			this->payBox->Size = System::Drawing::Size(170, 27);
			this->payBox->TabIndex = 25;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label25->Font = (gcnew System::Drawing::Font(L"Khmer SN Kampongcham", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label25->Location = System::Drawing::Point(42, 587);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(76, 50);
			this->label25->TabIndex = 24;
			this->label25->Text = L"Pay:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label24->Location = System::Drawing::Point(259, 564);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(31, 25);
			this->label24->TabIndex = 23;
			this->label24->Text = L"%";
			// 
			// discountBox
			// 
			this->discountBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->discountBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->discountBox->FormattingEnabled = true;
			this->discountBox->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"0", L"5", L"10", L"15", L"20", L"25", L"30",
					L"35", L"40", L"45", L"50", L"55", L"60", L"65", L"70", L"75", L"80", L"85", L"90", L"95", L"100"
			});
			this->discountBox->Location = System::Drawing::Point(132, 562);
			this->discountBox->Name = L"discountBox";
			this->discountBox->Size = System::Drawing::Size(121, 26);
			this->discountBox->TabIndex = 22;
			this->discountBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::discountBox_SelectedIndexChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Khmer SN Kampongcham", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label20->Location = System::Drawing::Point(42, 558);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(94, 36);
			this->label20->TabIndex = 21;
			this->label20->Text = L"Discount:";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(112, 54);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(47, 40);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 20;
			this->pictureBox5->TabStop = false;
			// 
			// removeCarts
			// 
			this->removeCarts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->removeCarts->Cursor = System::Windows::Forms::Cursors::Hand;
			this->removeCarts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->removeCarts->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeCarts->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->removeCarts->Location = System::Drawing::Point(241, 499);
			this->removeCarts->Name = L"removeCarts";
			this->removeCarts->Size = System::Drawing::Size(106, 28);
			this->removeCarts->TabIndex = 19;
			this->removeCarts->Text = L"Remove";
			this->removeCarts->UseVisualStyleBackColor = false;
			this->removeCarts->Click += gcnew System::EventHandler(this, &MyForm2::removeCarts_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Khmer SN Kampongcham", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(160, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 31);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Size";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(37, 152);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiExtended;
			this->listBox1->Size = System::Drawing::Size(310, 344);
			this->listBox1->TabIndex = 14;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::listBox1_SelectedIndexChanged);
			// 
			// Receipt
			// 
			this->Receipt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->Receipt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Receipt->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Receipt->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Receipt->Location = System::Drawing::Point(245, 640);
			this->Receipt->Name = L"Receipt";
			this->Receipt->Size = System::Drawing::Size(106, 40);
			this->Receipt->TabIndex = 11;
			this->Receipt->Text = L"Receipt";
			this->Receipt->UseVisualStyleBackColor = false;
			this->Receipt->Click += gcnew System::EventHandler(this, &MyForm2::Receipt_Click);
			// 
			// Pay
			// 
			this->Pay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->Pay->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Pay->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pay->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Pay->Location = System::Drawing::Point(139, 640);
			this->Pay->Name = L"Pay";
			this->Pay->Size = System::Drawing::Size(100, 40);
			this->Pay->TabIndex = 17;
			this->Pay->Text = L"Pay";
			this->Pay->UseVisualStyleBackColor = false;
			this->Pay->Click += gcnew System::EventHandler(this, &MyForm2::Pay_Click);
			// 
			// Reset
			// 
			this->Reset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->Reset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Reset->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reset->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Reset->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Reset->Location = System::Drawing::Point(37, 640);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(94, 40);
			this->Reset->TabIndex = 16;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = false;
			this->Reset->Click += gcnew System::EventHandler(this, &MyForm2::Reset_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Khmer SN Kampongcham", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(297, 116);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 31);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Price";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Khmer SN Kampongcham", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(235, 116);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 31);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Qty";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Khmer SN Kampongcham", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(42, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 31);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Item/s";
			// 
			// totalBox
			// 
			this->totalBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalBox->Location = System::Drawing::Point(132, 533);
			this->totalBox->Name = L"totalBox";
			this->totalBox->ReadOnly = true;
			this->totalBox->Size = System::Drawing::Size(121, 24);
			this->totalBox->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label8->Location = System::Drawing::Point(112, 535);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 20);
			this->label8->TabIndex = 3;
			this->label8->Text = L"$";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Khmer SN Kampongcham", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(42, 526);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 36);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Total:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(151, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 76);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Cart\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// staffName
			// 
			this->staffName->AutoSize = true;
			this->staffName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->staffName->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->staffName->Location = System::Drawing::Point(61, 191);
			this->staffName->Name = L"staffName";
			this->staffName->Size = System::Drawing::Size(58, 22);
			this->staffName->TabIndex = 21;
			this->staffName->Text = L"admin";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label12->Location = System::Drawing::Point(3, 191);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 22);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Staff:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->genderWarning);
			this->panel2->Controls->Add(this->nameWarning);
			this->panel2->Controls->Add(this->phoneBox);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->genderBox);
			this->panel2->Controls->Add(this->nameBox);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(257, 479);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(868, 328);
			this->panel2->TabIndex = 11;
			// 
			// genderWarning
			// 
			this->genderWarning->AutoSize = true;
			this->genderWarning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genderWarning->ForeColor = System::Drawing::Color::Red;
			this->genderWarning->Location = System::Drawing::Point(26, 160);
			this->genderWarning->Name = L"genderWarning";
			this->genderWarning->Size = System::Drawing::Size(0, 32);
			this->genderWarning->TabIndex = 20;
			// 
			// nameWarning
			// 
			this->nameWarning->AutoSize = true;
			this->nameWarning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameWarning->ForeColor = System::Drawing::Color::Red;
			this->nameWarning->Location = System::Drawing::Point(26, 76);
			this->nameWarning->Name = L"nameWarning";
			this->nameWarning->Size = System::Drawing::Size(0, 32);
			this->nameWarning->TabIndex = 19;
			// 
			// phoneBox
			// 
			this->phoneBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phoneBox->Location = System::Drawing::Point(260, 185);
			this->phoneBox->Name = L"phoneBox";
			this->phoneBox->Size = System::Drawing::Size(539, 61);
			this->phoneBox->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label7->Location = System::Drawing::Point(23, 192);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(170, 89);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Phone";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::IndianRed;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Tomato;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightCoral;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Location = System::Drawing::Point(397, 259);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(194, 60);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label6->Location = System::Drawing::Point(23, 106);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 89);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Gender";
			// 
			// genderBox
			// 
			this->genderBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genderBox->FormattingEnabled = true;
			this->genderBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Female", L"Male", L"Others" });
			this->genderBox->Location = System::Drawing::Point(260, 103);
			this->genderBox->Name = L"genderBox";
			this->genderBox->Size = System::Drawing::Size(539, 62);
			this->genderBox->TabIndex = 12;
			// 
			// nameBox
			// 
			this->nameBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameBox->Location = System::Drawing::Point(260, 20);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(539, 61);
			this->nameBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label1->Location = System::Drawing::Point(23, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 89);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// editPnl
			// 
			this->editPnl->BackColor = System::Drawing::Color::NavajoWhite;
			this->editPnl->Controls->Add(this->deletebtn);
			this->editPnl->Controls->Add(this->deleteInput);
			this->editPnl->Controls->Add(this->label21);
			this->editPnl->Controls->Add(this->inputData4);
			this->editPnl->Controls->Add(this->label19);
			this->editPnl->Controls->Add(this->update);
			this->editPnl->Controls->Add(this->bindingNavigator1);
			this->editPnl->Controls->Add(this->inputData3);
			this->editPnl->Controls->Add(this->inputData2);
			this->editPnl->Controls->Add(this->label18);
			this->editPnl->Controls->Add(this->label17);
			this->editPnl->Controls->Add(this->label16);
			this->editPnl->Controls->Add(this->addDataBtn);
			this->editPnl->Controls->Add(this->inputData1);
			this->editPnl->Controls->Add(this->dataGridView1);
			this->editPnl->Dock = System::Windows::Forms::DockStyle::Right;
			this->editPnl->Location = System::Drawing::Point(207, 0);
			this->editPnl->Name = L"editPnl";
			this->editPnl->Size = System::Drawing::Size(1333, 830);
			this->editPnl->TabIndex = 16;
			this->editPnl->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::editPnl_Paint);
			// 
			// deletebtn
			// 
			this->deletebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->deletebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->deletebtn->FlatAppearance->BorderSize = 3;
			this->deletebtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->deletebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deletebtn->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletebtn->ForeColor = System::Drawing::Color::Snow;
			this->deletebtn->Location = System::Drawing::Point(991, 644);
			this->deletebtn->Name = L"deletebtn";
			this->deletebtn->Size = System::Drawing::Size(104, 49);
			this->deletebtn->TabIndex = 24;
			this->deletebtn->Text = L"Delete";
			this->deletebtn->UseVisualStyleBackColor = false;
			this->deletebtn->Click += gcnew System::EventHandler(this, &MyForm2::deletebtn_Click);
			// 
			// deleteInput
			// 
			this->deleteInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteInput->Location = System::Drawing::Point(919, 581);
			this->deleteInput->Name = L"deleteInput";
			this->deleteInput->Size = System::Drawing::Size(239, 34);
			this->deleteInput->TabIndex = 23;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label21->Location = System::Drawing::Point(787, 581);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(90, 38);
			this->label21->TabIndex = 22;
			this->label21->Text = L"Enter ID";
			// 
			// inputData4
			// 
			this->inputData4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputData4->Location = System::Drawing::Point(923, 287);
			this->inputData4->Name = L"inputData4";
			this->inputData4->Size = System::Drawing::Size(239, 34);
			this->inputData4->TabIndex = 20;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label19->Location = System::Drawing::Point(786, 289);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(96, 38);
			this->label19->TabIndex = 19;
			this->label19->Text = L"Item\'s ID";
			// 
			// update
			// 
			this->update->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->update->Cursor = System::Windows::Forms::Cursors::Hand;
			this->update->FlatAppearance->BorderSize = 3;
			this->update->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->update->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->ForeColor = System::Drawing::Color::Snow;
			this->update->Location = System::Drawing::Point(923, 504);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(104, 46);
			this->update->TabIndex = 18;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = false;
			this->update->Click += gcnew System::EventHandler(this, &MyForm2::update_Click);
			// 
			// bindingNavigator1
			// 
			this->bindingNavigator1->AddNewItem = this->bindingNavigatorAddNewItem;
			this->bindingNavigator1->CountItem = this->bindingNavigatorCountItem;
			this->bindingNavigator1->DeleteItem = this->bindingNavigatorDeleteItem;
			this->bindingNavigator1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->bindingNavigatorMoveFirstItem,
					this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem,
					this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2,
					this->bindingNavigatorAddNewItem, this->bindingNavigatorDeleteItem
			});
			this->bindingNavigator1->Location = System::Drawing::Point(0, 0);
			this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
			this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
			this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
			this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
			this->bindingNavigator1->Size = System::Drawing::Size(1333, 27);
			this->bindingNavigator1->TabIndex = 9;
			this->bindingNavigator1->Text = L"bindingNavigator1";
			this->bindingNavigator1->RefreshItems += gcnew System::EventHandler(this, &MyForm2::bindingNavigator1_RefreshItems);
			// 
			// bindingNavigatorAddNewItem
			// 
			this->bindingNavigatorAddNewItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorAddNewItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorAddNewItem.Image")));
			this->bindingNavigatorAddNewItem->Name = L"bindingNavigatorAddNewItem";
			this->bindingNavigatorAddNewItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorAddNewItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorAddNewItem->Text = L"Add new";
			// 
			// bindingNavigatorCountItem
			// 
			this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
			this->bindingNavigatorCountItem->Size = System::Drawing::Size(45, 24);
			this->bindingNavigatorCountItem->Text = L"of {0}";
			this->bindingNavigatorCountItem->ToolTipText = L"Total number of items";
			// 
			// bindingNavigatorDeleteItem
			// 
			this->bindingNavigatorDeleteItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorDeleteItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorDeleteItem.Image")));
			this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
			this->bindingNavigatorDeleteItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorDeleteItem->Text = L"Delete";
			// 
			// bindingNavigatorMoveFirstItem
			// 
			this->bindingNavigatorMoveFirstItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveFirstItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveFirstItem.Image")));
			this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
			this->bindingNavigatorMoveFirstItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorMoveFirstItem->Text = L"Move first";
			// 
			// bindingNavigatorMovePreviousItem
			// 
			this->bindingNavigatorMovePreviousItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMovePreviousItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMovePreviousItem.Image")));
			this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
			this->bindingNavigatorMovePreviousItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorMovePreviousItem->Text = L"Move previous";
			// 
			// bindingNavigatorSeparator
			// 
			this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
			this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// bindingNavigatorPositionItem
			// 
			this->bindingNavigatorPositionItem->AccessibleName = L"Position";
			this->bindingNavigatorPositionItem->AutoSize = false;
			this->bindingNavigatorPositionItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
			this->bindingNavigatorPositionItem->Size = System::Drawing::Size(50, 27);
			this->bindingNavigatorPositionItem->Text = L"0";
			this->bindingNavigatorPositionItem->ToolTipText = L"Current position";
			// 
			// bindingNavigatorSeparator1
			// 
			this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator1";
			this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 27);
			// 
			// bindingNavigatorMoveNextItem
			// 
			this->bindingNavigatorMoveNextItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveNextItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveNextItem.Image")));
			this->bindingNavigatorMoveNextItem->Name = L"bindingNavigatorMoveNextItem";
			this->bindingNavigatorMoveNextItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveNextItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorMoveNextItem->Text = L"Move next";
			// 
			// bindingNavigatorMoveLastItem
			// 
			this->bindingNavigatorMoveLastItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveLastItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveLastItem.Image")));
			this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
			this->bindingNavigatorMoveLastItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorMoveLastItem->Text = L"Move last";
			// 
			// bindingNavigatorSeparator2
			// 
			this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator2";
			this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 27);
			// 
			// inputData3
			// 
			this->inputData3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputData3->Location = System::Drawing::Point(923, 444);
			this->inputData3->Name = L"inputData3";
			this->inputData3->Size = System::Drawing::Size(239, 34);
			this->inputData3->TabIndex = 8;
			// 
			// inputData2
			// 
			this->inputData2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputData2->Location = System::Drawing::Point(923, 392);
			this->inputData2->Name = L"inputData2";
			this->inputData2->Size = System::Drawing::Size(239, 34);
			this->inputData2->TabIndex = 7;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label18->Location = System::Drawing::Point(787, 442);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(117, 38);
			this->label18->TabIndex = 6;
			this->label18->Text = L"Large Price";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label17->Location = System::Drawing::Point(786, 392);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(115, 38);
			this->label17->TabIndex = 5;
			this->label17->Text = L"Small Price";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label16->Location = System::Drawing::Point(787, 342);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(114, 38);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Item name";
			// 
			// addDataBtn
			// 
			this->addDataBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->addDataBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addDataBtn->FlatAppearance->BorderSize = 3;
			this->addDataBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->addDataBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addDataBtn->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addDataBtn->ForeColor = System::Drawing::Color::Snow;
			this->addDataBtn->Location = System::Drawing::Point(1069, 504);
			this->addDataBtn->Name = L"addDataBtn";
			this->addDataBtn->Size = System::Drawing::Size(89, 46);
			this->addDataBtn->TabIndex = 3;
			this->addDataBtn->Text = L"Add";
			this->addDataBtn->UseVisualStyleBackColor = false;
			this->addDataBtn->Click += gcnew System::EventHandler(this, &MyForm2::addDataBtn_Click);
			// 
			// inputData1
			// 
			this->inputData1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputData1->Location = System::Drawing::Point(923, 340);
			this->inputData1->Name = L"inputData1";
			this->inputData1->Size = System::Drawing::Size(239, 34);
			this->inputData1->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PapayaWhip;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(64, 214);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(623, 465);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::dataGridView1_CellContentClick);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label23->Location = System::Drawing::Point(431, 40);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(467, 89);
			this->label23->TabIndex = 19;
			this->label23->Text = L"Admin  Management";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::PapayaWhip;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->ColumnHeadersHeight = 34;
			this->dataGridView2->Location = System::Drawing::Point(257, 172);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(868, 283);
			this->dataGridView2->TabIndex = 17;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::dataGridView2_CellContentClick);
			// 
			// warning2
			// 
			this->warning2->AutoSize = true;
			this->warning2->ForeColor = System::Drawing::Color::Firebrick;
			this->warning2->Location = System::Drawing::Point(729, 234);
			this->warning2->Name = L"warning2";
			this->warning2->Size = System::Drawing::Size(0, 16);
			this->warning2->TabIndex = 12;
			// 
			// warning1
			// 
			this->warning1->AutoSize = true;
			this->warning1->ForeColor = System::Drawing::Color::Firebrick;
			this->warning1->Location = System::Drawing::Point(407, 234);
			this->warning1->Name = L"warning1";
			this->warning1->Size = System::Drawing::Size(0, 16);
			this->warning1->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(656, 462);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(10, 16);
			this->label13->TabIndex = 14;
			this->label13->Text = L" ";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm2::label13_Click);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->dateTimePicker1);
			this->panel3->Controls->Add(this->staffName);
			this->panel3->Controls->Add(this->panel9);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Location = System::Drawing::Point(0, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(202, 844);
			this->panel3->TabIndex = 15;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::panel3_Paint);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->panel6->Controls->Add(this->pictureBox2);
			this->panel6->Location = System::Drawing::Point(1, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(200, 162);
			this->panel6->TabIndex = 20;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-7, -4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(207, 197);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label22->Location = System::Drawing::Point(61, 277);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(46, 22);
			this->label22->TabIndex = 25;
			this->label22->Text = L"xxxx";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label15->Location = System::Drawing::Point(7, 277);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 22);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Time:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label14->Location = System::Drawing::Point(7, 233);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 22);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Date:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(65, 233);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(111, 22);
			this->dateTimePicker1->TabIndex = 19;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->pictureBox3);
			this->panel9->Controls->Add(this->closeBtn);
			this->panel9->Location = System::Drawing::Point(0, 769);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(200, 59);
			this->panel9->TabIndex = 19;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(59, 59);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 26;
			this->pictureBox3->TabStop = false;
			// 
			// closeBtn
			// 
			this->closeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeBtn->FlatAppearance->BorderSize = 0;
			this->closeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->closeBtn->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->closeBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->closeBtn->Location = System::Drawing::Point(4, 0);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(196, 56);
			this->closeBtn->TabIndex = 16;
			this->closeBtn->Text = L"      Close";
			this->closeBtn->UseVisualStyleBackColor = true;
			this->closeBtn->Click += gcnew System::EventHandler(this, &MyForm2::closeBtn_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Controls->Add(this->editBtn);
			this->panel4->Location = System::Drawing::Point(1, 384);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 59);
			this->panel4->TabIndex = 16;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(61, 60);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// editBtn
			// 
			this->editBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->editBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editBtn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLight;
			this->editBtn->FlatAppearance->BorderSize = 0;
			this->editBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->editBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Khmer Sharp", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->editBtn->Location = System::Drawing::Point(0, 0);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(199, 60);
			this->editBtn->TabIndex = 16;
			this->editBtn->Text = L"      Edit";
			this->editBtn->UseVisualStyleBackColor = false;
			this->editBtn->Click += gcnew System::EventHandler(this, &MyForm2::editBtn_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm2::timer1_Tick);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->panel5->Controls->Add(this->panel7);
			this->panel5->Controls->Add(this->label23);
			this->panel5->Controls->Add(this->pictureBox4);
			this->panel5->Location = System::Drawing::Point(200, 1);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1340, 165);
			this->panel5->TabIndex = 19;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->pictureBox6);
			this->panel7->Controls->Add(this->button1);
			this->panel7->Location = System::Drawing::Point(1241, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(99, 41);
			this->panel7->TabIndex = 21;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(0, -2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(46, 43);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 22;
			this->pictureBox6->TabStop = false;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button1->Location = System::Drawing::Point(45, -1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(54, 41);
			this->button1->TabIndex = 20;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(404, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(505, 163);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 19;
			this->pictureBox4->TabStop = false;
			// 
			// MyForm2
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1540, 830);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->editPnl);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->warning1);
			this->Controls->Add(this->warning2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->dataGridView2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->Text = L"AdminSystem";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->editPnl->ResumeLayout(false);
			this->editPnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		discountBox->SelectedText = "0";
		label23->Hide();
		timer1->Start();
		SqlConnection^ sqlCon = gcnew SqlConnection(connString);
		sqlCon->Open();
		SqlDataAdapter^ sqlDa = gcnew SqlDataAdapter("SELECT Name,Small,Large FROM items", sqlCon);
		SqlDataAdapter^ sqlDa1 = gcnew SqlDataAdapter("SELECT * FROM items", sqlCon);
		DataTable^ dtble = gcnew DataTable();
		DataTable^ dtble1 = gcnew DataTable();
		sqlDa->Fill(dtble);
		sqlDa1->Fill(dtble1);
		dataGridView1->DataSource = dtble1;
		dataGridView2->DataSource = dtble;
		sqlCon->Close();
		
		DataGridViewComboBoxColumn^ combobox = gcnew DataGridViewComboBoxColumn;
		combobox->HeaderText = "Size";
		combobox->Width = 100;
		combobox->Name = "Size";
		ArrayList^ row = gcnew ArrayList();
		row->Add("Small");
		row->Add("Large");
		combobox->Items->AddRange(row->ToArray());
		dataGridView2->Columns->Add(combobox);

		DataGridViewTextBoxColumn^ textbox = gcnew DataGridViewTextBoxColumn;
		textbox->HeaderText = "Quantity";
		textbox->Width = 100;
		textbox->Name = "Quantity";
		dataGridView2->Columns->Add(textbox);

		DataGridViewButtonColumn^ buttoncolumn = gcnew DataGridViewButtonColumn;
		//dataGridView1->Columns->Insert(5, buttoncolumn);
		buttoncolumn->HeaderText = "Add";
		buttoncolumn->Width = 100;
		buttoncolumn->Text = "Add to Cart";
		dataGridView2->Columns->Add(buttoncolumn);
		buttoncolumn->UseColumnTextForButtonValue = true;
		
		DataGridViewButtonColumn^ buttoncolumn2 = gcnew DataGridViewButtonColumn;
		//dataGridView1->Columns->Insert(5, buttoncolumn);
		buttoncolumn2->HeaderText = "Select";
		buttoncolumn2->Width = 100;
		buttoncolumn2->Text = "Select";
		dataGridView1->Columns->Add(buttoncolumn2);
		buttoncolumn2->UseColumnTextForButtonValue = true;
	}
	private: System::Void Qty_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
	
}



private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	totalBox->Clear();
	total = 0;
}


	

private: System::Void Pay_Click(System::Object^ sender, System::EventArgs^ e) {

	
	String^ totalCart = System::Convert::ToString(total);
	String^ name = nameBox->Text;
	String^ gender = genderBox->Text;
	String^ phone = phoneBox->Text;
	if (name->Length != 0 && gender->Length != 0) {

		String^ connString = "Data Source=DESKTOP-AMR7CFJ;Initial Catalog=admin;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO customer" +
			"(Name, Gender, Phone, Total)VALUES" +
			"(@name, @gender, @phone, @total);";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@total", totalCart);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@gender", gender);
		command.Parameters->AddWithValue("@phone", phone);

		command.ExecuteNonQuery();
		sqlConn.Close();

		condition = 1;

		genderWarning->Text = "";
		nameWarning->Text = "";
		nameBox->Clear();
		genderBox->SelectedIndex=-1;
		phoneBox->Clear();
		//listBox1->Items->Clear();
		//totalBox->Clear();
		total = 0;
		MessageBox::Show("        You've successfully paid       ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		if (name->Length == 0) {
			nameWarning->Text="*Enter name";
		}
		if (gender->Length == 0) {
			genderWarning->Text = "*Enter gender";
		}
	}
	
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
	

}

private: System::Void removeCarts_Click(System::Object^ sender, System::EventArgs^ e) {
	//label22->Text = System::Convert::ToString(listBox1->SelectedItem);
	if (listBox1->SelectedIndex != -1) {
		
		listBox1->Items->RemoveAt(listBox1->SelectedIndex);
	}
	
	
	total = 0;
	for (int i = 0; i < listBox1->Items->Count; i++)
	{
		String^ item = listBox1->Items[i]->ToString();
		//String^ itemQty = listBox1->Items[i]->ToString();
		if (item->Contains("Small")){
			int priceindex = item->LastIndexOf("$") + 1;
			String^ PriceString = item->Substring(priceindex);
			
			int qtyindex = item->LastIndexOf("Small") + 5;
			String^ QtyString = item->Substring(qtyindex);
			
			
			QtyString = QtyString->Remove(2);
			
			double price = 0;
			double quantity = 0;
			double totalprice = 0;
			if (Double::TryParse(PriceString, price)) {
				Double::TryParse(QtyString, quantity);

				// Add the price to the total
				totalprice = price * quantity;
				total += totalprice;
			}
			
		}
		else if  (item->Contains("Large")) {
			int priceindex = item->LastIndexOf("$") + 1;
			String^ PriceString = item->Substring(priceindex);

			int qtyindex = item->LastIndexOf("Large") + 5;
			String^ QtyString = item->Substring(qtyindex);

		
			QtyString = QtyString->Remove(2);
		
			double price = 0;
			double quantity = 0;
			double totalprice = 0;
			if (Double::TryParse(PriceString, price)) {
				Double::TryParse(QtyString, quantity);

				// Add the price to the total
				totalprice = price * quantity;
				total += totalprice;
			}

		}
		
		/*else if (item->Contains("Small") && item->Contains("$1.75") == 1) {
			int priceindex = item->LastIndexOf("$") + 1;
			String^ PriceString = item->Substring(priceindex);
			int qtyindex = item->LastIndexOf("Small") + 5;
			String^ QtyString = item->Substring(qtyindex);
			QtyString = QtyString->Replace("$1.75", "");
			double price = 0;
			double quantity = 0;
			double totalprice = 0;
			if (Double::TryParse(PriceString, price)) {
				Double::TryParse(QtyString, quantity);

				// Add the price to the total
				totalprice = price * quantity;
				total += totalprice;
			}
		}
		else if (item->Contains("Small") && item->Contains("$2.25") == 1) {
			int priceindex = item->LastIndexOf("$") + 1;
			String^ PriceString = item->Substring(priceindex);
			int qtyindex = item->LastIndexOf("Small") + 5;
			String^ QtyString = item->Substring(qtyindex);
			QtyString = QtyString->Replace("$2.25", "");
			double price = 0;
			double quantity = 0;
			double totalprice = 0;
			if (Double::TryParse(PriceString, price)) {
				Double::TryParse(QtyString, quantity);

				// Add the price to the total
				totalprice = price * quantity;
				total += totalprice;
			}
		}
		else if (item->Contains("Large") && item->Contains("$2.50") == 1) {
			int priceindex = item->LastIndexOf("$") + 1;
			String^ PriceString = item->Substring(priceindex);
			int qtyindex = item->LastIndexOf("Large") + 5;
			String^ QtyString = item->Substring(qtyindex);
			QtyString = QtyString->Replace("$2.50", "");
			double price = 0;
			double quantity = 0;
			double totalprice = 0;
			if (Double::TryParse(PriceString, price)) {
				Double::TryParse(QtyString, quantity);

				// Add the price to the total
				totalprice = price * quantity;
				total += totalprice;
			}
		}*/
		
	}
	
	
	totalBox->Text = System::Convert::ToString(total);
	double pay = System::Convert::ToDouble(totalBox->Text);
	if (System::Convert::ToInt16(discountBox->Text) != 0 || System::Convert::ToInt16(discountBox->Text) != 100) {
		double discount = pay - ((System::Convert::ToDouble(discountBox->Text) * pay) / 100);

		payBox->Text = System::Convert::ToString(discount);
	}
	else if (System::Convert::ToInt16(discountBox->Text) == 100) {
		payBox->Text = "0";
	}
	else {
		double discount = System::Convert::ToDouble(discountBox->Text) + pay;
		payBox->Text = System::Convert::ToString(discount);
	}
}
private: System::Void Receipt_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (condition == 1) {
		saveFileDialog1->Filter = "Text Files (*.txt)|*.txt";
		saveFileDialog1->ShowDialog();
		String^ filename = saveFileDialog1->FileName;
		System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter(filename);

		file->WriteLine("---------------------------------------\n");
		file->WriteLine("              Inukofè                  \n");
		file->WriteLine("---------------------------------------\n");
		file->WriteLine("Staff: " + staffName->Text + "\n");
		file->WriteLine("Date: "+ dateTimePicker1->Value.ToString("dd-mm-yyyy")+"\n");
		file->WriteLine("***************************************\n");
		file->WriteLine(" Description    Size   Qty      Amount\n");
		file->WriteLine("***************************************\n");
		for (int i = 0; i < listBox1->Items->Count; i++) {
			file->WriteLine((String^)listBox1->Items[i]);
		}
		file->WriteLine("\n");
		file->WriteLine("\n");
		file->WriteLine("***************************************\n");
		file->WriteLine(" Total:  $" + totalBox->Text + "\n");
		file->WriteLine("Discount:" + discountBox->Text+ "%"+"\n");
		file->WriteLine("Pay:  $" + payBox->Text + "\n");
		file->WriteLine("***************************************\n");
		//file->WriteLine("This is a test");
		listBox1->Items->Clear();
		file->Close();
		totalBox->Clear();
		discountBox->SelectedIndex=-1;
		payBox->Clear();
	}
	else{ MessageBox::Show("        You need to Pay       ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }



}
private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
	/*panel3->Hide();*/
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	nameBox->Clear();
	phoneBox->Clear();
	genderBox->SelectedIndex = -1;
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	editPnl->Show();
	dataGridView2->Hide();
	//label20->Hide();
	pictureBox4->Hide();
	label23->Show();
}
private: System::Void closeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (editPnl->Visible) {
		editPnl->Hide();
		dataGridView2->Show();
		label23->Hide();
		pictureBox4->Show();
		//label20->Show();
	}
}
private: System::Void loadBtn_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void addDataBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//String^ connString = "Data Source=DESKTOP-AMR7CFJ;Initial Catalog=admin;Integrated Security=True";
	String^ Name= inputData1->Text;
	double PSmall = System::Convert::ToDouble(inputData2->Text);
	double PLarge = System::Convert::ToDouble(inputData3->Text);
	int Identification = System::Convert::ToInt16(inputData4->Text);

	SqlConnection sqlConn(connString);
	sqlConn.Open();
	
	String^ sqlQuery = "INSERT INTO items" +
		"(Name, Small, Large, Id)VALUES" +
		"(@name, @psmall, @plarge, @identif);";
	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@name", Name);
	command.Parameters->AddWithValue("@psmall", PSmall);
	command.Parameters->AddWithValue("@plarge", PLarge);
	command.Parameters->AddWithValue("@identif", Identification);

	
	command.ExecuteNonQuery();

	SqlConnection^ sqlCon = gcnew SqlConnection(connString);
	sqlCon->Open();

	SqlDataAdapter^ sqlDa = gcnew SqlDataAdapter("SELECT Name,Small,Large FROM items", sqlCon);
	SqlDataAdapter^ sqlDa1 = gcnew SqlDataAdapter("SELECT * FROM items", sqlCon);
	DataTable^ dtble = gcnew DataTable();
	DataTable^ dtble1 = gcnew DataTable();
	sqlDa->Fill(dtble);
	sqlDa1->Fill(dtble1);
	dataGridView1->DataSource = dtble1;
	dataGridView2->DataSource = dtble;

	/*SqlDataAdapter^ sqlDa = gcnew SqlDataAdapter("SELECT * FROM items", sqlCon);
	DataTable^ dtble = gcnew DataTable();
	sqlDa->Fill(dtble);
	dataGridView1->DataSource = dtble;
	dataGridView2->DataSource = dtble;*/
	dataGridView2->Update();
	dataGridView2->Refresh();



	sqlConn.Close();

	inputData1->Clear();
	inputData2->Clear();
	inputData3->Clear();
}
private: System::Void bindingNavigator1_RefreshItems(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	if (dataGridView1->SelectedCells->Count > 0) {
		String^ Value1 = dataGridView1->Rows[e->RowIndex]->Cells["Name"]->Value->ToString();
		String^ Value2=dataGridView1->Rows[e->RowIndex]->Cells["Small"]->Value->ToString();
		String^ Value3 = dataGridView1->Rows[e->RowIndex]->Cells["Large"]->Value->ToString();
		String^ Value4 = dataGridView1->Rows[e->RowIndex]->Cells["Id"]->Value->ToString();
		inputData1->Text = Value1;
		inputData2->Text = Value2;
		inputData3->Text = Value3;
		inputData4->Text = Value4;
	}
	
	
	
	
}
private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	sqlConn->Open();
	SqlCommand^ cmd = gcnew SqlCommand("UPDATE items SET Name=@name, Small=@small, Large=@large WHERE Id=@id", sqlConn);
	cmd->Parameters->AddWithValue("@name", inputData1->Text);
	cmd->Parameters->AddWithValue("@small", System::Convert::ToDouble(inputData2->Text));
	cmd->Parameters->AddWithValue("@large", System::Convert::ToDouble(inputData3->Text));
	cmd->Parameters->AddWithValue("@id", System::Convert::ToInt16(inputData4->Text));

	cmd->ExecuteNonQuery();

	SqlConnection^ sqlCon = gcnew SqlConnection(connString);
	sqlCon->Open();

	SqlDataAdapter^ sqlDa = gcnew SqlDataAdapter("SELECT Name,Small,Large FROM items", sqlCon);
	SqlDataAdapter^ sqlDa1 = gcnew SqlDataAdapter("SELECT * FROM items", sqlCon);
	DataTable^ dtble = gcnew DataTable();
	DataTable^ dtble1 = gcnew DataTable();
	sqlDa->Fill(dtble);
	sqlDa1->Fill(dtble1);
	dataGridView1->DataSource = dtble1;
	dataGridView2->DataSource = dtble;

	/*SqlDataAdapter^ sqlDa = gcnew SqlDataAdapter("SELECT * FROM items", sqlCon);
	DataTable^ dtble = gcnew DataTable();
	sqlDa->Fill(dtble);
	dataGridView1->DataSource = dtble;
	dataGridView2->DataSource = dtble;*/
	dataGridView2->Update();
	dataGridView2->Refresh();
	sqlCon->Close();

	MessageBox::Show("Successfully Updated");

	inputData1->Clear();
	inputData2->Clear();
	inputData3->Clear();
	inputData4->Clear();	

}
private: System::Void deletebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	sqlConn->Open();
	SqlCommand^ cmd = gcnew SqlCommand("DELETE items WHERE Id=@id", sqlConn);
	cmd->Parameters->AddWithValue("@id", deleteInput->Text);

	cmd->ExecuteNonQuery();

	SqlConnection^ sqlCon = gcnew SqlConnection(connString);
	sqlCon->Open();

	SqlDataAdapter^ sqlDa = gcnew SqlDataAdapter("SELECT Name,Small,Large FROM items", sqlCon);
	SqlDataAdapter^ sqlDa1 = gcnew SqlDataAdapter("SELECT * FROM items", sqlCon);
	DataTable^ dtble = gcnew DataTable();
	DataTable^ dtble1 = gcnew DataTable();
	sqlDa->Fill(dtble);
	sqlDa1->Fill(dtble1);
	dataGridView1->DataSource = dtble1;
	dataGridView2->DataSource = dtble;

	/*SqlDataAdapter^ sqlDa = gcnew SqlDataAdapter("SELECT * FROM items", sqlCon);
	DataTable^ dtble = gcnew DataTable();
	sqlDa->Fill(dtble);
	dataGridView1->DataSource = dtble;
	dataGridView2->DataSource = dtble;*/
	sqlCon->Close();

	MessageBox::Show("Successfully Deleted");
	deleteInput->Clear();
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int rowindex = dataGridView2->CurrentCell->RowIndex;
	String^ name = dataGridView2->Rows[rowindex]->Cells["Name"]->Value->ToString();
	String^ qty = System::Convert::ToString(dataGridView2->Rows[rowindex]->Cells["Quantity"]->Value);
	String^ size = System::Convert::ToString(dataGridView2->Rows[rowindex]->Cells["Size"]->Value);
	
	int qty2 = 0;
	if (!size->IsNullOrEmpty(size)) {
		if (int::TryParse(qty, qty2) && !qty->IsNullOrEmpty(qty)) {
			if (size == "Small") {
				String^ price = dataGridView2->Rows[rowindex]->Cells["Small"]->Value->ToString();
				double total1 = System::Convert::ToDouble(price) * System::Convert::ToDouble(qty2);
				total = total1 + total;
				listBox1->Items->Add("  " + name + "\t" + size + "\t" + qty2 + "\t" + "$" + price/*System::Convert::ToString(total1)*/);
				totalBox->Text = System::Convert::ToString(total);
				//payBox->Text = totalBox->Text;
				double pay = System::Convert::ToDouble(totalBox->Text);
				if (System::Convert::ToInt16(discountBox->Text) != 0 || System::Convert::ToInt16(discountBox->Text) != 100) {
					double discount = pay - ((System::Convert::ToDouble(discountBox->Text) * pay) / 100);

					payBox->Text = System::Convert::ToString(discount);
				}
				else if (System::Convert::ToInt16(discountBox->Text) == 100) {
					payBox->Text = "0";
				}
				else {
					double discount = System::Convert::ToDouble(discountBox->Text) + pay;
					payBox->Text = System::Convert::ToString(discount);
				}
			}
			else if (size == "Large") {
				String^ price = dataGridView2->Rows[rowindex]->Cells["Large"]->Value->ToString();
				double total2 = System::Convert::ToDouble(price) * System::Convert::ToDouble(qty2);
				total = total2 + total;
				listBox1->Items->Add("  " + name + "\t" + size + "\t" + qty2 + "\t" + "$" + price);
				totalBox->Text = System::Convert::ToString(total);
				//payBox->Text = totalBox -> Text;
				double pay = System::Convert::ToDouble(totalBox->Text);
				if (System::Convert::ToInt16(discountBox->Text) != 0 || System::Convert::ToInt16(discountBox->Text) != 100) {
					double discount = pay - ((System::Convert::ToDouble(discountBox->Text) * pay) / 100);

					payBox->Text = System::Convert::ToString(discount);
				}
				else if (System::Convert::ToInt16(discountBox->Text) == 100) {
					payBox->Text = "0";
				}
				else {
					double discount = System::Convert::ToDouble(discountBox->Text) + pay;
					payBox->Text = System::Convert::ToString(discount);
				}
			}
		}
		else { MessageBox::Show("Please Enter an integer", "Error"); }
	}
	else { MessageBox::Show("Please Select Size", "Error"); }
	;
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	label22->Text = (System::Convert::ToString(DateTime::Now))->Remove(0, 10);
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void discountBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	double pay = System::Convert::ToDouble(totalBox->Text);
	if (System::Convert::ToInt16(discountBox->Text) != 0 || System::Convert::ToInt16(discountBox->Text) != 100)  {
		double discount = pay - ((System::Convert::ToDouble(discountBox->Text) * pay) / 100);
		
		payBox->Text = System::Convert::ToString(discount);
	}
	else if (System::Convert::ToInt16(discountBox->Text) == 100) {
		payBox->Text="0";
	}
	else {
		double discount = System::Convert::ToDouble(discountBox->Text) + pay;
		payBox->Text = System::Convert::ToString(discount);
	}
}
private: System::Void editPnl_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}

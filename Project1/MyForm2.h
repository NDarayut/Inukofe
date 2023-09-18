#pragma once
#include <ctype.h>
#include <iostream>
#include <string>



namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		//calculation
		double total = 0;
		//items
		double cappucino = 0;
		double latte = 0;
		//cost
		double Cappucinocost = 0;
		double Lattecost = 0;
		//size
		String^ cappucinosize;
		String^ lattesize;

	private: System::Windows::Forms::TextBox^ totalBox;
	private: System::Windows::Forms::RichTextBox^ Cart;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ Receipt;
	private: System::Windows::Forms::Button^ CappucinoL;
	private: System::Windows::Forms::Button^ CappucinoS;
	private: System::Windows::Forms::Label^ SizeCappu;
	private: System::Windows::Forms::Button^ LatteL;
	private: System::Windows::Forms::Button^ LatteS;
	private: System::Windows::Forms::Label^ SizeLatte;
	private: System::Windows::Forms::Button^ Pay;
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;



















	private: System::Windows::Forms::Button^ Reset;

		   
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ addCart1;
	protected:

	private: System::Windows::Forms::TextBox^ Qty;
	protected:



	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::PictureBox^ cappucinoImg;






	private: System::Windows::Forms::Panel^ Cappucino;
	private: System::Windows::Forms::Label^ Cappucinocst;

	private: System::Windows::Forms::Label^ Cappucinolbl;

	private: System::Windows::Forms::Button^ Remove;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Panel^ Latte;
	private: System::Windows::Forms::Label^ Lattecst;


	private: System::Windows::Forms::Label^ Lattelbl;

	private: System::Windows::Forms::Button^ Remove2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ Qty2;

	private: System::Windows::Forms::Button^ Add2;
	private: System::Windows::Forms::Button^ addCart2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->addCart1 = (gcnew System::Windows::Forms::Button());
			this->Qty = (gcnew System::Windows::Forms::TextBox());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->cappucinoImg = (gcnew System::Windows::Forms::PictureBox());
			this->Cappucino = (gcnew System::Windows::Forms::Panel());
			this->CappucinoL = (gcnew System::Windows::Forms::Button());
			this->CappucinoS = (gcnew System::Windows::Forms::Button());
			this->SizeCappu = (gcnew System::Windows::Forms::Label());
			this->Remove = (gcnew System::Windows::Forms::Button());
			this->Cappucinocst = (gcnew System::Windows::Forms::Label());
			this->Cappucinolbl = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Receipt = (gcnew System::Windows::Forms::Button());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Cart = (gcnew System::Windows::Forms::RichTextBox());
			this->totalBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Latte = (gcnew System::Windows::Forms::Panel());
			this->LatteL = (gcnew System::Windows::Forms::Button());
			this->LatteS = (gcnew System::Windows::Forms::Button());
			this->SizeLatte = (gcnew System::Windows::Forms::Label());
			this->Lattecst = (gcnew System::Windows::Forms::Label());
			this->Lattelbl = (gcnew System::Windows::Forms::Label());
			this->Remove2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Qty2 = (gcnew System::Windows::Forms::TextBox());
			this->Add2 = (gcnew System::Windows::Forms::Button());
			this->addCart2 = (gcnew System::Windows::Forms::Button());
			this->Pay = (gcnew System::Windows::Forms::Button());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cappucinoImg))->BeginInit();
			this->Cappucino->SuspendLayout();
			this->panel1->SuspendLayout();
			this->Latte->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// addCart1
			// 
			this->addCart1->BackColor = System::Drawing::Color::Gainsboro;
			this->addCart1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->addCart1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->addCart1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->addCart1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addCart1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addCart1->ForeColor = System::Drawing::Color::Black;
			this->addCart1->Location = System::Drawing::Point(114, 143);
			this->addCart1->Name = L"addCart1";
			this->addCart1->Size = System::Drawing::Size(165, 28);
			this->addCart1->TabIndex = 1;
			this->addCart1->Text = L"Add to Cart";
			this->addCart1->UseVisualStyleBackColor = false;
			this->addCart1->Click += gcnew System::EventHandler(this, &MyForm2::addCart1_Click);
			// 
			// Qty
			// 
			this->Qty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Qty->Location = System::Drawing::Point(40, 149);
			this->Qty->Name = L"Qty";
			this->Qty->ReadOnly = true;
			this->Qty->Size = System::Drawing::Size(29, 22);
			this->Qty->TabIndex = 2;
			this->Qty->Text = L"1";
			this->Qty->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Qty->TextChanged += gcnew System::EventHandler(this, &MyForm2::Qty_TextChanged);
			// 
			// Add
			// 
			this->Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add->Location = System::Drawing::Point(75, 149);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(21, 22);
			this->Add->TabIndex = 3;
			this->Add->Text = L"+";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &MyForm2::Add_Click);
			// 
			// cappucinoImg
			// 
			this->cappucinoImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cappucinoImg.BackgroundImage")));
			this->cappucinoImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cappucinoImg->Location = System::Drawing::Point(13, 18);
			this->cappucinoImg->Name = L"cappucinoImg";
			this->cappucinoImg->Size = System::Drawing::Size(91, 125);
			this->cappucinoImg->TabIndex = 0;
			this->cappucinoImg->TabStop = false;
			this->cappucinoImg->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox1_Click);
			// 
			// Cappucino
			// 
			this->Cappucino->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cappucino->Controls->Add(this->CappucinoL);
			this->Cappucino->Controls->Add(this->CappucinoS);
			this->Cappucino->Controls->Add(this->SizeCappu);
			this->Cappucino->Controls->Add(this->Remove);
			this->Cappucino->Controls->Add(this->Cappucinocst);
			this->Cappucino->Controls->Add(this->Add);
			this->Cappucino->Controls->Add(this->Cappucinolbl);
			this->Cappucino->Controls->Add(this->cappucinoImg);
			this->Cappucino->Controls->Add(this->Qty);
			this->Cappucino->Controls->Add(this->addCart1);
			this->Cappucino->Location = System::Drawing::Point(57, 44);
			this->Cappucino->Name = L"Cappucino";
			this->Cappucino->Size = System::Drawing::Size(290, 186);
			this->Cappucino->TabIndex = 8;
			// 
			// CappucinoL
			// 
			this->CappucinoL->Location = System::Drawing::Point(213, 112);
			this->CappucinoL->Name = L"CappucinoL";
			this->CappucinoL->Size = System::Drawing::Size(66, 23);
			this->CappucinoL->TabIndex = 11;
			this->CappucinoL->Text = L"Large";
			this->CappucinoL->UseVisualStyleBackColor = true;
			this->CappucinoL->Click += gcnew System::EventHandler(this, &MyForm2::CappucinoL_Click);
			// 
			// CappucinoS
			// 
			this->CappucinoS->Location = System::Drawing::Point(142, 112);
			this->CappucinoS->Name = L"CappucinoS";
			this->CappucinoS->Size = System::Drawing::Size(65, 23);
			this->CappucinoS->TabIndex = 11;
			this->CappucinoS->Text = L"Small";
			this->CappucinoS->UseVisualStyleBackColor = true;
			this->CappucinoS->Click += gcnew System::EventHandler(this, &MyForm2::CappucinoS_Click);
			// 
			// SizeCappu
			// 
			this->SizeCappu->AutoSize = true;
			this->SizeCappu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SizeCappu->Location = System::Drawing::Point(111, 115);
			this->SizeCappu->Name = L"SizeCappu";
			this->SizeCappu->Size = System::Drawing::Size(33, 16);
			this->SizeCappu->TabIndex = 11;
			this->SizeCappu->Text = L"Size";
			// 
			// Remove
			// 
			this->Remove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Remove->Location = System::Drawing::Point(13, 149);
			this->Remove->Name = L"Remove";
			this->Remove->Size = System::Drawing::Size(21, 22);
			this->Remove->TabIndex = 4;
			this->Remove->Text = L"-";
			this->Remove->UseVisualStyleBackColor = true;
			this->Remove->Click += gcnew System::EventHandler(this, &MyForm2::Remove_Click);
			// 
			// Cappucinocst
			// 
			this->Cappucinocst->AutoSize = true;
			this->Cappucinocst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cappucinocst->ForeColor = System::Drawing::Color::Coral;
			this->Cappucinocst->Location = System::Drawing::Point(210, 20);
			this->Cappucinocst->Name = L"Cappucinocst";
			this->Cappucinocst->Size = System::Drawing::Size(49, 18);
			this->Cappucinocst->TabIndex = 9;
			this->Cappucinocst->Text = L"$2.50";
			// 
			// Cappucinolbl
			// 
			this->Cappucinolbl->AutoSize = true;
			this->Cappucinolbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cappucinolbl->Location = System::Drawing::Point(110, 18);
			this->Cappucinolbl->Name = L"Cappucinolbl";
			this->Cappucinolbl->Size = System::Drawing::Size(97, 20);
			this->Cappucinolbl->TabIndex = 9;
			this->Cappucinolbl->Text = L"Cappucino";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->vScrollBar1);
			this->panel1->Controls->Add(this->Pay);
			this->panel1->Controls->Add(this->Receipt);
			this->panel1->Controls->Add(this->Reset);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->Cart);
			this->panel1->Controls->Add(this->totalBox);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(1121, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(385, 821);
			this->panel1->TabIndex = 9;
			// 
			// Receipt
			// 
			this->Receipt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Receipt->Location = System::Drawing::Point(135, 704);
			this->Receipt->Name = L"Receipt";
			this->Receipt->Size = System::Drawing::Size(100, 40);
			this->Receipt->TabIndex = 17;
			this->Receipt->Text = L"Receipt";
			this->Receipt->UseVisualStyleBackColor = true;
			// 
			// Reset
			// 
			this->Reset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reset->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Reset->Location = System::Drawing::Point(37, 704);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(94, 40);
			this->Reset->TabIndex = 16;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = true;
			this->Reset->Click += gcnew System::EventHandler(this, &MyForm2::Reset_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(268, 69);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 20);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Price";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(188, 69);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 20);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Qty";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(46, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Item/s";
			// 
			// Cart
			// 
			this->Cart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cart->Location = System::Drawing::Point(37, 92);
			this->Cart->Name = L"Cart";
			this->Cart->Size = System::Drawing::Size(310, 534);
			this->Cart->TabIndex = 12;
			this->Cart->Text = L"";
			// 
			// totalBox
			// 
			this->totalBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalBox->Location = System::Drawing::Point(137, 642);
			this->totalBox->Name = L"totalBox";
			this->totalBox->ReadOnly = true;
			this->totalBox->Size = System::Drawing::Size(210, 30);
			this->totalBox->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label8->Location = System::Drawing::Point(118, 646);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 25);
			this->label8->TabIndex = 3;
			this->label8->Text = L"$";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(32, 643);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 29);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Total:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(163, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 36);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Cart\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Latte
			// 
			this->Latte->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Latte->Controls->Add(this->LatteL);
			this->Latte->Controls->Add(this->LatteS);
			this->Latte->Controls->Add(this->SizeLatte);
			this->Latte->Controls->Add(this->Lattecst);
			this->Latte->Controls->Add(this->Lattelbl);
			this->Latte->Controls->Add(this->Remove2);
			this->Latte->Controls->Add(this->pictureBox1);
			this->Latte->Controls->Add(this->Qty2);
			this->Latte->Controls->Add(this->Add2);
			this->Latte->Controls->Add(this->addCart2);
			this->Latte->Location = System::Drawing::Point(372, 44);
			this->Latte->Name = L"Latte";
			this->Latte->Size = System::Drawing::Size(290, 186);
			this->Latte->TabIndex = 10;
			// 
			// LatteL
			// 
			this->LatteL->Location = System::Drawing::Point(213, 112);
			this->LatteL->Name = L"LatteL";
			this->LatteL->Size = System::Drawing::Size(66, 23);
			this->LatteL->TabIndex = 12;
			this->LatteL->Text = L"Large";
			this->LatteL->UseVisualStyleBackColor = true;
			this->LatteL->Click += gcnew System::EventHandler(this, &MyForm2::LatteL_Click);
			// 
			// LatteS
			// 
			this->LatteS->Location = System::Drawing::Point(142, 112);
			this->LatteS->Name = L"LatteS";
			this->LatteS->Size = System::Drawing::Size(65, 23);
			this->LatteS->TabIndex = 12;
			this->LatteS->Text = L"Small";
			this->LatteS->UseVisualStyleBackColor = true;
			this->LatteS->Click += gcnew System::EventHandler(this, &MyForm2::LatteS_Click);
			// 
			// SizeLatte
			// 
			this->SizeLatte->AutoSize = true;
			this->SizeLatte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SizeLatte->Location = System::Drawing::Point(110, 115);
			this->SizeLatte->Name = L"SizeLatte";
			this->SizeLatte->Size = System::Drawing::Size(33, 16);
			this->SizeLatte->TabIndex = 12;
			this->SizeLatte->Text = L"Size";
			// 
			// Lattecst
			// 
			this->Lattecst->AutoSize = true;
			this->Lattecst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lattecst->ForeColor = System::Drawing::Color::Coral;
			this->Lattecst->Location = System::Drawing::Point(210, 19);
			this->Lattecst->Name = L"Lattecst";
			this->Lattecst->Size = System::Drawing::Size(49, 18);
			this->Lattecst->TabIndex = 9;
			this->Lattecst->Text = L"$2.00";
			// 
			// Lattelbl
			// 
			this->Lattelbl->AutoSize = true;
			this->Lattelbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lattelbl->Location = System::Drawing::Point(110, 17);
			this->Lattelbl->Name = L"Lattelbl";
			this->Lattelbl->Size = System::Drawing::Size(93, 20);
			this->Lattelbl->TabIndex = 9;
			this->Lattelbl->Text = L"Iced Latte";
			// 
			// Remove2
			// 
			this->Remove2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Remove2->Location = System::Drawing::Point(13, 149);
			this->Remove2->Name = L"Remove2";
			this->Remove2->Size = System::Drawing::Size(21, 22);
			this->Remove2->TabIndex = 4;
			this->Remove2->Text = L"-";
			this->Remove2->UseVisualStyleBackColor = true;
			this->Remove2->Click += gcnew System::EventHandler(this, &MyForm2::Remove2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(13, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(91, 125);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Qty2
			// 
			this->Qty2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Qty2->Location = System::Drawing::Point(40, 149);
			this->Qty2->Name = L"Qty2";
			this->Qty2->ReadOnly = true;
			this->Qty2->Size = System::Drawing::Size(29, 22);
			this->Qty2->TabIndex = 2;
			this->Qty2->Text = L"1";
			this->Qty2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Add2
			// 
			this->Add2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add2->Location = System::Drawing::Point(75, 149);
			this->Add2->Name = L"Add2";
			this->Add2->Size = System::Drawing::Size(21, 22);
			this->Add2->TabIndex = 3;
			this->Add2->Text = L"+";
			this->Add2->UseVisualStyleBackColor = true;
			this->Add2->Click += gcnew System::EventHandler(this, &MyForm2::Add2_Click);
			// 
			// addCart2
			// 
			this->addCart2->BackColor = System::Drawing::Color::Gainsboro;
			this->addCart2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->addCart2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->addCart2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addCart2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addCart2->ForeColor = System::Drawing::Color::Black;
			this->addCart2->Location = System::Drawing::Point(114, 143);
			this->addCart2->Name = L"addCart2";
			this->addCart2->Size = System::Drawing::Size(165, 28);
			this->addCart2->TabIndex = 1;
			this->addCart2->Text = L"Add to Cart";
			this->addCart2->UseVisualStyleBackColor = false;
			this->addCart2->Click += gcnew System::EventHandler(this, &MyForm2::addCart2_Click);
			// 
			// Pay
			// 
			this->Pay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pay->Location = System::Drawing::Point(241, 704);
			this->Pay->Name = L"Pay";
			this->Pay->Size = System::Drawing::Size(106, 40);
			this->Pay->TabIndex = 11;
			this->Pay->Text = L"Pay";
			this->Pay->UseVisualStyleBackColor = true;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(326, 92);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(21, 534);
			this->vScrollBar1->TabIndex = 18;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->numericUpDown1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(884, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(231, 421);
			this->panel2->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(90, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Age";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(90, 64);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 3;
			// 
			// MyForm2
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1540, 845);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Latte);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Cappucino);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cappucinoImg))->EndInit();
			this->Cappucino->ResumeLayout(false);
			this->Cappucino->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->Latte->ResumeLayout(false);
			this->Latte->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Qty_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
	int amount = System::Convert::ToInt16(Qty->Text) + 1;
	Qty->Text = System::Convert::ToString(amount);
}

private: System::Void Remove_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Qty->Text != "1") {
	int amount = System::Convert::ToInt16(Qty->Text) - 1;
	Qty->Text = System::Convert::ToString(amount);
	}
}



private: System::Void Add2_Click(System::Object^ sender, System::EventArgs^ e) {
	int amount = System::Convert::ToInt16(Qty2->Text) + 1;
	Qty2->Text = System::Convert::ToString(amount);
}
private: System::Void Remove2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Qty2->Text != "1") {
		int amount = System::Convert::ToInt16(Qty2->Text) - 1;
		Qty2->Text = System::Convert::ToString(amount);
	}
}
public: System::Void addCart1_Click(System::Object^ sender, System::EventArgs^ e) {
	 cappucino = System::Convert::ToInt16(Qty->Text) * Cappucinocost;
	 total = cappucino + total;
	 totalBox->Text = System::Convert::ToString(total);
	 Cart->AppendText("  "+Cappucinolbl->Text + "\t" + "\t" + "  " + Qty->Text + "\t" + "\t" + Cappucinocst->Text + "\n");
	 Cart->AppendText("  "+"-Size"+"  "+cappucinosize+"\n");
	 Cart->AppendText("  ---------------------------------------------------------\n");
	
}
public: System::Void addCart2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	latte = System::Convert::ToInt16(Qty2->Text) * Lattecost;
	total = latte + total;
	totalBox->Text = System::Convert::ToString(total);
	Cart->AppendText("  "+Lattelbl->Text + "\t" + "\t"  + "  " + Qty2->Text + "\t" + "\t" + Lattecst->Text + "\n");
	Cart->AppendText("  " + "-Size" + "  " + lattesize + "\n");
	Cart->AppendText("  ---------------------------------------------------------\n");
	
}

private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e) {
	Cart->Clear();
	totalBox->Clear();
	total = 0;
}
private: System::Void CappucinoS_Click(System::Object^ sender, System::EventArgs^ e) {
	Cappucinocst->Text = "$2.00";
	Cappucinocost = 2.00;
	cappucinosize = "Small";
	
}
private: System::Void CappucinoL_Click(System::Object^ sender, System::EventArgs^ e) {
	Cappucinocst->Text = "$2.50";
	Cappucinocost = 2.50;
	cappucinosize = "Large";
}
private: System::Void LatteS_Click(System::Object^ sender, System::EventArgs^ e) {
	Lattecst->Text = "$1.75";
	Lattecost = 1.75;
	lattesize = "Small";
}
private: System::Void LatteL_Click(System::Object^ sender, System::EventArgs^ e) {
	Lattecst->Text = "$2.00";
	Lattecost = 2.00;
	lattesize = "Large";
}
};
}

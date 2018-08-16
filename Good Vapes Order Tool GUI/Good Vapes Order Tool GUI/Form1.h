#pragma once


#include <iostream>
//#include <msclr\marshal_cppstd.h>
#include <string>
#include "C_BSTree.h"
#include <msclr\marshal_cppstd.h>

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  openSalesFileBtn;
	protected:
	private: System::Windows::Forms::Button^  openInventoryFileBtn;
	private: System::Windows::Forms::OpenFileDialog^  openSalesFileDialog;
	private: System::Windows::Forms::TextBox^  salesFileNameTextBox;
	private: System::Windows::Forms::Label^  salesFileLabel;
	private: System::Windows::Forms::Label^  inventoryFileLabel;


	private: System::Windows::Forms::TextBox^  inventoryFileNameTextBox;

	private: System::Windows::Forms::OpenFileDialog^  openInventoryFileDialog;
	private: System::Windows::Forms::Button^  runOrder;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  dateLabel;
	private: System::Windows::Forms::ComboBox^  storeComboBox;


	private: System::Windows::Forms::Label^  storeLabel;
	private: System::Windows::Forms::Label^  errorMessage;
	private: System::Windows::Forms::Label^  orderLocationLabel;

	private: System::Windows::Forms::TextBox^  orderFileLocationtextBox;

	private: System::Windows::Forms::Button^  orderFileButton;
	private: System::Windows::Forms::FolderBrowserDialog^  orderFolderBrowserDialog;



	private: System::ComponentModel::IContainer^  components;

	//private: string getField(string str, int position);





	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openSalesFileBtn = (gcnew System::Windows::Forms::Button());
			this->openInventoryFileBtn = (gcnew System::Windows::Forms::Button());
			this->openSalesFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->salesFileNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->salesFileLabel = (gcnew System::Windows::Forms::Label());
			this->inventoryFileLabel = (gcnew System::Windows::Forms::Label());
			this->inventoryFileNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->openInventoryFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->runOrder = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->storeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->storeLabel = (gcnew System::Windows::Forms::Label());
			this->errorMessage = (gcnew System::Windows::Forms::Label());
			this->orderLocationLabel = (gcnew System::Windows::Forms::Label());
			this->orderFileLocationtextBox = (gcnew System::Windows::Forms::TextBox());
			this->orderFileButton = (gcnew System::Windows::Forms::Button());
			this->orderFolderBrowserDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->SuspendLayout();
			// 
			// openSalesFileBtn
			// 
			this->openSalesFileBtn->Location = System::Drawing::Point(360, 91);
			this->openSalesFileBtn->Name = L"openSalesFileBtn";
			this->openSalesFileBtn->Size = System::Drawing::Size(84, 23);
			this->openSalesFileBtn->TabIndex = 3;
			this->openSalesFileBtn->Text = L"Choose File";
			this->openSalesFileBtn->UseVisualStyleBackColor = true;
			this->openSalesFileBtn->Click += gcnew System::EventHandler(this, &Form1::openSalesFileBtn_Click);
			// 
			// openInventoryFileBtn
			// 
			this->openInventoryFileBtn->Location = System::Drawing::Point(360, 123);
			this->openInventoryFileBtn->Name = L"openInventoryFileBtn";
			this->openInventoryFileBtn->Size = System::Drawing::Size(84, 23);
			this->openInventoryFileBtn->TabIndex = 5;
			this->openInventoryFileBtn->Text = L"Choose File";
			this->openInventoryFileBtn->UseVisualStyleBackColor = true;
			this->openInventoryFileBtn->Click += gcnew System::EventHandler(this, &Form1::openInventoryFileBtn_Click);
			// 
			// openSalesFileDialog
			// 
			this->openSalesFileDialog->Filter = L"CSV Files (*.csv)|*.csv";
			this->openSalesFileDialog->Title = L"Sales File";
			this->openSalesFileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openSalesFileDialog_FileOk_1);
			// 
			// salesFileNameTextBox
			// 
			this->salesFileNameTextBox->Location = System::Drawing::Point(117, 92);
			this->salesFileNameTextBox->Name = L"salesFileNameTextBox";
			this->salesFileNameTextBox->Size = System::Drawing::Size(237, 20);
			this->salesFileNameTextBox->TabIndex = 2;
			// 
			// salesFileLabel
			// 
			this->salesFileLabel->AutoSize = true;
			this->salesFileLabel->Location = System::Drawing::Point(56, 96);
			this->salesFileLabel->Name = L"salesFileLabel";
			this->salesFileLabel->Size = System::Drawing::Size(55, 13);
			this->salesFileLabel->TabIndex = 3;
			this->salesFileLabel->Text = L"Sales File:";
			// 
			// inventoryFileLabel
			// 
			this->inventoryFileLabel->AutoSize = true;
			this->inventoryFileLabel->Location = System::Drawing::Point(38, 128);
			this->inventoryFileLabel->Name = L"inventoryFileLabel";
			this->inventoryFileLabel->Size = System::Drawing::Size(73, 13);
			this->inventoryFileLabel->TabIndex = 5;
			this->inventoryFileLabel->Text = L"Inventory File:";
			// 
			// inventoryFileNameTextBox
			// 
			this->inventoryFileNameTextBox->Location = System::Drawing::Point(117, 124);
			this->inventoryFileNameTextBox->Name = L"inventoryFileNameTextBox";
			this->inventoryFileNameTextBox->Size = System::Drawing::Size(237, 20);
			this->inventoryFileNameTextBox->TabIndex = 4;
			// 
			// openInventoryFileDialog
			// 
			this->openInventoryFileDialog->Filter = L"CSV Files (*.csv)|*.csv";
			this->openInventoryFileDialog->Title = L"Inventory File";
			this->openInventoryFileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openInventoryFileDialog_FileOk);
			// 
			// runOrder
			// 
			this->runOrder->Enabled = false;
			this->runOrder->Location = System::Drawing::Point(117, 188);
			this->runOrder->Name = L"runOrder";
			this->runOrder->Size = System::Drawing::Size(327, 59);
			this->runOrder->TabIndex = 6;
			this->runOrder->Text = L"Build Order";
			this->runOrder->UseVisualStyleBackColor = true;
			this->runOrder->Click += gcnew System::EventHandler(this, &Form1::runOrder_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"MM-DD-YY";
			this->dateTimePicker1->Location = System::Drawing::Point(117, 60);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(237, 20);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->Location = System::Drawing::Point(78, 64);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(33, 13);
			this->dateLabel->TabIndex = 8;
			this->dateLabel->Text = L"Date:";
			// 
			// storeComboBox
			// 
			this->storeComboBox->FormattingEnabled = true;
			this->storeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Northwest Highway", L"Lemmon" });
			this->storeComboBox->Location = System::Drawing::Point(117, 27);
			this->storeComboBox->Name = L"storeComboBox";
			this->storeComboBox->Size = System::Drawing::Size(237, 21);
			this->storeComboBox->TabIndex = 0;
			this->storeComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::storeComboBox_SelectedIndexChanged);
			// 
			// storeLabel
			// 
			this->storeLabel->AutoSize = true;
			this->storeLabel->Location = System::Drawing::Point(76, 31);
			this->storeLabel->Name = L"storeLabel";
			this->storeLabel->Size = System::Drawing::Size(35, 13);
			this->storeLabel->TabIndex = 10;
			this->storeLabel->Text = L"Store:";
			// 
			// errorMessage
			// 
			this->errorMessage->AutoSize = true;
			this->errorMessage->Location = System::Drawing::Point(12, 292);
			this->errorMessage->Name = L"errorMessage";
			this->errorMessage->Size = System::Drawing::Size(0, 13);
			this->errorMessage->TabIndex = 11;
			// 
			// orderLocationLabel
			// 
			this->orderLocationLabel->AutoSize = true;
			this->orderLocationLabel->Location = System::Drawing::Point(12, 160);
			this->orderLocationLabel->Name = L"orderLocationLabel";
			this->orderLocationLabel->Size = System::Drawing::Size(99, 13);
			this->orderLocationLabel->TabIndex = 13;
			this->orderLocationLabel->Text = L"Order File Location:";
			// 
			// orderFileLocationtextBox
			// 
			this->orderFileLocationtextBox->Location = System::Drawing::Point(117, 156);
			this->orderFileLocationtextBox->Name = L"orderFileLocationtextBox";
			this->orderFileLocationtextBox->Size = System::Drawing::Size(237, 20);
			this->orderFileLocationtextBox->TabIndex = 12;
			// 
			// orderFileButton
			// 
			this->orderFileButton->Location = System::Drawing::Point(360, 155);
			this->orderFileButton->Name = L"orderFileButton";
			this->orderFileButton->Size = System::Drawing::Size(84, 23);
			this->orderFileButton->TabIndex = 14;
			this->orderFileButton->Text = L"Choose Folder";
			this->orderFileButton->UseVisualStyleBackColor = true;
			this->orderFileButton->Click += gcnew System::EventHandler(this, &Form1::orderFileButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 342);
			this->Controls->Add(this->orderLocationLabel);
			this->Controls->Add(this->orderFileLocationtextBox);
			this->Controls->Add(this->orderFileButton);
			this->Controls->Add(this->errorMessage);
			this->Controls->Add(this->storeLabel);
			this->Controls->Add(this->storeComboBox);
			this->Controls->Add(this->dateLabel);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->runOrder);
			this->Controls->Add(this->inventoryFileLabel);
			this->Controls->Add(this->inventoryFileNameTextBox);
			this->Controls->Add(this->salesFileLabel);
			this->Controls->Add(this->salesFileNameTextBox);
			this->Controls->Add(this->openInventoryFileBtn);
			this->Controls->Add(this->openSalesFileBtn);
			this->Name = L"Form1";
			this->Text = L"Good Vapes Order Tool v1.1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openSalesFileDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		salesFileNameTextBox->Text = "";
	}
	private: System::Void openSalesFileDialog_FileOk_1(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		salesFileNameTextBox->Text = openSalesFileDialog->FileName;
		if (inventoryFileNameTextBox->Text != "" && salesFileNameTextBox->Text != "" && storeComboBox->Text != "" && orderFileLocationtextBox->Text != "")
		{
			runOrder->Enabled = "TRUE";
		}
	}
	private: System::Void openSalesFileBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		openSalesFileDialog->ShowDialog();
	}
	private: System::Void openInventoryFileBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		openInventoryFileDialog->ShowDialog();
	}
private: System::Void openInventoryFileDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	inventoryFileNameTextBox->Text = openInventoryFileDialog->FileName;
	if (inventoryFileNameTextBox->Text != "" && salesFileNameTextBox->Text != "" && storeComboBox->Text != "" && orderFileLocationtextBox->Text != "")
	{
		runOrder->Enabled = "TRUE";
	}
}

private: System::Void orderFileButton_Click(System::Object^  sender, System::EventArgs^  e) {
	orderFolderBrowserDialog->ShowDialog();
	if (orderFolderBrowserDialog->SelectedPath != "")
	{
		orderFileLocationtextBox->Text = orderFolderBrowserDialog->SelectedPath;
	}
	if (inventoryFileNameTextBox->Text != "" && salesFileNameTextBox->Text != "" && storeComboBox->Text != "" && orderFileLocationtextBox->Text != "")
	{
		runOrder->Enabled = "TRUE";
	}
}

private: System::Void runOrder_Click(System::Object^  sender, System::EventArgs^  e)
{
	// set the button to disabled so that the user will not run again

	runOrder->Enabled = false;

	// Objects for sales file
	System::String^ salesFilename;
	salesFilename = salesFileNameTextBox->Text;
	System::IO::StreamReader^ salesFile;

	// Objects for inventory file
	System::String^ inventoryFilename;
	inventoryFilename = inventoryFileNameTextBox->Text;
	System::IO::StreamReader^ inventoryFile;

	C_BSTree salesTree;
	C_BSTree inventoryTree;
	C_BSTree orderTree;

	// Objects for order file
	System::String^ orderFilename;
	System::IO::StreamWriter^ orderFile;
	orderFilename = orderFileLocationtextBox->Text + "\\";

	// Objects for inventory control file
	System::String^ inventoryControlFilename;
	System::IO::StreamWriter^ inventoryControlFile;
	inventoryControlFilename = orderFileLocationtextBox->Text + "\\";

	// Build the filename
	if (storeComboBox->Text == "Northwest Highway")
	{
		orderFilename = orderFilename + "NW_ORDER_" + dateTimePicker1->Value.ToString("D") +".csv";
		inventoryControlFilename = inventoryControlFilename + "NW_Inventory_Control_" + dateTimePicker1->Value.ToString("D") + ".csv";
		// Used for debugging
		//errorMessage->Text = orderFilename;
	}
	else
	{
		orderFilename = orderFilename + "LEM_ORDER_" + dateTimePicker1->Value.ToString("D") + ".csv";
		inventoryControlFilename = inventoryControlFilename + "LEM_Inventory_Control_" + dateTimePicker1->Value.ToString("D") + ".csv";
		// used for debugging
		//errorMessage->Text = orderFilename;		
	}

	try
	{
		salesFile = System::IO::File::OpenText(salesFilename);
	}
	catch (System::Exception^ e)
	{
		if (dynamic_cast<System::IO::FileNotFoundException^>(e))
		{
			errorMessage->Text = "sales file not found";
		}
		else
		{
			errorMessage->Text = "problem reading sales file";
		}
	}


	try
	{
		inventoryFile = System::IO::File::OpenText(inventoryFilename);
	}
	catch (System::Exception^ e)
	{
		if (dynamic_cast<System::IO::FileNotFoundException^>(e))
		{
			errorMessage->Text = "inventory file not found";
		}
		else
		{
			errorMessage->Text = "problem reading inventory file";
		}
	}

	int lineCount = 0;
	string currentLine = "";
	C_Record holdRecord;

	errorMessage->Text = "Loading Inventory!";
	//Call to clear out the headers
	inventoryFile->ReadLine();

	while (!inventoryFile->EndOfStream)
	{
		currentLine = msclr::interop::marshal_as<std::string>(inventoryFile->ReadLine());
		holdRecord.setItemDescription(getField(currentLine, 2));
		holdRecord.setAlternateSKU(getField(currentLine, 3));
		if (getField(currentLine, 8) == "")
		{
			holdRecord.setCost(0);
		}
		else
		{
			holdRecord.setCost(stof(getField(currentLine, 8)));
		}

		holdRecord.setSKU(getField(currentLine, 10));
		
		if (getField(currentLine, 12) == "")
		{
			holdRecord.setQuantity(0);
		}
		else
		{
			if (stoi(getField(currentLine, 12)) < 0)
			{
				holdRecord.setQuantity(0);
			}
			else
			{
				holdRecord.setQuantity(stoi(getField(currentLine, 12)));
			}
		}
		inventoryTree.addNode(holdRecord);
		lineCount++;
	}

	inventoryFile->Close();

	// clear out the currentLine to be sure we aren't getting overflow data
	currentLine = "";

	//clear out the holdInvRecord to be sure we aren't getting overflow data
	holdRecord.clear();

	//clear out the header items
	salesFile->ReadLine();
	errorMessage->Text = "Loading Sales!";

	while (!salesFile->EndOfStream)
	{
		currentLine = msclr::interop::marshal_as<std::string>(salesFile->ReadLine());
		holdRecord.setItemDescription(getField(currentLine, 5));
		holdRecord.setSKU(getField(currentLine, 2));
		if (getField(currentLine, 7) == "")
		{
			holdRecord.setQuantity(0);
		}
		else
		{
			holdRecord.setQuantity(stoi(getField(currentLine, 7)));
		}
		salesTree.addNode(holdRecord);
		lineCount++;
	}

	//string errorMessageText;

	//errorMessage->Text = "Finished adding items to inventory";

	//Debugging message
	//errorMessage->Text = salesFile->ReadLine();

	salesFile->Close();

	salesTree.compileList(inventoryTree, orderTree, salesTree.Root());


	orderFile = gcnew System::IO::StreamWriter(orderFilename);
	orderFile->WriteLine("SKU,ITEM DESCRIPTION, QTY ORDERED, COST, TOTAL COST");
	orderTree.saveInorderCSV(orderTree.Root(), orderFile);

	orderFile->Close();

	inventoryControlFile = gcnew System::IO::StreamWriter(inventoryControlFilename);
	inventoryControlFile->WriteLine("SKU,ITEM DESCRIPTION, INVENTORY QTY");

	inventoryTree.compileCheckList(inventoryTree.Root(), inventoryControlFile);

	inventoryControlFile->Close();

	errorMessage->Text = "Complete!";

}

private: System::Void storeComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (inventoryFileNameTextBox->Text != "" && salesFileNameTextBox->Text != "" && storeComboBox->Text != "" && orderFileLocationtextBox->Text != "")
	{
		runOrder->Enabled = "TRUE";
	}
}

private: std::string getField(string str, int position)
{
	string holdString = str;
	//string subStr;
	int commaPos;

	for (int x = 0; x < (position - 1); x++)
	{
		commaPos = holdString.find(',');
		holdString = holdString.substr(commaPos + 1);
	}
	commaPos = holdString.find(',');
	holdString = holdString.substr(0, commaPos);
	return holdString;
}

};
}

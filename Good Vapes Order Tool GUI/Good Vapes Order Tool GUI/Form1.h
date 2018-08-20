#pragma once


#include <iostream>
//#include <msclr\marshal_cppstd.h>
#include <string>
#include "C_BSTree.h"
#include <msclr\marshal_cppstd.h>
#include <math.h>

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
	private: System::Windows::Forms::OpenFileDialog^  openNWSalesFileDialog;

	private: System::Windows::Forms::TextBox^  nwSalesFileTextBox;

	private: System::Windows::Forms::Label^  nwSalesFileLabel;


	private: System::Windows::Forms::Label^  inventoryFileLabel;
	private: System::Windows::Forms::TextBox^  nwInventoryFileTextBox;

	private: System::Windows::Forms::OpenFileDialog^  openNWInventoryFileDialog;





	private: System::Windows::Forms::Button^  runOrder;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  dateLabel;




	private: System::Windows::Forms::Label^  errorMessage;
	private: System::Windows::Forms::Label^  orderLocationLabel;

	private: System::Windows::Forms::TextBox^  orderFileLocationtextBox;

	private: System::Windows::Forms::Button^  orderFileButton;
	private: System::Windows::Forms::FolderBrowserDialog^  orderFolderBrowserDialog;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  lemmonInvFileTextBox;

	private: System::Windows::Forms::Label^  NWSales;
	private: System::Windows::Forms::TextBox^  lemmonSalesFileTextBox;

	private: System::Windows::Forms::OpenFileDialog^  openLemmonSalesFileDialog;
	private: System::Windows::Forms::OpenFileDialog^  openLemmonInvFileDialog;






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
			this->openNWSalesFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->nwSalesFileTextBox = (gcnew System::Windows::Forms::TextBox());
			this->nwSalesFileLabel = (gcnew System::Windows::Forms::Label());
			this->inventoryFileLabel = (gcnew System::Windows::Forms::Label());
			this->nwInventoryFileTextBox = (gcnew System::Windows::Forms::TextBox());
			this->openNWInventoryFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->runOrder = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->errorMessage = (gcnew System::Windows::Forms::Label());
			this->orderLocationLabel = (gcnew System::Windows::Forms::Label());
			this->orderFileLocationtextBox = (gcnew System::Windows::Forms::TextBox());
			this->orderFileButton = (gcnew System::Windows::Forms::Button());
			this->orderFolderBrowserDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lemmonInvFileTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NWSales = (gcnew System::Windows::Forms::Label());
			this->lemmonSalesFileTextBox = (gcnew System::Windows::Forms::TextBox());
			this->openLemmonSalesFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openLemmonInvFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// openSalesFileBtn
			// 
			this->openSalesFileBtn->Location = System::Drawing::Point(389, 107);
			this->openSalesFileBtn->Name = L"openSalesFileBtn";
			this->openSalesFileBtn->Size = System::Drawing::Size(84, 23);
			this->openSalesFileBtn->TabIndex = 3;
			this->openSalesFileBtn->Text = L"Choose Files";
			this->openSalesFileBtn->UseVisualStyleBackColor = true;
			this->openSalesFileBtn->Click += gcnew System::EventHandler(this, &Form1::openSalesFileBtn_Click);
			// 
			// openInventoryFileBtn
			// 
			this->openInventoryFileBtn->Location = System::Drawing::Point(389, 204);
			this->openInventoryFileBtn->Name = L"openInventoryFileBtn";
			this->openInventoryFileBtn->Size = System::Drawing::Size(84, 23);
			this->openInventoryFileBtn->TabIndex = 5;
			this->openInventoryFileBtn->Text = L"Choose Files";
			this->openInventoryFileBtn->UseVisualStyleBackColor = true;
			this->openInventoryFileBtn->Click += gcnew System::EventHandler(this, &Form1::openInventoryFileBtn_Click);
			// 
			// openNWSalesFileDialog
			// 
			this->openNWSalesFileDialog->Filter = L"CSV Files (*.csv)|*.csv";
			this->openNWSalesFileDialog->Title = L"NW Sales File";
			this->openNWSalesFileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openSalesFileDialog_FileOk_1);
			// 
			// nwSalesFileTextBox
			// 
			this->nwSalesFileTextBox->Location = System::Drawing::Point(123, 108);
			this->nwSalesFileTextBox->Name = L"nwSalesFileTextBox";
			this->nwSalesFileTextBox->Size = System::Drawing::Size(260, 20);
			this->nwSalesFileTextBox->TabIndex = 2;
			// 
			// nwSalesFileLabel
			// 
			this->nwSalesFileLabel->AutoSize = true;
			this->nwSalesFileLabel->Location = System::Drawing::Point(39, 160);
			this->nwSalesFileLabel->Name = L"nwSalesFileLabel";
			this->nwSalesFileLabel->Size = System::Drawing::Size(78, 13);
			this->nwSalesFileLabel->TabIndex = 3;
			this->nwSalesFileLabel->Text = L"Lem Sales File:";
			// 
			// inventoryFileLabel
			// 
			this->inventoryFileLabel->AutoSize = true;
			this->inventoryFileLabel->Location = System::Drawing::Point(22, 207);
			this->inventoryFileLabel->Name = L"inventoryFileLabel";
			this->inventoryFileLabel->Size = System::Drawing::Size(95, 13);
			this->inventoryFileLabel->TabIndex = 5;
			this->inventoryFileLabel->Text = L"NW Inventory File:";
			// 
			// nwInventoryFileTextBox
			// 
			this->nwInventoryFileTextBox->Location = System::Drawing::Point(123, 204);
			this->nwInventoryFileTextBox->Name = L"nwInventoryFileTextBox";
			this->nwInventoryFileTextBox->Size = System::Drawing::Size(260, 20);
			this->nwInventoryFileTextBox->TabIndex = 4;
			// 
			// openNWInventoryFileDialog
			// 
			this->openNWInventoryFileDialog->Filter = L"CSV Files (*.csv)|*.csv";
			this->openNWInventoryFileDialog->Title = L"NW Inventory File";
			this->openNWInventoryFileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openInventoryFileDialog_FileOk);
			// 
			// runOrder
			// 
			this->runOrder->Enabled = false;
			this->runOrder->Location = System::Drawing::Point(123, 348);
			this->runOrder->Name = L"runOrder";
			this->runOrder->Size = System::Drawing::Size(260, 59);
			this->runOrder->TabIndex = 6;
			this->runOrder->Text = L"Build Order";
			this->runOrder->UseVisualStyleBackColor = true;
			this->runOrder->Click += gcnew System::EventHandler(this, &Form1::runOrder_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"MM-DD-YY";
			this->dateTimePicker1->Location = System::Drawing::Point(123, 60);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(260, 20);
			this->dateTimePicker1->TabIndex = 99;
			this->dateTimePicker1->TabStop = false;
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->Location = System::Drawing::Point(84, 64);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(33, 13);
			this->dateLabel->TabIndex = 8;
			this->dateLabel->Text = L"Date:";
			// 
			// errorMessage
			// 
			this->errorMessage->AutoSize = true;
			this->errorMessage->Location = System::Drawing::Point(12, 446);
			this->errorMessage->Name = L"errorMessage";
			this->errorMessage->Size = System::Drawing::Size(0, 13);
			this->errorMessage->TabIndex = 11;
			// 
			// orderLocationLabel
			// 
			this->orderLocationLabel->AutoSize = true;
			this->orderLocationLabel->Location = System::Drawing::Point(18, 303);
			this->orderLocationLabel->Name = L"orderLocationLabel";
			this->orderLocationLabel->Size = System::Drawing::Size(99, 13);
			this->orderLocationLabel->TabIndex = 13;
			this->orderLocationLabel->Text = L"Order File Location:";
			// 
			// orderFileLocationtextBox
			// 
			this->orderFileLocationtextBox->Location = System::Drawing::Point(123, 300);
			this->orderFileLocationtextBox->Name = L"orderFileLocationtextBox";
			this->orderFileLocationtextBox->Size = System::Drawing::Size(260, 20);
			this->orderFileLocationtextBox->TabIndex = 12;
			// 
			// orderFileButton
			// 
			this->orderFileButton->Location = System::Drawing::Point(389, 298);
			this->orderFileButton->Name = L"orderFileButton";
			this->orderFileButton->Size = System::Drawing::Size(84, 23);
			this->orderFileButton->TabIndex = 14;
			this->orderFileButton->Text = L"Choose Folder";
			this->orderFileButton->UseVisualStyleBackColor = true;
			this->orderFileButton->Click += gcnew System::EventHandler(this, &Form1::orderFileButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 255);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Lem Inventory File:";
			// 
			// lemmonInvFileTextBox
			// 
			this->lemmonInvFileTextBox->Location = System::Drawing::Point(123, 252);
			this->lemmonInvFileTextBox->Name = L"lemmonInvFileTextBox";
			this->lemmonInvFileTextBox->Size = System::Drawing::Size(260, 20);
			this->lemmonInvFileTextBox->TabIndex = 17;
			// 
			// NWSales
			// 
			this->NWSales->AutoSize = true;
			this->NWSales->Location = System::Drawing::Point(44, 112);
			this->NWSales->Name = L"NWSales";
			this->NWSales->Size = System::Drawing::Size(77, 13);
			this->NWSales->TabIndex = 16;
			this->NWSales->Text = L"NW Sales File:";
			// 
			// lemmonSalesFileTextBox
			// 
			this->lemmonSalesFileTextBox->Location = System::Drawing::Point(123, 156);
			this->lemmonSalesFileTextBox->Name = L"lemmonSalesFileTextBox";
			this->lemmonSalesFileTextBox->Size = System::Drawing::Size(260, 20);
			this->lemmonSalesFileTextBox->TabIndex = 15;
			// 
			// openLemmonSalesFileDialog
			// 
			this->openLemmonSalesFileDialog->Filter = L"CSV Files (*.csv)|*.csv";
			this->openLemmonSalesFileDialog->Title = L"Lemmon Sales File";
			this->openLemmonSalesFileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openLemmonSalesFileDialog_FileOk);
			// 
			// openLemmonInvFileDialog
			// 
			this->openLemmonInvFileDialog->Filter = L"CSV Files (*.csv)|*.csv";
			this->openLemmonInvFileDialog->Title = L"Lemmon Inventory File";
			this->openLemmonInvFileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openLemmonInvFileDialog_FileOk);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 468);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lemmonInvFileTextBox);
			this->Controls->Add(this->NWSales);
			this->Controls->Add(this->lemmonSalesFileTextBox);
			this->Controls->Add(this->orderLocationLabel);
			this->Controls->Add(this->orderFileLocationtextBox);
			this->Controls->Add(this->orderFileButton);
			this->Controls->Add(this->errorMessage);
			this->Controls->Add(this->dateLabel);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->runOrder);
			this->Controls->Add(this->inventoryFileLabel);
			this->Controls->Add(this->nwInventoryFileTextBox);
			this->Controls->Add(this->nwSalesFileLabel);
			this->Controls->Add(this->nwSalesFileTextBox);
			this->Controls->Add(this->openInventoryFileBtn);
			this->Controls->Add(this->openSalesFileBtn);
			this->Name = L"Form1";
			this->Text = L"Good Vapes Order Tool v1.1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openSalesFileDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		nwSalesFileTextBox->Text = "";
	}
	private: System::Void openSalesFileDialog_FileOk_1(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		nwSalesFileTextBox->Text = openNWSalesFileDialog->FileName;
		/*if (inventoryFileNameTextBox->Text != "" && salesFileNameTextBox->Text != "" && storeComboBox->Text != "" && orderFileLocationtextBox->Text != "")
		{
			runOrder->Enabled = "TRUE";
		}*/
	}
	private: System::Void openSalesFileBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		openNWSalesFileDialog->ShowDialog();
		openLemmonSalesFileDialog->ShowDialog();
		if (nwSalesFileTextBox->Text != "" && nwInventoryFileTextBox->Text != "" && lemmonInvFileTextBox->Text != "" && lemmonSalesFileTextBox->Text != "" && orderFileLocationtextBox->Text != "")
		{
			runOrder->Enabled = "TRUE";
		}
	}
	private: System::Void openInventoryFileBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		openNWInventoryFileDialog->ShowDialog();
		openLemmonInvFileDialog->ShowDialog();
		if (nwSalesFileTextBox->Text != "" && nwInventoryFileTextBox->Text != "" && lemmonInvFileTextBox->Text != "" && lemmonSalesFileTextBox->Text != "" && orderFileLocationtextBox->Text != "")
		{
			runOrder->Enabled = "TRUE";
		}
	}
private: System::Void openInventoryFileDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	nwInventoryFileTextBox->Text = openNWInventoryFileDialog->FileName;
	/*inventoryFileNameTextBox->Text = openInventoryFileDialog->FileName;
	if (inventoryFileNameTextBox->Text != "" && salesFileNameTextBox->Text != "" && storeComboBox->Text != "" && orderFileLocationtextBox->Text != "")
	{
		runOrder->Enabled = "TRUE";
	}*/
}

private: System::Void orderFileButton_Click(System::Object^  sender, System::EventArgs^  e) {
	orderFolderBrowserDialog->ShowDialog();
	if (orderFolderBrowserDialog->SelectedPath != "")
	{
		orderFileLocationtextBox->Text = orderFolderBrowserDialog->SelectedPath;
	}
	if (nwSalesFileTextBox->Text != "" && nwInventoryFileTextBox->Text != "" && lemmonInvFileTextBox->Text != "" && lemmonSalesFileTextBox->Text != "" && orderFileLocationtextBox->Text != "")
	{
		runOrder->Enabled = "TRUE";
	}
	/*if (inventoryFileNameTextBox->Text != "" && salesFileNameTextBox->Text != "" && storeComboBox->Text != "" && orderFileLocationtextBox->Text != "")
	{
		runOrder->Enabled = "TRUE";
	}*/
}


private: System::Void runOrder_Click(System::Object^  sender, System::EventArgs^  e)
{
	// set the button to disabled so that the user will not run again

	runOrder->Enabled = false;

	// Objects for sales file
	System::String^ nwSalesFilename;
	nwSalesFilename = nwSalesFileTextBox->Text;
	System::IO::StreamReader^ nwSalesFile;

	// Objects for inventory file
	System::String^ nwInventoryFilename;
	nwInventoryFilename = nwInventoryFileTextBox->Text;
	System::IO::StreamReader^ nwInventoryFile;
	
	// Objects for sales file
	System::String^ lemmonSalesFilename;
	lemmonSalesFilename = lemmonSalesFileTextBox->Text;
	System::IO::StreamReader^ lemmonSalesFile;

	// Objects for inventory file
	System::String^ lemmonInventoryFilename;
	lemmonInventoryFilename = lemmonInvFileTextBox->Text;
	System::IO::StreamReader^ lemmonInventoryFile;

	C_BSTree nwSalesTree;
	C_BSTree nwInventoryTree;
	C_BSTree nwOrderTree;

	C_BSTree lemmonSalesTree;
	C_BSTree lemmonInventoryTree;
	C_BSTree lemmonOrderTree;

	C_BSTree fullOrderTree;

	// Objects for order file
	System::String^ nwOrderFilename;
	System::IO::StreamWriter^ nwOrderFile;
	nwOrderFilename = orderFileLocationtextBox->Text + "\\";

	// Objects for inventory control file
	System::String^ nwInventoryControlFilename;
	System::IO::StreamWriter^ nwInventoryControlFile;
	nwInventoryControlFilename = orderFileLocationtextBox->Text + "\\";

	// Objects for order file
	System::String^ lemmonOrderFilename;
	System::IO::StreamWriter^ lemmonOrderFile;
	lemmonOrderFilename = orderFileLocationtextBox->Text + "\\";

	// Objects for inventory control file
	System::String^ lemmonInventoryControlFilename;
	System::IO::StreamWriter^ lemmonInventoryControlFile;
	lemmonInventoryControlFilename = orderFileLocationtextBox->Text + "\\";

	// Build the filename
	nwOrderFilename = nwOrderFilename + "NW_ORDER " + dateTimePicker1->Value.ToString("D") + ".csv";
	nwInventoryControlFilename = nwInventoryControlFilename + "NW_Inventory_Control " + dateTimePicker1->Value.ToString("D") + ".csv";

	lemmonOrderFilename = lemmonOrderFilename + "LEM_ORDER " + dateTimePicker1->Value.ToString("D") + ".csv";
	lemmonInventoryControlFilename = lemmonInventoryControlFilename + "LEM_Inventory_Control " + dateTimePicker1->Value.ToString("D") + ".csv";

	/*if (storeComboBox->Text == "Northwest Highway")
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
	*/
	


	try
	{
		nwSalesFile = System::IO::File::OpenText(nwSalesFilename);
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
		nwInventoryFile = System::IO::File::OpenText(nwInventoryFilename);
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
	nwInventoryFile->ReadLine();

	while (!nwInventoryFile->EndOfStream)
	{
		currentLine = msclr::interop::marshal_as<std::string>(nwInventoryFile->ReadLine());
		holdRecord.setItemDescription(getField(currentLine, 2));
		holdRecord.setAlternateSKU(getField(currentLine, 3));
		if (getField(currentLine, 8) == "")
		{
			holdRecord.setCost(0);
		}
		else
		{
			holdRecord.setCost(roundf(stof(getField(currentLine, 8)) * 100) / 100);
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
		nwInventoryTree.addNode(holdRecord);
		lineCount++;
	}

	nwInventoryFile->Close();

	// clear out the currentLine to be sure we aren't getting overflow data
	currentLine = "";

	//clear out the holdInvRecord to be sure we aren't getting overflow data
	holdRecord.clear();

	//clear out the header items
	nwSalesFile->ReadLine();
	errorMessage->Text = "Loading nwSales!";

	while (!nwSalesFile->EndOfStream)
	{
		currentLine = msclr::interop::marshal_as<std::string>(nwSalesFile->ReadLine());
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
		nwSalesTree.addNode(holdRecord);
		lineCount++;
	}

	//string errorMessageText;

	//errorMessage->Text = "Finished adding items to nwInventory";

	//Debugging message
	//errorMessage->Text = nwSalesFile->ReadLine();

	nwSalesFile->Close();

	nwSalesTree.compileList(nwInventoryTree, nwOrderTree, nwSalesTree.Root());



	nwOrderFile = gcnew System::IO::StreamWriter(nwOrderFilename);
	nwOrderFile->WriteLine("SKU,ITEM DESCRIPTION, QTY ORDERED, COST, TOTAL COST");
	nwOrderTree.saveInorderCSV(nwOrderTree.Root(), nwOrderFile);

	nwOrderFile->Close();

	nwInventoryControlFile = gcnew System::IO::StreamWriter(nwInventoryControlFilename);
	nwInventoryControlFile->WriteLine("SKU,ITEM DESCRIPTION, INVENTORY QTY");

	nwInventoryTree.compileCheckList(nwInventoryTree.Root(), nwInventoryControlFile);

	nwInventoryControlFile->Close();



	// Build the Lemmon lists

	try
	{
		lemmonSalesFile = System::IO::File::OpenText(lemmonSalesFilename);
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
		lemmonInventoryFile = System::IO::File::OpenText(lemmonInventoryFilename);
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

	lemmonInventoryFile->ReadLine();

	while (!lemmonInventoryFile->EndOfStream)
	{
		currentLine = msclr::interop::marshal_as<std::string>(lemmonInventoryFile->ReadLine());
		holdRecord.setItemDescription(getField(currentLine, 2));
		holdRecord.setAlternateSKU(getField(currentLine, 3));
		if (getField(currentLine, 8) == "")
		{
			holdRecord.setCost(0);
		}
		else
		{
			holdRecord.setCost(roundf(stof(getField(currentLine, 8))* 100)/100);
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
		lemmonInventoryTree.addNode(holdRecord);
		lineCount++;
	}

	lemmonInventoryFile->Close();

	// clear out the currentLine to be sure we aren't getting overflow data
	currentLine = "";

	//clear out the holdInvRecord to be sure we aren't getting overflow data
	holdRecord.clear();

	//clear out the header items
	lemmonSalesFile->ReadLine();
	errorMessage->Text = "Loading lemmonSales!";

	while (!lemmonSalesFile->EndOfStream)
	{
		currentLine = msclr::interop::marshal_as<std::string>(lemmonSalesFile->ReadLine());
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
		lemmonSalesTree.addNode(holdRecord);
		lineCount++;
	}

	//string errorMessageText;

	//errorMessage->Text = "Finished adding items to lemmonInventory";

	//Debugging message
	//errorMessage->Text = lemmonSalesFile->ReadLine();

	lemmonSalesFile->Close();

	lemmonSalesTree.compileList(lemmonInventoryTree, lemmonOrderTree, lemmonSalesTree.Root());


	lemmonOrderFile = gcnew System::IO::StreamWriter(lemmonOrderFilename);
	lemmonOrderFile->WriteLine("SKU,ITEM DESCRIPTION, QTY ORDERED, COST, TOTAL COST");
	lemmonOrderTree.saveInorderCSV(lemmonOrderTree.Root(), lemmonOrderFile);

	lemmonOrderFile->Close();

	lemmonInventoryControlFile = gcnew System::IO::StreamWriter(lemmonInventoryControlFilename);
	lemmonInventoryControlFile->WriteLine("SKU,ITEM DESCRIPTION, INVENTORY QTY");

	lemmonInventoryTree.compileCheckList(lemmonInventoryTree.Root(), lemmonInventoryControlFile);

	lemmonInventoryControlFile->Close();
	
	nwOrderTree.fillDuplicates(lemmonOrderTree, lemmonOrderTree.Root());
	lemmonOrderTree.fillDuplicates(nwOrderTree, nwOrderTree.Root());

	System::IO::StreamWriter^ testFile;
	System::String^ testFilename = orderFileLocationtextBox->Text + "\\Full Order " + dateTimePicker1->Value.ToString("D") + ".csv";
	testFile = gcnew System::IO::StreamWriter(testFilename);

	testFile->WriteLine("SKU,ITEM DESC, NW QTY, LEM QTY, COST, TOTAL COST");

	nwOrderTree.saveInorderCSV(nwOrderTree.Root(), lemmonOrderTree, testFile);
	testFile->Close();

	errorMessage->Text = "Complete!";
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


private: System::Void openLemmonSalesFileDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	lemmonSalesFileTextBox->Text = openLemmonSalesFileDialog->FileName;
}
private: System::Void openLemmonInvFileDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	lemmonInvFileTextBox->Text = openLemmonInvFileDialog->FileName;
}
};
}

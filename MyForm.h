#pragma once
#include <stdio.h>
#include <stdlib.h>
namespace test 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ but1;
	private: System::Windows::Forms::Button^ but3;
	protected:





	private: System::Windows::Forms::Button^ but2;
	private: System::Windows::Forms::Button^ but6;


	private: System::Windows::Forms::Button^ but5;

	private: System::Windows::Forms::Button^ but4;
	private: System::Windows::Forms::Button^ but7;
	private: System::Windows::Forms::Button^ but8;
	private: System::Windows::Forms::Button^ but9;
	private: System::Windows::Forms::Button^ but0;
	private: System::Windows::Forms::Button^ but11;
	private: System::Windows::Forms::Button^ but13;





	private: System::Windows::Forms::Button^ but12;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ but14;
	private: System::Windows::Forms::Button^ but15;
	private: System::Windows::Forms::Button^ but16;
	private: System::Windows::Forms::Button^ but17;




	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->but1 = (gcnew System::Windows::Forms::Button());
			this->but3 = (gcnew System::Windows::Forms::Button());
			this->but2 = (gcnew System::Windows::Forms::Button());
			this->but6 = (gcnew System::Windows::Forms::Button());
			this->but5 = (gcnew System::Windows::Forms::Button());
			this->but4 = (gcnew System::Windows::Forms::Button());
			this->but7 = (gcnew System::Windows::Forms::Button());
			this->but8 = (gcnew System::Windows::Forms::Button());
			this->but9 = (gcnew System::Windows::Forms::Button());
			this->but0 = (gcnew System::Windows::Forms::Button());
			this->but11 = (gcnew System::Windows::Forms::Button());
			this->but13 = (gcnew System::Windows::Forms::Button());
			this->but12 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->but14 = (gcnew System::Windows::Forms::Button());
			this->but15 = (gcnew System::Windows::Forms::Button());
			this->but16 = (gcnew System::Windows::Forms::Button());
			this->but17 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// but1
			// 
			this->but1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but1->Location = System::Drawing::Point(12, 92);
			this->but1->Name = L"but1";
			this->but1->Size = System::Drawing::Size(36, 36);
			this->but1->TabIndex = 3;
			this->but1->Text = L"1";
			this->but1->UseVisualStyleBackColor = true;
			this->but1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// but3
			// 
			this->but3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but3->Location = System::Drawing::Point(96, 92);
			this->but3->Name = L"but3";
			this->but3->Size = System::Drawing::Size(36, 36);
			this->but3->TabIndex = 4;
			this->but3->Text = L"3";
			this->but3->UseVisualStyleBackColor = true;
			this->but3->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// but2
			// 
			this->but2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but2->Location = System::Drawing::Point(54, 92);
			this->but2->Name = L"but2";
			this->but2->Size = System::Drawing::Size(36, 36);
			this->but2->TabIndex = 5;
			this->but2->Text = L"2";
			this->but2->UseVisualStyleBackColor = true;
			this->but2->Click += gcnew System::EventHandler(this, &MyForm::but2_Click);
			// 
			// but6
			// 
			this->but6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but6->Location = System::Drawing::Point(96, 136);
			this->but6->Name = L"but6";
			this->but6->Size = System::Drawing::Size(36, 36);
			this->but6->TabIndex = 6;
			this->but6->Text = L"6";
			this->but6->UseVisualStyleBackColor = true;
			this->but6->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// but5
			// 
			this->but5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but5->Location = System::Drawing::Point(54, 136);
			this->but5->Name = L"but5";
			this->but5->Size = System::Drawing::Size(36, 36);
			this->but5->TabIndex = 7;
			this->but5->Text = L"5";
			this->but5->UseVisualStyleBackColor = true;
			this->but5->Click += gcnew System::EventHandler(this, &MyForm::but5_Click);
			// 
			// but4
			// 
			this->but4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but4->Location = System::Drawing::Point(12, 136);
			this->but4->Name = L"but4";
			this->but4->Size = System::Drawing::Size(36, 36);
			this->but4->TabIndex = 8;
			this->but4->Text = L"4";
			this->but4->UseVisualStyleBackColor = true;
			this->but4->Click += gcnew System::EventHandler(this, &MyForm::but4_Click);
			// 
			// but7
			// 
			this->but7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but7->Location = System::Drawing::Point(12, 178);
			this->but7->Name = L"but7";
			this->but7->Size = System::Drawing::Size(36, 36);
			this->but7->TabIndex = 9;
			this->but7->Text = L"7";
			this->but7->UseVisualStyleBackColor = true;
			this->but7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// but8
			// 
			this->but8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but8->Location = System::Drawing::Point(54, 178);
			this->but8->Name = L"but8";
			this->but8->Size = System::Drawing::Size(36, 36);
			this->but8->TabIndex = 10;
			this->but8->Text = L"8";
			this->but8->UseVisualStyleBackColor = true;
			this->but8->Click += gcnew System::EventHandler(this, &MyForm::but8_Click);
			// 
			// but9
			// 
			this->but9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but9->Location = System::Drawing::Point(96, 178);
			this->but9->Name = L"but9";
			this->but9->Size = System::Drawing::Size(36, 36);
			this->but9->TabIndex = 11;
			this->but9->Text = L"9";
			this->but9->UseVisualStyleBackColor = true;
			this->but9->Click += gcnew System::EventHandler(this, &MyForm::but9_Click);
			// 
			// but0
			// 
			this->but0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but0->Location = System::Drawing::Point(12, 219);
			this->but0->Name = L"but0";
			this->but0->Size = System::Drawing::Size(78, 37);
			this->but0->TabIndex = 12;
			this->but0->Text = L"0";
			this->but0->UseVisualStyleBackColor = true;
			this->but0->Click += gcnew System::EventHandler(this, &MyForm::but0_Click);
			// 
			// but11
			// 
			this->but11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but11->Location = System::Drawing::Point(96, 220);
			this->but11->Name = L"but11";
			this->but11->Size = System::Drawing::Size(36, 36);
			this->but11->TabIndex = 13;
			this->but11->Text = L".";
			this->but11->UseVisualStyleBackColor = true;
			this->but11->Click += gcnew System::EventHandler(this, &MyForm::but11_Click);
			// 
			// but13
			// 
			this->but13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but13->Location = System::Drawing::Point(154, 178);
			this->but13->Name = L"but13";
			this->but13->Size = System::Drawing::Size(46, 36);
			this->but13->TabIndex = 17;
			this->but13->Text = L"/";
			this->but13->UseCompatibleTextRendering = true;
			this->but13->UseVisualStyleBackColor = true;
			this->but13->Click += gcnew System::EventHandler(this, &MyForm::but13_Click);
			// 
			// but12
			// 
			this->but12->Cursor = System::Windows::Forms::Cursors::Default;
			this->but12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but12->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->but12->ImageKey = L"(отсутствует)";
			this->but12->Location = System::Drawing::Point(142, 220);
			this->but12->Name = L"but12";
			this->but12->Size = System::Drawing::Size(58, 37);
			this->but12->TabIndex = 18;
			this->but12->Text = L"=";
			this->but12->UseCompatibleTextRendering = true;
			this->but12->UseVisualStyleBackColor = true;
			this->but12->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox1->Location = System::Drawing::Point(12, 29);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 40);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(206)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 17);
			this->label1->TabIndex = 20;
			this->label1->Text = L"quantum computer";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// but14
			// 
			this->but14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but14->Location = System::Drawing::Point(154, 136);
			this->but14->Name = L"but14";
			this->but14->Size = System::Drawing::Size(46, 36);
			this->but14->TabIndex = 21;
			this->but14->Text = L"*";
			this->but14->UseVisualStyleBackColor = true;
			this->but14->Click += gcnew System::EventHandler(this, &MyForm::but14_Click);
			// 
			// but15
			// 
			this->but15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but15->Location = System::Drawing::Point(154, 94);
			this->but15->Name = L"but15";
			this->but15->Size = System::Drawing::Size(46, 36);
			this->but15->TabIndex = 22;
			this->but15->Text = L"-";
			this->but15->UseCompatibleTextRendering = true;
			this->but15->UseVisualStyleBackColor = true;
			this->but15->Click += gcnew System::EventHandler(this, &MyForm::but15_Click);
			// 
			// but16
			// 
			this->but16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but16->Location = System::Drawing::Point(154, 52);
			this->but16->Name = L"but16";
			this->but16->Size = System::Drawing::Size(46, 36);
			this->but16->TabIndex = 23;
			this->but16->Text = L"+";
			this->but16->UseCompatibleTextRendering = true;
			this->but16->UseVisualStyleBackColor = true;
			this->but16->Click += gcnew System::EventHandler(this, &MyForm::but16_Click);
			// 
			// but17
			// 
			this->but17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but17->Location = System::Drawing::Point(151, 12);
			this->but17->Name = L"but17";
			this->but17->Size = System::Drawing::Size(49, 34);
			this->but17->TabIndex = 24;
			this->but17->Text = L"AC";
			this->but17->UseVisualStyleBackColor = true;
			this->but17->Click += gcnew System::EventHandler(this, &MyForm::but17_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(209, 274);
			this->Controls->Add(this->but17);
			this->Controls->Add(this->but16);
			this->Controls->Add(this->but15);
			this->Controls->Add(this->but14);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->but12);
			this->Controls->Add(this->but13);
			this->Controls->Add(this->but11);
			this->Controls->Add(this->but0);
			this->Controls->Add(this->but9);
			this->Controls->Add(this->but8);
			this->Controls->Add(this->but7);
			this->Controls->Add(this->but4);
			this->Controls->Add(this->but5);
			this->Controls->Add(this->but6);
			this->Controls->Add(this->but2);
			this->Controls->Add(this->but3);
			this->Controls->Add(this->but1);
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double m_numberOne = 0, m_numberTwo = 0, result = 0;
		int m_operator = 0;



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		                     || (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))  
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "1");
}



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		                     || (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))            
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "3");
}



private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		                     || (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "6");
}



private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		                     || (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "7");
}



private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text->Length != 0 && m_numberOne != 0 && m_operator !=0)
	{
		m_numberTwo = System::Convert::ToDouble(textBox1->Text);
		 
		if (m_operator == 1)result = m_numberOne + m_numberTwo;
		if (m_operator == 2)result = m_numberOne - m_numberTwo;
		if (m_operator == 3)result = m_numberOne * m_numberTwo;
		if (m_operator == 4)result = m_numberOne / m_numberTwo;

		textBox1->Text = System::Convert::ToString(result);
		m_numberOne = 0;
		m_numberTwo = 0;
		result = 0;
	}
	else
	{
		textBox1->Text = nullptr;
		m_numberOne = 0;
		m_numberTwo = 0;
		result = 0;
		m_operator = 0;
		textBox1->Text = System::Convert::ToString(textBox1->Text);
	}
}



private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}



private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {}



private: System::Void but2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		                     || (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
	textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "2");
}



private: System::Void but4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		                     || (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "4");
}



private: System::Void but5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		                     || (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "5");
}



private: System::Void but8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		                     || (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "8");
}



private: System::Void but9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		                     || (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "9");
}



private: System::Void but0_Click(System::Object^ sender, System::EventArgs^ e) 
{
	 
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		                    || (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "0");
}



private: System::Void but11_Click(System::Object^ sender, System::EventArgs^ e) 
{
	bool m_flag = false;
	for (int i = 0; i<(textBox1->Text->Length); i++)
	{
		if (textBox1->Text[i] == ',')
			m_flag = true;
	}
			
	if ((textBox1->Text->Length > 0 && textBox1->Text->Length < 6 &&  m_flag == false))
	{
		if (textBox1->Text->Length == 1 && textBox1->Text[0] == '-')
			textBox1->Text = System::Convert::ToString(textBox1->Text);
			
		else textBox1->Text = System::Convert::ToString(textBox1->Text + ",");
	}
	else textBox1->Text = System::Convert::ToString(textBox1->Text);
}



private: System::Void but17_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text = nullptr;
	m_numberOne = 0;
	m_numberTwo = 0;
	textBox1->Text = System::Convert::ToString(textBox1->Text);
}

	private: System::Void but16_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text->Length != 0)
		{
			if (m_numberOne == 0)
			{
				m_numberOne = System::Convert::ToDouble(textBox1->Text);
				m_operator = 1;
				textBox1->Text = nullptr;
				textBox1->Text = System::Convert::ToString(textBox1->Text);
			}
			else
			{
				m_numberTwo = System::Convert::ToDouble(textBox1->Text);
				result = m_numberTwo + m_numberOne;
				textBox1->Text = System::Convert::ToString(result);
				m_numberOne = 0;
				m_numberTwo = 0;
			}

		}
		else
		{
			textBox1->Text = nullptr;
			m_numberOne = 0;
			m_numberTwo = 0;
			m_operator = 0;
			textBox1->Text = System::Convert::ToString(textBox1->Text);
		}
	}



private: System::Void but15_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text->Length == 0)
		textBox1->Text = System::Convert::ToString(textBox1->Text + "-");
	else
	{
		if (textBox1->Text->Length != 0)
		{
			if (m_numberOne == 0)
			{
				m_numberOne = System::Convert::ToDouble(textBox1->Text);
				m_operator = 2;
				textBox1->Text = nullptr;
				textBox1->Text = System::Convert::ToString(textBox1->Text);
			}
			else
			{
				m_numberTwo = System::Convert::ToDouble(textBox1->Text);
				result = m_numberOne - m_numberTwo;
				textBox1->Text = System::Convert::ToString(result);
				m_numberOne = 0;
				m_numberTwo = 0;
			}

		}
		else
		{
			textBox1->Text = nullptr;
			m_numberOne = 0;
			m_numberTwo = 0;
			m_operator = 0;
			textBox1->Text = System::Convert::ToString(textBox1->Text);
		}
	}
}



private: System::Void but14_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text->Length != 0)
	{
		if (m_numberOne == 0)
		{
			m_numberOne = System::Convert::ToDouble(textBox1->Text);
			m_operator = 3;
			textBox1->Text = nullptr;
			textBox1->Text = System::Convert::ToString(textBox1->Text);
		}
		else
		{
			m_numberTwo = System::Convert::ToDouble(textBox1->Text);
			result = m_numberTwo * m_numberOne;
			textBox1->Text = System::Convert::ToString(result);
			m_numberOne = 0;
			m_numberTwo = 0;
		}

	}
	else
	{
		textBox1->Text = nullptr;
		m_numberOne = 0;
		m_numberTwo = 0;
		m_operator = 0;
		textBox1->Text = System::Convert::ToString(textBox1->Text);
	}
}



private: System::Void but13_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text->Length != 0)
	{
		if (m_numberOne == 0)
		{
			m_numberOne = System::Convert::ToDouble(textBox1->Text);
			m_operator = 4;
			textBox1->Text = nullptr;
			textBox1->Text = System::Convert::ToString(textBox1->Text);
		}
		else
		{
			m_numberTwo = System::Convert::ToDouble(textBox1->Text);
			result = m_numberOne / m_numberTwo;
			textBox1->Text = System::Convert::ToString(result);
			m_numberOne = 0;
			m_numberTwo = 0;
			 
		}

	}
	else
	{
		textBox1->Text = nullptr;
		m_numberOne = 0;
		m_numberTwo = 0;
		m_operator = 0;
		textBox1->Text = System::Convert::ToString(textBox1->Text);
	}
}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}

};
}

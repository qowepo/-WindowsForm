#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    test::MyForm form;  
    Application::Run(% form);
}



double m_numberOne = 0, m_numberTwo = 0, result = 0;
int m_operator = 0;


System::Void test::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		|| (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "1");
}


System::Void test::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		|| (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "3");
}


System::Void test::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		|| (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "6");
}


System::Void test::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		|| (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "7");
}


System::Void test::MyForm::button16_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text->Length != 0 && m_numberOne != 0 && m_operator != 0)
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


System::Void test::MyForm::but2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		|| (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "2");
}


System::Void test::MyForm::but5_Click(System::Object^ sender, System::EventArgs^ e)
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		|| (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "5");
}


System::Void test::MyForm::but8_Click(System::Object^ sender, System::EventArgs^ e)
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		|| (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "8");
}


System::Void test::MyForm::but9_Click(System::Object^ sender, System::EventArgs^ e)
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		|| (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "9");
}


System::Void test::MyForm::but0_Click(System::Object^ sender, System::EventArgs^ e)
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		|| (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "0");
}

System::Void test::MyForm::but11_Click(System::Object^ sender, System::EventArgs^ e)
{
	bool m_flag = false;
	for (int i = 0; i < (textBox1->Text->Length); i++)
	{
		if (textBox1->Text[i] == ',')
			m_flag = true;
	}

	if ((textBox1->Text->Length > 0 && textBox1->Text->Length < 6 && m_flag == false))
	{
		if (textBox1->Text->Length == 1 && textBox1->Text[0] == '-')
			textBox1->Text = System::Convert::ToString(textBox1->Text);

		else textBox1->Text = System::Convert::ToString(textBox1->Text + ",");
	}
	else textBox1->Text = System::Convert::ToString(textBox1->Text);
}


System::Void test::MyForm::but17_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = nullptr;
	m_numberOne = 0;
	m_numberTwo = 0;
	textBox1->Text = System::Convert::ToString(textBox1->Text);
}


System::Void test::MyForm::but16_Click(System::Object^ sender, System::EventArgs^ e)
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


System::Void test::MyForm::but15_Click(System::Object^ sender, System::EventArgs^ e)
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


System::Void test::MyForm::but14_Click(System::Object^ sender, System::EventArgs^ e)
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


System::Void test::MyForm::but13_Click(System::Object^ sender, System::EventArgs^ e)
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


System::Void test::MyForm::but4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if ((textBox1->Text->Length) >= 7 || (textBox1->Text->Length == 1 && textBox1->Text[0] == '0')
		|| (textBox1->Text->Length == 2 && textBox1->Text[0] == '-' && textBox1->Text[1] == '0'))
		textBox1->Text = System::Convert::ToString(textBox1->Text);

	else textBox1->Text = System::Convert::ToString(textBox1->Text + "4");
}

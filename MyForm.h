#pragma once
#include <ctype.h>

namespace winformstest {

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
	private: System::Windows::Forms::Label^ iolabel;
	private: System::Windows::Forms::Button^ clearButton;
	private: System::Windows::Forms::Button^ changeSign;
	private: System::Windows::Forms::Button^ division;
	private: System::Windows::Forms::Button^ getPercentOf;
	private: System::Windows::Forms::Button^ multiplication;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ getValue;
	private: System::Windows::Forms::Button^ point;
	private: System::Windows::Forms::Button^ button0;
	private: double _firstNumber;
	private: char _userAction = ' ';
	private: bool hasToRepeat = false;
	private: System::String^ firstNumber = "";
	private: System::String^ secondNumber = "";
	private: System::Windows::Forms::Label^ storyOutput;
		   /// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->iolabel = (gcnew System::Windows::Forms::Label());
			   this->clearButton = (gcnew System::Windows::Forms::Button());
			   this->changeSign = (gcnew System::Windows::Forms::Button());
			   this->division = (gcnew System::Windows::Forms::Button());
			   this->getPercentOf = (gcnew System::Windows::Forms::Button());
			   this->multiplication = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->minus = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->plus = (gcnew System::Windows::Forms::Button());
			   this->button9 = (gcnew System::Windows::Forms::Button());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->getValue = (gcnew System::Windows::Forms::Button());
			   this->point = (gcnew System::Windows::Forms::Button());
			   this->button0 = (gcnew System::Windows::Forms::Button());
			   this->storyOutput = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // iolabel
			   // 
			   this->iolabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->iolabel->Location = System::Drawing::Point(12, 32);
			   this->iolabel->Name = L"iolabel";
			   this->iolabel->Size = System::Drawing::Size(258, 57);
			   this->iolabel->TabIndex = 16;
			   this->iolabel->Text = L"0";
			   this->iolabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // clearButton
			   // 
			   this->clearButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->clearButton->Location = System::Drawing::Point(11, 92);
			   this->clearButton->Name = L"clearButton";
			   this->clearButton->Size = System::Drawing::Size(60, 60);
			   this->clearButton->TabIndex = 17;
			   this->clearButton->Text = L"AC";
			   this->clearButton->UseVisualStyleBackColor = true;
			   this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
			   // 
			   // changeSign
			   // 
			   this->changeSign->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->changeSign->Location = System::Drawing::Point(77, 92);
			   this->changeSign->Name = L"changeSign";
			   this->changeSign->Size = System::Drawing::Size(60, 60);
			   this->changeSign->TabIndex = 21;
			   this->changeSign->Text = L"+/-";
			   this->changeSign->UseVisualStyleBackColor = true;
			   this->changeSign->Click += gcnew System::EventHandler(this, &MyForm::changeSign_Click);
			   // 
			   // division
			   // 
			   this->division->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->division->FlatAppearance->BorderSize = 0;
			   this->division->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->division->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->division->Location = System::Drawing::Point(210, 92);
			   this->division->Name = L"division";
			   this->division->Size = System::Drawing::Size(60, 60);
			   this->division->TabIndex = 23;
			   this->division->Text = L"/";
			   this->division->UseVisualStyleBackColor = false;
			   this->division->Click += gcnew System::EventHandler(this, &MyForm::division_Click);
			   // 
			   // getPercentOf
			   // 
			   this->getPercentOf->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->getPercentOf->Location = System::Drawing::Point(144, 92);
			   this->getPercentOf->Name = L"getPercentOf";
			   this->getPercentOf->Size = System::Drawing::Size(60, 60);
			   this->getPercentOf->TabIndex = 22;
			   this->getPercentOf->Text = L"%";
			   this->getPercentOf->UseVisualStyleBackColor = true;
			   this->getPercentOf->Click += gcnew System::EventHandler(this, &MyForm::getPercentOf_Click);
			   // 
			   // multiplication
			   // 
			   this->multiplication->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->multiplication->FlatAppearance->BorderSize = 0;
			   this->multiplication->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->multiplication->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->multiplication->Location = System::Drawing::Point(210, 158);
			   this->multiplication->Name = L"multiplication";
			   this->multiplication->Size = System::Drawing::Size(60, 60);
			   this->multiplication->TabIndex = 27;
			   this->multiplication->Text = L"*";
			   this->multiplication->UseVisualStyleBackColor = false;
			   this->multiplication->Click += gcnew System::EventHandler(this, &MyForm::multiplication_Click);
			   // 
			   // button3
			   // 
			   this->button3->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button3->Location = System::Drawing::Point(144, 158);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(60, 60);
			   this->button3->TabIndex = 26;
			   this->button3->Text = L"3";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::_numberButtonClicked);
			   // 
			   // button2
			   // 
			   this->button2->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button2->Location = System::Drawing::Point(77, 158);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(60, 60);
			   this->button2->TabIndex = 25;
			   this->button2->Text = L"2";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::_numberButtonClicked);
			   // 
			   // button1
			   // 
			   this->button1->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button1->Location = System::Drawing::Point(11, 158);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(60, 60);
			   this->button1->TabIndex = 24;
			   this->button1->Text = L"1";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::_numberButtonClicked);
			   // 
			   // minus
			   // 
			   this->minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->minus->FlatAppearance->BorderSize = 0;
			   this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->minus->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->minus->Location = System::Drawing::Point(210, 224);
			   this->minus->Name = L"minus";
			   this->minus->Size = System::Drawing::Size(60, 60);
			   this->minus->TabIndex = 31;
			   this->minus->Text = L"-";
			   this->minus->UseVisualStyleBackColor = false;
			   this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			   // 
			   // button6
			   // 
			   this->button6->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button6->Location = System::Drawing::Point(144, 224);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(60, 60);
			   this->button6->TabIndex = 30;
			   this->button6->Text = L"6";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &MyForm::_numberButtonClicked);
			   // 
			   // button5
			   // 
			   this->button5->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button5->Location = System::Drawing::Point(77, 224);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(60, 60);
			   this->button5->TabIndex = 29;
			   this->button5->Text = L"5";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &MyForm::_numberButtonClicked);
			   // 
			   // button4
			   // 
			   this->button4->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button4->Location = System::Drawing::Point(11, 224);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(60, 60);
			   this->button4->TabIndex = 28;
			   this->button4->Text = L"4";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::_numberButtonClicked);
			   // 
			   // plus
			   // 
			   this->plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->plus->FlatAppearance->BorderSize = 0;
			   this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->plus->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->plus->Location = System::Drawing::Point(210, 290);
			   this->plus->Name = L"plus";
			   this->plus->Size = System::Drawing::Size(60, 60);
			   this->plus->TabIndex = 35;
			   this->plus->Text = L"+";
			   this->plus->UseVisualStyleBackColor = false;
			   this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			   // 
			   // button9
			   // 
			   this->button9->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button9->Location = System::Drawing::Point(144, 290);
			   this->button9->Name = L"button9";
			   this->button9->Size = System::Drawing::Size(60, 60);
			   this->button9->TabIndex = 34;
			   this->button9->Text = L"9";
			   this->button9->UseVisualStyleBackColor = true;
			   this->button9->Click += gcnew System::EventHandler(this, &MyForm::_numberButtonClicked);
			   // 
			   // button8
			   // 
			   this->button8->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button8->Location = System::Drawing::Point(77, 290);
			   this->button8->Name = L"button8";
			   this->button8->Size = System::Drawing::Size(60, 60);
			   this->button8->TabIndex = 33;
			   this->button8->Text = L"8";
			   this->button8->UseVisualStyleBackColor = true;
			   this->button8->Click += gcnew System::EventHandler(this, &MyForm::_numberButtonClicked);
			   // 
			   // button7
			   // 
			   this->button7->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button7->Location = System::Drawing::Point(11, 290);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(60, 60);
			   this->button7->TabIndex = 32;
			   this->button7->Text = L"7";
			   this->button7->UseVisualStyleBackColor = true;
			   this->button7->Click += gcnew System::EventHandler(this, &MyForm::_numberButtonClicked);
			   // 
			   // getValue
			   // 
			   this->getValue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->getValue->FlatAppearance->BorderSize = 0;
			   this->getValue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->getValue->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->getValue->Location = System::Drawing::Point(210, 356);
			   this->getValue->Name = L"getValue";
			   this->getValue->Size = System::Drawing::Size(60, 60);
			   this->getValue->TabIndex = 39;
			   this->getValue->Text = L"=";
			   this->getValue->UseVisualStyleBackColor = false;
			   this->getValue->Click += gcnew System::EventHandler(this, &MyForm::getValue_Click);
			   // 
			   // point
			   // 
			   this->point->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->point->Location = System::Drawing::Point(144, 356);
			   this->point->Name = L"point";
			   this->point->Size = System::Drawing::Size(60, 60);
			   this->point->TabIndex = 38;
			   this->point->Text = L",";
			   this->point->UseVisualStyleBackColor = true;
			   this->point->Click += gcnew System::EventHandler(this, &MyForm::point_Click);
			   // 
			   // button0
			   // 
			   this->button0->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button0->Location = System::Drawing::Point(11, 356);
			   this->button0->Name = L"button0";
			   this->button0->Size = System::Drawing::Size(126, 60);
			   this->button0->TabIndex = 36;
			   this->button0->Text = L"0";
			   this->button0->UseVisualStyleBackColor = true;
			   this->button0->Click += gcnew System::EventHandler(this, &MyForm::_numberButtonClicked);
			   // 
			   // storyOutput
			   // 
			   this->storyOutput->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->storyOutput->ForeColor = System::Drawing::SystemColors::ControlDark;
			   this->storyOutput->Location = System::Drawing::Point(92, 19);
			   this->storyOutput->Name = L"storyOutput";
			   this->storyOutput->Size = System::Drawing::Size(177, 23);
			   this->storyOutput->TabIndex = 40;
			   this->storyOutput->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(281, 432);
			   this->Controls->Add(this->storyOutput);
			   this->Controls->Add(this->getValue);
			   this->Controls->Add(this->point);
			   this->Controls->Add(this->button0);
			   this->Controls->Add(this->plus);
			   this->Controls->Add(this->button9);
			   this->Controls->Add(this->button8);
			   this->Controls->Add(this->button7);
			   this->Controls->Add(this->minus);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->multiplication);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->division);
			   this->Controls->Add(this->getPercentOf);
			   this->Controls->Add(this->changeSign);
			   this->Controls->Add(this->clearButton);
			   this->Controls->Add(this->iolabel);
			   this->Name = L"MyForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"MyForm";
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private:
		System::Void _updateStoryOutputLabel()
		{
			String^ actionString = gcnew String(this->_userAction, 1);
			this->storyOutput->Text = this->firstNumber + " " + actionString + " " + this->secondNumber;
		}
	private:
		System::Void _updateNumberInStoryOutput(System::String^ number)
		{
			if (this->storyOutput->Text->Length == 0 || this->_userAction == ' ')
			{
				this->firstNumber = number;
				this->_updateStoryOutputLabel();
			}
			else
			{
				this->secondNumber = number;
				this->_updateStoryOutputLabel();
			}
		}
	private:
		System::Void _clearStoryOutput()
		{
			this->storyOutput->Text = "";
			this->firstNumber = "";
			this->secondNumber = "";
		}
	private:
		System::Void _numberButtonClicked(System::Object^ sender, System::EventArgs^ e)
		{
			const unsigned short labelLength = 10;

			Button^ button = safe_cast<Button^>(sender);

			if (this->iolabel->Text == "0" || this->hasToRepeat)
			{
				if (this->hasToRepeat)
				{
					this->_clearStoryOutput();
				}

				this->iolabel->Text = button->Text;
				this->hasToRepeat = false;
			}
			else if (this->iolabel->Text->Length < labelLength)
			{
				this->iolabel->Text += button->Text;
			}

			this->_updateNumberInStoryOutput(this->iolabel->Text);
		}
	private:
		System::Void plus_Click(System::Object^ sender, System::EventArgs^ e)
		{
			_takeAction('+');
		}
	private:
		System::Void minus_Click(System::Object^ sender, System::EventArgs^ e)
		{
			_takeAction('-');
		}
	private:
		System::Void multiplication_Click(System::Object^ sender, System::EventArgs^ e)
		{
			_takeAction('*');
		}
	private:
		System::Void division_Click(System::Object^ sender, System::EventArgs^ e)
		{
			_takeAction('/');
		}
	private:
		System::Void _takeAction(char action)
		{
			if (this->_userAction == ' ')
			{
				this->iolabel->Text += this->iolabel->Text->Contains(",") ? "0" : "";

				if (this->secondNumber != "")
				{
					this->_clearStoryOutput();
					this->_updateNumberInStoryOutput(this->iolabel->Text);
					this->hasToRepeat = false;
				}

				this->_firstNumber = Convert::ToDouble(this->iolabel->Text);
				this->_userAction = action;
				this->_updateStoryOutputLabel();
				this->iolabel->Text = "0";
			}
			else
			{
				this->_userAction = action;
				this->_updateNumberInStoryOutput(this->iolabel->Text);
			}
		}
	private:
		System::Void getValue_Click(System::Object^ sender, System::EventArgs^ e)
		{
			double resultValue{};
			double secondNumber = Convert::ToDouble(this->iolabel->Text);

			switch (this->_userAction)
			{
			case '+':
				resultValue = this->_firstNumber + secondNumber;
				break;
			case '-':
				resultValue = this->_firstNumber - secondNumber;
				break;
			case '*':
				resultValue = this->_firstNumber * secondNumber;
				break;
			case '/':
				resultValue = this->_firstNumber / secondNumber;
				break;
			default:
				resultValue = secondNumber;
			}

			this->iolabel->Text = Convert::ToString(resultValue);

			if (!this->storyOutput->Text->Contains("="))
			{
				this->storyOutput->Text += " =";
			}
			else
			{
				this->storyOutput->Text = this->iolabel->Text + " =";
			}

			this->hasToRepeat = true;
			this->_userAction = ' ';
		}
	private:
		System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->iolabel->Text = "0";
			this->_clearStoryOutput();
			this->hasToRepeat = false;
			this->_firstNumber = 0;
		}
	private:
		System::Void changeSign_Click(System::Object^ sender, System::EventArgs^ e)
		{
			char firstChar = this->iolabel->Text[0];

			if (firstChar == '-')
			{
				this->iolabel->Text = this->iolabel->Text->Substring(1);
			}
			else if (firstChar != '0')
			{
				this->iolabel->Text = "-" + this->iolabel->Text;
			}

			if (hasToRepeat) 
			{
				hasToRepeat = false;
				this->_clearStoryOutput();
			}

			this->_updateNumberInStoryOutput(this->iolabel->Text);
		}
	private:
		System::Void point_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->iolabel->Text += this->iolabel->Text->Contains(",") ? "" : ",";
			this->hasToRepeat = false;
		}
	private:
		System::Void getPercentOf_Click(System::Object^ sender, System::EventArgs^ e)
		{
			double gotBasicPercentOfValue = Convert::ToDouble(this->iolabel->Text) / 100;

			if (this->_firstNumber)
			{
				this->iolabel->Text = Convert::ToString(gotBasicPercentOfValue * this->_firstNumber);
			}
			else
			{
				this->iolabel->Text = Convert::ToString(gotBasicPercentOfValue);
			}

			this->_updateNumberInStoryOutput(this->iolabel->Text);
		}
	};
}
#pragma once
#include <string.h>
#include <msclr\marshal_cppstd.h>

namespace SortBubleApp
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	enum Colors
	{
		BLUE,
		RED,
		BLACK
	};
	std::vector<int> arr;

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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ sortBut;
	protected:


	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ resultRow;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::TextBox^ arrOfNumTb;
	private: System::Windows::Forms::RadioButton^ sortAsc;
	private: System::Windows::Forms::RadioButton^ sortDesc;
	private: System::Windows::Forms::GroupBox^ groupSort;
	private: System::Windows::Forms::NumericUpDown^ speedRearr;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupSpeed;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->sortBut = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->resultRow = (gcnew System::Windows::Forms::RichTextBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->arrOfNumTb = (gcnew System::Windows::Forms::TextBox());
			this->sortAsc = (gcnew System::Windows::Forms::RadioButton());
			this->sortDesc = (gcnew System::Windows::Forms::RadioButton());
			this->groupSort = (gcnew System::Windows::Forms::GroupBox());
			this->speedRearr = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupSpeed = (gcnew System::Windows::Forms::GroupBox());
			this->groupSort->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedRearr))->BeginInit();
			this->groupSpeed->SuspendLayout();
			this->SuspendLayout();
			// 
			// sortBut
			// 
			this->sortBut->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->sortBut->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sortBut->Location = System::Drawing::Point(56, 89);
			this->sortBut->Name = L"sortBut";
			this->sortBut->Size = System::Drawing::Size(287, 26);
			this->sortBut->TabIndex = 0;
			this->sortBut->Text = L"Сортировать";
			this->sortBut->UseVisualStyleBackColor = true;
			this->sortBut->Click += gcnew System::EventHandler(this, &MyForm::sortBut_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите строку:";
			// 
			// resultRow
			// 
			this->resultRow->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultRow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultRow->Location = System::Drawing::Point(12, 205);
			this->resultRow->Name = L"resultRow";
			this->resultRow->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->resultRow->Size = System::Drawing::Size(365, 29);
			this->resultRow->TabIndex = 3;
			this->resultRow->Text = L"";
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// arrOfNumTb
			// 
			this->arrOfNumTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->arrOfNumTb->Location = System::Drawing::Point(12, 51);
			this->arrOfNumTb->Name = L"arrOfNumTb";
			this->arrOfNumTb->Size = System::Drawing::Size(365, 26);
			this->arrOfNumTb->TabIndex = 1;
			this->arrOfNumTb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::arrOfNumTb_KeyPress);
			// 
			// sortAsc
			// 
			this->sortAsc->AutoSize = true;
			this->sortAsc->Checked = true;
			this->sortAsc->Location = System::Drawing::Point(6, 18);
			this->sortAsc->Name = L"sortAsc";
			this->sortAsc->Size = System::Drawing::Size(109, 17);
			this->sortAsc->TabIndex = 4;
			this->sortAsc->TabStop = true;
			this->sortAsc->Text = L"По возрастанию";
			this->sortAsc->UseVisualStyleBackColor = true;
			// 
			// sortDesc
			// 
			this->sortDesc->AutoSize = true;
			this->sortDesc->Location = System::Drawing::Point(6, 41);
			this->sortDesc->Name = L"sortDesc";
			this->sortDesc->Size = System::Drawing::Size(93, 17);
			this->sortDesc->TabIndex = 5;
			this->sortDesc->Text = L"По убыванию";
			this->sortDesc->UseVisualStyleBackColor = true;
			// 
			// groupSort
			// 
			this->groupSort->Controls->Add(this->sortAsc);
			this->groupSort->Controls->Add(this->sortDesc);
			this->groupSort->Location = System::Drawing::Point(201, 121);
			this->groupSort->Name = L"groupSort";
			this->groupSort->Size = System::Drawing::Size(176, 63);
			this->groupSort->TabIndex = 6;
			this->groupSort->TabStop = false;
			this->groupSort->Text = L"Сортировать:";
			// 
			// speedRearr
			// 
			this->speedRearr->Location = System::Drawing::Point(10, 29);
			this->speedRearr->Name = L"speedRearr";
			this->speedRearr->Size = System::Drawing::Size(106, 20);
			this->speedRearr->TabIndex = 7;
			this->speedRearr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->speedRearr->Value = System::Decimal(gcnew cli::array< System::Int32 >(4)
			{
				2, 0, 0, 0
			});
			this->speedRearr->ValueChanged += gcnew System::EventHandler(this, &MyForm::speedRearr_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(122, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Число/Сек";
			// 
			// groupSpeed
			// 
			this->groupSpeed->Controls->Add(this->speedRearr);
			this->groupSpeed->Controls->Add(this->label3);
			this->groupSpeed->Location = System::Drawing::Point(2, 121);
			this->groupSpeed->Name = L"groupSpeed";
			this->groupSpeed->Size = System::Drawing::Size(193, 63);
			this->groupSpeed->TabIndex = 10;
			this->groupSpeed->TabStop = false;
			this->groupSpeed->Text = L"Скорость сортировки:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(389, 251);
			this->Controls->Add(this->groupSpeed);
			this->Controls->Add(this->groupSort);
			this->Controls->Add(this->resultRow);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->arrOfNumTb);
			this->Controls->Add(this->sortBut);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(405, 300);
			this->MinimumSize = System::Drawing::Size(405, 190);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Сортировка Пузырьком";
			this->groupSort->ResumeLayout(false);
			this->groupSort->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedRearr))->EndInit();
			this->groupSpeed->ResumeLayout(false);
			this->groupSpeed->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void MessageShow(System::String^ message, System::String^ text)
	{
		MessageBox::Show(message, text, MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	private: void dynamicEditColor(int index, Colors color)
	{
		int indexNum = resultRow->Find(arr[index].ToString());
		switch (color) {
		case 0:
			resultRow->SelectionColor = Color::Blue;
			break;
		case 1:
			resultRow->SelectionColor = Color::Red;
			break;
		case 2:
			resultRow->SelectionColor = Color::Black;
			break;
		}
	}

	private: void PrintRow()
	{
		for (int i = 0; i < arr.size(); i++) {
			resultRow->AppendText(arr[i].ToString() + " ");
		}
	}

	private: void ReplaceNum()
	{
		int temp = arr[i_t];
		arr[i_t] = arr[j_t];
		arr[j_t] = temp;
		resultRow->Clear();
		PrintRow();
		EditTwoColors(j_t, Colors::RED, i_t, Colors::BLUE);
	}

	private: void EditTwoColors(int size1, Colors color1, int size2, Colors color2)
	{
		dynamicEditColor(size1, color1);
		dynamicEditColor(size2, color2);
	}
	private: System::Void sortBut_Click(System::Object^ sender, System::EventArgs^ e)
	{
		currentInterval = timer->Interval;
		timer->Interval /= Convert::ToUInt32(speedRearr->Value);
		resultRow->Text = "";
		//доработать функцию, если строка пустая
		if (arrOfNumTb->TextLength == 0) {
			MessageShow("Строка пуста.", "Информация");
			return;
		}
		std::string str = marshal_as<std::string>(arrOfNumTb->Text);
		int num = 0;


		// Проверка на наличие в конце пробела. Нужно для отделения последнего числа в строке.
		if (str[str.size() - 1] != ' ')	str.push_back(' ');

		// Разделение строки из чисел в массив типа int.
		while ((num = str.find(' ')) != std::string::npos) {
			std::string tempToken = str.substr(0, num);
			arr.push_back(stoi(tempToken));
			str.erase(0, num + 1);
		}

		// Проверка диапазона нашего массива чисел.
		if (arr.size() == 1) {
			MessageShow("Введен 1 элемент.\nМинимальное количество: 2.", "Информация");
			return;
		}
		if (arr.size() > 10 || arr.size() == 0) {
			MessageShow("Введено неверное количество элементов: " + arr.size() + "\nМаксимальное количество: 10.", "Информация");
			return;
		}

		// Первая загрузка чисел в динамическую строку.
		resultRow->Location = Point((Size.Width / 2) - (arrOfNumTb->TextLength * 2) - (arr.size() * 2) - 12, 105);
		PrintRow();
		sortBut->Hide();
		groupSort->Hide();
		groupSpeed->Hide();
		timer->Start();
	}

	private: System::Void arrOfNumTb_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		// Проверка на цифры 0-9, пробел, Backspace.
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8 && e->KeyChar != 32) {
			e->Handled = true;
			return;
		}
		String^ str = arrOfNumTb->Text;
		if (str->Length == 0 && e->KeyChar == 32) {
			e->Handled = true;
			return;
		}
		else if (str->Length == 0) {
			return;
		}
		if (str[str->Length - 1] == ' ' && e->KeyChar == ' ') e->Handled = true;

		
	}
		   int i_t = 0, j_t = 0, currentInterval = 0;
	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		int i_t = this->i_t, j_t = this->j_t;
		if (i_t < arr.size() && j_t == 0) {
			if (i_t > 0 && i_t - 1 != j_t) EditTwoColors(this->i_t - 1, Colors::BLACK, arr.size() - 1, Colors::BLACK);
			dynamicEditColor(this->i_t, Colors::BLUE);
		}

		if (sortAsc->Checked) {
			if (arr[i_t] < arr[j_t]) ReplaceNum();
		}
		else {
			if (arr[i_t] > arr[j_t]) ReplaceNum();
		}

		if (j_t < arr.size()) {
			if (j_t > 0 && j_t - 1 != i_t) dynamicEditColor(this->j_t - 1, Colors::BLACK);
			if (j_t != i_t)	dynamicEditColor(this->j_t, Colors::RED);
			if (!(this->j_t == arr.size() - 1)) this->j_t++;
		}

		// Проверка каретки указывающа на конец строки.
		if (j_t == arr.size() - 1 && i_t < arr.size()) {
			this->i_t++;
			if (i_t > 0 && i_t - 1 != j_t) dynamicEditColor(i_t - 1, Colors::BLACK);

			// Проверка и выход из таймера.
			if (j_t == arr.size() - 1 && i_t == arr.size() - 1) {
				EditTwoColors(this->j_t - 1, Colors::BLACK, this->i_t - 1, Colors::BLACK);
				timer->Stop();
				timer->Interval = currentInterval;
				sortBut->Show();
				groupSort->Show();
				groupSpeed->Show();
				arr.clear();
				arrOfNumTb->Clear();
				resultRow->Location = Point((12), 205);
				this->i_t = 0;
				this->j_t = 0;
			}
			else this->j_t = 0;
		}
	}
	private: System::Void speedRearr_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (speedRearr->Value < 1) speedRearr->Value++;
		else if (speedRearr->Value > 10) speedRearr->Value--;
	}
};
}
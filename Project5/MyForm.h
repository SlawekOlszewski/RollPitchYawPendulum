#pragma once
#define PI 3.14159265
#include <Windows.h>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	struct punkty {
		double roll;
		double pitch;
		double yaw;
		double d;
	};
	vector<punkty> wektorWsp;
	vector<double> kat;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Point linePos;
		int i = 0;
		double l = 0.5;
		int mnoznik = 100;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;


	private: System::Windows::Forms::Button^  button1;
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(394, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Rozpoczęcie wahadła";
			// 
			// timer1
			// 
			this->timer1->Interval = 40;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(576, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(409, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Aktualna wysokość:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(573, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"label2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(404, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Aktualne wychylenie:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(573, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(293, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(274, 18);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Ile początkowych próbek odrzucić\?";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(576, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 20);
			this->textBox1->TabIndex = 12;
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(465, 359);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(23, 25);
			this->button2->TabIndex = 13;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(495, 359);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(23, 25);
			this->button3->TabIndex = 14;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(404, 362);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 18);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Skala:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(23, 88);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(375, 292);
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(378, 240);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 18);
			this->label8->TabIndex = 17;
			this->label8->Text = L"D[m]";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(187, 72);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 18);
			this->label9->TabIndex = 18;
			this->label9->Text = L"H[m]";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(404, 146);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(109, 18);
			this->label10->TabIndex = 19;
			this->label10->Text = L"D = √(X² +Y²)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(210, 245);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 12);
			this->label11->TabIndex = 20;
			this->label11->Text = L"0.125";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(248, 245);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(27, 12);
			this->label12->TabIndex = 21;
			this->label12->Text = L"0.25";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label13->Location = System::Drawing::Point(276, 245);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(33, 12);
			this->label13->TabIndex = 22;
			this->label13->Text = L"0.375";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label14->Location = System::Drawing::Point(311, 245);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 12);
			this->label14->TabIndex = 23;
			this->label14->Text = L"0.5";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->Location = System::Drawing::Point(149, 219);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 12);
			this->label15->TabIndex = 24;
			this->label15->Text = L"0.125";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label16->Location = System::Drawing::Point(149, 195);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(27, 12);
			this->label16->TabIndex = 25;
			this->label16->Text = L"0.25";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label17->Location = System::Drawing::Point(149, 168);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(33, 12);
			this->label17->TabIndex = 26;
			this->label17->Text = L"0.375";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label18->Location = System::Drawing::Point(149, 150);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(21, 12);
			this->label18->TabIndex = 27;
			this->label18->Text = L"0.5";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(740, 405);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Pomiar wysokosci";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		string trash;
		punkty pkt;
		punkty wsp;
		fstream plik;
		double wychylenie;
		plik.open("outputPendulum01.log", ios::in);
		while (plik >> pkt.roll, plik >> pkt.pitch, plik >> pkt.yaw) {
			getline(plik, trash);
			if (pkt.roll != 0 && pkt.pitch != 0 && pkt.yaw != 0) {
				double a = 2 * l / (sqrt(pow(tan(pkt.roll*PI / 180), -2) + pow(tan(pkt.pitch*PI / 180), -2) + 1));
				wsp.roll = a / sqrt(1 + pow(tan(pkt.yaw*PI / 180), -2) + pow(tan(pkt.pitch*PI / 180), 2)); // X
				wsp.pitch = a / sqrt(1 + pow(tan(pkt.yaw*PI / 180), 2) + pow(tan(pkt.roll*PI / 180), 2)); // Y
				wsp.yaw = a / sqrt(1 + pow(tan(pkt.roll*PI / 180), -2) + pow(tan(pkt.pitch*PI / 180), -2)); // Z
				wsp.d = sqrt(pow(wsp.roll, 2) + pow(wsp.pitch, 2));
				wychylenie = 180 / PI*atan(wsp.d / (l - wsp.yaw));
				wektorWsp.push_back(wsp);
				kat.push_back(wychylenie);
			}
		}
		plik.close();
		label2->Text = "";
		label5->Text = "";
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = !timer1->Enabled;

	}
	private: System::Void timer1_Tick_1(System::Object^  sender, System::EventArgs^  e) {
		if (i == wektorWsp.size() - 1) {
			timer1->Enabled = false;
			i = 0;
			label2->Text = " ";
			label5->Text = " ";
		}
		else {
			linePos.X = int(187.5);
			linePos.Y = int(146);
			linePos.X += int(mnoznik * wektorWsp[i].d);
			linePos.Y -= int(mnoznik* wektorWsp[i].yaw);
			label2->Text = System::Convert::ToString(wektorWsp[i].yaw) + " m";
			label5->Text = System::Convert::ToString(kat[i]) + "°";
			this->Refresh();
			i++;
		}

	}
	private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = "";
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		i = System::Convert::ToInt16(textBox1->Text);
	}
/////zwiekszanie skali
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (146 - mnoznik > 6)
			mnoznik += 10;
	}
/////zmniejszanie skali	
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if(146 - mnoznik < 120)
			mnoznik -= 10;
	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g = e->Graphics;
		g->DrawLine(System::Drawing::Pens::Red, int(187.5), 0, int(187.5), 292);//PION
		g->DrawLine(System::Drawing::Pens::Red, 0, 146, 375, 146);//POZIOM
		/////////SKALA
		////podzialka
		for (int i = 1; i <= 4; i = 2 * i) {
			g->DrawLine(System::Drawing::Pens::Red, int(185), 146 - mnoznik/i, 189, 146 - mnoznik/i);
			g->DrawLine(System::Drawing::Pens::Red, 185 + mnoznik / i, 144, 185 + mnoznik / i, 148);
		}
		g->DrawLine(System::Drawing::Pens::Red, int(185), 146 - mnoznik / 4 - mnoznik / 2, 189, 146 - mnoznik / 4 - mnoznik / 2);
		g->DrawLine(System::Drawing::Pens::Red, 185 + mnoznik / 4 + mnoznik / 2, 144, 185 + mnoznik / 4 + mnoznik / 2, 148);
		///labele
		label11->Location = Point(int(187 + mnoznik / 4), int(95+148));
		label12->Location = Point(int(198 + mnoznik / 2), int(95 + 148));
		label13->Location = Point(int(198 + mnoznik / 4 + mnoznik / 2), int(95 + 148));
		label14->Location = Point(int(204 + mnoznik), int(95 + 148));
		label15->Location = Point(int(170), int(80+146 - mnoznik / 4));
		label16->Location = Point(int(170), int(80 + 146 - mnoznik / 2));
		label17->Location = Point(int(170), int(80 + 146 - mnoznik / 4 - mnoznik/2));
		label18->Location = Point(int(170), int(80 + 146 - mnoznik));
		/////////////////////////// rysowanie animacji wahadla
		if (timer1->Enabled == true) {
			g->DrawLine(System::Drawing::Pens::Blue, int(187.5), 146 - mnoznik, linePos.X, linePos.Y);
			g->FillEllipse(Brushes::Blue, linePos.X - 5, linePos.Y - 5, 10, 10);
			g->DrawEllipse(Pens::Blue, linePos.X - 5, linePos.Y - 5, 10, 10);
		}
	}
};
}

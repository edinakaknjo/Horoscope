#pragma once
#include "HoroscopeCalculator.h"
#include "ResForm.h"
#include "NatForm.h"


namespace SejlaHoroskop {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for MainForm
    /// </summary>
    public ref class MainForm : public System::Windows::Forms::Form
    {
    public:
        MainForm(void)
        {
            InitializeComponent();
            calculator = gcnew HoroscopeCalculator(); // Inicijalizacija HoroscopeCalculator objekta
        }

    protected:
        ~MainForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::ComponentModel::IContainer^ components;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
    private: System::Windows::Forms::Button^ button3;
    private: SejlaHoroskop::HoroscopeCalculator^ calculator;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
               this->label6 = (gcnew System::Windows::Forms::Label());
               this->label7 = (gcnew System::Windows::Forms::Label());
               this->label8 = (gcnew System::Windows::Forms::Label());
               this->label9 = (gcnew System::Windows::Forms::Label());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
               this->button3 = (gcnew System::Windows::Forms::Button());
               this->SuspendLayout();
               // 
               // label6
               // 
               this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->label6->AutoSize = true;
               this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label6->ForeColor = System::Drawing::Color::Lavender;
               this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
               this->label6->Location = System::Drawing::Point(242, 29);
               this->label6->Name = L"label6";
               this->label6->Size = System::Drawing::Size(227, 37);
               this->label6->TabIndex = 0;
               this->label6->Text = L"Vaš horoskop";
               // 
               // label7
               // 
               this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->label7->AutoSize = true;
               this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label7->ForeColor = System::Drawing::Color::Lavender;
               this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
               this->label7->Location = System::Drawing::Point(178, 113);
               this->label7->Name = L"label7";
               this->label7->Size = System::Drawing::Size(357, 25);
               this->label7->TabIndex = 1;
               this->label7->Text = L"Molimo odaberite datum rođenja:";
               this->label7->Click += gcnew System::EventHandler(this, &MainForm::label7_Click);
               // 
               // label8
               // 
               this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->label8->AutoSize = true;
               this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label8->ForeColor = System::Drawing::Color::Lavender;
               this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
               this->label8->Location = System::Drawing::Point(159, 291);
               this->label8->Name = L"label8";
               this->label8->Size = System::Drawing::Size(383, 24);
               this->label8->TabIndex = 2;
               this->label8->Text = L"Klikom na \'Karta\' dobijate svoju natalnu kartu.";
               this->label8->Click += gcnew System::EventHandler(this, &MainForm::label8_Click);
               // 
               // label9
               // 
               this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->label9->AutoSize = true;
               this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label9->ForeColor = System::Drawing::Color::Lavender;
               this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
               this->label9->Location = System::Drawing::Point(71, 325);
               this->label9->Name = L"label9";
               this->label9->Size = System::Drawing::Size(569, 24);
               this->label9->TabIndex = 3;
               this->label9->Text = L"Klikom na \'Znak\' dobijate informaciju o svom horoskopskom znaku.";
               // 
               // button2
               // 
               this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->button2->BackColor = System::Drawing::Color::DarkSlateBlue;
               this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button2->ForeColor = System::Drawing::Color::Lavender;
               this->button2->Location = System::Drawing::Point(382, 241);
               this->button2->MaximumSize = System::Drawing::Size(78, 34);
               this->button2->MinimumSize = System::Drawing::Size(78, 34);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(78, 34);
               this->button2->TabIndex = 4;
               this->button2->Text = L"Znak";
               this->button2->UseVisualStyleBackColor = false;
               this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
               // 
               // dateTimePicker2
               // 
               this->dateTimePicker2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->dateTimePicker2->Location = System::Drawing::Point(260, 187);
               this->dateTimePicker2->MaximumSize = System::Drawing::Size(200, 20);
               this->dateTimePicker2->MinimumSize = System::Drawing::Size(200, 20);
               this->dateTimePicker2->Name = L"dateTimePicker2";
               this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
               this->dateTimePicker2->TabIndex = 5;
               // 
               // button3
               // 
               this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->button3->BackColor = System::Drawing::Color::DarkSlateBlue;
               this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button3->ForeColor = System::Drawing::Color::Lavender;
               this->button3->Location = System::Drawing::Point(260, 241);
               this->button3->MaximumSize = System::Drawing::Size(78, 34);
               this->button3->MinimumSize = System::Drawing::Size(78, 34);
               this->button3->Name = L"button3";
               this->button3->Size = System::Drawing::Size(78, 34);
               this->button3->TabIndex = 6;
               this->button3->Text = L"Karta";
               this->button3->UseVisualStyleBackColor = false;
               this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
               // 
               // MainForm
               // 
               this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
               this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->ClientSize = System::Drawing::Size(730, 435);
               this->Controls->Add(this->button3);
               this->Controls->Add(this->dateTimePicker2);
               this->Controls->Add(this->button2);
               this->Controls->Add(this->label9);
               this->Controls->Add(this->label8);
               this->Controls->Add(this->label7);
               this->Controls->Add(this->label6);
               this->ForeColor = System::Drawing::Color::Transparent;
               this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
               this->Name = L"MainForm";
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        System::DateTime birthDate = this->dateTimePicker2->Value;
        System::String^ sign = this->calculator->CalculateSign(birthDate);
       //MessageBox::Show("Horoskopski znak je: " + sign);// <- ovo je bilo za provjeru, pa sam isključila
        ResForm^ resultForm = gcnew ResForm(sign);
        resultForm->ShowDialog();
    }

    private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
    }

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get the birth date from the dateTimePicker
    DateTime birthDate = dateTimePicker2->Value;

    // Instantiate a new NatalnaForm
    NatForm^ natalnaForm = gcnew NatForm();

    // Show the form
    natalnaForm->Show();

    // Draw the natal chart on the form
    //natalnaForm->DrawNatalChart(birthDate);
}

   // private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        // MessageBox::Show("Horoskopski znak je: " + sign); <- ovo je bilo za provjeru, pa sam isključila
   //     NatalnaForm^ natalnaForm = gcnew NatalnaForm();
   //     natalnaForm->ShowDialog();
   // }
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}




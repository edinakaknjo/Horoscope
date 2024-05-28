#pragma once

namespace SejlaHoroskop {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class NatForm : public System::Windows::Forms::Form
    {
    public:
        NatForm()
        {
            InitializeComponent();
            webBrowser1->Navigate("https://alabe.com/freechart/default.asp");
        }

    private:
        System::Windows::Forms::WebBrowser^ webBrowser1;

        void InitializeComponent()
        {
            this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
            this->SuspendLayout();
            // 
            // webBrowser1
            // 
            this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->webBrowser1->Location = System::Drawing::Point(0, 0);
            this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
            this->webBrowser1->Name = L"webBrowser1";
            this->webBrowser1->Size = System::Drawing::Size(800, 450);
            this->webBrowser1->TabIndex = 0;
            // 
            // NatForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(800, 450);
            this->Controls->Add(this->webBrowser1);
            this->Name = L"NatForm";
            this->Text = L"NatForm";
            this->ResumeLayout(false);

        }
    };
}

#pragma once

namespace SejlaHoroskop {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class NatalnaForm : public System::Windows::Forms::Form
    {
    public:
        NatalnaForm(void)
        {
            InitializeComponent();
            // Load the desired URL in the WebBrowser control
            webBrowser1->Navigate("https://www.astrologicalassociation.com/chart-calculator/");
        }

    private:
        System::Windows::Forms::WebBrowser^ webBrowser1;

        void InitializeComponent(void)
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
            this->webBrowser1->Size = System::Drawing::Size(730, 435);
            this->webBrowser1->TabIndex = 0;
            // 
            // NatalnaForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(730, 435);
            this->Controls->Add(this->webBrowser1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Name = L"NatalnaForm";
            this->Text = L"NatalnaForm";
            this->ResumeLayout(false);

        }
    };
}

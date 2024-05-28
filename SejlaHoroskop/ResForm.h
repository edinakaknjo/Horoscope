#pragma once
#include <Windows.h>
#include <string>

namespace SejlaHoroskop {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Net; // Dodajte ovaj namespace za rad s URL-ovima

    public ref class ResForm : public System::Windows::Forms::Form
    {
    public:
        ResForm(String^ horoscopeSign)
        {
            InitializeComponent();
            label2->Text = horoscopeSign;


            // Niz koji mapira horoskopske znakove na odgovarajuće tekstove
            array<String^>^ znakovi = { "Ovan", "Bik", "Blizanac", "Rak", "Lav", "Djevica", "Vaga", "Skorpion", "Strijelac", "Jarac", "Vodolija", "Riba" };
            array<String^>^ tekstovi = { "Ovnovi su obicno hrabri, energicni i samopouzdani pojedinci. Cesto su inicijatori akcija i vole vodjstvo.",
                "Bikovi su cesto tvrdoglavi, stabilni i strpljivi. Cijene udobnost i sigurnost, te su cesto povezani sa s materijalnim dobrima.",
                " Blizanci su znatizeljni, inteligentni i komunikativni. Obicno su drustveni i brzo se prilagodjavaju promjenama",
                "Rakovi su obicno emotivni, brizni i intuitivni. Cesto su povezani sa porodicnim vrijednostima i emocionalnom sigurnoscu.",
                "Lavovi su hrabri, dominantni i kreativni. Cesto su ljubazni i imaju snaznu potrebu za priznanjem i postovanjem",
                "Djevice su obicno analiticne, prakticne i pedantne. Vole red i organizaciju, te su cesto fokusirane na detalje",
                "Vage su cesto sarmantne, diplomatske i ravnotezne. Vole harmoniju i pravednost, te su cesto povezane sa umjetnoscu.",
                "Skorpioni su strastveni, tajanstveni i mocni. Cesto su emotivni i duboki, te imaju snaznu volju i odlucnost",
                "Strijelci su obicno avanturisticki, optimisticni i otvoreni. Vole slobodu i avanture, te su  povezani sa duhovnim rastom.",
                "Jarcevi su obicno ambiciozni, disciplinovani i odgovorni. Teze ka postizanju ciljeva i  su povezani sa drustvenim statusom",
                "Vodeolije su cesto originalne, nekonvencionalne i humane. Vole slobodu i inovacije, te su  povezani sa humanitarnim radom.",
                "Ribe su obicno intuitivne, suosjecajne i kreativne. Cesto su povezane sa mastovitoscu, te imaju duboku empatiju prema drugima." };
            array<String^>^ kompatibilan = { "Bik", "Blizanac", "Rak", "Lav", "Djevica", "Vaga", "Skorpion", "Strijelac", "Jarac", "Vodolija", "Riba", "Ovan"};

            // Niz sa URL-ovima slika
            array<String^>^ slike = {
                "https://t4.ftcdn.net/jpg/06/62/11/81/360_F_662118141_FbHNXYdT8Hqvhr9qj12r4iLbZTkLOT0z.jpg",   // Ovan
                "https://media-cldnry.s-nbcnews.com/image/upload/t_social_share_1200x630_center,f_auto,q_auto:best/rockcms/2023-08/zodiac-earth-signs-cz-2x1-230831-ca4882.png",  // Bik
                "https://nypost.com/wp-content/uploads/sites/2/2021/11/astrology-zodiac-signs-elements-1a.jpg?quality=75&strip=all",    // Blizanci
                "https://nypost.com/wp-content/uploads/sites/2/2021/11/water-zodiac-signs.jpg?quality=75&strip=all",   // Rak
                "https://t4.ftcdn.net/jpg/06/62/11/81/360_F_662118141_FbHNXYdT8Hqvhr9qj12r4iLbZTkLOT0z.jpg",   // Lav
                "https://media-cldnry.s-nbcnews.com/image/upload/t_social_share_1200x630_center,f_auto,q_auto:best/rockcms/2023-08/zodiac-earth-signs-cz-2x1-230831-ca4882.png",  // Djevica
                "https://nypost.com/wp-content/uploads/sites/2/2021/11/astrology-zodiac-signs-elements-1a.jpg?quality=75&strip=all",    // Vaga
                "https://nypost.com/wp-content/uploads/sites/2/2021/11/water-zodiac-signs.jpg?quality=75&strip=all",   // Škorpion
                "https://t4.ftcdn.net/jpg/06/62/11/81/360_F_662118141_FbHNXYdT8Hqvhr9qj12r4iLbZTkLOT0z.jpg",   // Strijelac
                "https://media-cldnry.s-nbcnews.com/image/upload/t_social_share_1200x630_center,f_auto,q_auto:best/rockcms/2023-08/zodiac-earth-signs-cz-2x1-230831-ca4882.png",  // Jarac
                "https://nypost.com/wp-content/uploads/sites/2/2021/11/astrology-zodiac-signs-elements-1a.jpg?quality=75&strip=all",    // Vodenjak
                "https://nypost.com/wp-content/uploads/sites/2/2021/11/water-zodiac-signs.jpg?quality=75&strip=all"    // Ribe
            };

            // Pronalaženje indeksa horoskopskog znaka u nizu
            int indeks = Array::IndexOf(znakovi, horoscopeSign);

            // Postavljanje odgovarajućeg teksta i slike na osnovu indeksa
            if (indeks >= 0 && indeks < znakovi->Length)
            {
                textBox1->Text = tekstovi[indeks];
                label3->Text = kompatibilan[indeks];

                textBox1->ForeColor = System::Drawing::Color::Black; // Promjeni boju teksta u crnu
                textBox1->ReadOnly = true; // Postavi TextBox kao samo za čitanje
                textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None; // Ukloni okvir TextBox-a
                try
                {
                    WebClient^ webClient = gcnew WebClient();
                    array<Byte>^ imageData = webClient->DownloadData(slike[indeks]);
                    System::IO::MemoryStream^ stream = gcnew System::IO::MemoryStream(imageData);
                    Image^ image = Image::FromStream(stream);
                    if (image != nullptr)
                    {
                        this->BackgroundImage = image;
                    }
                    else
                    {
                        MessageBox::Show("Slika za horoskopski znak nije pronađena.");
                    }
                }
                catch (Exception^ e)
                {
                    MessageBox::Show("Došlo je do greške prilikom učitavanja slike: " + e->Message);
                }

            }
        }

    protected:
        ~ResForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label4;

    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->SuspendLayout();
               // 
               // label2
               // 
               this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->label2->AutoSize = true;
               this->label2->BackColor = System::Drawing::Color::Transparent;
               this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
               this->label2->ForeColor = System::Drawing::Color::Lavender;
               this->label2->Location = System::Drawing::Point(260, 43);
               this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(144, 51);
               this->label2->TabIndex = 1;
               this->label2->Text = L"label2";
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->BackColor = System::Drawing::Color::Transparent;
               this->label1->Location = System::Drawing::Point(121, 61);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(111, 24);
               this->label1->TabIndex = 2;
               this->label1->Text = L"Vaš znak je:";
               // 
               // textBox1
               // 
               this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
               this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
               this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox1->ForeColor = System::Drawing::Color::Gray;
               this->textBox1->Location = System::Drawing::Point(205, 138);
               this->textBox1->Multiline = true;
               this->textBox1->Name = L"textBox1";
               this->textBox1->Size = System::Drawing::Size(260, 123);
               this->textBox1->TabIndex = 3;
               this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
               textBox1->SelectionStart = textBox1->Text->Length; //ovo je da se ne highlighta sav tekst 
               textBox1->SelectionLength = 0;
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->BackColor = System::Drawing::Color::Transparent;
               this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
               this->label3->Location = System::Drawing::Point(349, 291);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(76, 25);
               this->label3->TabIndex = 4;
               this->label3->Text = L"label3";
               // 
               // button1
               // 
               this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button1->ForeColor = System::Drawing::Color::SteelBlue;
               this->button1->Location = System::Drawing::Point(458, 291);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(103, 24);
               this->button1->TabIndex = 5;
               this->button1->Text = L"Saznaj Vise";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &ResForm::button3_Click);
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->BackColor = System::Drawing::Color::Transparent;
               this->label4->Location = System::Drawing::Point(91, 291);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(221, 24);
               this->label4->TabIndex = 6;
               this->label4->Text = L"Vas kompatibilan znak je:";
               // 
               // ResForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->AutoSize = true;
               this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->ClientSize = System::Drawing::Size(669, 418);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->textBox1);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->label2);
               this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->ForeColor = System::Drawing::Color::Lavender;
               this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
               this->Location = System::Drawing::Point(86, 25);
               this->Margin = System::Windows::Forms::Padding(6);
               this->Name = L"ResForm";
               this->Text = L"ResForm";
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    // Dobavite tekst iz label3
    String^ odabraniZnak = label3->Text;

    // Kreirajte novu instancu ResForm za odabrani znak
    ResForm^ resForm = gcnew ResForm(odabraniZnak);
    resForm->Show();
}
    };
}

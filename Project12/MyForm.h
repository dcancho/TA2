#pragma once
#include"CControladora.h"

namespace EMOTICON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			gr = this->CreateGraphics();
			control = new CControladora;
			//
			//TODO: agregar cÛdigo de constructor aquÅE
			//
		}

	protected:
		CControladora* control;
		/// <summary>
		/// Limpiar los recursos que se estÈn usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		Graphics^ gr;
		BufferedGraphics^ bf;
		BufferedGraphicsContext^ sp;
		System::Windows::Forms::Timer^ timer1;
		System::ComponentModel::IContainer^ components;
		/// <summary>
		/// Variable del diseÒador necesaria.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// MÈtodo necesario para admitir el DiseÒador. No se puede modificar
		/// el contenido de este mÈtodo con el editor de cÛdigo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(313, 295);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		sp = BufferedGraphicsManager::Current;
		bf = sp->Allocate(gr, this->ClientRectangle);

		bf->Graphics->Clear(Color::WhiteSmoke);

		control->emoticon(bf->Graphics);

		bf->Render(gr);
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		control->cambiarEstado(e->KeyCode);
	}
	};
}

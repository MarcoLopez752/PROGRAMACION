#pragma once
#include <iostream>
#include <string>
#include "APLICACION_COLA.h"
using namespace std;
namespace MANEJOCOLA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	APLICACION_COLA ap_cola;
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bELIMINAR_PARES;
	protected: 
	private: System::Windows::Forms::Button^  bORDENAR;
	private: System::Windows::Forms::Button^  bINSERTAR_ORDENAMENTE;
	private: System::Windows::Forms::Button^  bMostrar;
	private: System::Windows::Forms::Button^  bTAMANO_COLA;

	private: System::Windows::Forms::TextBox^  ttamano;
	private: System::Windows::Forms::DataGridView^  grillaB;

	private: System::Windows::Forms::Button^  bINSERTAR_COLA_UNO;

	private: System::Windows::Forms::DataGridView^  grillaA;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bELIMINAR_PARES = (gcnew System::Windows::Forms::Button());
			this->bORDENAR = (gcnew System::Windows::Forms::Button());
			this->bINSERTAR_ORDENAMENTE = (gcnew System::Windows::Forms::Button());
			this->bMostrar = (gcnew System::Windows::Forms::Button());
			this->bTAMANO_COLA = (gcnew System::Windows::Forms::Button());
			this->ttamano = (gcnew System::Windows::Forms::TextBox());
			this->grillaB = (gcnew System::Windows::Forms::DataGridView());
			this->bINSERTAR_COLA_UNO = (gcnew System::Windows::Forms::Button());
			this->grillaA = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grillaB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grillaA))->BeginInit();
			this->SuspendLayout();
			// 
			// bELIMINAR_PARES
			// 
			this->bELIMINAR_PARES->Location = System::Drawing::Point(97, 262);
			this->bELIMINAR_PARES->Name = L"bELIMINAR_PARES";
			this->bELIMINAR_PARES->Size = System::Drawing::Size(84, 23);
			this->bELIMINAR_PARES->TabIndex = 17;
			this->bELIMINAR_PARES->Text = L"Eliminar_par";
			this->bELIMINAR_PARES->UseVisualStyleBackColor = true;
			this->bELIMINAR_PARES->Click += gcnew System::EventHandler(this, &Form1::bELIMINAR_PARES_Click);
			// 
			// bORDENAR
			// 
			this->bORDENAR->Location = System::Drawing::Point(187, 262);
			this->bORDENAR->Name = L"bORDENAR";
			this->bORDENAR->Size = System::Drawing::Size(75, 23);
			this->bORDENAR->TabIndex = 16;
			this->bORDENAR->Text = L"Ordenar";
			this->bORDENAR->UseVisualStyleBackColor = true;
			this->bORDENAR->Click += gcnew System::EventHandler(this, &Form1::bORDENAR_Click);
			// 
			// bINSERTAR_ORDENAMENTE
			// 
			this->bINSERTAR_ORDENAMENTE->Location = System::Drawing::Point(613, 118);
			this->bINSERTAR_ORDENAMENTE->Name = L"bINSERTAR_ORDENAMENTE";
			this->bINSERTAR_ORDENAMENTE->Size = System::Drawing::Size(134, 23);
			this->bINSERTAR_ORDENAMENTE->TabIndex = 15;
			this->bINSERTAR_ORDENAMENTE->Text = L"Insertar_ordenadamente";
			this->bINSERTAR_ORDENAMENTE->UseVisualStyleBackColor = true;
			this->bINSERTAR_ORDENAMENTE->Click += gcnew System::EventHandler(this, &Form1::bINSERTAR_ORDENAMENTE_Click);
			// 
			// bMostrar
			// 
			this->bMostrar->Location = System::Drawing::Point(6, 262);
			this->bMostrar->Name = L"bMostrar";
			this->bMostrar->Size = System::Drawing::Size(75, 23);
			this->bMostrar->TabIndex = 14;
			this->bMostrar->Text = L"Mostrar";
			this->bMostrar->UseVisualStyleBackColor = true;
			this->bMostrar->Click += gcnew System::EventHandler(this, &Form1::bMostrar_Click);
			// 
			// bTAMANO_COLA
			// 
			this->bTAMANO_COLA->Location = System::Drawing::Point(613, 60);
			this->bTAMANO_COLA->Name = L"bTAMANO_COLA";
			this->bTAMANO_COLA->Size = System::Drawing::Size(99, 23);
			this->bTAMANO_COLA->TabIndex = 13;
			this->bTAMANO_COLA->Text = L"Tamano COLA";
			this->bTAMANO_COLA->UseVisualStyleBackColor = true;
			this->bTAMANO_COLA->Click += gcnew System::EventHandler(this, &Form1::bTAMANO_COLA_Click);
			// 
			// ttamano
			// 
			this->ttamano->Location = System::Drawing::Point(613, 34);
			this->ttamano->Name = L"ttamano";
			this->ttamano->Size = System::Drawing::Size(38, 20);
			this->ttamano->TabIndex = 12;
			this->ttamano->Text = L"0";
			// 
			// grillaB
			// 
			this->grillaB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grillaB->Location = System::Drawing::Point(12, 150);
			this->grillaB->Name = L"grillaB";
			this->grillaB->Size = System::Drawing::Size(567, 71);
			this->grillaB->TabIndex = 11;
			// 
			// bINSERTAR_COLA_UNO
			// 
			this->bINSERTAR_COLA_UNO->Location = System::Drawing::Point(613, 89);
			this->bINSERTAR_COLA_UNO->Name = L"bINSERTAR_COLA_UNO";
			this->bINSERTAR_COLA_UNO->Size = System::Drawing::Size(75, 23);
			this->bINSERTAR_COLA_UNO->TabIndex = 10;
			this->bINSERTAR_COLA_UNO->Text = L"Insertar";
			this->bINSERTAR_COLA_UNO->UseVisualStyleBackColor = true;
			this->bINSERTAR_COLA_UNO->Click += gcnew System::EventHandler(this, &Form1::bINSERTAR_COLA_UNO_Click);
			// 
			// grillaA
			// 
			this->grillaA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grillaA->Location = System::Drawing::Point(6, 12);
			this->grillaA->Name = L"grillaA";
			this->grillaA->Size = System::Drawing::Size(573, 67);
			this->grillaA->TabIndex = 9;
			this->grillaA->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::grillaA_CellContentClick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 353);
			this->Controls->Add(this->bELIMINAR_PARES);
			this->Controls->Add(this->bORDENAR);
			this->Controls->Add(this->bINSERTAR_ORDENAMENTE);
			this->Controls->Add(this->bMostrar);
			this->Controls->Add(this->bTAMANO_COLA);
			this->Controls->Add(this->ttamano);
			this->Controls->Add(this->grillaB);
			this->Controls->Add(this->bINSERTAR_COLA_UNO);
			this->Controls->Add(this->grillaA);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grillaB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grillaA))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void grillaA_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }

private: System::Void bTAMANO_COLA_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			   grillaA->RowCount=1;
			   if (ttamano->Text!="")
			   {grillaA->ColumnCount=System::Convert::ToInt32(ttamano->Text);}
		 
		 }
private: System::Void bINSERTAR_COLA_UNO_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		         APLICACION_COLA y;
				 ap_cola =y;
				 if(ap_cola.Cola_vacia()==true)
				 {ap_cola.Insertar(grillaA);}
		 
		 }
private: System::Void bINSERTAR_ORDENAMENTE_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 APLICACION_COLA y;
		  ap_cola =y;
		  if(ap_cola.Cola_vacia()==true)	
		  {	ap_cola.Insertar_ordenado(grillaA);}
		 
		 }
private: System::Void bMostrar_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  if (ap_cola.Cola_vacia()==false)
		   {
		       ap_cola.Mostrar(grillaB);
		   }
		 }
private: System::Void bORDENAR_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			   ap_cola.Ordenar();
		 }
private: System::Void bELIMINAR_PARES_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		   ap_cola.Eliminar_par();
		 }
};
}


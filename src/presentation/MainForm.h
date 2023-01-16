#pragma once
#include "../framework/StringConverterHelper.h"
#include <vector>
#include "../dto/ElementConcentrationPoint.h"
#include "../validation/InputDataValidator.h"
#include "../CoefficientsCalculator.h"
#include "../ChartGenerator.h"
#include <cmath>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
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
	private: System::Windows::Forms::Button^ calculateButton;
	private: System::Windows::Forms::Label^ formulaImageLabel;
	private: System::Windows::Forms::DataGridView^ aCInputGrid;







	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ cCInput;
	private: System::Windows::Forms::TextBox^ bCInput;



	private: System::Windows::Forms::Label^ cCLabel;



	private: System::Windows::Forms::Label^ bCLabel;

	private: System::DirectoryServices::DirectoryEntry^ directoryEntry1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ concentrationChart;
	private: System::Windows::Forms::DataVisualization::Charting::Series^ series1;
	private: System::Windows::Forms::DataVisualization::Charting::Series^ series2;
	private: System::Windows::Forms::DataVisualization::Charting::Series^ series3;
	private: System::Windows::Forms::DataVisualization::Charting::Series^ series4;

	private: System::Windows::Forms::PictureBox^ formulaImage;

	private: System::Windows::Forms::Label^ nLabel;
	private: System::Windows::Forms::Label^ kLabel;
	private: System::Windows::Forms::Label^ dLabel;
	private: System::Windows::Forms::Label^ rLabel;
	private: System::Windows::Forms::TextBox^ nOutput;
	private: System::Windows::Forms::TextBox^ kOutput;
	private: System::Windows::Forms::TextBox^ dOutput;
	private: System::Windows::Forms::TextBox^ rOutput;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ t;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Concentration;








	protected:

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->aCInputGrid = (gcnew System::Windows::Forms::DataGridView());
			this->t = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Concentration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->formulaImageLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bCLabel = (gcnew System::Windows::Forms::Label());
			this->cCLabel = (gcnew System::Windows::Forms::Label());
			this->bCInput = (gcnew System::Windows::Forms::TextBox());
			this->cCInput = (gcnew System::Windows::Forms::TextBox());
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->concentrationChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->formulaImage = (gcnew System::Windows::Forms::PictureBox());
			this->nLabel = (gcnew System::Windows::Forms::Label());
			this->kLabel = (gcnew System::Windows::Forms::Label());
			this->dLabel = (gcnew System::Windows::Forms::Label());
			this->rLabel = (gcnew System::Windows::Forms::Label());
			this->nOutput = (gcnew System::Windows::Forms::TextBox());
			this->kOutput = (gcnew System::Windows::Forms::TextBox());
			this->dOutput = (gcnew System::Windows::Forms::TextBox());
			this->rOutput = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aCInputGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->concentrationChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formulaImage))->BeginInit();
			this->SuspendLayout();
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(17, 320);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(148, 55);
			this->calculateButton->TabIndex = 0;
			this->calculateButton->Text = L"Расчитать";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &Form1::calculateButton_Click);
			// 
			// aCInputGrid
			// 
			this->aCInputGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->aCInputGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->t, this->Concentration });
			this->aCInputGrid->Location = System::Drawing::Point(17, 396);
			this->aCInputGrid->Name = L"aCInputGrid";
			this->aCInputGrid->RowHeadersWidth = 72;
			this->aCInputGrid->RowTemplate->Height = 31;
			this->aCInputGrid->Size = System::Drawing::Size(427, 440);
			this->aCInputGrid->TabIndex = 1;
			// 
			// t
			// 
			this->t->HeaderText = L"t";
			this->t->MinimumWidth = 9;
			this->t->Name = L"t";
			this->t->Width = 60;
			// 
			// Concentration
			// 
			this->Concentration->HeaderText = L"C";
			this->Concentration->MinimumWidth = 9;
			this->Concentration->Name = L"Concentration";
			this->Concentration->Width = 60;
			// 
			// formulaImageLabel
			// 
			this->formulaImageLabel->AutoSize = true;
			this->formulaImageLabel->Location = System::Drawing::Point(12, 9);
			this->formulaImageLabel->Name = L"formulaImageLabel";
			this->formulaImageLabel->Size = System::Drawing::Size(181, 25);
			this->formulaImageLabel->TabIndex = 2;
			this->formulaImageLabel->Text = L"Скорость реакции";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(224, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ввод исходных данных";
			// 
			// bCLabel
			// 
			this->bCLabel->AutoSize = true;
			this->bCLabel->Location = System::Drawing::Point(36, 226);
			this->bCLabel->Name = L"bCLabel";
			this->bCLabel->Size = System::Drawing::Size(165, 25);
			this->bCLabel->TabIndex = 4;
			this->bCLabel->Text = L"Концентрация B";
			// 
			// cCLabel
			// 
			this->cCLabel->AutoSize = true;
			this->cCLabel->Location = System::Drawing::Point(36, 276);
			this->cCLabel->Name = L"cCLabel";
			this->cCLabel->Size = System::Drawing::Size(167, 25);
			this->cCLabel->TabIndex = 5;
			this->cCLabel->Text = L"Концентрация C";
			// 
			// bCInput
			// 
			this->bCInput->Location = System::Drawing::Point(207, 226);
			this->bCInput->Name = L"bCInput";
			this->bCInput->Size = System::Drawing::Size(100, 29);
			this->bCInput->TabIndex = 6;
			// 
			// cCInput
			// 
			this->cCInput->Location = System::Drawing::Point(207, 272);
			this->cCInput->Name = L"cCInput";
			this->cCInput->Size = System::Drawing::Size(100, 29);
			this->cCInput->TabIndex = 7;
			// 
			// concentrationChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->concentrationChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->concentrationChart->Legends->Add(legend1);
			this->concentrationChart->Location = System::Drawing::Point(463, 9);
			this->concentrationChart->Name = L"concentrationChart";
			this->series1->ChartArea = L"ChartArea1";
			this->series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			this->series1->Legend = L"Legend1";
			this->series1->Name = L"InputSeries";
			this->series2->ChartArea = L"ChartArea1";
			this->series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			this->series2->Legend = L"Legend1";
			this->series2->Name = L"CalculatedASeries";
			this->series3->ChartArea = L"ChartArea1";
			this->series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			this->series3->Legend = L"Legend1";
			this->series3->Name = L"CalculatedBSeries";
			this->series4->ChartArea = L"ChartArea1";
			this->series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			this->series4->Legend = L"Legend1";
			this->series4->Name = L"CalculatedCSeries";
			this->concentrationChart->Series->Add(series1);
			this->concentrationChart->Series->Add(series2);
			this->concentrationChart->Series->Add(series3);
			this->concentrationChart->Series->Add(series4);
			this->concentrationChart->Size = System::Drawing::Size(916, 827);
			this->concentrationChart->TabIndex = 8;
			this->concentrationChart->Text = L"chart1";
			// 
			// formulaImage
			// 
			this->formulaImage->ImageLocation = L"resources/formula.jpg";
			this->formulaImage->Location = System::Drawing::Point(17, 38);
			this->formulaImage->Name = L"formulaImage";
			this->formulaImage->Size = System::Drawing::Size(427, 144);
			this->formulaImage->TabIndex = 9;
			this->formulaImage->TabStop = false;
			// 
			// nLabel
			// 
			this->nLabel->AutoSize = true;
			this->nLabel->Location = System::Drawing::Point(17, 852);
			this->nLabel->Name = L"nLabel";
			this->nLabel->Size = System::Drawing::Size(173, 25);
			this->nLabel->TabIndex = 10;
			this->nLabel->Text = L"Порядок реакции";
			// 
			// kLabel
			// 
			this->kLabel->AutoSize = true;
			this->kLabel->Location = System::Drawing::Point(17, 887);
			this->kLabel->Name = L"kLabel";
			this->kLabel->Size = System::Drawing::Size(202, 25);
			this->kLabel->TabIndex = 11;
			this->kLabel->Text = L"Константа скорости";
			// 
			// dLabel
			// 
			this->dLabel->AutoSize = true;
			this->dLabel->Location = System::Drawing::Point(458, 852);
			this->dLabel->Name = L"dLabel";
			this->dLabel->Size = System::Drawing::Size(115, 25);
			this->dLabel->TabIndex = 12;
			this->dLabel->Text = L"Дисперсия";
			// 
			// rLabel
			// 
			this->rLabel->AutoSize = true;
			this->rLabel->Location = System::Drawing::Point(458, 887);
			this->rLabel->Name = L"rLabel";
			this->rLabel->Size = System::Drawing::Size(126, 25);
			this->rLabel->TabIndex = 13;
			this->rLabel->Text = L"Корелляция";
			// 
			// nOutput
			// 
			this->nOutput->Location = System::Drawing::Point(221, 849);
			this->nOutput->Name = L"nOutput";
			this->nOutput->Size = System::Drawing::Size(100, 29);
			this->nOutput->TabIndex = 14;
			// 
			// kOutput
			// 
			this->kOutput->Location = System::Drawing::Point(221, 887);
			this->kOutput->Name = L"kOutput";
			this->kOutput->Size = System::Drawing::Size(100, 29);
			this->kOutput->TabIndex = 15;
			// 
			// dOutput
			// 
			this->dOutput->Location = System::Drawing::Point(591, 849);
			this->dOutput->Name = L"dOutput";
			this->dOutput->Size = System::Drawing::Size(100, 29);
			this->dOutput->TabIndex = 16;
			// 
			// rOutput
			// 
			this->rOutput->Location = System::Drawing::Point(591, 887);
			this->rOutput->Name = L"rOutput";
			this->rOutput->Size = System::Drawing::Size(100, 29);
			this->rOutput->TabIndex = 17;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1391, 938);
			this->Controls->Add(this->rOutput);
			this->Controls->Add(this->dOutput);
			this->Controls->Add(this->kOutput);
			this->Controls->Add(this->nOutput);
			this->Controls->Add(this->rLabel);
			this->Controls->Add(this->dLabel);
			this->Controls->Add(this->kLabel);
			this->Controls->Add(this->nLabel);
			this->Controls->Add(this->formulaImage);
			this->Controls->Add(this->concentrationChart);
			this->Controls->Add(this->aCInputGrid);
			this->Controls->Add(this->formulaImageLabel);
			this->Controls->Add(this->cCInput);
			this->Controls->Add(this->bCInput);
			this->Controls->Add(this->calculateButton);
			this->Controls->Add(this->cCLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->bCLabel);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aCInputGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->concentrationChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formulaImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		StringConverterHelper stringConverterHelper = StringConverterHelper();

		auto A = std::vector<ElementConcentrationPoint>();
		for (int i = 0; i < this->aCInputGrid->Rows->Count - 1; i++) {
			A.emplace_back(
				ElementConcentrationPoint(
					Convert::ToDouble(this->aCInputGrid->Rows[i]->Cells[0]->Value),
					Convert::ToDouble(this->aCInputGrid->Rows[i]->Cells[1]->Value)
				)
			);
		}

		double bC = Convert::ToDouble(this->bCInput->Text);
		double cC = Convert::ToDouble(this->cCInput->Text);

		auto validator = InputDataValidator();
		auto validationResult = validator.validate(A, bC, cC);
		if (!validationResult.isSuccess) {
			System::String^ validationErrorMessage = gcnew String(validationResult.validationError.c_str());
			MessageBox::Show(validationErrorMessage, "Input Error");
			return;
		}

		auto coefficientCalculator = CoefficientsCalculator();
		auto calculatedCoefficients = coefficientCalculator.calculateCoefficients(A);

		auto chartGenerator = ChartGenerator(ChartDirectionDeterminer());
		auto calculatedChart = chartGenerator.generate(A, bC, cC, calculatedCoefficients);

		this->concentrationChart->Series->Clear();
		this->concentrationChart->Series->Add("inputA");
		this->concentrationChart->Series["inputA"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
		this->concentrationChart->Series->Add("calculatedA");
		this->concentrationChart->Series["calculatedA"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		this->concentrationChart->Series->Add("calculatedB");
		this->concentrationChart->Series["calculatedB"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		this->concentrationChart->Series->Add("calculatedC");
		this->concentrationChart->Series["calculatedC"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		for (int i = 0; i < calculatedChart.points.size(); i++) {
			this->concentrationChart->Series["inputA"]->Points->AddXY(calculatedChart.points[i].time, calculatedChart.points[i].inputA);
			this->concentrationChart->Series["calculatedA"]->Points->AddXY(calculatedChart.points[i].time, calculatedChart.points[i].calculatedA);
			this->concentrationChart->Series["calculatedB"]->Points->AddXY(calculatedChart.points[i].time, calculatedChart.points[i].calculatedB);
			this->concentrationChart->Series["calculatedC"]->Points->AddXY(calculatedChart.points[i].time, calculatedChart.points[i].calculatedC);
		}

		this->nOutput->Text = (std::round(calculatedCoefficients.n * 100) / 100).ToString();
		this->kOutput->Text = (std::round(calculatedCoefficients.k * 1000) / 1000).ToString();
		this->rOutput->Text = (std::round(calculatedCoefficients.r * 100) / 100).ToString();
		this->dOutput->Text = (std::round(calculatedChart.dispersion * 1000) / 1000).ToString();
	}
};
}

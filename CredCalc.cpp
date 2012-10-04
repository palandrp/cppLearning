/*
	TODO:
	Функция расчета нелинейной зависимости суммы процентов от остатка.
*/

#include <iostream>

using namespace std;

void f_input(int 	*sum_cred, 
			 float 	*annual_interest, 
			 int 	*number_of_monts)
{
	cout << "1) Enter sum of credit: ";
	cin  >> *sum_cred;
	cout << endl;
	cout << "2) Enter annual interest: ";
	cin  >> *annual_interest;
	cout << endl;
	cout << "3) Enter number of monts: ";
	cin  >> *number_of_monts;
	cout << endl;
}

void f_interest_charges_once(int 	sum_cred, 
							 float 	annual_interest, 
							 int 	number_of_monts)
{
	float overpayment;
	float payment;

	cout << "IF INTEREST IS CHARGED ONCE FOR THE ENTIRE AMOUNT." << endl;

	cout << "COUNTING: Overpayment: ";
	overpayment = sum_cred * annual_interest * 0.01 * number_of_monts / 12;
	cout << overpayment;
	cout << endl;

	cout << "COUNTING: Sum of all payment for all period: ";
	payment = sum_cred + overpayment;
	cout << payment;
	cout << endl;

	cout << "COUNTING: Monthly payment: ";
	payment = (sum_cred + overpayment) / number_of_monts;
	cout << payment;
	cout << endl;
}

float f_loan_balance_math(int 		sum_cred, 
						  float 	annual_interest, 
						  int   	number_of_monts,
						  float 	p)
{
	return (2*sum_cred - p - 12*(sum_cred + annual_interest)
				/number_of_monts/annual_interest);
}

void f_loan_balance(int 	sum_cred, 
					float 	annual_interest, 
					int   	number_of_monts)
{
	cout << "IF INTEREST IS CHARGED ON THE LOAN BALANCE." << endl;

	for(int i = 100; i >= 0; i--)
	{
		float p = 0.0;

		cout << f_loan_balance_math(sum_cred, 
									annual_interest, 
									number_of_monts,
									p) 
			 << endl;

		p += f_loan_balance_math(sum_cred, 
								 annual_interest, 
								 number_of_monts,
								 p);
	}

}

int main(void)
{
	int   sum_cred = 1;
	float annual_interest = 1.0;
	int   number_of_monts = 1;

	f_input(&sum_cred, &annual_interest, &number_of_monts);
	f_interest_charges_once(sum_cred, annual_interest, number_of_monts);
	f_loan_balance(sum_cred, annual_interest, number_of_monts);
}
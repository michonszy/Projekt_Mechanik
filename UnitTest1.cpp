#include "pch.h"
#include "CppUnitTest.h"
#include "../MechanikPracownik/MechanikPracownik.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{
	TEST_CLASS(Logowanie_poprawne)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool oczekiwana = true;
			Assert::AreEqual(oczekiwana, Logowanie(1234));
			

		}

	};

	TEST_CLASS(Logowanie_bledne)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			bool bledna = false;
			Assert::AreEqual(bledna, Logowanie(1345));
		}

	};
	TEST_CLASS(Oplaty_za_auto_zastepcze) {
	public:

	TEST_METHOD(TestMethod1)
	{
		int cena = 50;
		int ilosc_dni = 150;
		int wynik = cena * ilosc_dni;
		int wynik_funkcji = cena_za_wypozyczenie(cena, ilosc_dni);
		Assert::AreEqual(wynik, wynik_funkcji);
	}
	};

	TEST_CLASS(logowanie_kierownika)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			bool oczekiwane = true;
			Assert::AreEqual(oczekiwane, Logowanie_kierownika(997));
		}

	};
}


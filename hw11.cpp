#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	//--------------------------------------------------------------------------

	// 1. Создать две переменные и определить «расстояние» между ними в памяти. 
	// Расстояние показать в переменных того же типа (вычесть из одного указателя другой). Затем показать расстояние в байтах.

    /*int a = 10;
    int b = 20; 
    int* ptr1 = &a;
    int* ptr2 = &b;

    int ptrSpace = ptr2 - ptr1;
    cout << "Расстояние между переменными: " << ptrSpace << "\n";
    int ptrSpaceBytes = ptrSpace * sizeof(int);
    cout << "Расстояние между переменными в байтах: " << ptrSpaceBytes << "\n";*/

	//--------------------------------------------------------------------------

	// 2. Пользователь вводит число, оно показывается в 2, 3 и 4 степени. Подсчёты осуществляются с помощью указателей.

    /*double num;
    cout << "Введите число: ";
    cin >> num;

    double sqr;
    double cube; 
    double four;
    double* ptrSqr = &sqr;
    double* ptrCube = &cube;
    double* ptrFour = &four;

    *ptrSqr = num * num;
    *ptrCube = num * num * num;
    *ptrFour = num * num * num * num;

    cout << "Во 2 степени: " << *ptrSqr << "\n";
    cout << "В 3 степени: " << *ptrCube << "\n";
    cout << "В 4 степени: " << *ptrFour << "\n";*/

	//--------------------------------------------------------------------------

	// 3. Через указатели на указатели посчитать сумму двух чисел и записать в третье.

    /*int a = 24; 
    int b = 17; 
    int sum = 0;

    int* ptr1 = &a;
    int* ptr2 = &b;
    int* ptrSum = &sum;      
    int** pptr1 = &ptr1;
    int** pptr2 = &ptr2;
    int** pptrSum = &ptrSum;

    **pptrSum = **pptr1 + **pptr2;
    cout << "Сумма: " << sum << "\n";*/

	//--------------------------------------------------------------------------
	
	// 4. Через указатель на указатель на указатель посчитать идеальный вес. 
	// Ввести рост и реальный вес, показать сколько кг нужно сбросить или набрать. Идеальный вес = Рост — 110.

    /*int height;
    int weight;
    int weightIdeal;
    int raznica;

    cout << "Введите рост: ";
    cin >> height;
    cout << "Введите вес: ";
    cin >> weight;

    int* ptrHeight = &height;
    int* ptrWeight = &weight;
    int* ptrWeightIdeal = &weightIdeal;
    int* ptrRaznica = &raznica;

    int** pptrHeight = &ptrHeight;
    int** pptrWeight = &ptrWeight;
    int** pptrWeightIdeal = &ptrWeightIdeal; 
    int** pptrRaznica = &ptrRaznica;

    int*** ppptrHeight = &pptrHeight; 
    int*** ppptrWeight = &pptrWeight; 
    int*** ppptrWeightIdeal = &pptrWeightIdeal; 
    int*** ppptrRaznica = &pptrRaznica;

    ***ppptrWeightIdeal = ***ppptrHeight - 110;
    ***ppptrRaznica = ***ppptrWeight - ***ppptrWeightIdeal; 
    if (***ppptrRaznica > 0) 
    {
        cout << "Нужно сбросить: " << ***ppptrRaznica << "\n";
    }
    else if (***ppptrRaznica < 0) 
    {
        cout << "Нужно набрать: " << -***ppptrRaznica << "\n";
    }
    else 
    {
        cout << "Идеальный вес!";
    }*/

	// 5. Создать пятижды указатель. Показать адреса всех элементов цепочки, используя только этот указатель.

    /*int a = 24;
    int* ptr1 = &a;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;
    int**** ptr4 = &ptr3;
    int***** ptr5 = &ptr4;

    cout << "a: " << *****ptr5 << "\n";
    cout << "ptr1: " << ****ptr5 << "\n";
    cout << "ptr2: " << ***ptr5 << "\n";
    cout << "ptr3: " << **ptr5 << "\n";     
    cout << "ptr4: " << *ptr5 << "\n";
    cout << "ptr5: " << ptr5 << "\n";*/
}


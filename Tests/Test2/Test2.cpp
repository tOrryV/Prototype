#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\Desktop\programming\Prototype\Cat.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test2
{
	TEST_CLASS(Test2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Cat* catDonor = new Cat();
            string color = "Black";
            catDonor->setColor(&color);


            Cat* catClone = catDonor->clone();

            if (catDonor->getColor() == catClone->getColor()) {
                cout << "Cloning successful!" << endl;
            }
            else {
                cout << "Cloning failed!" << endl;
            }
		}
	};
}

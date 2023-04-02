#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\Desktop\programming\Prototype\Cat.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test1
{
	TEST_CLASS(Test1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Cat* catDonor = new Cat();
            string name = "Marsik";
            catDonor->setName(&name);

          
            Cat* catClone = catDonor->clone();

            if (catDonor->getName() == catClone->getName()) {
                cout << "Cloning successful!" << endl;
            }
            else {
                cout << "Cloning failed!" << endl;
            }

		}
	};
}

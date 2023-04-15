#include "pch.h"
#include "CppUnitTest.h"
#include "../../Cat.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LabPrototypeTests
{
	TEST_CLASS(LabPrototypeTests)
	{
	public:

		TEST_METHOD(ClonedCatShouldHaveTheSameName)
		{
			Cat* catDonor = new Cat();
			string name = "Marsik";
			catDonor->setName(&name);
			Cat* catClone = catDonor->clone();

			Assert::AreEqual(catDonor->getName(), catClone->getName());

		}

		TEST_METHOD(ClonedCatShouldHaveTheSameColor)
		{
			Cat* catDonor = new Cat();
			string color = "Black";
			catDonor->setColor(&color);
			Cat* catClone = catDonor->clone();

			Assert::AreEqual(catDonor->getColor(), catClone->getColor());

		}
	};
}

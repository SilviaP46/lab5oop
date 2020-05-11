#include "pch.h"
#include "CppUnitTest.h"
#include "../Repo.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab5tests
{
	TEST_CLASS(Repo_tests)
	{
	public:
		
		TEST_METHOD(add_Movie_success)
		{
			Repo r;
			Assert::IsFalse(r.exits_in_movie_list("frozen"));
			r.add_Movie(Film("frozen", "comedy", 2012, 12, "aaa"));
			Assert::IsTrue(r.exits_in_movie_list("frozen"));
		}

		TEST_METHOD(add_Movie_exists)
		{
			Repo r;
			r.add_Movie(Film("frozen", "comedy", 2012, 12, "aaa"));
			Assert::ExpectException<exception>([&r]() {r.add_Movie(Film("frozen", "comedy", 2012, 12, "aaa"));});


		}
	};
}

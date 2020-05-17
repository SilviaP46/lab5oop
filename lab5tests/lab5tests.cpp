#include "pch.h"
#include "CppUnitTest.h"
#include "../Repo.h"
#include <cassert>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab5tests
{
	TEST_CLASS(Repo_tests)
	{
	public:
		
		TEST_METHOD(add_Movie_success)
		{
			Repo r;
			Assert::IsFalse(r.exists_in_movie_list("frozen"));
			r.add_Movie(Film("frozen", "comedy", 2012, 12, "aaa"));
			Assert::IsTrue(r.exists_in_movie_list("frozen"));
		}

		TEST_METHOD(add_Movie_exists)
		{
			Repo r;
			r.add_Movie(Film("frozen", "comedy", 2012, 12, "aaa"));
			Assert::ExpectException<exception>([&r]() {r.add_Movie(Film("frozen", "comedy", 2012, 12, "aaa"));});

		}

		TEST_METHOD(delete_movie)
		{
			Repo r;
			r.add_Movie(Film("frozen", "comedy", 2012, 12, "aaa"));
			Assert::IsTrue(r.exists_in_movie_list("frozen"));
			r.delete_Movie("frozen");
			Assert::IsFalse(r.exists_in_movie_list("frozen"));
		}


		TEST_METHOD(update_movie)
		{
			Repo r;
			r.add_Movie(Film("frozen", "comedy", 2012, 12, "aaa"));
			assert((r.update_Movie_likes("frozen",17)) == 17);
			
		}

		TEST_METHOD(search)
		{
			Repo r;
			r.add_Movie(Film("frozen", "comedy", 2012, 12, "aaa"));
			r.add_Movie(Film("hello kitty", "comedy", 2012, 12, "aaa"));
			r.add_Movie(Film("barbie", "thriller", 2012, 12, "aaa"));
			r.add_Movie(Film("it", "horror", 2012, 12, "aaa"));
			assert((r.search("comedy")) == 2);

		}

		TEST_METHOD(add_WatchList_exists)
		{
			Repo r;
			r.add_Movie(Film("frozen", "comedy", 2012, 12, "aaa"));
			r.add_WatchList("frozen");
			Assert::ExpectException<exception>([&r]() {r.add_WatchList("frozen");});
		}

	};
}

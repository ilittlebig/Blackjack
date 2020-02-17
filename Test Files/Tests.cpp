#include <time.h>
#include <random>
#include <gtest/gtest.h>

int main(int argc, char **argv) {
	std::srand(time(NULL));

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
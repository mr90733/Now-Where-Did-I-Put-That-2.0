#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/where.hpp"

TEST_CASE("int find(const std::string& phrase, char search) finds a character in the string")

{
    std::string phrase = "My dog is a golden retriever";

    REQUIRE(find(phrase, 'i') == 7);

    REQUIRE(find(phrase, ' ') == 2);
}

TEST_CASE("int find(const std::string& phrase, const std::string& search) finds a substring in the string")

{
    std::string phrase = "My dog is a golden retriever";

    REQUIRE(find(phrase, "a") == 10);

    REQUIRE(find(phrase, "dog") == 3);

    REQUIRE(find(phrase, "Horse") == -1);
}
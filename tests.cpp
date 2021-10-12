#include "PhoneNumber.h"
#include <catch2/catch.hpp>

#include <string>

TEST_CASE("1st Test") {
    PhoneNumber ph("+1 858 775 2869");
    REQUIRE(ph.getStrippedNumber() == "+18587752869");
    REQUIRE(ph.getValueAsNorthAmerican() == "(858)775-2869");
    REQUIRE(ph.isNorthAmericanNumber() == true);
    REQUIRE(ph.getValueAsInternational() == "+1.858.775.2869");
}

TEST_CASE("2st Test") {
    PhoneNumber ph("1 858 775 3456");
    REQUIRE(ph.getStrippedNumber() == "+18587753456");
    REQUIRE(ph.getValueAsNorthAmerican() == "(858)775-3456");
    REQUIRE(ph.isNorthAmericanNumber() == true);
    REQUIRE(ph.getValueAsInternational() == "+1.858.775.3456");
}

TEST_CASE("3st Test") {
    PhoneNumber ph("+1(858)775-2868");
    REQUIRE(ph.getStrippedNumber() == "+18587752868");
    REQUIRE(ph.getValueAsNorthAmerican() == "(858)775-2868");
    REQUIRE(ph.isNorthAmericanNumber() == true);
    REQUIRE(ph.getValueAsInternational() == "+1.858.775.2868");
}

TEST_CASE("4st Test") {
    PhoneNumber ph("+1(858)775-2868x123");
    REQUIRE(ph.getStrippedNumber() == "+18587752868x123");
    REQUIRE(ph.getValueAsNorthAmerican() == "(858)775-2868x123");
    REQUIRE(ph.isNorthAmericanNumber() == true);
    REQUIRE(ph.getValueAsInternational() == "+1.858.775.2868x123");
}

TEST_CASE("5st Test") {
    PhoneNumber ph("+598.123.4567x858\"");
    REQUIRE(ph.getStrippedNumber() == "+18587752868");
    REQUIRE(ph.getValueAsNorthAmerican() == "+5981234567x858");
    REQUIRE(ph.isNorthAmericanNumber() == false);
    REQUIRE(ph.getValueAsInternational() == "+598.123.456.7x858");
}
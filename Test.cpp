/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;
#include <string>
using namespace std;
TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
}
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
        string text2 = "dont Vorry";
        string text3 = "Dont worry";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text2, "VORRY") == string("Vorry"));
    CHECK(find(text2, "VoRRY") == string("Vorry"));
    CHECK(find(text2, "VorRY") == string("Vorry"));
    CHECK(find(text2, "VorrY") == string("Vorry"));
    CHECK(find(text2, "vorry") == string("Vorry"));
    CHECK(find(text2, "Vorry") == string("Vorry"));
    CHECK(find(text3, "worry") == string("worry"));
    CHECK(find(text3, "worry") == string("worry"));
    CHECK(find(text3, "Worry") == string("worry"));
    CHECK(find(text3, "Vorry") == string("worry"));
    CHECK(find(text3, "Worri") == string("worry"));
    CHECK(find(text3, "vorry") == string("worry"));
    CHECK(find(text3, "vorri") == string("worry"));
}
TEST_CASE("Test replacement of v and w") {
            string text3 = "Dont worry";
    CHECK(find("dont worry", "worry") == string("worry"));
    CHECK(find("dont worry", "vorry") == string("worry"));
    CHECK(find(text3, "worry") == string("worry"));
    CHECK(find(text3, "Worry") == string("worry"));
    CHECK(find(text3, "Vurry") == string("worry"));
    CHECK(find(text3, "Wurri") == string("worry"));
    CHECK(find(text3, "vurri") == string("worry"));
    CHECK(find(text3, "vurry") == string("worry"));
    CHECK(find(text3, "vUrry") == string("worry"));
 //   CHECK(find(text3, "vurri") == string("worry"));


}
TEST_CASE("Test replacement of p and f") {
        string text = "happy xxx yyy";
        string text1 = "affair";
    CHECK(find(text, "haffy") == string("happy"));
    CHECK(find(text, "hapfy") == string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));
    CHECK(find(text1,"apfair")==string("affair"));
    CHECK(find(text, "appair") == string("affair"));
    CHECK(find(text, "appayr") == string("affair"));
     CHECK(find(text, "apPair") == string("affair"));
    CHECK(find(text, "aPpayr") == string("affair"));
     CHECK(find(text, "aPPair") == string("affair"));
    CHECK(find(text, "aPFayr") == string("affair"));
     CHECK(find(text, "apFair") == string("affair"));
    CHECK(find(text, "aFpair") == string("affair"));
}
TEST_CASE("Test replacement of b and f") {
    string text = "happy";
    CHECK(find("be happy", "fe") == string("be"));
    CHECK(find("be hapfy", "haffy") == string("hapfy"));
    CHECK(find("be haffy", "haffy") == string("haffy"));
    CHECK(find("be hapfy", "happy") == string("hapfy"));
    CHECK(find("be happy", "hapfy") == string("happy"));
    CHECK(find(text, "Hapfi") == string("happy"));
    CHECK(find(text, "hapfi") == string("happy"));
    CHECK(find(text, "hapfI") == string("happy"));
}
TEST_CASE("Test replacement of i and y") {
    CHECK(find("dont worry be happy", "worri") == string("worry"));
    CHECK(find("be happy", "happi") == string("happy"));
    CHECK(find("he is sorry", "sorri") == string("sorry"));
    CHECK(find("please hurry", "hurri") == string("hurry"));
    CHECK(find("take it easy", "easi") == string("easy"));
    CHECK(find("i like dairy", "dairi") == string("dairy"));
}

TEST_CASE("Test replacement of o and u") {
    CHECK(find("dont worry", "dont") == string("dont"));
    CHECK(find("dont worry", "dunt") == string("dont"));
    CHECK(find("dont wurry", "wurry") == string("worry"));
    CHECK(find("im sorry", "surry") == string("sorry"));
    CHECK(find("soy boy", "suy") == string("soy"));
    CHECK(find("titanuim alloy", "alluy") == string("alloy"));
    CHECK(find("allow him to go", "alluw") == string("allow"));
    CHECK(find("he allure", "allore") == string("allure"));
    CHECK(find("urban exploration", "orban") == string("urban"));
}
TEST_CASE("Test replacement of d and t") {
    CHECK(find("dont worry", "tont") == string("dont"));
    CHECK(find("dont worry", "dond") == string("dont"));
    CHECK(find("dont worry", "tond") == string("dont"));
    CHECK(find("dollar bill", "tollar") == string("dollar"));
    CHECK(find("its dull", "tull") == string("dull"));
    CHECK(find("tinker bill", "dinker") == string("tinker"));
}
TEST_CASE("Test replacement of s and z") {
    CHECK(find("he is sorry", "zorry") == string("sorry"));
    CHECK(find("im sorry", "sorry") == string("sorry"));
    CHECK(find("select one fruit", "zelect") == string("select"));
    CHECK(find("source code", "zource") == string("source"));
    CHECK(find("in the sack", "zack") == string("sack"));
}

TEST_CASE("Test replacement of c and k and q") {
    CHECK(find("look at the cloud", "cloud") == string("cloud"));
    CHECK(find("pretty cloud", "qloud") == string("cloud"));
    CHECK(find("pretty cloud", "kloud") == string("cloud"));
    CHECK(find("nice car", "kar") == string("car"));
    CHECK(find("nice car", "qar") == string("car"));
    CHECK(find("funny clown", "klown") == string("clown"));
    CHECK(find("its cool out", "kool") == string("cool"));
    CHECK(find("assassins creed", "kreed") == string("creed"));
    CHECK(find("quill and skull", "kuill") == string("quill"));
}   
TEST_CASE("Test replacement of g and j") {
    string text = "jig jag";
    CHECK(find("junge and jurry", "judje") == string("judge"));
    CHECK(find("judge and jurry", "gudge") == string("judge"));
    CHECK(find("gudge and jurry", "gudge") == string("gudge"));
    CHECK(find("gudge and jurry", "gudje") == string("gudge"));
    CHECK(find("gudge and jurry", "judje") == string("gudge"));
    CHECK(find("gudge and jurry", "GUdje") == string("gudge"));
    CHECK(find("judge and jurry", "gudje") == string("judge"));
     CHECK(find("gudje and jurry", "gudje") == string("gudje"));
    CHECK(find("awesome gadget", "gadjet") == string("gadget"));
    CHECK(find("awesome gadjet", "gadjet") == string("gadjet"));
    CHECK(find("junk food", "gunk") == string("junk"));
    CHECK(find("gunk food", "junk") == string("gunk"));
    CHECK(find(text, "gig") == string("jig"));
    CHECK(find(text, "gij") == string("jig"));
    CHECK(find(text, "jag") == string("jaj"));
    CHECK(find(text, "gig") == string("jag"));
}   
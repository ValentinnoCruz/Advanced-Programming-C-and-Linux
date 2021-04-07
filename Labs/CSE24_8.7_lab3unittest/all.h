#include <igloo/igloo.h>
#include "lab3.h"


using namespace igloo;


//===============                ===============
//===============     Part 1     ===============
//===============                ===============

Context(regrouptest){
	Spec(testone){
		Assert::That(regroup("H2SO4"), Equals("H2SO4"));
	}
	
	Spec(testtwo){
		Assert::That(regroup("COVID19"), Equals("COVID19"));
	}

	Spec(testthree){
		Assert::That(regroup("A121B989C"), Equals("A121B989C"));
	}

	Spec(numerical){
		Assert::That(regroup("005005"), Equals("005005"));
	}

	Spec(alphabet){
		Assert::That(regroup("ABCABC"), Equals("ABCABC"));
	}

	Spec(num_alpha){
		Assert::That(regroup("123abc"),Equals("123abc"));
	}

	Spec(alpha_num){
		Assert::That(regroup("abc123"),Equals("abc123"));
	}
};


//===============                ===============
//===============     Part 2     ===============
//===============                ===============


Context(countupper){
	Spec(test_one){
		Assert::That(count_upper("Hello World"),Equals(2));
	}
	Spec(C_aps){
		Assert::That(count_upper("FOUR"),Equals(4));
	}

	Spec(lower_case){
		Assert::That(count_upper("four"),Equals(0));
	}

	Spec(place){
		Assert::That(count_upper("Mexico"),Equals(1));
	}

	Spec(school){
		Assert::That(count_upper("UC Merced"),Equals(3));
	}

	Spec(random){
		Assert::That(count_upper("Welcome"),Equals(1));
	}

	Spec(mixe_d){
		Assert::That(count_upper("STOP Right Now"),Equals(6));
	}
};

//===============                ===============
//===============     Part 3     ===============
//===============                ===============
Context(inverttest){
	Spec(test_1){
		Assert::That(transform_case("Hello World"),Equals("heLLO wORLD"));
	}

	Spec(test_2){
		Assert::That(transform_case("Alphabet"),Equals("ALPHaBET"));
	}

	Spec(test_3){
		Assert::That(transform_case("Earth"),Equals("EaRTH"));
	}

	Spec(caps){
		Assert::That(transform_case("AMERICA"),Equals("AmEricA"));
	}

	Spec(lowercase){
		Assert::That(transform_case("welcome"),Equals("WeLCOMe"));
	}

	Spec(mixed){
		Assert::That(transform_case("uNitED StATes"),Equals("UnITEd sTAteS"));
	}

	Spec(mixed2){
		Assert::That(transform_case("wWJd"),Equals("WwjD"));
	}
};


//===============                ===============
//===============     Part 4     ===============
//===============                ===============
Context(rotation){
	Spec(part1){
		Assert::That(rotation_distance("ABCD","BCDA"),Equals(1));
	}

	Spec(negative){
		Assert::That(rotation_distance("ABCD","BCAD"),Equals(-1));
	}

	Spec(rotate2){
		Assert::That(rotation_distance("ABCD","CDAB"),Equals(2));
	}

	Spec(rotate3){
		Assert::That(rotation_distance("ABCD","DABC"),Equals(3));
	}

	Spec(rotate4){
		Assert::That(rotation_distance("hello","ohell"),Equals(4));
	}

	Spec(rotate5){
		Assert::That(rotation_distance("going","ggoin"),Equals(5));
	}

	Spec(rotate6){
		Assert::That(rotation_distance("runner","rrunne"),Equals(6));
	}
        
};


//===============                ===============
//===============     Part 5     ===============
//===============                ===============

Context(compresstest){
	Spec(comp1){
		Assert::That(compress("AAACTGG"),Equals("A3CTG2"));
	}

	Spec(comp2){
		Assert::That(compress("AABCCDEEFFFFG"),Equals("A2BC2DE2F4G"));
	}

	Spec(comp3){
		Assert::That(compress("HELLO"),Equals("HEL2O"));
	}

	Spec(comp4){
		Assert::That(compress("HELLO"),Equals("HEL2O"));
	}

	Spec(comp5){
		Assert::That(compress("runner"),Equals("run2er"));
	}

	Spec(comp6){
		Assert::That(compress("Mississippi"),Equals("Mis2is2ip2i"));
	}

	Spec(comp7){
		Assert::That(compress("coffee"),Equals("cof2e2"));
	}
};

//===============                ===============
//===============     Part 6     ===============
//===============                ===============

Context(symmetrictest){
	Spec(test1){
		Assert::That(symmetric("JOL"),Equals("symmetric"));
	}

	Spec(test2){
		Assert::That(symmetric("HELLO"),Equals("not symmetric"));
	}

	Spec(test3){
		Assert::That(symmetric("E83"),Equals("symmetric"));
	}

	Spec(test4){
		Assert::That(symmetric("DIOXIDE"),Equals("symmetric"));
	}

	Spec(test5){
		Assert::That(symmetric("DOODLE"),Equals("not symmetric"));
	}

	Spec(test6){
		Assert::That(symmetric("OXYGEN"),Equals("not symmetric"));
	}

	Spec(test7){
		Assert::That(symmetric("OXO"),Equals("symmetric"));
	}
};




int main(){
    return TestRunner::RunAllTests();
}
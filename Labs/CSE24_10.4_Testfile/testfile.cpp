#include <igloo/igloo.h>
#include "lab4.h"


using namespace igloo;

//===============                ===============
//===============     Part 1     ===============
//===============                ===============

Context(find_maxtest){
	Spec(testsize5){
		int size = 5;
		int arr[size] = {43,05,23,16,36};
		Assert::That(find_max(arr, size), Equals(43));
	}
	Spec(testsize4){
		int size = 4;
		int arr[size] = {22,15,5,6};
		Assert::That(find_max(arr, size), Equals(22));
	}
		Spec(testsize3){
		int size = 3;
		int arr[size] = { 5, 6, 70};
		Assert::That(find_max(arr, size), Equals(70));
	}
		Spec(testsize2){
		int size = 2;
		int arr[size] = {9, 80};
		Assert::That(find_max(arr, size), Equals(80));
	}
		Spec(testsize1){
		int size = 1;
		int arr[size] = {5};
		Assert::That(find_max(arr, size), Equals(5));
	}
		Spec(singledigit){
		int size = 5;
		int arr[size] = {05, 01, 02, 03};
		Assert::That(find_max(arr, size), Equals(5));
	}
		Spec(samevalue){
		int size = 7;
		int arr[size] = {7,7,7,7,7,7,7};
		Assert::That(find_max(arr, size), Equals(7));
	}

	
};
	

//===============                ===============
//===============     Part 2     ===============
//===============                ===============

Context(maxpositiontest){
	Spec(testsize5){
		int size = 5;
		int arr[size] = {43,65,23,16,36};
		Assert::That(find_max_pos(arr, size), Equals(1));
	}
        Spec(testsize4){
                int size = 4;
                int arr[size] = {10, 25, 16, 8,};
                Assert::That(find_max_pos(arr, size), Equals(1));
        }
        Spec(testsize3){
                int size = 3;
                int arr[size] = {5, 9, 13};
                Assert::That(find_max_pos(arr, size), Equals(2));
        }
        Spec(testsize2){
                int size = 2;
                int arr[size] = {9,5};
                Assert::That(find_max_pos(arr, size), Equals(0));
        }
        Spec(testsize1){
                int size = 1;
                int arr[size] = {7};
                Assert::That(find_max_pos(arr, size), Equals(0));
        }
        Spec(testconsec){
                int size = 3;
                int arr[size] = {5, 5, 5};
                Assert::That(find_max_pos(arr, size), Equals(0));
        }
        Spec(testconsec2){
                int size = 4;
                int arr[size] = {1,25,3,25};
                Assert::That(find_max_pos(arr, size), Equals(1));
        }
};

//===============                ===============
//===============     Part 3     ===============
//===============                ===============

Context(searchtest){
	Spec(search6){
		int size = 6;
		int arr[size] = {4, 9, 3, 2, 1, 5};
		Assert::That(search(4, arr, size), Equals(0));
                Assert::That(search(9, arr, size), Equals(1));
                Assert::That(search(2, arr, size), Equals(3));
                Assert::That(search(5, arr, size), Equals(5));
                Assert::That(search(7, arr, size), Equals(-1));
                Assert::That(search(6, arr, size), Equals(-1)); 
	}
        Spec(search5){
		int size = 5;
		int arr[size] = {1, 6, 2, 7, 9};
		Assert::That(search(1, arr, size), Equals(0));
                Assert::That(search(5, arr, size), Equals(-1));
                Assert::That(search(0, arr, size), Equals(-1));
                Assert::That(search(6, arr, size), Equals(1));
                Assert::That(search(2, arr, size), Equals(2));
                Assert::That(search(3, arr, size), Equals(-1));
        }
        Spec(search4){
		int size = 4;
		int arr[size] = {1, 3, 4, 7};
		Assert::That(search(1, arr, size), Equals(0));
                Assert::That(search(5, arr, size), Equals(-1));
                Assert::That(search(3, arr, size), Equals(1));
                Assert::That(search(6, arr, size), Equals(-1));

        }        
        Spec(nomatching){
		int size = 4;
		int arr[size] = {1, 3, 4, 7};
		Assert::That(search(2, arr, size), Equals(-1));
                Assert::That(search(5, arr, size), Equals(-1));
                Assert::That(search(6, arr, size), Equals(-1));
                Assert::That(search(9, arr, size), Equals(-1));

        }            
        Spec(consecutiveMatch){
		int size = 4;
		int arr[size] = {1, 1, 1, 1};
		Assert::That(search(1, arr, size), Equals(0));
                Assert::That(search(1, arr, size), Equals(0));
                Assert::That(search(1, arr, size), Equals(0));
                Assert::That(search(1, arr, size), Equals(0));

        }     
        Spec(consecutiveNo_Match){
		int size = 4;
		int arr[size] = {5, 5, 5, 5};
		Assert::That(search(1, arr, size), Equals(-1));
                Assert::That(search(1, arr, size), Equals(-1));
                Assert::That(search(1, arr, size), Equals(-1));
                Assert::That(search(1, arr, size), Equals(-1));

        }          
        Spec(size1){
		int size = 1;
		int arr[size] = {5};
		Assert::That(search(1, arr, size), Equals(-1));


        }
};

//===============                ===============
//===============     Part 4     ===============
//===============                ===============   


bool compare(int one[], int two[], int arr, int size){ 

	if (arr != size){
		return false;
	}

	for (int i = 0; i < arr; i++){
		if (one[i] != two[i]){

			return false;
		}
	}

	return true;
}

Context(sumuptest){

	Spec(sumuptest4){
		// The input array
		int arr[4] = {1,2,3,4};
		running_sum(arr, 4);
		int expected[4] = {1,3,6,10};

		Assert::That(compare(arr, expected, 4, 4), IsTrue());
	}

	Spec(sumtest5){
		// The input array
		int arr[5] = {5, 4, 2, 1, 3};

		running_sum(arr, 5);

		// What's the expected result
		int expected[5] = {5,9,11,12,15};


		Assert::That(compare(arr, expected, 5, 5), IsTrue());
	}
	Spec(sumtest3){
		// The input array
		int arr[3] = {2, 1, 3};

		running_sum(arr, 3);

		// What's the expected result
		int expected[3] = {2, 3, 6};


		Assert::That(compare(arr, expected, 3, 3), IsTrue());
	}
	Spec(sumtest2){
		// The input array
		int arr[2] = {1, 8};

		running_sum(arr, 2);

		// What's the expected result
		int expected[2] = {1, 9};


		Assert::That(compare(arr, expected, 2, 2), IsTrue());
	}
	Spec(sumtest1){
		// The input array
		int arr[1] = {1};

		running_sum(arr, 1);

		// What's the expected result
		int expected[1] = {1};


		Assert::That(compare(arr, expected, 1, 1), IsTrue());
	}
	Spec(consec){
		// The input array
		int arr[4] = {1,1,1,1};

		running_sum(arr, 4);

		// What's the expected result
		int expected[4] = {1,2,3,4};


		Assert::That(compare(arr, expected, 4, 4), IsTrue());
	}
	Spec(consecfalse){
		// The input array
		int arr[4] = {1,0};

		running_sum(arr, 4);

		// What's the expected result
		int expected[4] = {1,3};


		Assert::That(compare(arr, expected, 4, 4), IsFalse());
	}
	Spec(allzero){
		// The input array
		int arr[4] = {0,0,0,0};

		running_sum(arr, 4);

		// What's the expected result
		int expected[4] = {0,0,0,0};


		Assert::That(compare(arr, expected, 4, 4), IsTrue());
	}
                
	
};



//===============                ===============
//===============     Part 5     ===============
//===============                ===============


bool compare(float values, float size){

    const float epsilon = 0.00001;

    return std::abs(values - size) < epsilon;
}
    
Context(trimavgtest){
	Spec(test1){
		 float values[] = {4000, 3000, 1000, 2000};
   		 float size = 4;
		Assert::That(trimmed_average(values, size), Equals(2500)); 
	}
	Spec(test2){
		 float values[] = {100, 300, 200};
   		 float size = 3;
		Assert::That(trimmed_average(values, size), Equals(200)); 
	}
		Spec(test3){
		 float values[] = {100, 200, 300, 400, 500};
   		 float size = 5;
		Assert::That(trimmed_average(values, size), Equals(300)); 
	}
		Spec(singldigit){
		 float values[] = {5, 4, 3, 6, 8, 9};
   		 float size = 5;
		Assert::That(trimmed_average(values, size), Equals(5)); 
	}
		Spec(allzero){
		 float values[] = {0, 0, 0};
   		 float size = 3;
		Assert::That(trimmed_average(values, size), Equals(0)); 
	}
		Spec(largemixednumbers){
		 float values[] = {5123, 5687, 9631, 1237};
   		 float size = 4;
		Assert::That(trimmed_average(values, size), Equals(5405)); 
	}
		Spec(PRIMENUMBERSeven){
		 float values[] = {7, 9, 13, 19};
   		 float size = 4;

		Assert::That(trimmed_average(values, size), Equals(11)); 
	}
		Spec(PRIMENUMBERSodd){
		 float values[] = {7, 9, 13};
   		 float size = 3;
		 trimmed_average(values, size);
		Assert::That(trimmed_average(values, size), Equals(9)); 
	}

	 	Spec(PRIMENUMBERSodd){
	 	 float values[] = {7, 9, 13, 19, 3};
   	 	 float size = 5;
	 	 trimmed_average(values, size);
	 	Assert::That(trimmed_average(values, size), Equals(float("9.66667"))); 
	 }

	// 	Spec(sizemismatch){
	// 	 float values[] = {7, 9, 13, 19, 3};
   	// 	 float size = 3;
	// 	 trimmed_average(values, size);
	// 	Assert::That(trimmed_average(values, size), Equals(-nan)); 
	// }

};

//===============                ===============
//===============     Part 6     ===============
//===============                ===============

bool compare(int one[], int two[], int arr, int size){ 

	if (arr != size){
		return false;
	}

	for (int i = 0; i < arr; i++){
		if (arr < one[] || arr > two[]){

			return false;
		}
	}

	return true;
}

Context(randfilltest){
	Spec(rand1){
		// The input array
		int arr[10];
		int one = 1;
		int two = 100;
		random_fill(arr,10,1,100);
		Assert::That(random_fill(arr,10, 1, 100), IsTrue());
	}


};

//===============                ===============
//===============     Part 7     ===============
//===============                ===============

Context(sumofuniquetest){
	Spec(unique1){
		int size = 4;
		int arr[size] = {1, 2, 3, 3};
		Assert::That(sum_unique(arr, size), Equals(6));
	}
	Spec(unique2){
		int size = 2;
		int arr[size] = {1,3};
		Assert::That(sum_unique(arr, size), Equals(4));
	}        
	Spec(unique3){
		int size = 3;
		int arr[size] = {1,5,4};
		Assert::That(sum_unique(arr, size), Equals(10));
	}
	Spec(unique5){
		int size = 1;
		int arr[size] = {3};
		Assert::That(sum_unique(arr, size), Equals(3));
	}
	Spec(unique4){
		int size = 5;
		int arr[size] = {1,2,7,8,5};
		Assert::That(sum_unique(arr, size), Equals(23));
	} 
	Spec(consecutive){
		int size = 3;
		int arr[size] = {3,3,3};
		Assert::That(sum_unique(arr, size), Equals(3));
	} 

	Spec(consecutivemultiple){
		int size = 5;
		int arr[size] = {3,1,3,2,1};
		Assert::That(sum_unique(arr, size), Equals(6));
	} 
	
};


//===============                ===============
//===============     Part 8     ===============
//===============                ===============


Context(autologtest){
	Spec(autotest1){
		int size = 4;
		int arr[size] = {1, 3, 3, 3};
		Assert::That(autological(arr, 4), Equals(3));
	}
	Spec(autotest2){
		int size = 4;
		int arr[size] = {1, 2, 2, 3};
		Assert::That(autological(arr, 4), Equals(2));
	}
	Spec(autotest3){
		int size = 5;
		int arr[size] = {1, 3, 3, 3, 5};
		Assert::That(autological(arr, 5), Equals(3));
	}
	Spec(consecutive){
		int size = 5;
		int arr[size] = {5,5,5,5,5};
		Assert::That(autological(arr, 5), Equals(5));
	}        
	Spec(mixed){
		int size = 3;
		int arr[size] = {1,2,3};
		Assert::That(autological(arr, 3), Equals(1));
	}
	Spec(nonetest){
		int size = 4;
		int arr[size] = {5,6,7,8};
		Assert::That(autological(arr, 4), Equals(-1));
	}
	Spec(nonetest2){
		int size = 5;
		int arr[size] = {7,3,4,5,6};
		Assert::That(autological(arr, 5), Equals(-1));
	}
	Spec(zeros){
		int size = 3;
		int arr[size] = {0,0,0};
		Assert::That(autological(arr, 3), Equals(-1));
	}
    	
};

int main(){
    return TestRunner::RunAllTests();
}
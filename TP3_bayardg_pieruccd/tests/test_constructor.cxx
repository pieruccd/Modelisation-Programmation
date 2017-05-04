#include "gtest/gtest.h"
#include "Dvector.h"

class DvectorTest: public ::testing::Test {
	protected:
		virtual void SetUp() {
		}

		virtual void TearDown() {
			// Code here will be called immediately after each test
			// (right before the destructor).
		}
};

TEST_F(DvectorTest,constructor){
	Dvector v(3,2.5);
	EXPECT_EQ(3,v.size())<< "1 : This will be shown in case it fails";
	for (int i=0;i<v.size();i++){
		EXPECT_EQ(v(i),2.5);
	}
}

TEST_F(DvectorTest,constructor_defaut){
	Dvector v;
	EXPECT_EQ(0,v.size());
}


TEST_F(DvectorTest, constructor1){
	Dvector v(4);
	EXPECT_EQ(4,v.size())<< "1 : This will be shown in case it fails";
	for (int i=0;i<v.size();i++){
		EXPECT_EQ(v(i),0);
	}
}

TEST_F(DvectorTest, size){
	Dvector v(3,2.5);
	EXPECT_EQ(v.dim,v.size());
}

TEST_F(DvectorTest, constructor_from_file){
	Dvector v("tp1_test1.txt");
	EXPECT_EQ(10,v.size());
	Dvector w("tp1_test2.txt");
	EXPECT_EQ(16737,w.size());

}

TEST_F(DvectorTest, FillRandomly){
	Dvector x(2,0);
	x.fillRandomly();
	EXPECT_GT(1,x(0))<< "8 : This will be shown in case it fails";
	EXPECT_LT(0,x(1))<< "9 : This will be shown in case it fails";
	EXPECT_GT(1,x(1))<< "10 : This will be shown in case it fails";
	EXPECT_LT(0,x(0))<< "11 : This will be shown in case it fails";
}

TEST_F(DvectorTest,constructor_copy){
	Dvector v(3,2.5);
	Dvector z(v);
	EXPECT_EQ(v.size(),z.size());
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),z(i));
	}
}


int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


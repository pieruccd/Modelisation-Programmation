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


TEST_F(DvectorTest,operator_acces){
	Dvector v(3,2.5);
	for (int i=0; i<v.size(); i++){
		EXPECT_EQ(2.5,v(i));
	}
}

TEST_F(DvectorTest,operator_PlusEgalDvector){
	Dvector v(3,2.5);
	Dvector z(3,-7.5);
	v+=z;
	EXPECT_EQ(v.size(),z.size());
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),-5);
	}
	Dvector w(3,10);
	v+=w;
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),5);
	}
}

TEST_F(DvectorTest,operator_MoinsEgalDvector){
	Dvector v(3,2.5);
	Dvector z(3,-7.5);
	v-=z;
	EXPECT_EQ(v.size(),z.size());
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),10);
	}
	Dvector w(3,10);
	v-=w;
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),0);
	}
}


TEST_F(DvectorTest,operator_MultEgalDvector){
	Dvector v(3,2.5);
	Dvector z(3,2);
	v*=z;
	EXPECT_EQ(v.size(),z.size());
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),5);
	}
	Dvector w(3,-2);
	v*=w;
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),-10);
	}
}

TEST_F(DvectorTest,operator_DivEgalDvector){
	Dvector v(3,10);
	Dvector z(3,2);
	v/=z;
	EXPECT_EQ(v.size(),z.size());
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),5);
	}
	Dvector w(5,-10);
	v/=w;
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),-0.5);
	}
}

TEST_F(DvectorTest,operator_PlusEgalDouble){
	Dvector v(3,2.5);
	v+=5;
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),7.5);
	}
	v+=-10;
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),-2.5);
	}
}

TEST_F(DvectorTest,operator_MoinsEgalDouble){
	Dvector v(3,2.5);
	v-=5;
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),-2.5);
	}
	v-=-10;
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),7.5);
	}
}

TEST_F(DvectorTest,operator_MultEgalDouble){
	Dvector v(3,2.5);
	v*=5;
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),12.5);
	}
	v*=-10;
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),-125);
	}
}

TEST_F(DvectorTest,operator_DivEgalDouble){
	Dvector v(3,2.5);
	v/=5;
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),0.5);
	}
	v/=-10;
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),-0.05);
	}
}

TEST_F(DvectorTest,Resize){
	Dvector v(10,7);
	v.resize(5,3);
	EXPECT_EQ(v.size(),5);
	for (int i=0;i< v.size(); i++){
		EXPECT_EQ(v(i),7);
	}
	v.resize(12,8);
	EXPECT_EQ(v.size(),12);
	for (int i=0;i<5;i++){
		EXPECT_EQ(v(i),7);
	}
	for (int i=5;i<12;i++){
		EXPECT_EQ(v(i),8);
	}
}


/*
   TEST_F(DvectorTest,operator){

   }
 */

TEST_F(DvectorTest,Operator_PlusDvector){
	Dvector v(3,8);
	Dvector w(3,4);
	Dvector u;
	u=v+w;
	EXPECT_EQ(3,u.size());
	for (int i=0; i<u.size();i++){
		EXPECT_EQ(u(i),12);
	}
}

TEST_F(DvectorTest,Operator_MoinsDvector){
	Dvector v(3,8);
	Dvector w(3,4);
	Dvector u;
	u=v-w;
	EXPECT_EQ(3,u.size());
	for (int i=0; i<u.size();i++){
		EXPECT_EQ(u(i),4);
	}
	u=w-v;
	for (int i=0; i<u.size();i++){
		EXPECT_EQ(u(i),-4);
	}
}

TEST_F(DvectorTest,Operator_MultDvector){
	Dvector v(3,8);
	Dvector w(3,4);
	Dvector u;
	u=v*w;
	EXPECT_EQ(3,u.size());
	for (int i=0; i<u.size();i++){
		EXPECT_EQ(u(i),32);
	}
}

TEST_F(DvectorTest,Operator_DivDvector){
	Dvector v(3,8);
	Dvector w(3,4);
	Dvector u;
	u=v/w;
	EXPECT_EQ(3,u.size());
	for (int i=0; i<u.size();i++){
		EXPECT_EQ(u(i),2);
	}
	u=w/v;
	for (int i=0; i<u.size();i++){
		EXPECT_EQ(u(i),0.5);
	}
}

TEST_F(DvectorTest, Operator_PlusDouble){
	Dvector v(3,2.5);
	EXPECT_EQ(3,v.size());
	v=v+3;
	for (int i=0; i<v.size();i++){
		EXPECT_EQ(v(i),5.5);
	}
}

TEST_F(DvectorTest, Operator_MoinsDouble){
	Dvector v(3,2.5);
	EXPECT_EQ(3,v.size());
	v=v-3;
	for (int i=0; i<v.size();i++){
		EXPECT_EQ(v(i),-0.5);
	}
}

TEST_F(DvectorTest, Operator_MultDouble){
	Dvector v(3,2.5);
	EXPECT_EQ(3,v.size());
	v=v*3;
	for (int i=0; i<v.size();i++){
		EXPECT_EQ(v(i),7.5);
	}
}

TEST_F(DvectorTest, Operator_DivDouble){
	Dvector v(3,4.5);
	EXPECT_EQ(3,v.size());
	v=v/3;
	for (int i=0; i<v.size();i++){
		EXPECT_EQ(v(i),1.5);
	}
}

TEST_F(DvectorTest, Operator_MoinsUnaire){
	Dvector v(3,2.5);
	Dvector u;
	u=-v;
	EXPECT_EQ(3,u.size());
	for (int i=0; i<u.size(); i++){
		EXPECT_EQ(u(i),-v(i));
	}
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


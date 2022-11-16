/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};


TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, placePiece)
{
	TicTacToeBoard board;
	int row = 1; 
	int column = 2;
 	board.placePiece(row, column);
	ASSERT_EQ(row, 1);	
	ASSERT_EQ(column, 2);
	
}
TEST(TicTacToeBoardTest, checkplacePiece)
{
	TicTacToeBoard board;
	ASSERT_TRUE(board.placePiece(1, 1) == X);
}


TEST(TicTacToeBoardTest, getPiece)
{
	int row = 1;
	int column = 1;
	TicTacToeBoard board;
	board.placePiece(row, column);
	int result = board.getPiece(row, column);
	ASSERT_EQ(X,result); 
}

TEST(TicTacToeBoardTest, getWinner_Invalid)
{
	TicTacToeBoard board;
	ASSERT_EQ(Invalid, board.getWinner());
}


TEST(TicTacToeBoardTest, getWinner_Blank)
{
	TicTacToeBoard board;
	ASSERT_EQ(Blank, board.getWinner());
}




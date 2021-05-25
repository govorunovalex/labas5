#include "..//MStackLib/MStack.h"

#include "..//gtest/gtest.h"

TEST(TMStack, can_create_multistack_positive_length)
{
    ASSERT_NO_THROW(TMStack < int >lost(5, 7));
}

TEST(TMStack, can_create_copy)
{
    TMStack < int >lost(1, 1);

    ASSERT_NO_THROW(TMStack < int >lost1(lost));
}

TEST(TMStack, cant_create_stack_with_negative_length)
{
    ASSERT_ANY_THROW(TMStack < int >lost(5, -5));
}

TEST(TMStack, can_set_smth)
{
    TMStack < int >lost(5, 15);

    ASSERT_NO_THROW(lost.Set(2, 3));
}

TEST(TMStack, can_get_smth)
{
    TMStack < int >lost(5, 15);

    lost.Set(2, 25);

    EXPECT_EQ(25, lost.Get(2));
}

TEST(TMStack, can_check_if_msctack_is_empty_true_check)
{
    TMStack < int >lost(5, 15);

    EXPECT_EQ(1, lost.IsEmpty(1));
}

TEST(TMStack, can_check_if_msctack_is_empty_false_check)
{
    TMStack < int >lost(5, 15);

    lost.Set(1, 9);

    EXPECT_EQ(0, lost.IsEmpty(1));
}

TEST(TMStack, can_check_if_msctack_is_full_false_check)
{
    TMStack < int >lost(3, 15);

    EXPECT_EQ(0, lost.IsFull(1));
}

TEST(TMStack, can_check_if_msctack_is_full_true_check)
{
    TMStack < int >lost(2, 2);

    lost.Set(1, 9);

    EXPECT_EQ(true, lost.IsFull(1));
}

TEST(TMStack, can_get_size_and_gives_right_answer)
{
    TMStack < int >lost(2, 10);

    ASSERT_NO_THROW(lost.GetSize());
    EXPECT_EQ(10, lost.GetSize());
}

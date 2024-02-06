#include <gtest/gtest.h>
#include "../core/mnode.h"
#include "../core/section.h"

mnode createTestNode()
{
    glm::vec3 position(1.0f, 2.0f, 3.0f);
    glm::vec3 direction(4.0f, 5.0f, 6.0f);
    float roll = 7.0f;
    float velocity = 8.0f;
    float normalForce = 9.0f;
    float lateralForce = 10.0f;

    mnode node(position, direction, roll, velocity, normalForce, lateralForce);
    node.updateNorm();

    return node;
}

#pragma region MNodeTest
TEST(MNodeTest, Constructor)
{
    mnode testNode = createTestNode();

    glm::vec3 expectedPosition = glm::vec3(1.0f, 2.0f, 3.0f);
    glm::vec3 expectedDirection = glm::vec3(0.455842f, 0.569803f, 0.683764f);
    glm::vec3 expectedLateral = glm::vec3(-0.825848f, 0.121869f, 0.550566f);
    glm::vec3 expectedNormal = glm::vec3(0.230384f, -0.815656f, 0.526124f);
    float expectedRoll = 7.0f;
    float expectedVelocity = 8.0f;
    float expectedNormalForce = 9.0f;
    float expectedLateralForce = 10.0f;

    ASSERT_EQ(expectedPosition, testNode.vPos);
    ASSERT_NEAR(expectedDirection.x, testNode.vDir.x, 0.0001f);
    ASSERT_NEAR(expectedDirection.y, testNode.vDir.y, 0.0001f);
    ASSERT_NEAR(expectedDirection.z, testNode.vDir.z, 0.0001f);
    ASSERT_NEAR(expectedLateral.x, testNode.vLat.x, 0.0001f);
    ASSERT_NEAR(expectedLateral.y, testNode.vLat.y, 0.0001f);
    ASSERT_NEAR(expectedLateral.z, testNode.vLat.z, 0.0001f);
    ASSERT_NEAR(expectedNormal.x, testNode.vNorm.x, 0.0001f);
    ASSERT_NEAR(expectedNormal.y, testNode.vNorm.y, 0.0001f);
    ASSERT_NEAR(expectedNormal.z, testNode.vNorm.z, 0.0001f);
    ASSERT_EQ(expectedRoll, testNode.fRoll);
    ASSERT_EQ(expectedVelocity, testNode.fVel);
    ASSERT_EQ(expectedNormalForce, testNode.forceNormal);
    ASSERT_EQ(expectedLateralForce, testNode.forceLateral);
}

TEST(MNodeTest, SetAndUpdateRoll)
{
    mnode node = createTestNode();
    float rollAmount = 20.0f;

    glm::vec3 expectedLateral = glm::vec3(-0.852931f, 0.395877f, 0.340281f);
    glm::vec3 expectedNormal = glm::vec3(-0.076793f, -0.738317f, 0.666460f);
    float expectedRoll = 28.1997f;

    node.setRoll(rollAmount);

    ASSERT_NEAR(expectedLateral.x, node.vLat.x, 0.0001f);
    ASSERT_NEAR(expectedLateral.y, node.vLat.y, 0.0001f);
    ASSERT_NEAR(expectedLateral.z, node.vLat.z, 0.0001f);
    ASSERT_NEAR(expectedNormal.x, node.vNorm.x, 0.0001f);
    ASSERT_NEAR(expectedNormal.y, node.vNorm.y, 0.0001f);
    ASSERT_NEAR(expectedNormal.z, node.vNorm.z, 0.0001f);
    ASSERT_NEAR(expectedRoll, node.fRoll, 0.0001f);
}

TEST(MNodeTest, ChangePitch)
{
    mnode node = createTestNode();
    float delta = 20.0f;
    bool inverted = false;

    glm::vec3 expectedDirection = glm::vec3(0.320249f, 0.816505f, 0.480374f);
    glm::vec3 expectedLateral = glm::vec3(-0.848969f, 0.114520f, 0.515884f);
    glm::vec3 expectedNormal = glm::vec3(0.366210f, -0.573035f, 0.729863f);

    node.changePitch(delta, inverted);

    ASSERT_NEAR(expectedDirection.x, node.vDir.x, 0.0001f);
    ASSERT_NEAR(expectedDirection.y, node.vDir.y, 0.0001f);
    ASSERT_NEAR(expectedDirection.z, node.vDir.z, 0.0001f);
    ASSERT_NEAR(expectedLateral.x, node.vLat.x, 0.0001f);
    ASSERT_NEAR(expectedLateral.y, node.vLat.y, 0.0001f);
    ASSERT_NEAR(expectedLateral.z, node.vLat.z, 0.0001f);
    ASSERT_NEAR(expectedNormal.x, node.vNorm.x, 0.0001f);
    ASSERT_NEAR(expectedNormal.y, node.vNorm.y, 0.0001f);
    ASSERT_NEAR(expectedNormal.z, node.vNorm.z, 0.0001f);
}

TEST(MNodeTest, ChangeYaw)
{
    mnode node = createTestNode();
    float delta = 20.0f;

    glm::vec3 expectedDirection = glm::vec3(0.662213f, 0.569803f, 0.486620f);
    glm::vec3 expectedLateral = glm::vec3(-0.587739f, 0.121869f, 0.799819f);

    node.changeYaw(delta);

    ASSERT_NEAR(expectedDirection.x, node.vDir.x, 0.0001f);
    ASSERT_NEAR(expectedDirection.y, node.vDir.y, 0.0001f);
    ASSERT_NEAR(expectedDirection.z, node.vDir.z, 0.0001f);
    ASSERT_NEAR(expectedLateral.x, node.vLat.x, 0.0001f);
    ASSERT_NEAR(expectedLateral.y, node.vLat.y, 0.0001f);
    ASSERT_NEAR(expectedLateral.z, node.vLat.z, 0.0001f);
}

TEST(MNodeTest, DirectionToHeart)
{
    mnode node = createTestNode();
    float heart = 1.1f;

    glm::vec3 expectedDirectionHeart = glm::vec3(0.455842f, 0.569803f, 0.683764f);

    glm::vec3 directionHeart = node.vDirHeart(heart);

    ASSERT_NEAR(expectedDirectionHeart.x, directionHeart.x, 0.0001f);
    ASSERT_NEAR(expectedDirectionHeart.y, directionHeart.y, 0.0001f);
    ASSERT_NEAR(expectedDirectionHeart.z, directionHeart.z, 0.0001f);
}

TEST(MNodeTest, LateralToHeart)
{
    mnode node = createTestNode();
    float heart = 1.1f;

    glm::vec3 expectedLateralHeart = glm::vec3(-0.825848f, 0.121869f, 0.550566f);

    glm::vec3 lateralHeart = node.vLatHeart(heart);

    ASSERT_NEAR(expectedLateralHeart.x, lateralHeart.x, 0.0001f);
    ASSERT_NEAR(expectedLateralHeart.y, lateralHeart.y, 0.0001f);
    ASSERT_NEAR(expectedLateralHeart.z, lateralHeart.z, 0.0001f);
}
#pragma endregion

TEST(SectionTest, Constructor)
{
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

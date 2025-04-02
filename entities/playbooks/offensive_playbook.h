#ifndef OFFENSIVE_PLAYBOOK_H
#define OFFENSIVE_PLAYBOOK_H

#include "playbook.h"

/**
 * @brief Offensive playbook for team strategy
 * 
 * This playbook focuses on offensive play, assigning
 * one goalkeeper, one defender, and one attacker with
 * an aggressive stance.
 */
class OffensivePlaybook : public Playbook
{
public:
    OffensivePlaybook(WorldMap *worldMap, VSSRef::Color teamColor, float ownGoalX, float ownGoalY, float opponentGoalX, float opponentGoalY);

    /**
     * @brief Check if this playbook should be activated
     * 
     * Activates when the ball is in opponent's half or one of our players has the ball
     * 
     * @return true if conditions for activation are met
     */
    bool shouldActivate() override;

    /**
     * @brief Get the priority of this playbook
     * 
     * @return High priority when in offensive situations
     */
    int getPriority() const override;

protected:
    /**
     * @brief Initialize and assign roles to players
     * 
     * Creates goalkeeper, defender, and attacker roles
     */
    void initializeRoles() override;

    /**
     * @brief Update playbook-specific state
     * 
     * Called before executing roles
     */
    void updatePlaybookState() override;

private:
    
    /**
     * @brief Check if one of our players has the ball
     * 
     * @return true if one of our players is close to the ball
     */
    bool isTeamWithBall() const;

    float _ownGoalX;
    float _ownGoalY;
    float _opponentGoalX;
    float _opponentGoalY;
    
    // Constants
    static constexpr float BALL_CONTROL_THRESHOLD = 0.1f;
};

#endif // OFFENSIVE_PLAYBOOK_H
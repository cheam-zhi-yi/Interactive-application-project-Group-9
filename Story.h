#ifndef STORY_H //zhi yi
#define STORY_H

#include <string>
#include <vector>
#include "StoryElements.h"

// A simple paragraph-by-paragraph, choice-driven console story.
// - Narration is presented via Dialogue objects (press Enter to continue).
// - Menus are presented via Choice objects; branching is resolved with
//   switch/break statements on the selected option number.
class Story {
public:
    // Entry point: runs the whole story from start to finish.
    void run();

private:
    // Prints a closing message and marks the story as finished.
    void endGame(const std::string& message);

    // ---- Scenes ----
    void introScene();               // Tavern intro, decide whether to approach the girls
    void approachGuildCounter();     // Meeting the trio at the guild counter
    void goddessIntroduction();      // Celestine's "goddess" introduction + first choice
    void deadpanStareLoop();         // Handles the "silent stare" branch (option re-appears minus itself)
    void clarifyDivineDomain();      // Celestine clarifies she's goddess of lost objects specifically
    void partyFormation();           // Introductions, guild registration, party officially formed

    bool finished_ = false;          // set true once an ending has been reached
};

#endif // STORY_H
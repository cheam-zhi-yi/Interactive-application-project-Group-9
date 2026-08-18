#include "Story.h" //zhi yi
#include <iostream>

// -------------------------- Utility helpers --------------------------

void Story::endGame(const std::string& message) {
    std::cout << "\n" << message << "\n";
    std::cout << "\n=== THE END ===\n";
    finished_ = true;
}

// ------------------------------ Scenes ------------------------------

void Story::run() {
    introScene();
}

void Story::introScene() {
    Dialogue(
        "You are John, and you had just finished a long and tiresome quest that had probably "
        "exhausted most of your youth. Right now you just want to be hammered by beers. Glug "
        "glug glug -- that's the twelfth pint of beer for tonight. You're trying to drink away "
        "the memory of being caught in a slime for the first time, the substance getting under "
        "your armor, going places it isn't meant to. Adventuring alone has been rough, and all "
        "you want to do is forget. The guild counter is getting noisy, and you notice three "
        "girls making a commotion. You overhear talk of party needs and minimum head counts. "
        "You could mind your own business, but they might also be the solution to your problems "
        "right now."
    ).present();

    int choice = Choice("What do you do?", {
        "Go up to them",
        "Leave"
        }).getSelection();

    switch (choice) {
    case 1:
        approachGuildCounter();
        break;
    case 2:
        endGame("You decide it isn't worth the trouble, finish your drink, and head home alone.");
        break;
    default:
        break;
    }
}

void Story::approachGuildCounter() {
    Dialogue(
        "As you walk up to the counter, you notice one of them seems to be the face of the "
        "group -- and so loud that you start to sober up. She's dressed elegantly in a white "
        "dress marked with a cross, probably a priestess. The guild receptionist spots you and "
        "her face lights up. \"Sir, you don't have a party yet, right? Would you mind joining "
        "these girls? I cannot in good conscience let a party of only spellcasters be formed!\" "
        "As you turn to face the trio, you take note of the priestess, another girl silently "
        "sizing you up from a corner, and the last one whistling as she gazes out the window, "
        "pretending not to know the priestess at all."
    ).present();

    Dialogue(
        "The priestess introduces herself as the goddess of all that is lost, and insists that "
        "you join her party. \"REJOICE, HUMAN. YOU STAND IN THE PRESENCE OF THE GODDESS OF THAT "
        "WHICH IS LOST, CELESTINE! I have deemed you worthy of joining my party as its sole "
        "frontliner.\" Now you understand why the other two didn't want to be associated with her."
    ).present();

    goddessIntroduction();
}

void Story::goddessIntroduction() {
    int choice = Choice("How do you respond?", {
        "Play along with her act - \"It would be an honor to serve the shepherd who escorts the misguided down the path of righteousness.\"",
        "Refuse to join her party",
        "Shoot her a deadpan stare without uttering a single word",
        "Ask her to clarify what exactly she's the goddess of"
        }).getSelection();

    switch (choice) {
    case 1:
        Dialogue(
            "Celestine beams, utterly satisfied with your reverence. \"Well spoken, mortal. "
            "Your devotion has been noted.\""
        ).present();
        partyFormation();
        break;

    case 2:
        endGame("You refuse to entertain her act and turn to leave the guild hall.");
        break;

    case 3:
        deadpanStareLoop();
        break;

    case 4:
        clarifyDivineDomain();
        break;

    default:
        break;
    }
}

void Story::deadpanStareLoop() {
    Dialogue(
        "You say nothing at all, simply staring back at her with a flat, unimpressed expression. "
        "The self-proclaimed goddess repeats her declaration word for word, undeterred. Off to "
        "the side, the quiet girl -- Mara -- hums a tune under her breath, subtly putting more "
        "distance between herself and Celestine, acting as if she has no idea what's going on."
    ).present();

    // The "deadpan stare" option is now removed/greyed out from the list.
    int choice = Choice("How do you respond?", {
        "Play along with her act - \"It would be an honor to serve the shepherd who escorts the misguided down the path of righteousness.\"",
        "Refuse to join her party",
        "Ask her to clarify what exactly she's the goddess of"
        }).getSelection();

    switch (choice) {
    case 1:
        Dialogue(
            "Celestine beams, utterly satisfied with your reverence. \"Well spoken, mortal. "
            "Your devotion has been noted.\""
        ).present();
        partyFormation();
        break;

    case 2:
        endGame("You refuse to entertain her act and turn to leave the guild hall.");
        break;

    case 3:
        clarifyDivineDomain();
        break;

    default:
        break;
    }
}

void Story::clarifyDivineDomain() {
    Dialogue(
        "Celestine clarifies, with great dignity, that she is specifically the goddess of lost "
        "objects."
    ).present();

    int choice = Choice("How do you respond?", {
        "\"Forgive me, dear goddess. Your humble servant had failed to recognize your personage's dominion.\"",
        "\"There's no way a goddess for something so niche exists.\"",
        "\"If we're just playing pretend, you should pick a divine dominion larger than that.\""
        }).getSelection();

    // Celestine's response changes depending on the choice, but the story
    // proceeds to party formation regardless of which line is picked.
    switch (choice) {
    case 1:
        Dialogue(
            "The goddess stands tall and proud. \"That's right, mortal -- you made a mistake. "
            "But I am a rather benevolent deity, and I hereby grant you forgiveness for your "
            "transgressions,\" Celestine says, chest puffed out with satisfaction."
        ).present();
        break;

    case 2:
    case 3:
        Dialogue(
            "The goddess glares at you, looking as though she might erupt in anger. She takes "
            "a step forward. \"Do be warned -- you are still talking to a goddess. Watch your "
            "tongue, or you will be PUNISHED!\""
        ).present();
        break;

    default:
        break;
    }

    partyFormation();
}

void Story::partyFormation() {
    Dialogue(
        "Celestine drags a resisting girl in front of you and introduces her as Mara -- a "
        "completely lacklustre, ordinary human being. Mara thrashes about, clearly against this "
        "for whatever reason, before reluctantly introducing herself properly."
    ).present();

    Dialogue(
        "Celestine then jabs a finger at the girl sitting quietly in the corner, introducing her "
        "as Sirius. You follow her finger and briefly meet the girl's eyes. She glances back down "
        "at her notebook, scribbling something in it without a word."
    ).present();

    Dialogue(
        "Celestine proudly proclaims that Sirius is an incredibly powerful archmage, and that "
        "both girls are her faithful followers. Mara immediately rebuts this, insisting she is "
        "instead a follower of the sun god, while Sirius stays silent -- though you notice her "
        "eyebrow twitch."
    ).present();

    Dialogue(
        "To officially form a party, Celestine and Sirius first need to register as adventurers. "
        "They are appraised, and Sirius -- the supposed archmage -- is assigned the lowest "
        "possible rank, much to the confusion of the whole party. They protest, insisting she "
        "clearly has skill far greater than her rank suggests, but the guild's decision is final."
    ).present();

    Dialogue(
        "Celestine, the self-proclaimed goddess, is also assigned a low rank. She asks about your "
        "rank and learns you're a relatively high-ranked adventurer -- much to her dismay, since "
        "she had assumed she would naturally be the leader of the group."
    ).present();

    Dialogue(
        "With ranks settled, the party is officially formed. Without wasting any more time, the "
        "four of you decide to take on your first quest together."
    ).present();

    endGame("Your new party -- you, Celestine, Mara, and Sirius -- sets out on its first quest.");
}
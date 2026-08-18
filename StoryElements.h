#ifndef STORY_ELEMENTS_H //zhi yi
#define STORY_ELEMENTS_H

#include <string>
#include <vector>

// Abstract base class for anything that can be shown to the reader.
// Every concrete story element knows how to "present" itself to the console.
class StoryElement {
public:
    virtual ~StoryElement() = default;
    virtual void present() const = 0;
};

// A single block of narration/story text. Presenting a Dialogue prints the
// paragraph and then blocks until the reader presses Enter to continue.
class Dialogue : public StoryElement {
public:
    explicit Dialogue(std::string text);

    void present() const override;

private:
    std::string text_;
};

// A numbered menu of options presented to the reader. Presenting a Choice
// prints the menu; getSelection() reads input, validates it, echoes back
// the number picked, and returns the 1-based index of that option.
class Choice : public StoryElement {
public:
    Choice(std::string prompt, std::vector<std::string> options);

    void present() const override;
    int getSelection() const;

private:
    std::string prompt_;
    std::vector<std::string> options_;
};

#endif

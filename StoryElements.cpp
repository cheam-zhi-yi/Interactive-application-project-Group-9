#include "StoryElements.h" //zhi yi
#include <iostream>

// Used with cin.ignore() below to flush any leftover characters on the
// input line after a read. A plain large constant instead of
// std::numeric_limits<std::streamsize>::max() so we don't need <limits>.
constexpr std::streamsize kFlushLineLimit = 10000;

// ------------------------------ Dialogue ------------------------------

Dialogue::Dialogue(std::string text) : text_(std::move(text)) {}

void Dialogue::present() const {
    std::cout << "\n" << text_ << "\n\n";
    std::cout << "[Press Enter to continue...]";
    std::cin.get();
}

// ------------------------------- Choice --------------------------------

Choice::Choice(std::string prompt, std::vector<std::string> options)
    : prompt_(std::move(prompt)), options_(std::move(options)) {
}

void Choice::present() const {
    std::cout << "\n";
    if (!prompt_.empty()) {
        std::cout << prompt_ << "\n";
    }
    for (size_t i = 0; i < options_.size(); ++i) {
        std::cout << (i + 1) << ". " << options_[i] << "\n";
    }
}

int Choice::getSelection() const {
    present();

    int selection = 0;
    while (true) {
        std::cout << "Enter choice: ";
        std::cin >> selection;

        if (std::cin.fail() || selection < 1 || selection > static_cast<int>(options_.size())) {
            std::cin.clear();
            std::cin.ignore(kFlushLineLimit, '\n');
            std::cout << "Invalid choice, try again.\n";
            continue;
        }

        // Clear the rest of the line so a following Dialogue's cin.get()
        // doesn't just consume the leftover newline.
        std::cin.ignore(kFlushLineLimit, '\n');

        // Echo back the number the reader picked for confirmation.
        std::cout << "You entered: " << selection << "\n";
        return selection;
    }
}
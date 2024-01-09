#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Array of positive messages
    const char* positiveMessages[] = {
        "You are capable of amazing things!",
        "Every day is a new opportunity to make someone smile.",
        "Believe in yourself and all that you are.",
        "Your positive action combined with positive thinking results in success.",
        "You are making a difference in the world, even if you don't realize it.",
        "Today is a good day for a good day!",
        "The best is yet to come.",
        "You have the power to create change.",
        "Your kindness is a gift to the world.",
        "Keep your face always toward the sunshine—and shadows will fall behind you."
    };

    // Calculate the number of messages in the array
    int numMessages = sizeof(positiveMessages) / sizeof(positiveMessages[0]);

    // Generate a random index to select a random positive message
    int randomIndex = std::rand() % numMessages;

    // Print the positive message
    std::cout << "Positive Energy: " << positiveMessages[randomIndex] << std::endl;

    return 0;
}
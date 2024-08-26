#include <iostream>
#include <cmath>
#include <string>

std::string frequencyToNote(double frequency) {
    const std::string notes[] = {"C", "C#", "D", "D#", "E", "E#", "F", "F#", "G", "G#", "A", "A#", "B"};
    const double A4 = 440.0 ;
    int note_number = static_cast<int>(std::round(12 * std::log2(frequency / A4))) + 49;
    int octave = note_number / 12;
    int note_index = note_number % 12;

    return notes[note_index] + std::to_string(octave);
}

int main() {
    double frequency = 440.0;
    std::cout << "The note for " << frequency << " Hz is: " << frequencyToNote(frequency) << "/n";
    return 0;
}
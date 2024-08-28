#include <iostream>
#include <vector>

// Template function to calculate the average bit rate of audio files.
// Takes a vector of pairs where each pair represents the size (in MB) and duration (in minutes) of an audio file.

template<typename T>
T calculateAverageBitRate(const std::vector<std::pair<T, T>>& audioFiles) {
    T total_size = 0;   //Initialize total size of all audio files.
    T total_duration = 0;   //Initialize total duration of all audio files.

    //Loop through each audio file to sum up sizes and durations.
    for (const auto& file : audioFiles) {
        total_size += file.first; //Accumulate the size of the current audio file.
        total_duration += file.second; // Accumulate the duration of the currentaudi file
    }

    // Calculate and return the average bit rate in kbps.
    //Bit rate = (total_size in bits) / total duration
    return (total_size * 8 * 1024) / total_duration; //Convert MB to bits and then to kbps.
}

int main() {
    //Vector of audio files with their sizes in MB and durations in minutes.
    std::vector<std::pair<double, double>> audioFiles = {
        {5.0, 3.5}, // 5.0 MB file with a duration of 3.5 minutes
        {4.5, 3.0}, // 4.5 MB file with a duration of 3.0 minutes
        {6.0, 4.0} // 6.0 MB file with a duration of 4.0 minutes
    };

    // Output the calculated average bit rate in kbps.
    std::cout << "Average Bit Rate: " << calculateAverageBitRate(audioFiles) << "kbps/n";
    return 0;
    }

#include <iostream> // Include the I/O stream library for std::cout
#include <vector>   // Include the vector library for std::vector

// Define a class named Song
class Song {
public:
    std::string title;   // Title of the song
    int duration;        // Duration of the song in seconds

    // Constructor to initialize the Song object
    Song(const std::string& t, int d) : title(t), duration(d) {}
};

int main() {
    // Create a vector of Song objects to represent a playlist
    std::vector<Song> playlist = {
        {"Song1", 180}, // Initialize with title "Song1" and duration 180 seconds
        {"Song2", 240}, // Initialize with title "Song2" and duration 240 seconds
        {"Song3", 210}  // Initialize with title "Song3" and duration 210 seconds
    };

    int total_seconds = 0; // Variable to accumulate the total duration in seconds

    // Iterate over each song in the playlist
    for (const auto& song : playlist) {
        total_seconds += song.duration; // Add the duration of each song to total_seconds
    }

    // Convert total duration from seconds to minutes and seconds
    int total_minutes = total_seconds / 60; // Integer division to get total minutes
    total_seconds %= 60;                   // Remainder operation to get remaining seconds

    // Output the total playlist duration using std::cout
    std::cout << "Total Playlist Duration: " 
              << total_minutes << " minutes and " 
              << total_seconds << " seconds.\n";

    return 0; // Return 0 to indicate successful completion
}
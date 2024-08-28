#include <iostream>
#include <string>

class Track {
    public:
    Track(std::string name, std::string artist, int minutes, int seconds)
    : track_name(name), track_artist(artist), duration_minutes(minutes), duration_seconds(seconds) {}

    void play() const {
        std::cout << "Playing: " << track_name << " by " << track_artist << "/n";
    }

    void pause() const {
        std::cout << "Pausing: " << track_name << "/n";
    }
    void displayInfo() const {
        std::cout << "track: " << track_name << "/nArtist:" << track_artist
        << "/nDuration: " << duration_minutes << "m " << duration_seconds << "s/n";
    }

    private:
        std::string track_name;
        std::string track_artist;
        int duration_minutes;
        int duration_seconds;
    };
    
    int main() {
        Track track("Cold Sweat", "Tinashe", 5, 11);
        track.displayInfo();
        track.play();
        track.pause();
        return 0;
    }
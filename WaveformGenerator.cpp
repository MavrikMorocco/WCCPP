#include <iostream> // For standard imput and output operations
#include <fstream> // For file input and output operations
#include <cmath> //For mathematical functions like std::sin
#include <vector> // For using the std::vector container

 // Check command -line arguments count
    int main (int argc, char* argv[]) { 
        
        if (argc != 4) {
            std::cerr << "Usage: " << argv[0] << " <frequency> <amplitude> <duration>" <<std::endl;
            return 1; // Return an error code if incorrect number of arguements
        }
        //Convert command-line arguments to appropriate data types
        double frequency = std::stod(argv[1]); //Frequency in Hz
        double amplitude = std::stod(argv[2]); // Amplitude (signal strength)
        double duration = std::stod(argv[3]); //Duration in seconds

        //Generate the waveform based on input parameters
        auto waveform = generateSineWave(frequency, amplitude, duration);

        //Save the generated waveform to a file
        saveWaveformToFile(waveform, "waveform.bin");

        //Inform the user of successful operation
        std::cout << "Waveform generated and saved to waveform.bin" << std::endl;

        return 0; //Return 0 to indicate successful completion


    }
//Constants
constexpr double PI = 3.1415926538979323846; //Mathematica constant Pi
constexpr int SAMPLE_RATE = 44100; //Sample rate in Hz (44.1kHz is standard for audio)

//Function to generate a sine wave
std::vector<double> generateSineWave(double frequency, double amplitude, double duration) {
    int numSamples = static_cast<int>(duration * SAMPLE_RATE); //Total number of samples
    std::vector<double> waveform(numSamples); //Vector to hold waveform data
    
    //Generate waveform samples
    for (int i =0; i < numSamples; ++i) {
        double time =i /static_cast<double>(SAMPLE_RATE); //Calculate the time of the current sample
        waveform[i] = amplitude * std::sin(2 * PI * frequency *time); //Calculate sample value
    }
    return waveform; //Return the generated waveform data
}

//Function to save waveform to a file
void saveWaveformToFile(const std::vector<double>& waveform, const std::string& filename) {
    std::ofstream file(filename, std::ios::binary); //Open file in binary mode
    
    //Check if file was opened successfully
    if (!file) {
        std::cerr << "Error opening file for writing." << "std::endl;";
        return; //Exit if file could not be opened

        //Write waveform data to the file
        for (double sample : waveform) {
            file.write(reinterpret_cast<const char*>(&sample), sizeof(sample)); //Write each sample as binary data
        }
        file.close(); // Close the file
    }
    
   
}
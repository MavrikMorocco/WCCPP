#include <iostream>
#include <vector>

// Function to apply a simple effect to audio samples
void applyEffect (std::vector<float>& samples) {
    for (auto& sample : samples) {
        sample *= 0.5f; //Simple gain reduction effect
    }
}

int main() {
    std::vector<float> audioSamples = {0.1f, 0.5f, -0.3f, 0.7f, -0.6f};

    std::cout << "Original samples: ";
    for (const auto& sample : audioSamples) {
        std::cout << sample << " ";
    }
std::cout << std::endl;

applyEffect(audioSamples);

std::cout << "Processed samples: ";
for (const auto& sample : audioSamples) {
    std::cout << sample << " " ;
}
std::cout << std::endl;

return 0;
}
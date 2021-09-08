#include "nucleotide_count.h"

#include <algorithm>
#include <stdexcept>

// Free functions
bool validate(std::string sequence) {
    return sequence.find_first_not_of("ATCG") == std::string::npos;
}

// Namespace
namespace nucleotide_count {

// Constructor
counter::counter(std::string const &dna) {
    if (!validate(dna)) {
        throw std::invalid_argument("Invalid sequence.");
    }

    if (dna != "") {
        for (std::string::size_type i = 0; i < dna.size(); ++i) {
            nucleotides[dna[i]]++;
        }
    }
}

// Methods
int counter::count(const char nucleotide) const {
    if (!validate(std::string(1, nucleotide))) {
        throw std::invalid_argument("Nucleotide not present");
    }

    return nucleotides.at(nucleotide);
}

std::map<char, int> counter::nucleotide_counts() const { return nucleotides; }

}  // namespace nucleotide_count

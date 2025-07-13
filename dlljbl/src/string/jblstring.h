#include "../jbl.h"

#ifndef JBL_STRING_H
#define JBL_STRING_H



namespace JBL
{

    /// @brief Calculates the length of a string.
    /// @param text The string to measure.
    /// @return The length of the string.
    size_t StringLength(const char* text);

    /// @brief Trims leading and trailing whitespace from a string.
    /// @param[in] text
    /// @param[in,out] length The initial length of the text (can be 0, as then the StringLength method will be called).
    /// This will be updated to the length of the trimmed string.
    /// @return
    char* Trim(const char* text, size_t& length);

}

#endif // JBL_STRING_H
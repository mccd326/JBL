#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

#include "../jbl.h"
#include "jblstring.h"

namespace JBL{

    bool IsWhitespace(char c)
    {
        return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
    }

    JBL_EXPORT size_t JBL_API StringLength(const char* text)
    {
        if (text == nullptr)
        {
            return 0;
        }

        size_t length = 0;
        while (text[length] != '\0')
        {
            ++length;
        }
        return length;
    }

    JBL_EXPORT char* JBL_API Trim(const char* text, size_t& length)
    {
        if(text == nullptr){
            length = 0;
            return nullptr;
        }

        if(length == 0){
            length = StringLength(text);
        }

        size_t start = 0;
        while(text[start] != '\0' && IsWhitespace(text[start])){
            ++start;
        }

        size_t end = length - 1;
        while(end > start && IsWhitespace(text[end])){
            --end;
        }
        end++; // Include the last non-whitespace character

        size_t trimmedLength = end - start;
        char* trimmed = static_cast<char*>(calloc(trimmedLength + 1, sizeof(char)));
        if(trimmed == nullptr){
            length = 0;
            return nullptr;
        }

        for(size_t i = 0; i < trimmedLength; ++i){
            trimmed[i] = text[start + i];
        }

        length = trimmedLength;
        trimmed[trimmedLength] = '\0'; // Null-terminate the trimmed string
        return trimmed;
    }

}
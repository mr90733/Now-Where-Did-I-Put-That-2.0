#include "where.hpp"

int find ( const std::string& phrase, char search) {

    for ( int i = 0; i < phrase.size(); ++i ) {

        if ( phrase[i] == search ) {

            return i;
        }
    }

    return -1;
}

int find (const std::string& phrase, const std::string& search) {

    for ( int i = 0; i < phrase.size(); ++i ) {

        int j=0;

        while ( j < phrase.size() && phrase[i] == search[j]) {

            return 1 ;
        }
    }

    return -1 ;
}
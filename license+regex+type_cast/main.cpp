# include <iostream>
# include <string>
# include <regex>

/*
 * the key is
 * hAys-JshSoP-82-KaTnQyRQ-%_++
*/
bool check_key( char const *key ) {
    bool is_valid = false;
    int key_ck = -292;

    if ( std::regex_match(key, std::regex(".{4}-.{6}-\\d{2}-.{8}-[-+_\\(\\)*&%]{4}")) ) {
        for ( std::size_t i = 0; i < std::strlen(key); ++i) {
            key_ck += ((int)key[i] - std::strlen(key) + i) % (int)key[i] + (int)key[i];
        }

        if ( key_ck == 3716 ) {
            if ( (char)(key_ck / 11) == 'Q' ) {
                key_ck = -1;
                for ( int i = 0; i < 5; ++i ) {
                    key_ck += (int)key[i + 1];
                }
                if ( key_ck == 419 ) {
                    is_valid = true;
                }
            }
        }
    }
    return is_valid;
}


int main( int argc, char const *argv[] ) {
    if ( argc < 2 ) {
        std::cerr << "usage: " << argv[0] << " <key>" << "\n";
        return -1;
    }

    if ( check_key(argv[1]) ) {
        std::cout << "Access granted" << "\n";
    } else {
        std::cerr << "Access denied" << "\n";
        return -1;
    }

    return 0;
}

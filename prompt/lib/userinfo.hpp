/*
    + yes, I know i could've used uname or getewnv for this, but I don't want to.
*/

/* get the username of the user running this process */
std::string username() {
    char username[LOGIN_NAME_MAX];
    getlogin_r(username, LOGIN_NAME_MAX);

    return username;
}

/* get the host computer hostname */
std::string hostname() {
    char hostname[HOST_NAME_MAX];
    gethostname(hostname, HOST_NAME_MAX);

    return hostname;
}

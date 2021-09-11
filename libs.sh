#!/bin/sh
distro='gentoo'
root='sudo'

case "$distro" in
    'arch') paru -S nlohmann-json cpr boost rang-git ;;
    'gentoo') $root emerge -qa dev-cpp/nlohmann_json dev-libs/boost ;;
esac

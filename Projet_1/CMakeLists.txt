cmake_minimum_required(VERSION 3.16)

project(Projet_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Projet_1 bienvenue.cpp
)

include(GNUInstallDirs)
install(TARGETS Projet_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

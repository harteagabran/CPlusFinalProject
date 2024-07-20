cmake_minimum_required(VERSION 3.14)

project(CPlusFinalProject LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(CPlusFinalProject
  main.cpp
  budgetbalance.h budgetbalance.cpp
  instrument.h
  dumset.cpp
  drumset.h
  bass.h bass.cpp
  guitar.h guitar.cpp
  keyboard.h keyboard.cpp
  instrument.cpp
  inventory.h inventory.cpp
)
target_link_libraries(CPlusFinalProject Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS CPlusFinalProject
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

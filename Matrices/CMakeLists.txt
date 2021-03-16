cmake_minimum_required( VERSION 3.10 )

project( Matrices )

find_package( Eigen3 3.3 REQUIRED NO_MODULE)
find_package( Qt5Core CONFIG REQUIRED)
find_package( Qt5Widgets CONFIG REQUIRED)

INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS} ${Qt5Core_INCLUDE_DIRS} )

set( CMAKE_AUTOMOC ON )
set( CMAKE_AUTOUIC ON )

add_executable( ${PROJECT_NAME} main.cpp  matrixmain.h matrixmain.cpp 
		"matrixmain.ui" divi_dialog.h divi_dialog.cpp divi_dialog.ui)
target_link_libraries( ${PROJECT_NAME} Qt5::Core Qt5::Widgets Eigen3::Eigen )

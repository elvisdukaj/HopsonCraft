cmake_minimum_required(VERSION 3.8)
project(HopsonCraft)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")


file(GLOB src_files
	Source/gl3w/*.c
    Source/*.cpp Source/*.h
	Source/GUI/*.cpp Source/GUI/*.h
    Source/HUD/*.cpp Source/HUD/*.h
	Source/Input/*.cpp Source/Input/*.h
	Source/Maths/*.cpp Source/Maths/*.h
	Source/Physics/*.cpp Source/Physics/*.h
	Source/Player/*.cpp Source/Player/*.h
	Source/Renderer/*.cpp Source/Renderer/*.h
    Source/ResourceManagers/*.cpp Source/ResourceManagers/*.h
	Source/Shaders/*.cpp Source/Shaders/*.h
	Source/States/*.cpp Source/States/*.h
	Source/Texture/*.cpp Source/Texture/*.h
    Source/Util/*.cpp Source/Util/*.h
	Source/World/*.cpp Source/World/*.h
	Source/World/Block/Types/*.cpp Source/World/Block/Types/*.h
	Source/World/Block/*.cpp Source/World/Block/*.h
	)

add_executable(game ${src_files})

target_compile_features(game 
PRIVATE
    cxx_std_14
)

find_package(OpenGL REQUIRED)
find_package(SFML REQUIRED system window graphics network audio)
find_package(Threads REQUIRED)

target_include_directories(game
PRIVATE
	Source/gl3w
	OpenGL::GL
	${SFML_INCLUDE_DIR}	
)

target_link_libraries(game
PRIVATE
	Threads::Threads
    OpenGL::GL
	${SFML_LIBRARIES}
)

set_target_properties(game PROPERTIES POSITION_INDEPENDENT_CODE ON)

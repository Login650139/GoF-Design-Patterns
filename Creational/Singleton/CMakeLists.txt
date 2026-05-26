cmake_minimum_required(VERSION 3.10)
project(SingletonProject VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Основной исполняемый файл (демонстрация)
add_executable(singleton singleton.cpp)

# Тестовый исполняемый файл
add_executable(test_singleton tests/test_singleton.cpp)

# Регистрируем тест
enable_testing()
add_test(NAME test_singleton COMMAND test_singleton)

# Установка файлов для deb-пакета
install(TARGETS singleton test_singleton DESTINATION bin)

# Настройка CPack для создания .deb
set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Samokhov Dmitry")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Singleton pattern example with test")
include(CPack)

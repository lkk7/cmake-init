#pragma once

/**
 * @brief Simply initializes the name member to the name of the project
 */
typedef struct library {
  const char* name;
} library;

/**
 * @brief Creates an instance of library with the name of the project
 */
library create_library(void);{% if pm %}

/**
 * @brief Destroys resources held by the library
 */
void destroy_library(library* lib);{% end %}

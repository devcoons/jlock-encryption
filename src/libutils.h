/*!
	@file   libutils.h
	@brief  Header file for utility functions used in file handling, hashing, and password management
	@t.odo  -
	---------------------------------------------------------------------------

	MIT License
	Copyright (c) 2021

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/
/******************************************************************************
* Preprocessor Definitions & Macros
******************************************************************************/

#ifndef LIBUTILS_H
#define LIBUTILS_H

/******************************************************************************
* Function Prototypes
******************************************************************************/

/*!
    @brief Prompts the user to enter a password, hiding input characters
    @param[out] password - Buffer to store the entered password
    @param[in] max_length - Maximum length of the password buffer
*/
void get_password(char *password, size_t max_length);

/*!
    @brief Derives a SHA-256 hash key from the given password
    @param[in] password - Input password string
    @param[out] key - Buffer to store the derived key
*/
void derive_key_from_password(const char *password, unsigned char *key);

/*!
    @brief Computes the SHA-256 hash of a given file
    @param[in] filename - Name of the file to hash
    @param[out] output_hash - Buffer to store the computed hash
*/
void compute_sha256_hash(const char *filename, unsigned char *output_hash);

/*!
    @brief Checks if a file exists by attempting to open it
    @param[in] filename - Name of the file to check
    @return 0 if the file exists, -1 otherwise
*/
int file_exists(const char *filename);

/*!
    @brief Checks if a file can be opened for writing (appending)
    @param[in] filename - Name of the file to check
    @return 0 if the file can be written to, -1 otherwise
*/
int can_write_file_fopen(const char *filename);

/******************************************************************************
* EOF - NO CODE AFTER THIS LINE
******************************************************************************/
#endif // LIBUTILS_H

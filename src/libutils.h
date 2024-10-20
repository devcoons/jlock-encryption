#ifndef LIBUTILS_H
#define LIBUTILS_H

void get_password(char *password, size_t max_length);
void derive_key_from_password(const char *password, unsigned char *key);
void compute_sha256_hash(const char *filename, unsigned char *output_hash);

#endif // LIBUTILS_H

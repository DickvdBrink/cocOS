/* 
 * string.h - simple string functions.
 *
 * Author: Per Lundberg <per@halleluja.nu>
 * Copyright: © 2008, 2013 Per Lundberg
 */

#ifndef __STRING32_H__
#define __STRING32_H__ 1

/**
 * Copy the source string to the target. The source string is presumed to be zero-terminated; the target string will
 * also be zero-terminated.
 *
 * @param target the target string.
 * @param source the source string.
 */
static inline void string_copy(char *target, const char *source)
{
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
        target[i] = source[i];
    }

    target[i] = '\0';
}

#endif /* !__STRING32_H__ */

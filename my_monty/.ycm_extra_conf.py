def FlagsForFile(filename, **kwargs):
    return {
        'flags': ['-Wall', '-pedantic', '-Werror', '-Wextra', '-std=gnu89'],
        'do_cache': True
    }


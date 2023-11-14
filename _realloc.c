#include "main.h"

/**
 * _realloc - memory.
 * @old_mem_blk: Pointer.
 * @old_size: Old sizek.
 * @new_size: New size.
 *
 * Description: Resizes the memory block. If successful, returns a pointer to
 * the new memory; otherwise, returns NULL.
 */
void *_realloc(void *old_mem_blk, size_t old_size, size_t new_size)
{
	void *new_mem_blk;
	size_t min_size;

	if (new_size == old_size)
		return (old_mem_blk);

	
	if (new_size == 0 && old_mem_blk != NULL)
	{
		free(old_mem_blk);
		return (NULL);
	}

	new_mem_blk = malloc(new_size);
	if (new_mem_blk == NULL)
		return (NULL);

	if (old_mem_blk != NULL)
	{
		min_size = (old_size < new_size) ? old_size : new_size;

		_memcpy(new_mem_blk, old_mem_blk, min_size);

		free(old_mem_blk);
	}

	return (new_mem_blk);
}

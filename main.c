#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
	// checking for argument 'path'
	if (argc <= 1) {
		printf("Path is required!\n");
		return 1;
	}

	// get the path
	DIR *dir_ptr = opendir(argv[1]);
	if (dir_ptr == NULL) {
		printf("Unable to find directory: '%s'\n", argv[1]);
		return 1;
	}
		
	// removing directory	
	if (remove(argv[1]) == 0) {
		printf("Directory/File '%s' is removed..\n", argv[1]);
	} else {
		printf("Operation failed please check if the path is correct and directory exists and its empty: '%s'\n", argv[1]);
	}


	return 0;
}

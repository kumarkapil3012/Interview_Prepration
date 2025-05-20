#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

/* Commands to create the links 
 	1. Hard Link 
		ln src_fname dest_fname
	2. Soft linl
		ln -s src_fname dest_fname

	-> Using stat system call we can check link of file 

	-> System Calls to check links and file setting 
		int stat(const char *pathname, struct stat *statbuf);
		int fstat(int fd, struct stat *statbuf);
		int lstat(const char *pathname, struct stat *statbuf); 
	
	-> Structure which store the file informantion and using this we can access the file information
		  struct stat {
			  dev_t     st_dev;         //ID of device containing file 
			  ino_t     st_ino;         // Inode number
                          mode_t    st_mode;        // File type and mode
	                  nlink_t   st_nlink;       // Number of hard links 
	                  uid_t     st_uid;         // User ID of owner 
			  gid_t     st_gid;         // Group ID of owner  
			  dev_t     st_rdev;        // Device ID (if special file) 
		          off_t     st_size;        // Total size, in bytes  
	                  blksize_t st_blksize;     // Block size for filesystem I/O
			  blkcnt_t  st_blocks;      // Number of 512B blocks allocated 
                          // Since Linux 2.6, the kernel supports nanosecond precision for the following timestamp fields. 
			  struct timespec st_atim;  // Time of last access 
			  struct timespec st_mtim;  // Time of last modification 
			  struct timespec st_ctim;  // Time of last status change 
	                  #define st_atime st_atim.tv_sec      // Backward compatibility 
			  #define st_mtime st_mtim.tv_sec
                          #define st_ctime st_ctim.tv_sec
		  };           
*/

int main(int argc, char *argv[]) {
	struct stat file_info;
	
	if(argc < 2) {
		perror("Pass file");
		return EXIT_FAILURE;
	}

	// Call the stat() system call
	if (stat(argv[1], &file_info) == 0) {
		printf("File: %s\n", argv[1]);
		printf("Inode Number : %ld\n",file_info.st_ino);
                printf("Size: %lld bytes\n", (long long)file_info.st_size);
                printf("Last Modified: %d", ctime(&file_info.st_mtime)); 
		printf("User ID: %d\n", file_info.st_uid);
                printf("Group ID: %d\n", file_info.st_gid);
	} else {
		perror("stat");
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

#include <stdio.h>
int main() {
int numBlocks, numProcesses;
printf("Enter the number of Blocks: ");
scanf("%d", &numBlocks);
int blockSizes[numBlocks];
for (int i = 0; i < numBlocks; i++) {
printf("Block %d size: ", i + 1);
scanf("%d", &blockSizes[i]);
}
printf("Enter the number of processes: ");
scanf("%d", &numProcesses);
int processSizes[numProcesses];
for (int i = 0; i < numProcesses; i++) {
printf("Enter memory required for process %d: ", i + 1);
scanf("%d", &processSizes[i]);
}
int allocation[numProcesses];
for (int i = 0; i < numProcesses; i++) {
allocation[i] = -1; // Initialize allocation for each process as -1 (unallocated). }
for (int i = 0; i < numProcesses; i++) {
for (int j = 0; j < numBlocks; j++) {
if (blockSizes[j] >= processSizes[i]) {
allocation[i] = j; // Allocate the process to this block.
blockSizes[j] -= processSizes[i]; // Update block size after allocation. break; // Process allocated, move to the next process.
}
}
}
printf("\nProcess\tMemory Size\tBlock\n");
for (int i = 0; i < numProcesses; i++) {
printf("%d\t%d\t\t", i + 1, processSizes[i]);
if (allocation[i] != -1) {
printf("Block %d\n", allocation[i] + 1);
} else {
printf("Not Allocated\n");
}
}
return 0;
}
}


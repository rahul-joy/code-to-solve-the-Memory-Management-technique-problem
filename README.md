# code-to-solve-the-Memory-Management-technique-problem

<p align="center">Code</p>
<p>
#include <stdio.h> <br>
int main() { <br>
int numBlocks, numProcesses; <br>
printf("Enter the number of Blocks: "); <br>
scanf("%d", &numBlocks); <br>
int blockSizes[numBlocks]; <br>
for (int i = 0; i < numBlocks; i++) { <br>
printf("Block %d size: ", i + 1); <br>
scanf("%d", &blockSizes[i]); <br>
} <br>
printf("Enter the number of processes: "); <br>
scanf("%d", &numProcesses); <br>
int processSizes[numProcesses]; <br>
for (int i = 0; i < numProcesses; i++) { <br>
printf("Enter memory required for process %d: ", i + 1); <br>
scanf("%d", &processSizes[i]); <br>
} <br>
int allocation[numProcesses]; <br>
for (int i = 0; i < numProcesses; i++) { <br>
allocation[i] = -1; // Initialize allocation for each process as -1 (unallocated). } <br>
for (int i = 0; i < numProcesses; i++) { <br>
for (int j = 0; j < numBlocks; j++) { <br>
if (blockSizes[j] >= processSizes[i]) { <br>
allocation[i] = j; // Allocate the process to this block. <br>
blockSizes[j] -= processSizes[i]; // Update block size after allocation. break; // Process allocated, move to the next process. <br>
} <br>
} <br>
} <br>
printf("\nProcess\tMemory Size\tBlock\n"); <br>
for (int i = 0; i < numProcesses; i++) { <br>
printf("%d\t%d\t\t", i + 1, processSizes[i]); <br>
if (allocation[i] != -1) { <br>
printf("Block %d\n", allocation[i] + 1); <br>
} else { <br>
printf("Not Allocated\n"); <br>
}<br> 
}<br>
return 0; <br>
} <br>
}
</p>

<p align="center"> Output </p>

![image](https://github.com/rahul-joy/code-to-solve-the-Memory-Management-technique-problem/assets/81201194/8daeae9e-577b-40fb-afee-2f27a37c3e96)


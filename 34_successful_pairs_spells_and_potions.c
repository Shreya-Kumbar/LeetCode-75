// LeetCode 2300: Sucessful Pairs of Spells and Potions
// https://leetcode.com/problems/successful-pairs-of-spells-and-potions/description/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int compare(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int* successfulPairs(int* spells, int spellsSize, int* potions, int potionsSize, long long success, int* returnSize) {
    
    int *pairs = calloc(spellsSize, sizeof(int));;
    *returnSize = spellsSize;

    qsort(potions, potionsSize, sizeof(int), compare);

    for (int i = 0; i <  spellsSize; i++){
        int low = 0, high = potionsSize - 1;
        
        while (low <= high){
            int mid = low + (high - low) / 2;
            long long reqd = (success + spells[i] - 1) / spells[i];

            if (potions[mid] >= reqd){
                high = mid - 1;
            }

            else {
                low = mid + 1;
            }
        }
        pairs[i] = potionsSize - low;
    }

    return pairs;
}
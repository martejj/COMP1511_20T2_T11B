
int test_all_positive(int length, int nums[]){
    
    int i = 0;
    
    while (i < length) {
        
        if (nums[i] < 0) {
            return 0;
        }
        
        i++;
    }
    
    return 1;
    
}

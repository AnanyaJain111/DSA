/*https://leetcode.com/problems/peeking-iterator/*/
class PeekingIterator : public Iterator {
    int nexVal;
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    nexVal= Iterator::next();
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return nexVal;
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    int z= nexVal;
        if(Iterator::hasNext()){
            nexVal= Iterator::next();
        }
        else{
            nexVal=NULL;
        }
        return z;
	}
	
	bool hasNext() const {
	    return (nexVal!=NULL);
	}
};

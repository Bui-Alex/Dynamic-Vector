
/**
 * TODO: Complete this class!
 */

/// Your welcome
#include <assert.h>
#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

template <typename T>
class MyVector
{
	public:
		
		static constexpr size_t DEFAULT_CAPACITY = 64;
		static constexpr size_t MINIMUM_CAPACITY = 8;
		
		MyVector(size_t capacity = MyVector::DEFAULT_CAPACITY) {
			
			// Intializing members
			capacity_ = capacity;
			size_ = 0;
			elements_ = new T[capacity];
			
		}
		
		/// Copy constructor
		MyVector(const MyVector& other) {
			capacity_ = other.capacity_;
			size_ = other.size_;
			elements_ = new T[capacity_];
			//Makes a copy for each element in array
			for(int i = 0; i < size_; i ++){
				elements_[i] = other.elements[i];
			}
			
		}
		
		~MyVector() {
			
			clear();
			//Deallocating Internal Array 
			for(size_t i = 0; i < size_; i++){
				if(elements_ != nullptr){
					delete[] elements_[i];
				}
				delete [] elements_;
				elements_ = nullptr;
			}

		}
		MyVector& operator=(const MyVector& rhs) {
			DEFAULT_CAPACITY = rhs.DEFAULT_CAPACITY;
			return *this;
		}
		size_t size() const {
			return size_;
		}
	
		/// Return the capacity of our internal array
		size_t capacity() const {
			return capacity_;
		}
		
		bool empty() const {
			if(size_ == 0){
				return true;
			}
			else{
				return false;
			}
			
		}
		// Return a reference to the element at an index
		T& at(size_t index) const {
			return at(index);
			
		}
	private:
		
		/// Number of valid elements currently in our vector
		size_t size_ = 0;
		
		// Capacity of our vector; The actual size of our internal array
		size_t capacity_ = 0;
		
		T* elements_ = nullptr;
};



#ifndef COLLECTIONS_LIST_HPP
#define COLLECTIONS_LIST_HPP

// ISO C Includes
#include <cstddef>

// ISO C++ Includes
#include <iterator>
#include <memory>

namespace collections {
    template<typename T, typename Allocator = std::allocator<T>>
    class list {
    public:
	class iterator;

	class const_iterator;

        using value_type = T;

	using size_type = std::size_t;

	using difference_type = std::ptrdiff_t;

	using reference = value_type&;

	using pointer = std::allocator_traits<Allocator>::pointer;

	using const_reference = const value_type&;

	using const_pointer = std::allocator_traits<Allocator>::const_pointer;
	
	using reverse_iterator = std::reverse_iterator<iterator>;

	using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    private:
	struct node {
	    value_type value;

	    struct node* next;

	    [[nodiscard]] constexpr auto operator==(const node& lhs)
		const noexcept(noexcept(this->value == lhs.value)) -> bool {
		return this->value == lhs.value;
	    }

	    [[nodiscard]] constexpr auto operator<=>(const node& lhs)
		const noexcept(noexcept(this->value <=> lhs.value)) {
		return this->value <=> lhs.value;
	    } 
	};

    public:
	class iterator {
	private:
	    friend class list;


	};

	class const_iterator {
	private:
	    friend class list;


	};
    };
}

#endif // #ifndef COLLECTIONS_LIST_HPP

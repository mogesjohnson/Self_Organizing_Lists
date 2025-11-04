#pragma once

//struct that has the values (E) and its access frequency (int)
//the LList will store NodeData<E> objects

template <typename E> struct NodeData
{
	E value;    //the value of type E
	int frequency; //the access frequency of this value

	NodeData() : frequency() {}  //default constructor

	NodeData(const E& val) : value(val), frequency(0) {} //constructor with value, frequency initialized to 1

	//overload the == operator to compare NodeData object based on their value only
	// this is needed for searching the list
	// two NodeData objects are considered equal if their 'value' members are equal
	bool operator==(const NodeData<E>& other) const
	{
		return (this->value == other.value);
	}

	//if the objects are not equal != 
	bool operator !=(const NodeData<E>& other) const
	{
		return value != other.value; //compare based on value only
	}


};


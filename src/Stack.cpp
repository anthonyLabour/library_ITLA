/*
 * Stack.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Stack.h"

void Stack::push(Element* element)
{
	if(_first==NULL)
	{
		_first = element;
		_last = element;

	}
	else {
		_last ->_next = element;
		_last = element;
	}
}

Element* Stack::pop()
{
	if(_last == NULL){
	 		return NULL;
	 	}
	 	Element* element = _last;
	 	_last = element -> _next;
	 	return element;
}

Stack::Stack(): _first(NULL), _last(NULL)
{

}


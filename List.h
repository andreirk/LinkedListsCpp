/* 
 * File:   List.h
 * Author: an.sokolov
 *
 * Created on 23 января 2016 г., 11:50
 */

#ifndef LIST_H
#define	LIST_H

class List{
private: 
    
   typedef struct node{
        int date;
        node * next;
    }* nodePtr;
    
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    
public: 
};


#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* LIST_H */


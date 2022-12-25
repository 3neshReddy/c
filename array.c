#include<stdio.h>

void main()

{

//declaration of array
char a[] = { 'b','d','f', 'g','k','m'};

//insertion at the beginning: adding 1 to the above array.
//first move all the elements to the right
//length of the array is 6.
for(int i=6;i>0;i--)
{
    a[i] = a[i-1];

}
//now a[0] is blank, so assign the value 1 at the beginning of the list.

a[0] = 'a';

//now the new array is { 'a','b','d','f', 'g','k','m'} and length of array is 7

//********************************************************************
// Now insertion at nth position.
//for example add 'e' at 4th position in the above array
int pos = 4;
//in the above case to add 'a' in the first position we have moved all elements from zero index.
//so now move all the elements to right from 3rd index to add at 4th poisition.
for(int i =7; i>pos-1; i--)
{
    a[i] = a[i-1];
}
//now a[3] is blank, so assign the value 1 at the beginning of the list.
a[pos-1] = 'e';

//now the new array is { 'a','b','d', 'e', 'f', 'g','k','m'}, now length of array is 8

//******************************************************************

//insertion at the end, which is easy using the index value.
a[8] = 'z';
//now the new array is { 'a','b','d', 'e', 'f', 'g','k','m', 'z'}, now length of array is 9.

//*********************************************************

// deletion at the beginning
// here move all the elements to left;
for(int i=0; i<8; i++)
{
    a[i] = a[i+1];
}
//now the new array is { {'b','d', 'e', 'f', 'g','k','m', 'z'}, now length of array is 8.

//********************************************************

// Now deletion at nth position.
//for example delete  'e' at 3rd position in the above array
 pos = 3;
//in the above case to dell 'a' which is in the first position we have moved all elements to left to zero index.
//so now move all the elements to left to 2nd index.
for(int i =pos-1; i<7; i++)
{
    a[i] = a[i+1];
}

//now the new array is { 'b', 'd','f', 'g','k','m'}, now length of array is 7

//traverse through the array
for(int x=0;x<6;x++)
{
printf("\n%c",a[x]);
}


//final output is { 'b', 'd','f', 'g','k','m'},

}

//#INCLUDE <IOSTREAM>
//
//USING NAMESPACE STD;
//
//TEMPLATE <TYPENAME T>
//STRUCT BNODE
//{
//	T DATA;
//	BNODE* LEFT, * RIGHT;
//	
//};
//TEMPLATE <TYPENAME T>
//CLASS MAP
//{
//PRIVATE:
//	INT N;//SIZE
//	BNODE<T>* ROOT , *CURRENT;
//PUBLIC:
//	MAP()
//	{
//		N = 0;
//		ROOT = NULL;
//	}
//	~MAP()  //TO DO
//	{
//
//	}
//	VOID INSERT(CONST T& VAL)
//	{
//		BNODE<T>*  NEW_NODE; //NEW NODE
//		NEW_NODE = NEW BNODE<T>;
//		NEW_NODE->DATA = VAL;
//		NEW_NODE->LEFT = NEW_NODE->RIGHT = NULL;
//		N++; //1
//
//		IF (ROOT == NULL)
//		{
//			ROOT = NEW_NODE;
//		}
//		ELSE
//		{
//			//BNODE<T>* CURRENT;
//			CURRENT = NEW BNODE<T>;
//			CURRENT = ROOT;
//			IF (VAL < CURRENT->DATA)
//			{
//				IF (CURRENT->LEFT == NULL)
//				{
//					CURRENT->LEFT = NEW_NODE;
//					//BREAK;
//				}
//				CURRENT = CURRENT->LEFT;
//			}
//			ELSE
//			IF (VAL > CURRENT->DATA)
//			{
//				IF (CURRENT->RIGHT == NULL)
//				{
//					CURRENT->RIGHT = NEW_NODE;
//					//BREAK;
//				}
//				CURRENT = CURRENT->RIGHT;
//			}
//			ELSE
//			{
//				N--;
//				THROW("SAME VALUES CAN'T BE PUT INTO BINARY TREE");
//
//			}
//		}
//	}
//	VOID DISPLAY()
//	{
//		WHILE(TRUE)
//		{ 
//		COUT << ROOT->DATA << ENDL;
//			COUT << CURRENT->DATA << ENDL;
//		}
//	}
//
//
//};
//
//INT MAIN()
//{
//	MAP<INT> M1;
//	M1.INSERT(12);
//	M1.INSERT(7);
//	M1.INSERT(13);
//	M1.INSERT(18);
//	M1.INSERT(8);
//	M1.INSERT(2);
//	M1.INSERT(9);
//	M1.DISPLAY();
//}

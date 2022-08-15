void depthOfNode(const int &rno)
	{
		int depth = -1;
		Bnode *temp;
		temp = root;
		if(!root)
		{
			//cout<<" tree is empty: "<<depth<<endl;
			cout<<"Oops! Tree is empty!"<<endl;
		}
		else
		{
			while(temp)
			{
				if(rno == temp->RollNo)
				{					
					depth++;
					break;
				}
				else
				if(rno < temp->RollNo)
				{
					if(temp->left!=NULL)
					{
						temp = temp->left;
						depth++;	
					}

				}
				else
				if(rno > temp->RollNo)
				{
					if(temp->right!=NULL)
					{
						temp = temp->right;
						depth++;	
					}
				}
				
			}
			cout<<"The depth of a node->RollNo ["<<rno<<"] is: "<<depth<<endl;
		}
	}
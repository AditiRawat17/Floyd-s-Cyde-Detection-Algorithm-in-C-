#include<bits/stdc++.h>
                 using namespace std;
                 class Node                
                 {      
                        public:
                        int data;
                        Node *next;
                 };
                 int loop(Node *Head)                                   
                 {
                        Node *slow=Head;
                        Node *fast=Head;
                        if (fast->next==NULL)  
                        {
                              cout<<"No Loop found";
                        }
                        while(1)
                       {
                               slow=slow->next;
                               fast=fast->next->next;
                               if(slow==fast && (slow!=NULL || fast!=NULL))
                               {
                                      cout<<"Loop Found";          
                               }
                               else if(slow==NULL || fast==NULL)
                               {
                                     cout<<"No Loop found";             
                               }
                       }
                 }
                 int main()
                 {    
                         Node *newnode=new Node();
                         newnode->data=1;
                         Head=newnode;                            
                         newnode->next=new Node();
                         newnode->next->data=2;
                         newnode->next->next=new Node();
                         newnode->next->next->data=3;
                         Node *temp=newnode->next->next;
                         temp->next=NULL;           
                         loop(Head);               
                         temp->next=Head;           
                         loop(Head);  
                  }

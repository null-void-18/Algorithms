class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<K;i++){
            Node* head=arr[i];
            while(head){
                q.push(head->data);
                head=head->next;
            }
        }
        
        Node *root,*temp;
        root=new Node(0);
        temp=root;
        while(!q.empty()){
            temp->next=new Node(q.top());
            temp=temp->next;
            q.pop();
        }
        
        return root->next;
           // Your code here
    }
};

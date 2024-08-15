//time complexity O(n) but space complexity is also O(n)

bool detectLoop(Node* head) {
        Node *curr = head;
        
        unordered_map<Node*,bool>visited;
        
        while(curr){
            if(visited[curr]==1){
                return 1;
            }
            else{
                visited[curr] = 1;
                curr = curr->next;
            }
        }
        
        return 0;
        
    }


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

//here tc is O(n) and sc is O(1) achived using slow and fast method

bool detectLoop(Node* head) {
        
        Node *slow = head;
        Node *fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                return true;
            }
        }
            
        return false;
    }


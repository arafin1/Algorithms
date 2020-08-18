#include <iostream>
#include <list>
using namespace std;


struct Node {
	int data;

	Node* next;
};

Node *newNode(int data)
{
	Node *new_node = new Node;
	new_node->data = data;
	new_node->next = NULL;

	return new_node;
}

Node* insertEnd(Node* head, int data)
{

	if (head == NULL){

		return newNode(data);
	}

	
	else
		head->next = insertEnd(head->next, data);

	return head;
}

void traverse(Node* head)
{


	if (head == NULL)
	return;

	cout << head->data << " ";

	traverse(head->next);


}

int counter(Node* head)
{

    if (head == NULL)
	return 0;

    return 1 + counter(head->next);

}


int counterIt(Node* head)
{
    int counte = 1;



    while(head->next != NULL){
        counte++;
        head = head->next;
        if (head == NULL)
            return 0;
    }
    return counte;

}
int counterSum(int sum)
{
    if(sum == 1){
        return 1;
    }
    return sum + counterSum(sum - 1);

}


void listingSortingNode(Node* head)
{
    list<int> mylist;
    int s = counterIt(head);
    int c = 0;
    while(c < s){
        mylist.push_back(head->data);
        head = head->next;
        c++;
    }

     mylist.sort();
     cout<<endl;
     for (auto it = mylist.begin(); it != mylist.end() ; ++it)
        cout <<" "<< *it;

}

int main()
{
	Node* head = NULL;
	head = insertEnd(head, 10);
	head = insertEnd(head, 8);
	head = insertEnd(head, 12);
	head = insertEnd(head, 15);
	head = insertEnd(head, 16);
	traverse(head);
	//cout<<endl;
        //cout<<counter(head);
	//cout<<endl;
	//cout<<counterIt(head);
	//cout<<counterSum(7);
	listingSortingNode(head);
}

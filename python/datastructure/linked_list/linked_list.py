#create a node class
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


#create a linked list class
class Linked_list:
    def __init__(self):
        self.head = None #first node in the list


    #add an element in front of the linked list
    def add(self, data):
        newNode = Node(data)
        newNode.next = self.head
        self.head = newNode


    #remove an element in the linked list
    #return False mean didn't sucessfully remove the element
    def remove(self, data):
        currentNode = self.head

        #if it's an empty list return False
        if(self.head == None):
            return False
        #if head element is the target then delete it
        elif(self.head.data == data):
            headNode = self.head
            self.head = currentNode.next
            del headNode
        else:
            while(currentNode.next != None):
                if(currentNode.next.data == data):
                    nextNode = currentNode.next
                    currentNode.next = nextNode.next
                    del nextNode
                    return

                currentNode = currentNode.next


    #show all the elements in the linked list
    def show(self):
        currentNode = self.head
        while(currentNode != None):
            print(currentNode.data)
            currentNode = currentNode.next


    #get element value by index
    def at(self, index):
        currentNode = self.head

        for pos in range(index):
            currentNode = currentNode.next

        return currentNode.data


    #more method



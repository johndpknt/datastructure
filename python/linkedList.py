


class node:
	def __init__(self,data):
		self.data = data
		self.next = None

class LinkedList:
	def __init__(self):
		self.head = None




class linkedListDriver:

	def __int__(self):
		self.LinkedList = LinkedList()

	def create_random_linked_list(self,size):
		for x in range(size):
			temp = node(random(1,100))
			if not self.LinkedList.head:
				self.LinkedList.head = temp
	


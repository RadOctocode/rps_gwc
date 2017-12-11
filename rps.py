def compare(p1,p2):
	if p1.upper()=="PAPER":
		if p2.upper()=="PAPER":
			print("TIED")
		elif p2.upper()=="ROCK":
			print("WIN")
		elif p2.upper()=="SCISSORS":
			print("LOSE")
		else:
			print("ERROR-BAD INPUT P2")
			sys.exit()
			
	elif p1.upper()=="ROCK":
		if p2.upper()=="PAPER":
			print("LOSE")
		elif p2.upper()=="ROCK":
			print("TIE")
		elif p2.upper()=="SCISSORS":
			print("WIN")
		else:
			print("ERROR-BAD INPUT P2")
			sys.exit()
			
	elif p1.upper()=="SCISSORS":
		if p2.upper()=="PAPER":
			print("WIN")
		elif p2.upper()=="ROCK":
			print("LOSE")
		elif p2.upper()=="SCISSORS":
			print("TIE")
		else:
			print("ERROR-BAD INPUT P2")
			sys.exit()
	else:
		print("ERROR-BAD INPUT P1")
		sys.exit()


def main():
	input_yes_no=input("Would you like to play rock paper scissors?")
	print(input_yes_no)
	if input_yes_no.upper()=="YES":
		player1=input("player1 enter your input")
		player2=input("player2 enter your input")
		compare(player1,player2)
	else:
		print("ok goodbye")
		sys.exit()

if __name__ == "__main__":
	main()

#diff between raw_input 
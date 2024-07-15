from chatterbot import ChatBot
from chatterbot.trainers import ChatterBotCorpusTrainer

# Create a chatbot instance
chatbot = ChatBot('BankBot')

# Create a new instance of a ChatterBotCorpusTrainer
trainer = ChatterBotCorpusTrainer(chatbot)

# Train the chatbot on the English language data
trainer.train('chatterbot.corpus.english')

# Simulate a conversation with the chatbot
print("BankBot: Hello! I'm your banking chatbot. How can I assist you today?")

while True:
    user_input = input("You: ")
    
    if user_input.lower() == 'exit':
        print("BankBot: Thank you for using our banking chatbot. Have a great day!")
        break
    
    response = chatbot.get_response(user_input)
    print("BankBot:", response)

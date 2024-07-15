from googletrans import Translator

def translate_text(text, target_language):
    translator = Translator()
    translated = translator.translate(text, dest=target_language)
    return translated.text

def main():
    print("Language Translator App")
    print("=======================")

    while True:
        input_text = input("Enter the text to translate (or type 'exit' to quit): ")

        if input_text.lower() == 'exit':
            print("Goodbye!")
            break

        target_language = input("Enter the target language (e.g., 'es' for Spanish): ")
        translated_text = translate_text(input_text, target_language)

        print(f"Translated text: {translated_text}\n")

if __name__ == "__main__":
    main()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "qsearch.h"

int main() {

	SetConsoleOutputCP(65001);

    char list[300][2048] = {
    "House", "Tree", "Water", "Firefighter", "Tram", "Computer", "Programming", "Development", "Key", "Window",
    "Highway", "Cloud", "Sunshine", "Rain", "Lightning", "Thunder", "Snowflake", "Weather", "Television", "Refrigerator",
    "Keyboard", "Monitor", "Mouse", "Laptop", "Smartphone", "Message", "Internet", "Database", "Algorithm", "Search",
    "Game", "LevelDesign", "Character", "Sword", "Magic", "Dragon", "Adventure", "Quest", "Kingdom", "Castle",
    "Friendship", "Family", "Relationship", "Conversation", "Communication", "Understanding", "Emotion", "Feeling", "Sadness", "Joy",
    "School", "Classroom", "Homework", "Mathematics", "Physics", "Electronics", "SourceCode", "Debugging", "Project", "Exam",
    "Science", "Research", "Experiment", "Hypothesis", "Theory", "Result", "Observation", "Measurement", "Simulation", "Model",
    "Forest", "Riverside", "Mountain", "Valley", "Landscape", "Nature", "Environment", "Ecosystem", "Wildlife", "Flora",
    "Future", "Past", "Memory", "Imagination", "Mindscape", "Reality", "Virtuality", "Multiverse", "Spacetime", "Dimension",
    "Technology", "Robot", "ArtificialIntelligence", "NeuralNetwork", "Automation", "ComputingPower", "GraphicsCard", "Processor", "Memory", "Architecture",

    "Book", "Library", "Notebook", "Pen", "Pencil", "Paper", "Teacher", "Student", "Lesson", "Knowledge",
    "Language", "Sentence", "Word", "Letter", "Story", "Chapter", "Picture", "Music", "Song", "Movie",
    "Camera", "Microphone", "Speaker", "Headphones", "Battery", "Charger", "Cable", "Network", "Server", "Router",
    "Website", "Application", "Software", "Hardware", "OperatingSystem", "Compiler", "Function", "Variable", "Pointer", "MemoryAddress",
    "SourceFile", "Header", "Library", "Framework", "Interface", "Engine", "Renderer", "Graphics", "Texture", "Shader",
    "Object", "Class", "Structure", "Array", "String", "Integer", "Boolean", "Loop", "Condition", "Operator",
    "Input", "Output", "Process", "Thread", "Program", "Execution", "Error", "Warning", "Exception", "DebuggingTool",
    "Version", "Update", "Backup", "File", "Folder", "Directory", "Document", "Archive", "Download", "Upload",

    "Ocean", "River", "Lake", "Island", "Beach", "Desert", "Cave", "Volcano", "Canyon", "Waterfall",
    "Sky", "Star", "Moon", "Planet", "Galaxy", "Universe", "Nebula", "Comet", "Asteroid", "Meteor",
    "Sun", "Earth", "Mars", "Jupiter", "Saturn", "Spacecraft", "Spaceship", "Satellite", "Astronaut", "Telescope",
    "Energy", "Electricity", "Voltage", "Current", "Resistance", "Circuit", "Signal", "Frequency", "Wave", "Magnet",
    "Engine", "Machine", "Factory", "Vehicle", "Car", "Train", "Airplane", "Helicopter", "Ship", "Bicycle",
    "Animal", "Wolf", "Fox", "Eagle", "Bear", "Rabbit", "Deer", "Horse", "Cat", "Dog",
    "Flower", "Grass", "Leaf", "Branch", "Root", "Seed", "Garden", "Treehouse", "Sunrise", "Sunset",

    "Hero", "Warrior", "Mage", "Knight", "Archer", "Wizard", "Princess", "King", "Queen", "Village",
    "City", "Tower", "Dungeon", "Temple", "Ruins", "Treasure", "Artifact", "Potion", "Shield", "Armor",
    "Enemy", "Monster", "Creature", "Guardian", "Legend", "Myth", "Fantasy", "Mystery", "Secret", "Power",
    "Dream", "Hope", "Fear", "Love", "Anger", "Courage", "Freedom", "Destiny", "Choice", "Journey",
    "World", "Universe", "Reality", "Dimension", "Portal", "Timeline", "ParallelWorld", "AlternateReality", "TimeTravel", "Existence"
    };
	char output[100][2048] = {};

	char search[32] = "";
	char loop;
    int count = 0;

	do {
		system("cls");
        char dummy = getchar();
		printf("Enter Search: ");
		gets_s(search, 32);

		int back = qsearch_str(list, 100, search, 1, 36);

		printf("\nFound: %d", back);

		printf("\n\nAgain? (y/n)");
	} while (getchar() == 'y');
}
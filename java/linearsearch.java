public static void print(int elementToSearch, int index) {
    if (index == -1){
        System.out.println(elementToSearch + " not found.");
    }
    else {
        System.out.println(elementToSearch + " found at index: " + index);
    }
}

int index = linearSearch(new int[]{89, 57, 91, 47, 95, 3, 27, 22, 67, 99}, 67);
print(67, index);
Title and Theme:  
Title: Hero Roster Challenge  
Theme: Assemble and manage a team of superheroes with different power levels using a Min-Heap, ensuring that the weakest heroes are prioritized for smaller tasks. As the roster grows, stronger heroes remain available for more challenging missions, keeping the team balanced and ready for any adventure.  

---

Learning Goals:  
1. Understand the operations of a Min-Heap (insertions, deletions, and display).  
2. Apply heap property concepts to manage priorities effectively.  
3. Gain practical experience in implementing a heap-based system in C++.  

---

Tasks:
1. Insert heroes with their power levels into a Min-Heap and display the heap after each addition.
2. Remove the hero with the lowest power level and adjust the heap to maintain the Min-Heap property.
3. Display the list of heroes currently in the Min-Heap, sorted from weakest to strongest.
4. Exit the system and display a farewell message.

---

Instructions  
1. Choose the option to add heroes to the roster. Input the number of heroes you want to recruit along with their power levels. The heroes will be inserted into the Min-Heap, ensuring that the weakest hero stays at the top.

2. Select the option to send the weakest hero on a quest. The system will remove the hero with the lowest power level and reorganize the Min-Heap.

3. Pick the option to view the current hero roster. The system will display all heroes, sorted from weakest to strongest.

4. Select the option to exit the program, which will display a farewell message. 

---

 Sample Input/Output  

1. Insert Heroes:  
   Input:  
   
   Enter your choice: 1  
   Enter the number of heroes you want to recruit: 3  
   Enter 3 power levels: 15 10 20  
   
   Output:  
   
   > Hero with power level 15 has been recruited!  
   > Hero with power level 10 has been recruited!  
   > Hero with power level 20 has been recruited!  

   > Ready for battle!  
   

2. Display Roster:  
   Input:  
   
   Enter your choice: 3  
   
   Output:  
   
     > Current Hero Power Levels (Weakest to Strongest): 10 15 20  
   

3. Remove Weakest Hero:  
   Input:  
   
   Enter your choice: 2  
   
   Output:  
   
     > Sending the weakest hero with power level 10 on a minor quest...  
   

4. Exit System:  
   Input:  
   
   Enter your choice: 4  
   
   Output:  
  
   >Exiting the mission control... Stay heroic!  
   ===========================================  

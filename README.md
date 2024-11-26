Title and Theme:  
Title: Hero Roster Challenge  
Theme: Assemble and manage a team of superheroes with different power levels using a Min-Heap, ensuring that the weakest heroes are prioritized for smaller tasks. As the roster grows, stronger heroes remain available for more challenging missions, keeping the team balanced and ready for any adventure.  

---

Learning Goals:  
1. Understand the operations of a Min-Heap (insertions, deletions, and display).  
2. Apply heap property concepts to manage priorities effectively.  
3. Gain practical experience in implementing a heap-based system in C++.  

---

Instructions  
1. Insert Heroes:  
   - Choose the option to recruit heroes.  
   - Enter the number of heroes you want to add and their respective power levels.  
   - Heroes will automatically be inserted into the Min-Heap structure, maintaining the weakest hero at the root.  

2. Remove Weakest Hero:  
   - Select the option to send the weakest hero (the one with the lowest power level) on a quest.  
   - The system will remove the weakest hero and re-adjust the heap.  

3. Display Roster:  
   - Choose this option to view the current hero roster, sorted from weakest to strongest.  

4. Exit System:  
   - Select this option when you are done managing the hero roster to exit the program.  

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

# From Hashes to Hashtags: Algorithmic Adventures on Twitter

<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Course Instructor</dt>
<dd>Prakash Hegade</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
</dl>

* * *

> Twitter is the best form of self-discipline that exists.
>
> by John Mayer

## Introduction
Twitter, a microblogging and informal communication administration, has reformed how we convey and collaborate on the web. With over 400 million dynamic clients, it has become a worldwide stage for continuous updates on news, legislative issues, diversion, and sports. Its effortlessness, convenience, and exceptional highlights like the 280-character limit, hashtags, and @mentions have made it an optimal stage for continuous correspondence and data scattering. Nonetheless, underneath its smooth point of interaction and compact tweets lies a perplexing embroidery of information designs and calculations that power its center functionalities. 

Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses will serve as our theoretical foundations and practical expertise as we investigate the complexities of Twitter's services. This portfolio project expects to propose answers for genuine difficulties looked by Twitter, from advancing tweet suggestion calculations for upgraded client commitment to smoothing out satisfied balance processes. By saddling the power of cutting edge algorithmic strategies and imaginative information structures, we'll show how smart algorithmic critical thinking can refine client encounters, drive mechanical development, and sustain Twitter's situation as a forerunner in the web-based entertainment scene. Go along with me in this investigation as we overcome any issues between hypothetical information and viable application, uncovering the significant effect of information designs and calculations on current computerized correspondence.

## Objectives
* Analyze the data structures and algorithms that power Twitter's core functionalities.
* Apply theoretical knowledge gained from Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses to real-world challenges faced by Twitter.
* Demonstrate the transformative power of algorithms within Twitter's ecosystem.

* * *

## Business Cases

### 1. **Computation of Shortest Paths in Google Maps**

**Use Case:**
Google Maps: **Dijkstra's algorithm** can find the shortest path between two locations on a map. Essential for providing accurate directions to users, considering factors such as traffic conditions, road closures, and distance.

Bellman-Ford Algorithm: **Bellman-Ford algorithm** can be used in Google's self-driving car project for path planning. It helps in finding the shortest path from the car's current location to its destination while considering factors such as road conditions, traffic congestion, and safety measures.

Floyd-Warshall Algorithm: In Google's network infrastructure, the Floyd-Warshall algorithm can be used for network analysis. It helps in identifying the shortest paths between all pairs of nodes in a network, facilitating efficient communication and resolving connectivity issues.(all pair shortest path)


**Challenges:** Computing shortest paths considering traffic and road conditions.

**Market Benefits:** Accurate directions, optimized delivery routes, user time saved.

**Algorithms, Design Techniques, Performance Analysis:**
- **Dijkstra's Algorithm:** Greedy approach, Priority queue
  - Time Complexity: O((V + E) log V) where V is the number of vertices and E is the number of edges
  - Space Complexity: O(V) where V is the number of vertices<br>
- **Bellman-Ford Algorithm:** Dynamic programming, Relaxation technique
  - Time Complexity: O(VE) where V is the number of vertices and E is the number of edges
  - Space Complexity: O(V) where V is the number of vertices<br>
- **Floyd-Warshall Algorithm:** Dynamic programming, All-pairs shortest path
- Time Complexity: O(V<sup>3</sup>) where V is the number of vertices
- Space Complexity: O(V<sup>2</sup>) where V is the number of vertices


[View Dijkstra's code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/dijkstra.cpp){:target="_blank"}<br>
[View Bellman-Ford code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/bellman_ford.cpp){:target="_blank"}<br>
[View Floyd-Warshall code here](https://github.com/jiyapalrecha35/Google.github.io/blob/main/codes/floyd_warshall.cpp){:target="_blank"}<br><br>

**Challenge 01: Essay**

One of the essential skill for a problem solver is Comprehension capability. Hence, the first challenge is an essay challenge. Read the ebook: [Design of a Programmer](https://www.smashwords.com/books/view/639609) and write an essay of 300-500 words. Your essay must not be a book review. It must be your take away thoughts. Pen down your thoughts on an A4 sheet with your name and roll number and submit it by the end of the class on **17th Aug 2019, 10.00am**. 


**Challenge 02: Code The Philosophy**

You are given with a list of ten philosophies. You need to code a simple C program to realize it. More details in the pdf: [Code The Philosophy Challenge](https://github.com/prakashbh/dsa-2019/blob/master/challenges/2-code-the-philosophy.pdf). Deadline is **25th August 2019, 5.00pm, Sunday**. Adhere to submission guidelines as mentioned. Use the template given to code. Fill up all the TO-DO sections. Template can be found [Here](https://github.com/prakashbh/dsa-2019/blob/master/challenges/2-code-the-philosophy-template.c).

The top submission will receive a DSA PUDDINGA trophy. 



**Challenge 03: MAT Challenge**

Look out for the [MAT Challenge](https://github.com/prakashbh/dsa-2019/blob/master/challenges/3-MAT-challenge.pdf). Along with students, even the course instructor will be taking up this challenge. Any student who designs and codes a better solution than course instructor scores a 100/100. More details in the supplied pdf. The submission deadline is **1 September 2019, 2.00am**. Instructors solution can be accessed [HERE](https://github.com/prakashbh/dsa-2019/blob/master/challenges/mat-ph.c). This is a compulsory challenge evaluated for Lab 04. 



**Challenge 04: The ToH Challenge**

After 2 code challenges, we come back to a report challenge. Check out the [ToH Challenge](https://github.com/prakashbh/dsa-2019/blob/master/challenges/4-toh-challenge.pdf). The deadline is NOW! This challenge carries 20 points. 



**Challenge 05: The 100 Challenge**

100 is an interesting number! Solve this problem that has 100 test cases - [The 100 Challenge](http://www.hackerrank.com/the-100-challenge). The contest is hosted on HackerRank and the problem was developed based on the idea given by Samsung R&D team. The contest ends on 16 Sept 2019. 100 Test Cases, 100 Points. Break a leg!



**Challenge 06: Tree Traversal Fortnight**

A fortnight worth head scrath of DFS and BFS! [Tree Traversal Fortnight](http://www.hackerrank.com/tree-traversal-fortnight) is hosted on HackerRank with 8 questions and 380 points. The contest ends on 30 Sept 2019. Yes, I want you all to go a little crazy(okay, not little. extreme. ) and work your ass off! 



**Challenge 07: 100 Questions Challenge**

The 100 Questions challenge was conducted on 19 Sept 2019. The class was divided into even and odd team. The challenge questions can be found [here](https://github.com/prakashbh/dsa-2019/blob/master/challenges/100-questions-challenge-2019.pdf). Even team won the challenge with a small margin of 0.22% (08 marks). 



**Challenge 08: Movie Notes Challenge**

Watch the movie: The Secret Rules of Modern Living: Algorithms and prepare a 2-3 page report. Submission Deadline: 02 Oct 2019, EOD. You can find the details here: [Movie Challenge](https://github.com/prakashbh/dsa-2019/blob/master/challenges/8-documentary-notes-challenge.pdf)



**Challenge 09: Knit Challenge**

Knit Arena has announced a challenge with exciting prizes. The challenge is open to all 5 divisions. The challenge details cna be found here: [Knit Challenge 2019](https://github.com/prakashbh/dsa-2019/tree/master/knit-challenge). The challenge is deadlined on 09 Oct 2019, EOD.


**Challenge 10: Graph Case Study Challenge**

Well, this challenge was announced as a festival bonus. The class is supposed to bring a solution to an interesting [graph case study](https://github.com/prakashbh/dsa-2019/blob/master/challenges/graph-case-study.pdf). The solution will be discussed on 9 Oct 2019 at 4.45pm. The best design solution will win bonus marks for minor 2. 


**Challenge 11: 100 Again**

100 Again was conducted on 04 Nov 2019. The class was divided into even and odd team. The challenge questions can be found [here](https://github.com/prakashbh/dsa-2019/blob/master/course-notes/100-again.pdf). The class attendance was low (45/72) which was a little disappointing. Odd team Won the Challenge. 


**Challenge 12: Mock Minor 2**

Mock minor question paper was given to students to be solved as diwali take home assignment. The question paper can be accessed [here](https://github.com/prakashbh/dsa-2019/blob/master/course-notes/dsa-mock-minor-2.pdf).



* * *


* * *


* * *




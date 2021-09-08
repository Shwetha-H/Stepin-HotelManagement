# TEST PLAN:

## Low level test plan 

| **Test ID** | **Description**                                              | **Exp I/P**  | **Exp O/P** | **Actual Out** |**Type Of Test**  |**Test case**|
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|---------------|
|  H_01       |               Addition                                       |  13,12|25 |25 |Requirement based | Pass
|  H_02       |               Subtraction                                    |  10,10|0  |0  |Requirement based | Pass
|  H_03       |               Multiplication                                 |  10,15|150 |150 |Requirement based | Pass
|  H_04       |               Division                                       |  10,5| 2 | 2 |Requirement based | Pass
|  H_05       |               power                                          |  10,5|100000 |100000  |Requirement based |Pass
|  H_06       |               Factorial                                      |  3|6 |6  |Requirement based | Pass                              
|  H_07       |               squareRoot                                     |  9|3 |3 |Requirement based | Pass
|  H_08       |               cube root                                      |  2| 8| 8 |Requirement based |Pass              
|  H_09      |               square                                         |  4| 16| 16 |Requirement based | Pass   
           

## Low level test plan 

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |**TEst case**|  
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|-------------|
|   L_01      |               Division (divisor 0)                                    |  10,0|Error|Error|Scenario based |Fail
|   L_02      |               Factorial of -ve numbers                                     |  -5|-1 |-1  |Bounndary based | Pass
|   L_03       |               Factorial of 0                                  |  0|1 |1  |Bounndary based |Pass
|   L_04       |               Addition  -ve numbers                                      |  -3,-2|-5 |-5|Requirement based |Pass
|   L_05      |               Subtraction   -ve numbers                                  |  -3,-2|-1  |-1  |Requirement based | Pass
|   L_06       |               Multiplication   -ve numbers                               |  -3,-2|6 |6 |Requirement based | Pass
|   L_07       |               Division -ve numbers                                    |  -10,5|-2|Error|Requirement based | Fail
|   L_08       |               SquareRoot       -ve number                                |  -5|25 |25 |Scenario based |Pass


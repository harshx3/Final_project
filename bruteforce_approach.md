Question :

          -->  A car travels from a starting position to a destination which is target miles east of the
               starting position.
               
          -->  There are gas stations along the way. The gas stations are represented as an array stations
               where stations[i] = [positionI, fuelI] indicates that the ith gas station is positionI miles
               east of the starting position and has fuelI liters of gas.
               
          -->  The car starts with an inifinete tank of gas, which initially has startFuel liters of fuel in
               it. it uses one liter of gas per one mile that it drives. When the car reaches a gas station, it
               may stop and refuel, transferring all the gas from the station into the car.
               
          -->  return the mininmum number of refueling stops the car must make in order to reach its destination.
               if it cannot reach the destination, return -1.
               
          -->  Note that if the car reaches a gas station with 0 fuel left, the car can still refuel there. if the
               car reaches the destination with 0 fuel left, it is still considered to have arrived.
               
               
                    --------------------------Brureforce--Approach-----------------------------------
                    T=100
                    startingFuel = 10               distance fuel
                                                       10     60
                                                       20     30
                                                       30     30
                                                       60     40
                               using startingFuel we can go upto 0 to 10
                               0____________10
                                 so we can refuel at 10 and it can go to 10___________________60
                                like for all.........
                                
                                consider edge case : 
                                         -> where targer T is less than startingFuel means there is no refueling.
                                         -> where the first distance is greater than the startingFuel in that 
                                            case car will never reach the distination as its startingFuel is less
                                            than the first distance.
                                            
                                refuelstops(target, startFuel, [][]stations)
                                n=stations_length
                                dp[] = new [n+1]
                                dp[0] = startingFuel
                                
                                //loop to traverse through the distance and fuel
                                for(i 0 to <n, i++) 
                                    for(refill = i; refill>=0 && dp[refill]>=stations[i][0]; refill--)
                                        dp[refill+1] = max of (dp[refill+1],dp[refill]+stations[i][1])
                                        
                                  for(i 0 to n; i++)
                                    if(dp[i]>=target)
                                    return i
                                    
                                    return -1
                                     
                             

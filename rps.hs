--import Control.Error
import System.Exit
import Control.Monad
import Data.Char  
check :: String -> String ->String
--check y x = "THIS IS BAD INPUT HOW DARE YOU"
check y x
    |py=="PAPER" =
    case () of _
                |px=="PAPER"->"TIE"
                |px=="SCISSOR"->"LOSE"
                |px=="ROCK"->"WIN"
                where px = map toUpper x
    |py=="SCISSOR" =
    case () of _
                |px=="PAPER"->"WIN"
                |px=="SCISSOR"->"TIE"
                |px=="ROCK"->"LOSE"
                where px = map toUpper x
    |py=="ROCK" =
    case () of _
                |px=="PAPER"->"LOSE"
                |px=="SCISSOR"->"WIN"
                |px=="ROCK"->"TIE"
                where px = map toUpper x
    |otherwise = "BAD INPUT HOW DARE YOU"
    where py = map toUpper y

play :: String -> Maybe Bool
play x
    | px=="YES" = Just True
    | px=="NO" = Just False
    | otherwise = Nothing
    where px = map toUpper x

      
main = forever $ do 
    print("please respond with yes or no")
    response <-getLine
    print(play(response)) 
    
    if(play(response)==Just True)
        then do print("player one respond")
                player <- getLine 
                print("player two respond")
                comp <- getLine
                putStrLn(check player comp)
    else  exitWith ExitSuccess


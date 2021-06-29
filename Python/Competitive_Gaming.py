def numPlayers(k, scores):
    ranking = {}
    scores.sort(reverse = True)
    i = 0
    while i < (len(scores) - 1):
        if scores[i] == 0:
            i+=1
            continue
        if scores[i] not in ranking:
            ranking[scores[i]] = 1
        else:
            ranking[scores[i]] += 1
        i+=1
    ans = 0
    for key,value in ranking.items():
        if ans >= k:
            return ans
        else:
            ans += ranking[key]
    return ans

def numPlayersEasy(k, scores):
    scores.sort(reverse = True)
    ranking = []
    tiedScore = 1
    score = 1
    i = 0
    while i < (len(scores)):
        if i == (len(scores) - 1):
            if scores[i] != 0:
                for j in range(tiedScore):
                    ranking.append(score)
                score += tiedScore
                tiedScore = 1
        elif scores[i] != 0:
            if scores[i] == scores[i+1]:
                tiedScore += 1
            else:
                for j in range(tiedScore):
                    ranking.append(score)
                score += tiedScore
                tiedScore = 1
        i+=1
    if k in ranking:
        ranking.reverse()
        index = ranking.index(k)
        return len(ranking) - index
    elif not ranking:
        return 0
    else:
        return len(ranking)

def numPlayersTiger(k,scores):
    scores.sort(reverse=True)
    prev = scores[0]
    score = 1
    tied = 1

    #k -= 1

    if prev == 0:
        return 0

    for i in range(1,len(scores)):
        if scores[i] < prev:
            k -= tied
            tied = 1
        else:
            tied += 1
        if k <= 0:
            return score

        prev = scores[i]
        score += 1

    return score

print(numPlayers(3, [100, 80, 50, 50, 20]))

print(numPlayersTiger(3, [100, 100, 50, 50,50,50,20]))

print(numPlayersEasy(3, [100, 100, 50, 50,50,50,20]))
import pandas as pd
from surprise import Dataset, Reader, KNNBasic
from surprise.model_selection import train_test_split
from surprise import accuracy

data = {
    'userID': [1, 2, 3, 4, 5, 1, 2, 3, 4, 5],
    'itemID': [101, 101, 101, 102, 102, 103, 103, 104, 104, 105],
    'rating': [5, 3, 4, 3, 5, 4, 2, 4, 3, 5]
}
df = pd.DataFrame(data)

reader = Reader(rating_scale=(1, 5))
data = Dataset.load_from_df(df[['userID', 'itemID', 'rating']], reader)

trainset, testset = train_test_split(data, test_size=0.2)

algo = KNNBasic(sim_options={'user_based': True})

algo.fit(trainset)

predictions = algo.test(testset)

accuracy.rmse(predictions)

def get_top_n_recommendations(user_id, n=5):
   
    item_ids = df['itemID'].unique()
    
    
    predictions = [algo.predict(user_id, item_id) for item_id in item_ids]
    
   
    predictions.sort(key=lambda x: x.est, reverse=True)
    
    
    top_n_recommendations = predictions[:n]
    
    return [(pred.iid, pred.est) for pred in top_n_recommendations]


user_id = 1
top_n_recommendations = get_top_n_recommendations(user_id, n=5)
print(f'Top-5 recommendations for user {user_id}:')
for item_id, estimated_rating in top_n_recommendations:
    print(f'Item ID: {item_id}, Estimated Rating: {estimated_rating}')

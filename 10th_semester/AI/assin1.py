# Required Libraries
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix

iris = load_iris()
X = iris.data
y = iris.target
df = pd.DataFrame(X, columns=iris.feature_names)
df['species'] = y
df['species'] = df['species'].map({0: 'setosa', 1: 'versicolor', 2: 'virginica'})

print("Dataset Size:", df.shape)
print("\nfirst 5 row:")
print(df.head())

print("\nClass distribution:")
print(df['species'].value_counts())

# visitulation
sns.pairplot(df, hue='species', palette='Dark2')
plt.suptitle("Pairplot of Iris Dataset by Species", y=1.02)
plt.show()

#boxplot
plt.figure(figsize=(12, 6))
df_melted = df.melt(id_vars='species', var_name='features', value_name='value')
sns.boxplot(x='features', y='value', hue='species', data=df_melted, palette='Set2')
plt.title("Boxplot: Species distribution by feature")
plt.xticks(rotation=45)
plt.show()

#Train-Test Split 
X = df.drop('species', axis=1)
y = df['species']

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42, stratify=y)

print("Train dataset size:", X_train.shape)
print("Test dataset size:", X_test.shape)


# model training
model = LogisticRegression(max_iter=200, random_state=42)
model.fit(X_train, y_train)

#Prediction and Accuracy 
y_pred = model.predict(X_test)
accuracy = accuracy_score(y_test, y_pred)

print("Test Accuracy:", accuracy)

#Confusion Matrix
cm = confusion_matrix(y_test, y_pred)
sns.heatmap(cm, annot=True, fmt='d', cmap='Blues', xticklabels=iris.target_names, yticklabels=iris.target_names)
plt.xlabel("Predicted")
plt.ylabel("Actual")
plt.title("Confusion Matrix")
plt.show()

#Classification report
print("\nClassification report:\n")
print(classification_report(y_test, y_pred))
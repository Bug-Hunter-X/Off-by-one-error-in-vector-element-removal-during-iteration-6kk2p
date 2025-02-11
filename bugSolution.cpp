std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
for (auto it = vec.begin(); it != vec.end(); ++it) {
  if (*it == 5) { 
    vec.erase(it); 
    break; //added to avoid extra iteration after erase
  }
}
//Alternative solution using a reverse iterator
for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
  if (*it == 5) {
    vec.erase((it + 1).base()); //added to get the proper iterator
    break; //added to avoid extra iteration after erase
  }
}
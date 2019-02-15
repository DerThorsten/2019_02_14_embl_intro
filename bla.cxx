auto strange_function(int n)
{
    auto s = 0;
    for(auto x = 0; x<n; ++x)
    for(auto y = 0; y<n; ++y)
    for(auto z = 0; z<n; ++z)
    {
        s += x + 2 * y + z;
    }
    return s;
}

int main(){
    strange_function(2000);


}
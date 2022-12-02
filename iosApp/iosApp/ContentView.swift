import SwiftUI

struct ContentView: View {
    
    @State var tabSelection = 1
    
	var body: some View {
        TabView(selection: $tabSelection) {
            DashboardView(tabSelection: $tabSelection)
                .tabItem {
                    Image(systemName: "house.fill")
                    Text("Home")
                }
                .tag(1)
                        
            SelfCheckinListView()
//                .font(.system(size: 30, weight: .bold, design: .rounded))
                .tabItem {
                    Image(systemName: "text.book.closed")
                    Text("Check-ins")
                }
                .tag(2)
            
        }
        .accentColor(.primaryColor)
	}
}

struct ContentView_Previews: PreviewProvider {
	static var previews: some View {
		ContentView()
	}
}

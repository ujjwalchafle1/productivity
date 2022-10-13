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
            
//            NotesListView()
//            DailyJournalView()
//                .font(.system(size: 30, weight: .bold, design: .rounded))
//                .tabItem {
//                    Image(systemName: "book.fill")
//                    Text("Notes")
//                }
//                .tag(2)
            
//            SelfCheckInView()
////                .font(.system(size: 30, weight: .bold, design: .rounded))
//                .tabItem {
//                    Image(systemName: "checklist")
//                    Text("Tasks")
//                }
//                .tag(3)
            
            SelfCheckinListView()
//                .font(.system(size: 30, weight: .bold, design: .rounded))
                .tabItem {
                    Image(systemName: "text.book.closed")
                    Text("Check-ins")
                }
                .tag(4)
            
//            ProfileView()
//                .font(.system(size: 30, weight: .bold, design: .rounded))
//                .tabItem {
//                    Image(systemName: "person.crop.circle")
//                    Text("Profile")
//                }
//                .tag(5)
        }
        .accentColor(.primaryColor)
	}
}

struct ContentView_Previews: PreviewProvider {
	static var previews: some View {
		ContentView()
	}
}

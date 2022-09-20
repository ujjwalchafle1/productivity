import SwiftUI

struct ContentView: View {

	var body: some View {
        TabView {
            HomeView()
                .tabItem {
                    Image(systemName: "house.fill")
                    Text("Home")
                }
            
            NotesListView()
                .font(.system(size: 30, weight: .bold, design: .rounded))
                .tabItem {
                    Image(systemName: "book.fill")
                    Text("Notes")
                }
            
            TaskListView()
                .font(.system(size: 30, weight: .bold, design: .rounded))
                .tabItem {
                    Image(systemName: "checklist")
                    Text("Tasks")
                }
            
            RoutinesView()
                .font(.system(size: 30, weight: .bold, design: .rounded))
                .tabItem {
                    Image(systemName: "pawprint.circle.fill")
                    Text("Routines")
                }
            
            ProfileView()
                .font(.system(size: 30, weight: .bold, design: .rounded))
                .tabItem {
                    Image(systemName: "person.crop.circle")
                    Text("Profile")
                }
        }
        .accentColor(.primaryColor)
	}
}

struct ContentView_Previews: PreviewProvider {
	static var previews: some View {
		ContentView()
	}
}

import React from "react"

function App()  {
    return (
      <div className="todo-list">
        <TodoItem />
        
        <input type="checkbox" name="records"
        value="In Rainbows"/> In Rainbows <p></p>
        
        <input type="checkbox" name="records"
        value="Abbey Road"/> Abbey Road <p></p>
      </div>
    )
}

export default App
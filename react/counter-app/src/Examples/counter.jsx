import React, { Component } from 'react';
import 'bootstrap/dist/css/bootstrap.css';

class Counter extends Component { 
    state = {
        count: 0,
        tags: ['tag1', 'tag2', 'tag3'] // delete the elements in the map and save to see the effect. Render conditional information. 
    };
    
    renderTags(){
        if(this.state.tags.length === 0) return <p>There are no tags!</p>
        return <ul>{this.state.tags.map(tag => <li key={tag}>{tag}</li>)}</ul>
    }

    render() { 

        return (
        <div>
            {this.state.tags.length === 0 && "Add more Tags!"}
            {this.renderTags()}
        </div>
        );
    }


}
 
export default Counter;
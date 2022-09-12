import React, { Component } from 'react';
import 'bootstrap/dist/css/bootstrap.css';

class product extends Component{}; //HAS TO HAVE AN OBJECT TO COMPILE
//Button, className, conditional redndering of css, adding list elements, creating condidtional css
class Counter extends Component {
    state = {
        count: 0,
    };

    // constructor(){ // same as handleIncrement() = 0 => {}
    //     super();
    //     this.handleIncrement = this.handleIncrement.bind(this);
    // }

    handleIncrement = (product) => {
        this.setState({ count: this.state.count + 1 });
        console.log(product);
    }


    render() {

        return (
            <div>
                <span className={this.getBadgeClasses()}>{this.formatCount()}</span>
                <button onClick={() => this.handleIncrement(product)} className='btn btn-secondary btn-sm'>Increment</button>
            </div>
        );
    }

    getBadgeClasses() {
        let classes = "badge m-2 bg-";
        classes += (this.state.count === 0) ? "warning" : "primary"; // could use <= in if statement
        return classes;
    }

    formatCount() {
        const { count } = this.state;
        return count === 0 ? "Zero" : count;
    }
}

export default Counter;
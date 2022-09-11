import React, { Component } from 'react';
import 'bootstrap/dist/css/bootstrap.css';

//Button, className, conditional redndering of css, adding list elements, creating condidtional css
class Counter extends Component {
    state = {
        count: 0,
    };

    // constructor(){ // same as handleIncrement() = 0 => {}
    //     super();
    //     this.handleIncrement = this.handleIncrement.bind(this);
    // }

    handleIncrement = () => {
        this.setState({ count: this.state.count + 1 });
        console.log("Increment Clicked", this);
    }

    handleDecrement = () =>{
        this.setState({count: this.state.count - 1});
        console.log("Decrement Clicked", this);
    }

    render() {

        return (
            <div>
                <span className={this.getBadgeClasses()}>{this.formatCount()}</span>
                <button onClick={this.handleIncrement} className='btn btn-secondary btn-sm'>Increment</button>
                <br></br>
                <button onClick={this.handleDecrement} className='btn btn-secondary btn-sm'>Decrement</button>
                
            </div>
        );
    }

    getBadgeClasses() {
        let classes = "badge m-2 bg-";
        classes += (this.state.count === 0) ? "warning" : "primary";
        return classes;
    }

    formatCount() {
        const { count } = this.state;
        return count === 0 ? "Zero" : count;
    }
}

export default Counter;
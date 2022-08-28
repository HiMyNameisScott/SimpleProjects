const express = require('express');
const app = express()
const port = 3000

app.get ('/', (req, res) => {
    res.send('Hello World!')
})

app.get('/contact', (req, res) => {
    res.send ('my email is scotttkoss@gmail.com')
})

app.get('/about', (req, res)=>{
    res.send('Hi my name is Scott, and I am a developer.')
})

app.get('/hobbies', (req, res)=>{
    res.send('code, beer')
})

app.listen(port, ()=>{
    console.log("server started on port " + port);
})
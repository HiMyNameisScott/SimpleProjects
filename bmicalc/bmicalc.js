const express = require('express');
const bodyParser = require('body-parser');

const app = express()
app.use(bodyParser.urlencoded({extended: true}));

port = 3000;

app.get('/', (req, res)=>{
    res.sendFile(__dirname + "/index.html")
})

app.post('/', (req, res)=>{

    var height = parseFloat(req.body.height)
    var weight = parseFloat(req.body.weight)
    var bmi = weight / (height * height)


    res.send("Your bmi is " + bmi);
})


app.listen(port,()=>{
    console.log('Server Start on 3000')
})
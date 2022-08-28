const express = require('express');
const https = require('https');

const app = express();



app.get("/", (req,res)=>{
    const weatherURL = "https://api.openweathermap.org/data/2.5/weather?q=&appid=d7275ffd27524c5a97452d0d41b141bb&zip=89123&temp=metric&units=imperial"
    https.get(weatherURL, (response)=>{

        response.on('data', (data)=>{
            const weatherData = JSON.parse(data)
            const temp = weatherData.main.temp
            const feelsLike = weatherData.weather[0].description
            const icon = weatherData.weather[0].icon
            const iconUrl = "http://openweathermap.org/img/wn/" + icon +"@2x.png"
            res.write("<h1>The temperature is " + temp + " Degrees</h1>");
            res.write("<p>it currently feels like " + feelsLike + "</p>");
            res.write("<img src=" + iconUrl + ">");
            res.send();
        })
    });
})


app.listen(3000, ()=>{
    console.log('Running on pt 3000')
})
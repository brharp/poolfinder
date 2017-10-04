import { Injectable } from "@angular/core"

@Injectable()
export class ScheduleService {
    getSchedules() {
        return SCHEDULE
    }
}

const SCHEDULES = [{
    start: "September 5, 2017",
    end: "March 31, 2018",
    pools: [
        {
            name: "Victoria Road Rec Centre",
            lat: 32,
            lon: 21,
            programs: [
                {
                    name: "Lane Swim",
                    monday: ["9:30 to 11:30 am"],
                    wednesday: ["9:30 to 11:30 am"],
                },
                {
                    name: "Fitness Swim",
                    tuesday: ["9 to 10 pm", "10:30 am to 1 pm", "2 to 3:30 pm"]
                },
                { name: "Family Swim" }
            ]
        }
    ]
}]

const SCHEDULE = [
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Single lane swim', 'dayofweek': 'Monday', 'start': '9:00:00 AM', 'end': '10:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Single lane swim', 'dayofweek': 'Tuesday', 'start': '10:30:00 AM', 'end': '11:30:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Single lane swim', 'dayofweek': 'Wednesday', 'start': '9:00:00 AM', 'end': '10:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Single lane swim', 'dayofweek': 'Thursday', 'start': '10:30:00 AM', 'end': '11:30:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Fitness swim', 'dayofweek': 'Monday', 'start': '7:00:00 AM', 'end': '9:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Fitness swim', 'dayofweek': 'Monday', 'start': '12:00:00 PM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Fitness swim', 'dayofweek': 'Tuesday', 'start': '11:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Fitness swim', 'dayofweek': 'Tuesday', 'start': '8:00:00 PM', 'end': '8:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Fitness swim', 'dayofweek': 'Wednesday', 'start': '7:00:00 AM', 'end': '9:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Fitness swim', 'dayofweek': 'Wednesday', 'start': '12:00:00 PM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Fitness swim', 'dayofweek': 'Thursday', 'start': '11:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Fitness swim', 'dayofweek': 'Thursday', 'start': '8:00:00 PM', 'end': '8:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Fitness swim', 'dayofweek': 'Friday', 'start': '7:00:00 AM', 'end': '9:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Fitness swim', 'dayofweek': 'Friday', 'start': '12:00:00 PM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Fitness swim', 'dayofweek': 'Saturday', 'start': '7:00:00 AM', 'end': '9:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Fitness swim', 'dayofweek': 'Sunday', 'start': '9:00:00 AM', 'end': '10:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Public swim', 'dayofweek': 'Sunday', 'start': '6:30:00 PM', 'end': '8:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Centennial Pool', 'lat': 43.522536, 'lon': -80.247808, 'href': 'http://guelph.ca/living/recreation/rec-facilities/centennial-pool/', 'program': 'Women\'s only swim', 'dayofweek': 'Sunday', 'start': '1:30:00 PM', 'end': '3:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Lane swim', 'dayofweek': 'Monday', 'start': '9:30:00 AM', 'end': '11:30:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Lane swim', 'dayofweek': 'Wednesday', 'start': '9:30:00 AM', 'end': '11:30:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Fitness swim', 'dayofweek': 'Monday', 'start': '9:00:00 PM', 'end': '10:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Fitness swim', 'dayofweek': 'Tuesday', 'start': '9:00:00 PM', 'end': '10:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Fitness swim', 'dayofweek': 'Tuesday', 'start': '10:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Fitness swim', 'dayofweek': 'Tuesday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Fitness swim', 'dayofweek': 'Wednesday', 'start': '9:00:00 PM', 'end': '10:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Fitness swim', 'dayofweek': 'Thursday', 'start': '10:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Fitness swim', 'dayofweek': 'Thursday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Fitness swim', 'dayofweek': 'Friday', 'start': '11:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Fitness swim', 'dayofweek': 'Friday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Fitness swim', 'dayofweek': 'Saturday', 'start': '1:00:00 PM', 'end': '2:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': '50-metre fitness swim', 'dayofweek': 'Monday', 'start': '6:30:00 AM', 'end': '8:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': '50-metre fitness swim', 'dayofweek': 'Monday', 'start': '11:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': '50-metre fitness swim', 'dayofweek': 'Wednesday', 'start': '6:30:00 AM', 'end': '8:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': '50-metre fitness swim', 'dayofweek': 'Wednesday', 'start': '11:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': '50-metre fitness swim', 'dayofweek': 'Thursday', 'start': '9:00:00 PM', 'end': '10:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': '50-metre fitness swim', 'dayofweek': 'Sunday', 'start': '12:30:00 PM', 'end': '1:45:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Public swim', 'dayofweek': 'Saturday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Public swim', 'dayofweek': 'Sunday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Leisure swim', 'dayofweek': 'Monday', 'start': '11:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Leisure swim', 'dayofweek': 'Tuesday', 'start': '11:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Leisure swim', 'dayofweek': 'Tuesday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Leisure swim', 'dayofweek': 'Wednesday', 'start': '11:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Leisure swim', 'dayofweek': 'Thursday', 'start': '11:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Leisure swim', 'dayofweek': 'Thursday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Leisure swim', 'dayofweek': 'Friday', 'start': '11:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Leisure swim', 'dayofweek': 'Friday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Soothing waters swim', 'dayofweek': 'Monday', 'start': '8:00:00 PM', 'end': '9:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Soothing waters swim', 'dayofweek': 'Tuesday', 'start': '8:00:00 PM', 'end': '9:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Soothing waters swim', 'dayofweek': 'Wednesday', 'start': '8:00:00 PM', 'end': '9:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'Victoria Road Recreation Centre', 'lat': 43.563825, 'lon': -80.238879, 'href': 'http://guelph.ca/living/recreation/rec-facilities/victoria-road-recreationcentre/', 'program': 'Soothing waters swim', 'dayofweek': 'Thursday', 'start': '8:00:00 PM', 'end': '9:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Monday', 'start': '6:15:00 AM', 'end': '8:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Monday', 'start': '10:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Monday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Monday', 'start': '9:00:00 PM', 'end': '10:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Tuesday', 'start': '10:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Tuesday', 'start': '3:45:00 PM', 'end': '4:45:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Tuesday', 'start': '9:00:00 PM', 'end': '10:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Wednesday', 'start': '6:15:00 AM', 'end': '8:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Wednesday', 'start': '11:45:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Wednesday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Wednesday', 'start': '9:00:00 PM', 'end': '10:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Thursday', 'start': '10:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Thursday', 'start': '3:45:00 PM', 'end': '4:45:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Thursday', 'start': '9:00:00 PM', 'end': '10:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Friday', 'start': '6:15:00 AM', 'end': '8:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Friday', 'start': '10:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Saturday', 'start': '7:00:00 AM', 'end': '8:30:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Fitness swim', 'dayofweek': 'Sunday', 'start': '1:00:00 PM', 'end': '2:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Public swim', 'dayofweek': 'Friday', 'start': '7:30:00 PM', 'end': '9:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Public swim', 'dayofweek': 'Saturday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Public swim', 'dayofweek': 'Sunday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Leisure swim', 'dayofweek': 'Monday', 'start': '10:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Leisure swim', 'dayofweek': 'Monday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Leisure swim', 'dayofweek': 'Tuesday', 'start': '10:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Leisure swim', 'dayofweek': 'Tuesday', 'start': '3:45:00 PM', 'end': '4:45:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Leisure swim', 'dayofweek': 'Wednesday', 'start': '10:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Leisure swim', 'dayofweek': 'Wednesday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Leisure swim', 'dayofweek': 'Thursday', 'start': '10:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Leisure swim', 'dayofweek': 'Thursday', 'start': '3:45:00 PM', 'end': '4:45:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Leisure swim', 'dayofweek': 'Friday', 'start': '10:30:00 AM', 'end': '1:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Leisure swim', 'dayofweek': 'Saturday', 'start': '1:00:00 PM', 'end': '2:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Leisure swim', 'dayofweek': 'Sunday', 'start': '1:00:00 PM', 'end': '2:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Monday', 'start': '7:00:00 AM', 'end': '8:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Monday', 'start': '10:30:00 AM', 'end': '11:55:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Monday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Tuesday', 'start': '10:30:00 AM', 'end': '11:30:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Tuesday', 'start': '3:45:00 PM', 'end': '4:45:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Tuesday', 'start': '7:00:00 AM', 'end': '8:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Tuesday', 'start': '10:30:00 AM', 'end': '11:55:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Tuesday', 'start': '2:00:00 PM', 'end': '3:30:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Thursday', 'start': '10:30:00 AM', 'end': '11:30:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Thursday', 'start': '3:45:00 PM', 'end': '4:45:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Friday', 'start': '7:00:00 AM', 'end': '8:00:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Friday', 'start': '10:30:00 AM', 'end': '11:55:00 AM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Saturday', 'start': '1:00:00 PM', 'end': '2:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Family Friendly Warm Waters Swim', 'dayofweek': 'Sunday', 'start': '1:00:00 PM', 'end': '2:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Soothing waters swim', 'dayofweek': 'Monday', 'start': '8:00:00 PM', 'end': '10:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Soothing waters swim', 'dayofweek': 'Tuesday', 'start': '8:00:00 PM', 'end': '10:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Soothing waters swim', 'dayofweek': 'Wednesday', 'start': '8:00:00 PM', 'end': '10:00:00 PM' },
{ 'city': 'Guelph', 'from': new Date('9/5/2017'), 'to': new Date('3/31/2018'), 'pool': 'West End Community Centre', 'lat': 43.524788, 'lon': -80.291882, 'href': 'http://guelph.ca/living/recreation/rec-facilities/west-end-community-centre/', 'program': 'Soothing waters swim', 'dayofweek': 'Thursday', 'start': '8:00:00 PM', 'end': '10:00:00 PM' },
];

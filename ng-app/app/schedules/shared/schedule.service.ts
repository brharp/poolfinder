import { Injectable } from "@angular/core"

@Injectable()
export class ScheduleService {
    getSchedules() {
        return SCHEDULES
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


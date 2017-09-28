export interface ISchedule {
    id: number
    from: Date
    to: Date
    events: IEvent[]
}

export interface IEvent {
    id: number
    start: { hour: number, minute: number }
    end: { hour: number, minute: number }
    byday: number
    activity: IActivity
}

export interface IActivity {
    id: number
    name: string
}
import { Component, Input } from "@angular/core"
@Component({
    selector: 'pool-list',
    template: `
    <div *ngFor="let pool of pools">
        <pool-thumbnail [pool]="pool"></pool-thumbnail>
    </div>
    `
})
export class PoolListComponent {
    @Input() pools:any
}
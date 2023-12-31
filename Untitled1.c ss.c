 <doc css>

 <css>

 .progress-bar{
  position: 150px;
  width:150px;
  height:150px;
  border-radius:50%;
  color:#fff;
  outline: 2px solid #7EFFB2;
  outline-offset: -1px;
  }
  .progress-bar::after,
  .number {
     position: absolute;
     top: 50%;
     left:50%;
     transform:translate(-50%, -50%);

     }
 .progress-bar::after {
     content: '';
     width:110px;
     height:110px;
     border-radius:inherit;

     }

     .number{
     font-size:21px;
     font-weight:bold;

     }

 .circle {
     stroke-dasharray: 410;
     stroke-dashoffset: 410;
     transform: rotate(-90deg);
     animation: bar-fill 8s linear forwards;

     }
     @keyframes bar-fill {
     100%}
     stroke-dashoffset: 0;

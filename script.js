var myWindow;
/*
window.onload = function () { // можно также использовать window.addEventListener('load', (event) => {
    document.getElementById('footer_load').innerHTML = 'страница загружена';
    var el = document.getElementById("header");
    el.addEventListener("click", draw_Fio, false);

};
window.addEventListener('scroll', function () {
    document.getElementById('showScroll').innerHTML = pageYOffset + 'px';
});


function draw_Fio() {


    alert("Кумпель Артем Геннадьевич \n Группа  4331");


}
*/
/*

const getTime = function () {
    var hour, minute; var time = "";
    var selectedTime = 0;
    var selectElement = document.getElementsByName('time_select')[0];
    var tmr_n = document.getElementsByName('tmr_n')[0];
    estOffset = selectElement.value;
    if (estOffset == "") {
        alert('Не выбран город');
        tmr_n.innerText = '';
        return;
    }
    const date = new Date(new Date().getTime() + estOffset * 3600000);
    hour = date.getHours();
    minute = date.getMinutes();
    sec = date.getSeconds();

    time = ((hour < 10) ? "0" : "") + hour + " часов";
    time += ((minute < 10) ? "0" : " ") + minute + " минут";
    time += ((sec < 10) ? "0" : " ") + sec + " секунд";
    tmr_n.innerText = time;

}
function handleTimeChange() {
    const selectElement = document.getElementsByName('time_select')[0];
    const selectedTime = selectElement.value;

}
*/
/*
function addRow() {
    var tbody = document.getElementsByTagName("tbody")[1];
    var row = document.createElement("tr");
    var td1 = document.createElement("td");
    var td2 = document.createElement("td");
    var td3 = document.createElement("td");
    var td4 = document.createElement("td");
    var td5 = document.createElement("td");
    td1.appendChild(document.createTextNode(""));
    var td2 = document.createElement("td");
    td2.appendChild(document.createTextNode(""));
    td3.appendChild(document.createTextNode(""));
    td4.appendChild(document.createTextNode(""));
    td5.appendChild(document.createTextNode(""));
    row.appendChild(td1);
    row.appendChild(td2);
    row.appendChild(td3);
    row.appendChild(td4);
    row.appendChild(td5);
    tbody.appendChild(row);
}
*/
/*
function Color() {
    var nav = document.getElementsByTagName("nav")[0];
    nav.style.backgroundColor = "#cf9f0c";

}

function draw_List() {
    var h = document.getElementsByTagName("h2")[0];
    h.style.fontSize = "2.5em";

}
    */
/*
function addTableRow() {
    var tbody = document.getElementsByTagName("tbody")[1];
    var name = document.getElementById("name").value;
    var year = document.getElementById("year").value;
    var row = document.createElement("tr");
    var td1 = document.createElement("td");
    var td2 = document.createElement("td");
    var td3 = document.createElement("td");
    var td4 = document.createElement("td");
    var td5 = document.createElement("td");
    td1.appendChild(document.createTextNode(""));
    var td2 = document.createElement("td");
    td1.appendChild(document.createTextNode(name));
    td2.appendChild(document.createTextNode(year));
    td3.appendChild(document.createTextNode(""));
    td4.appendChild(document.createTextNode(""));
    td5.appendChild(document.createTextNode(""));
    row.appendChild(td1);
    row.appendChild(td2);
    row.appendChild(td3);
    row.appendChild(td4);
    row.appendChild(td5);
    tbody.appendChild(row);
}
    */
/*
function delTableRow() {
    var table = document.getElementsByTagName('table')[1];
    for (let i = table.rows.length - 1; i >= 5; i--) {
        table.deleteRow(i);
    }
}
*/
/*
var delTableRow = () => {
    var table = document.getElementsByTagName('table')[1];
    for (let i = table.rows.length - 1; i >= 5; i--) {
        table.deleteRow(i);
    }

}  

*/

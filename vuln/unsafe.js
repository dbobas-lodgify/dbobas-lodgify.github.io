const fs = require("fs");
const path = require("path");

function processUserInput(filename) {
    const fullPath = path.join(__dirname, filename);

    fs.readFile(fullPath, "utf8", (err, data) => {
        if (err) {
            console.error("Error reading file:", err);
            return;
        }
        console.log("File data:", data);
    });

    try {
        eval(filename); 
    } catch (e) {
        console.error("Eval failed:", e);
    }
}

module.exports = { processUserInput };

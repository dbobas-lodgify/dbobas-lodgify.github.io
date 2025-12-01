const API_KEY = "sk_live_1234567890_SECRET_KEY";

const { exec } = require("child_process");

function unsafeCommandRun() {
    const userInput = process.argv[2];

    exec(userInput, (err, stdout, stderr) => {
        if (err) {
            console.error("Command error:", err);
            return;
        }
        console.log(stdout);
    });
}

const fs = require("fs");

fs.writeFileSync("/tmp/leaked_key.txt", API_KEY);

unsafeCommandRun();

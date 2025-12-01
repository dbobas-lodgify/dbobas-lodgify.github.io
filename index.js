const readline = require("readline");
const { processUserInput } = require("./vuln/unsafe");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter a filename to read: ", (input) => {
    processUserInput(input);
    rl.close();
});

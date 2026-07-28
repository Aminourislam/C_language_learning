function main() {
    const marks = [];                  // Array to store marks for 4 subjects
    const grade = [];                  // Array to store grade for each subject
    const gpa = [];                    // Array to store GPA for each subject
    let totalGPA = 0.0;                // Variable to calculate total GPA
    let anyFail = false;               // Flag to check if any subject has GPA 0.0
    const subjects = ["Bangla", "English", "Math", "ICT"]; // Array of subject names

    // Function to validate marks input
    function getMarks(subject) {
        let mark;
        do {
            mark = parseInt(prompt(`Enter marks for ${subject}:`), 10);
            if (isNaN(mark) || mark < 0 || mark > 100) {
                alert("Invalid marks! Please enter a value between 0 and 100.");
            }
        } while (isNaN(mark) || mark < 0 || mark > 100);
        return mark;
    }

    // Input marks for each subject with validation
    for (let i = 0; i < 4; i++) {
        marks[i] = getMarks(subjects[i]);
    }

    // Calculate GPA and assign grade for each subject
    for (let i = 0; i < 4; i++) {
        if (marks[i] >= 80) {
            grade[i] = "A+";
            gpa[i] = 5.0;
        } else if (marks[i] >= 70) {
            grade[i] = "A";
            gpa[i] = 4.0;
        } else if (marks[i] >= 60) {
            grade[i] = "A-";
            gpa[i] = 3.5;
        } else if (marks[i] >= 50) {
            grade[i] = "B";
            gpa[i] = 3.0;
        } else if (marks[i] >= 40) {
            grade[i] = "C";
            gpa[i] = 2.0;
        } else if (marks[i] >= 33) {
            grade[i] = "D";
            gpa[i] = 1.0;
        } else {
            grade[i] = "F";
            gpa[i] = 0.0;
            anyFail = true;
        }
        totalGPA += gpa[i]; // Sum the GPA for calculating the average
    }

    // Calculate and determine the average GPA
    let averageGPA = anyFail ? 0.0 : totalGPA / 4;

    // Determine average grade based on average GPA
    let averageGrade;
    if (averageGPA >= 5.0) {
        averageGrade = "A+";
    } else if (averageGPA >= 4.0) {
        averageGrade = "A";
    } else if (averageGPA >= 3.5) {
        averageGrade = "A-";
    } else if (averageGPA >= 3.0) {
        averageGrade = "B";
    } else if (averageGPA >= 2.0) {
        averageGrade = "C";
    } else if (averageGPA >= 1.0) {
        averageGrade = "D";
    } else {
        averageGrade = "F";
    }

    // Output the grade and GPA for each subject
    console.log("\nResult for each subject:\n");
    for (let i = 0; i < 4; i++) {
        console.log(`${subjects[i]}: Grade: ${grade[i]}, GPA: ${gpa[i].toFixed(1)}`);
    }

    // Output the total GPA and average grade
    console.log("\n");
    if (anyFail) {
        console.log("Total GPA: 0.00 (due to failure in one or more subjects)");
    } else {
        console.log(`Total GPA: ${averageGPA.toFixed(2)}`);
    }
    console.log(`Total Grade: ${averageGrade}`);
}

// Run the main function
main();

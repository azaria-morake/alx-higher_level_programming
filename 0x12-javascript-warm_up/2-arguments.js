#!/usr/bin/node

const { argv } = require('node:process');

argv.forEach((val, index) => {
  console.log(`${index}: ${val}`);
});

if (argv[2] === undefined) {
  console.log('No argument');
}

# HTTP Status Archive

HTTP Status Archive is a C++ console application that catalogs uncommon HTTP status codes and explains where they are used.

Unlike a traditional HTTP reference, this project focuses on less common responses defined by RFCs and real-world web servers.

## Features

- Search by status code
- Search by keyword
- Display detailed descriptions
- Category statistics
- Simple modular architecture

## Included Status Codes

- 102 Processing
- 103 Early Hints
- 207 Multi-Status
- 226 IM Used
- 418 I'm a Teapot
- 425 Too Early
- 451 Unavailable For Legal Reasons
- 508 Loop Detected

## Example

```
Searching for: 418

418 I'm a Teapot

Category:
Client Error

Description:
Originally introduced as an April Fools' joke in RFC 2324.

Example:
Coffee machine receives a request intended for a teapot.

--------------------------

Total archived codes: 8
```

Build

```bash
cmake .
make
./http-status-archive
```

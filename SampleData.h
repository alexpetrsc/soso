#pragma once

#include "HttpStatus.h"
#include <vector>

static std::vector<HttpStatus> statuses =
{
    {
        102,
        "Processing",
        "Informational",
        "Server has accepted the request.",
        "Large WebDAV upload."
    },

    {
        103,
        "Early Hints",
        "Informational",
        "Allows preload headers before final response.",
        "Browser starts downloading CSS."
    },

    {
        207,
        "Multi-Status",
        "Success",
        "Multiple resources returned.",
        "WebDAV batch operation."
    },

    {
        226,
        "IM Used",
        "Success",
        "Delta encoding response.",
        "Incremental synchronization."
    },

    {
        418,
        "I'm a Teapot",
        "Client Error",
        "RFC 2324 joke status code.",
        "Coffee machine receives a teapot request."
    },

    {
        425,
        "Too Early",
        "Client Error",
        "Server rejects replay-prone request.",
        "TLS early data."
    },

    {
        451,
        "Unavailable For Legal Reasons",
        "Client Error",
        "Content blocked due to legal restrictions.",
        "Government censorship."
    },

    {
        508,
        "Loop Detected",
        "Server Error",
        "Infinite loop detected.",
        "Recursive WebDAV collection."
    }
};

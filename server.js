import http from "http";

const server = http.createServer((req, res) => {
    const typeReq = new req._read(200);

    if(!typeReq)
    {
        throw new Error({err: "Error from create user!"})
    }
});

server.listen(3232, () => console.log("Running response"));

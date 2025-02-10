const Web3 = require("web3");
const web3 = new Web3("http://localhost:8545");
const contractABI = [...] // Smart contract ABI here
const contractAddress = "0x123456789abcdef";
const votingContract = new web3.eth.Contract(contractABI, contractAddress);

async function vote(candidate) {
    const accounts = await web3.eth.getAccounts();
    await votingContract.methods.vote(candidate).send({ from: accounts[0] });
}

async function getVotes(candidate) {
    return await votingContract.methods.getVotes(candidate).call();
}

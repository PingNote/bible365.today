#ifndef BIBLE365TODAY_CONFIG_H
#define BIBLE365TODAY_CONFIG_H

/// <summary>
/// Authorizing your bot:
/// Each bot is given a unique authentication token when it is created. The token looks something like 123456:ABC-DEF1234ghIkl-zyx57W2v1u123ew11.
/// https://core.telegram.org/bots/api#authorizing-your-bot
/// </summary>
std::string token;

/// <summary>
/// Type: Integer or String.
/// Description: Unique identifier for the target chat or username of the target channel (in the format @channelusername).
/// https://core.telegram.org/bots/api#getme
/// </summary>
std::string chat_id;

const std::string github_io_url = U("https://pingnote.github.io/bible365.today");

#endif //BIBLE365TODAY_CONFIG_H

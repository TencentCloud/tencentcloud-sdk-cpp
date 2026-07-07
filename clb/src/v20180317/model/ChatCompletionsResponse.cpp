/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/clb/v20180317/model/ChatCompletionsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ChatCompletionsResponse::ChatCompletionsResponse() :
    m_chatResponseMessageHasBeenSet(false),
    m_errorInChatHasBeenSet(false)
{
}

CoreInternalOutcome ChatCompletionsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ChatResponseMessage") && !rsp["ChatResponseMessage"].IsNull())
    {
        if (!rsp["ChatResponseMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatResponseMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chatResponseMessage = string(rsp["ChatResponseMessage"].GetString());
        m_chatResponseMessageHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorInChat") && !rsp["ErrorInChat"].IsNull())
    {
        if (!rsp["ErrorInChat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInChat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInChat = string(rsp["ErrorInChat"].GetString());
        m_errorInChatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ChatCompletionsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_chatResponseMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatResponseMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chatResponseMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_errorInChatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInChat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorInChat.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string ChatCompletionsResponse::GetChatResponseMessage() const
{
    return m_chatResponseMessage;
}

bool ChatCompletionsResponse::ChatResponseMessageHasBeenSet() const
{
    return m_chatResponseMessageHasBeenSet;
}

string ChatCompletionsResponse::GetErrorInChat() const
{
    return m_errorInChat;
}

bool ChatCompletionsResponse::ErrorInChatHasBeenSet() const
{
    return m_errorInChatHasBeenSet;
}



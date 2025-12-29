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

#include <tencentcloud/cloudmate/v20251030/model/ChatEventContentPart.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudmate::V20251030::Model;
using namespace std;

ChatEventContentPart::ChatEventContentPart() :
    m_textHasBeenSet(false),
    m_functionCallHasBeenSet(false),
    m_functionResponseHasBeenSet(false)
{
}

CoreInternalOutcome ChatEventContentPart::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatEventContentPart.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("FunctionCall") && !value["FunctionCall"].IsNull())
    {
        if (!value["FunctionCall"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatEventContentPart.FunctionCall` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionCall = string(value["FunctionCall"].GetString());
        m_functionCallHasBeenSet = true;
    }

    if (value.HasMember("FunctionResponse") && !value["FunctionResponse"].IsNull())
    {
        if (!value["FunctionResponse"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatEventContentPart.FunctionResponse` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionResponse = string(value["FunctionResponse"].GetString());
        m_functionResponseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChatEventContentPart::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_functionCallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionCall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionCall.c_str(), allocator).Move(), allocator);
    }

    if (m_functionResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionResponse.c_str(), allocator).Move(), allocator);
    }

}


string ChatEventContentPart::GetText() const
{
    return m_text;
}

void ChatEventContentPart::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ChatEventContentPart::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string ChatEventContentPart::GetFunctionCall() const
{
    return m_functionCall;
}

void ChatEventContentPart::SetFunctionCall(const string& _functionCall)
{
    m_functionCall = _functionCall;
    m_functionCallHasBeenSet = true;
}

bool ChatEventContentPart::FunctionCallHasBeenSet() const
{
    return m_functionCallHasBeenSet;
}

string ChatEventContentPart::GetFunctionResponse() const
{
    return m_functionResponse;
}

void ChatEventContentPart::SetFunctionResponse(const string& _functionResponse)
{
    m_functionResponse = _functionResponse;
    m_functionResponseHasBeenSet = true;
}

bool ChatEventContentPart::FunctionResponseHasBeenSet() const
{
    return m_functionResponseHasBeenSet;
}


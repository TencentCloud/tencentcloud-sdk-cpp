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

#include <tencentcloud/waf/v20180125/model/GenerateLLMSecAnswerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

GenerateLLMSecAnswerRequest::GenerateLLMSecAnswerRequest() :
    m_messageHasBeenSet(false),
    m_msgIDHasBeenSet(false)
{
}

string GenerateLLMSecAnswerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_message.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_msgIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


SSEClientMessage GenerateLLMSecAnswerRequest::GetMessage() const
{
    return m_message;
}

void GenerateLLMSecAnswerRequest::SetMessage(const SSEClientMessage& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool GenerateLLMSecAnswerRequest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string GenerateLLMSecAnswerRequest::GetMsgID() const
{
    return m_msgID;
}

void GenerateLLMSecAnswerRequest::SetMsgID(const string& _msgID)
{
    m_msgID = _msgID;
    m_msgIDHasBeenSet = true;
}

bool GenerateLLMSecAnswerRequest::MsgIDHasBeenSet() const
{
    return m_msgIDHasBeenSet;
}


